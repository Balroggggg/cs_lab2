#include <iostream>
using namespace std;
int main()
{
    int row1, row2, col1, col2;
    double** a, ** b, ** c;

    row1 = 300;
    col1 = 300;
    row2 = 300;
    col2 = 300;
   
    a = new double* [row1];
    cout << "First matrix" << endl;
    for (int i = 0; i < row1; i++)
    {
        a[i] = new double[col1];
        for (int j = 0; j < col1; j++)
        {
            a[i][j] = i + j;
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    b = new double* [row2];
    cout << "Second matrix" << endl;
    for (int i = 0; i < row2; i++)
    {
        b[i] = new double[col2];
        for (int j = 0; j < col2; j++)
        {
            b[i][j] = i + j;
        }
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }


    c = new double* [row1];
    for (int i = 0; i < row1; i++)
    {
        c[i] = new double[col2];
        for (int j = 0; j < col2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < col1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    cout << "Result" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    cin.get(); cin.get();
    return 0;
}
