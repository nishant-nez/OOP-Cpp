// Using new and delete operators, write a program to add two matrices (one dimensional) and store the value in the third matrix.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of matrix : ";
    cin >> n;

    int *tmp = new int;

    int *mat1 = new int[n];
    int *mat2 = new int[n];
    int *sum = new int[n];

    cout << "For Matrix1 : " << endl;
    for(int i=0; i < n; i++) {
        scanf("%d", mat1+i);
    }

    cout << "\nFor Matrix2 : " << endl;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", mat2+i);
    }

    // SUM
    for (int i = 0; i < n; i++)
    {
        *(sum + i) = *(mat1 + i) + *(mat2 + i);
    }

    // DELETE
    delete mat1;
    delete mat2;

    cout << endl << "Sum = ";

    for (int i = 0; i < n; i++)
    {
        cout << *(sum + i) << " ";
    }
    delete sum;

    return 0;
}