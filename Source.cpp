#include <iostream>

using namespace std;
const int N = 6;     //Define the size of the Matrix

template<typename T>
void Strassen(int n, T A[][N], T B[][N], T C[][N]);

template<typename T>
void input(int n, T p[][N]);

template<typename T>
void output(int n, T C[][N]);

class matrixiterative
{
	int a[10][10];
	int m, n;
public:
	void input();    // function definitions 
	void output();
	void unittest();
	void multiply(matrixiterative, matrixiterative);

};

class Strassen{


};

void matrixiterative::input()
{
	cout << "Enter the number of row : ";     // tell that how many rows & column are selected for each input matrix
	cin >> m;
	cout << "Enter the number of column : ";
	cin >> n;
	cout << "Enter the elements of Matrix" << "\n";     // matrix population
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cin >> a[i][j];
		}
	}
}
void matrixiterative::output()    // function definition of the matrix that is displayed as an output 
{
	for (int i = 0; i<m; i++)
	{
		cout << "\n";
		for (int j = 0; j<n; j++)
		{
			cout << a[i][j] << "\t";
		}
	}
}
void matrixiterative::multiply(matrixiterative m1, matrixiterative m2)
{
	if (m1.n != m2.m)
	{
		cout << "matrixiterative multiplication is not possible";
	}
	else
	{
		for (int i = 0; i<m1.m; i++)
		{
			for (int j = 0; j<m2.n; j++)
			{
				a[i][j] = 0;
				for (int k = 0; k<m1.n; k++)
				{
					a[i][j] = a[i][j] + (m1.a[i][k] * m2.a[k][j]);
					m = m1.m;
					n = m2.n;
				}
			}
		}
	}
}
//void matrixiterative::unittest(){
//	matrixiterative m4,m5,m6,m7;
//	m4.input();
//	m5.input();
//	m6.multiply(m4, m5);
//	m7.output();

	//for (int i = 0; i<m; i++)
	//{
	//	cout << "\n";
	//	for (int j = 0; j<n; j++)
	//	{
	//		cout << a[i][j] << "\t";
	//		if (a[1][1] == 0 && a[1][2] == 0 && a[2][1] == 0 && a[2][2] ==0 )
	//			cout << "Correct Multiplication";
	//		else
	//			cout << "InCorrect Multiplication";

	//	}
	//}



	


//}
void matrixiterative::unittest(){
	matrixiterative m1, m2, m3;

	m1.input();
	m2.input();
	m3.multiply(m1, m2);
	m3.output();
	for (int i = 0; i<m; i++)
		{
			cout << "\n";
			for (int j = 0; j<n; j++)
			{
				cout << a[i][j] << "\t";
				if (a[1][1] == 0 && a[1][2] == 0 && a[2][1] == 0 && a[2][2] ==0 )
					cout << "Correct Multiplication";
				else
					cout << "InCorrect Multiplication";

			}
		}
	}

//The Input Function of Matrix for strassun
template<typename T>
void input(int n, T p[][N]) {
	for (int i = 0; i<n; i++) {
		cout << "Please Input Line " << i + 1 << endl;
		for (int j = 0; j<n; j++) {
			cin >> p[i][j];
		}
	}
}
void main()
{
	
	/*matrixiterative m1, m2, m3;

	m1.input();
	m2.input();
	m3.multiply(m1, m2);
	m3.output();*/
	matrixiterative m6;
	m6.unittest();


	
	














