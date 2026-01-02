#include <iostream>
using namespace std;

int main()
{
    int l, b, h;
    cin >> l >> b >> h;

    // 3D array using pointer
    int ***ptr = new int **[l];

    // create 2d array and store it's address in ptr
    for (int i = 0; i < l; i++)
    {
        ptr[i] = new int *[b];
        for (int j = 0; j < b; j++)
        {
            ptr[i][j] = new int[h];
        }
    }
    cout << endl;

    // assign karna
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < h; k++)
            {
                cin >> ptr[i][j][k];
            }
        }
    }
    // print karna
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < h; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // memory free karna
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;
}