#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int mini = 0, minj = 0, maxi = n-1, maxj = n-1;
    int count = 1;
    while (count <= n * n)
    {
        for (int j = minj; j <= maxj; j ++) {a[mini][j] = count; count++;}
        mini++;
        for (int i = mini; i <= maxi; i ++) {a[i][maxj] = count; count++;}
        maxj--;
        for (int j = maxj; j >= minj; j--) {a[maxi][j] = count; count++;}
        maxi--;
        for (int i = maxi; i >= mini; i--) {a[i][minj] = count; count++;}
        minj++;
    }
    for (int i = 0; i < n; i ++)
        {for (int j = 0; j < n; j ++)
            cout << a[i][j] << "\t";
            cout << '\n';
            }
	return 0;
}
/*
    example => n = 4

                        1       2       3       4
                        12      13      14      5
                        11      16      15      6
                        10      9       8       7                       
                        
*/