#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
#include <vector>
#include <iostream>
#include <sstream>
#include <bitset>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_selectFileButton_clicked()
{
    inputFilePath = QFileDialog::getOpenFileName(this, "Выберіть файл", "", "Text Files (*.txt);;All Files (*)");
    if (!inputFilePath.isEmpty())
    {
        ui->filePathLabel->setText("Шлях до файлу: " + inputFilePath);
    }
}

void MainWindow::on_encodeButton_clicked()
{
    if (inputFilePath.isEmpty()) {
        QMessageBox::warning(this, "Помилка", "Спочатку виберіть файл!");
        return;
    }

    std::ifstream inputFile(inputFilePath.toStdString());
    std::ofstream outputFile("encoded_output.txt");
    std::vector<int> inputData;
    int number;
    int totalNumbers = 0;

    while (inputFile >> number) {
        inputData.push_back(number);
        totalNumbers++;
    }

    printStatistics(inputData, "Вхід");
/*
    std::vector<bool> encodedData = encode(inputData);

    for (long unsigned int i =0; i < encodedData.size(); ++i)
    {
        outputFile <<  encodedData[i];
        updateProgressBar((i+1)*100/encodedData.size());
    }

    std::vector<int> encodedDataInt(encodedData.begin(), encodedData.end());
*/
    std::string encodedData = encode(inputData);
    writeEncodedDataToFile(encodedData, "encoded_output.txt");
    std::vector<int> encodedDataInt;
    for(char bit : encodedData)
    {
        encodedDataInt.push_back(bit - '0');
    }

    printStatistics(encodedDataInt, "Вихід");
    ui->progressBar->setValue(100);
}

void MainWindow::on_cancelButton_clicked()
{
    QApplication::quit();
}

void MainWindow::printStatistics(const std::vector<int>& data, const QString& label)
{
    int count1 = 0, count0 = 0;
    for (int num : data) {
        if (num == 1) count1++;
        else count0++;
    }
    QString stats = label + ": " + QString::number(data.size()) + " шт [1=" + QString::number(count1 * 100 / data.size()) + "%; 0=" + QString::number(count0 * 100 / data.size()) + "%]\n";
    ui->statisticsTextEdit->append(stats);
}
/*
std::vector<bool> MainWindow::encode(const std::vector<int>& data)
{
    std::vector<bool> encodedData;
    for (int num : data) {
        encodedData.push_back(num % 2);
    }
    return encodedData;
}
*/
struct Node
{
    int data;
    int freq;
    Node* left;
    Node* right;

    Node(int d, int f) :data(d), freq(f), left(nullptr), right(nullptr) {}
};

struct compare
{
    bool operator()(Node* l, Node* r)
    {
        return (l->freq > r->freq);
    }
};

void MainWindow::updateProgressBar(int value)
{
    ui->progressBar->setValue(value);
}

std::string MainWindow::encode(const std::vector<int>& data)
{

    std::map<int, int> freq;
    for (int num : data) {
        freq[num]++;
    }


    std::priority_queue<Node*, std::vector<Node*>, compare> minHeap;

    for (auto pair : freq) {
        minHeap.push(new Node(pair.first, pair.second));
    }

    while (minHeap.size() != 1) {
        Node* left = minHeap.top();
        minHeap.pop();
        Node* right = minHeap.top();
        minHeap.pop();

        Node* top = new Node(-1, left->freq + right->freq);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }

    Node* root = minHeap.top();


    std::map<int, std::string> huffmanTable;
    std::function<void(Node*, std::string)> buildTable = [&](Node* node, std::string str) {
        if (!node) return;
        if (node->data != -1) {
            huffmanTable[node->data] = str;
        }
        buildTable(node->left, str + "0");
        buildTable(node->right, str + "1");
    };

    buildTable(root, "");


    std::stringstream encodedData;
    for (int num : data) {
        encodedData << huffmanTable[num];
    }

    return encodedData.str();
}

void MainWindow::writeEncodedDataToFile(const std::string& encodedData, const QString& filePath)
{
    std::ofstream outputFile(filePath.toStdString(), std::ios::binary);
    std::bitset<8> bits;
    int bitCount = 0;

    for (char bit : encodedData) {
        bits[7 - bitCount] = bit - '0';
        bitCount++;
        if (bitCount == 8) {
            outputFile.put(static_cast<unsigned char>(bits.to_ulong()));
            bitCount = 0;
            bits.reset();
        }
    }


    if (bitCount > 0) {
        outputFile.put(static_cast<unsigned char>(bits.to_ulong()));
    }
}
