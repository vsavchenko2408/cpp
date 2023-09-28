#include <iostream>
#include <vector>
using namespace std;
class Martix
{

};

void main()
{
	setlocale(LC_ALL, "RU");
	int row_a;
	int col_a;
	cout << "¬ведите размеры матрицы A (строки и столбцы): " << endl;
	cin >> row_a;
	cin >> col_a;
	vector<vector<int>> matrix_a(row_a, vector<int>(col_a));
	int value_a;
	cout << "¬ведите элементы матрицы A: " << endl;
	cin >> value_a;
	matrix_a.push_back(value_a);




}