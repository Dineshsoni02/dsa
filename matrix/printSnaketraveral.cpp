// C++ program to print matrix in snake order
#include <iostream>
#define M 5
#define N 4
using namespace std;

void print(int mat[M][N])
{

    for (int i = 0; i < M; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < N; j++)
            {
                cout << mat[i][j] << " ";
            }
        }
        else
        {
            for (int j = N - 1; j >= 0; j--)
            {
                cout << mat[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// Driver code
int main()
{
    int mat[M][N] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50},
        {1, 2, 3, 4}};

    print(mat);
    return 0;
}
