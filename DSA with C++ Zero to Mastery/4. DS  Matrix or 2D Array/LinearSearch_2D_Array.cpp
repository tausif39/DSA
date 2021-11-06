#include <bits/stdc++.h>
using namespace std;
void lineaarsearchin2Darray(int a[3][3], int m, int n, int target) // size of column is mandatory
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == target)
            {

                cout << i << " " << j;
            }
        }
    }
    
}

int main()
{

    int faran[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    lineaarsearchin2Darray(faran, 3, 3, 8);
}