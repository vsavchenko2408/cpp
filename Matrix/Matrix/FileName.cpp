#include <iostream>
#include <vector>
using namespace std;
class Matrix
{
public:

	void set_size_ma()
	{
		cout << "Введите размеры матрицы A (столбцы и строки): " << endl;
		cin >> col_a;
		cin >> row_a;
		matrix_a.resize(col_a, vector<int>(row_a));
	}
	void set_elem_a()
	{
		cout << "Введите элементы матрицы A: " << endl;
		for (int i = 0; i < col_a; i++)
		{
			for (int j = 0; j < row_a; j++)
			{
				cin >> matrix_a[i][j];
			}
		}
	}
	void set_size_mb()
	{
		cout << "Введите размеры матрицы B (столбцы и строки): " << endl;
		cin >> row_b;
		cin >> col_b;
		matrix_b.resize(col_b, vector<int>(row_b));
	}
	void set_elem_b()
	{
		cout << "Введите элементы матрицы B: " << endl;
		for (int i = 0; i < col_b; i++)
		{
			for (int j = 0; j < row_b; j++)
			{
				cin >> matrix_b[i][j];
			}
		}
	}

	void get_ma()
	{
		cout << "Матрица А: " << endl;
		for (int i = 0; i < col_a; i++)
		{
			for (int j = 0; j < row_a; j++)
			{
				cout << matrix_a[i][j];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	void get_mb()
	{
		cout << "Матрица B: " << endl;
		for (int i = 0; i < col_b; i++)
		{
			for (int j = 0; j < row_b; j++)
			{
				cout << matrix_b[i][j];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
private:
	int row_a=0;
	int col_a=0;
	vector<vector<int>> matrix_a;

	int row_b=0;
	int col_b=0;
	vector<vector<int>> matrix_b;
};

int main()
{
	setlocale(LC_ALL, "RU");

	Matrix M;
	M.set_size_ma();
	M.set_elem_a();
	M.set_size_mb();
	M.set_elem_b();

	M.get_ma();
	M.get_mb();
	return 0;
}