// Write a program defining a class matrix with data element as two dimensional matrix,
// row and col as integer. Define the member functions read() to read the value of matrices
// and show() to display the matrix objects. Overload the operator + to add two matrix objects 
// and also overload the operator * to multiply the two matrix objects. Input the two matrices
// object and compute sum and product of matrices using the operators and show the result.
#include <iostream>
using namespace std;

class matrix
{
private:
    int matA[2][2], matB[2][2], add[2][2], mul[2][2];

public:
    // For input
    void read()
    {
        cout << "Enter the 2X2 matrix A:" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> matA[i][j];
            }
        }
        cout << "Enter the 2X2 matrix B:" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> matB[i][j];
            }
        }
    }

    // For output
    void show()
    {
        cout << "The 2X2 matrix A is:" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << matA[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "The 2X2 matrix B is:" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << matB[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Operator overloading for addition
    matrix operator +(const matrix& x)
    {
        matrix result;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                result.add[i][j] = matA[i][j] + x.matA[i][j];
            }
        }
        return result;
    }

    // Operator overloading for multiplication
    matrix operator *(const matrix& x)
    {
        matrix result;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                result.mul[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    result.mul[i][j] += matA[i][k] * x.matA[k][j];
                }
            }
        }
        return result;
    }

    // Method to display the result of matrix addition
    void showAdd()
    {
        cout << "The result of matrix addition is:" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << add[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Method to display the result of matrix multiplication
    void showMul()
    {
        cout << "The result of matrix multiplication is:" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mul[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    matrix obj1, obj2, resultAdd, resultMul;
    cout << "Reading matrix A and B for obj1:" << endl;
    obj1.read();
    cout << "Reading matrix A and B for obj2:" << endl;
    obj2.read();
    cout << "Matrices before addition and multiplication:" << endl;
    obj1.show();
    obj2.show();
    resultAdd = obj1 + obj2;
    resultMul = obj1 * obj2;
    resultAdd.showAdd();
    resultMul.showMul();
}
