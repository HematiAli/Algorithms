#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i ++)
            for (int j = 0; j < n; j ++)
                a[i][j] = 0;


    // a[0][n/2] = 1;
    int row = 0, col = n/2;
    a[row][col] = 1;
    for (int i = 2; i <= n*n; i ++)
    {
        row = row - 1; col = col + 1;
        if (row == -1 && col == n) {row = row + 2; col = col - 1;}
        else if (row == -1) row = n - 1;
        else if (col == n) col = 0;
        // if (row == -1) row = n -1; if (col == 3) col = 0;
        if (a[row][col] == 0) a[row][col] = i;
        else if (a[row][col] != 0) {
            col = col - 1; row = row + 2;
            a[row][col] = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";

        cout << '\n';
    }
    return 0;
}