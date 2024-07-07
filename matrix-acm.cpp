#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n = 4;
    char a[n][n];
    int mini = 0, minj = 0, maxi = n-1, maxj = n-1;
    int count = 1;
    string ch; cin >> ch;
    int index = 0;
    while (count <= n * n)
    {
        
        for (int j = minj; j <= maxj; j ++) {if (index > ch.length() -1 ) index = 0; a[mini][j] = ch[index]; count++; index++;}
        mini++;
        for (int i = mini; i <= maxi; i ++) {if (index > ch.length()-1) index = 0; a[i][maxj] = ch[index]; count++;index++;}
        maxj--;
        for (int j = maxj; j >= minj; j--) {if (index > ch.length()-1) index = 0; a[maxi][j] = ch[index]; count++;index++;}
        maxi--;
        for (int i = maxi; i >= mini; i--) {if (index > ch.length()-1) index = 0; a[i][minj] = ch[index]; count++;index++;}
        minj++;
        
    }
    for (int i = 0; i < n; i ++)
        {for (int j = 0; j < n; j ++)
            cout << a[i][j];
            }
    // for (int i = n-1; i >= 0; i --)
    //     {for (int j = n-1; j >= 0; j --)
    //         cout << a[i][j] << '\t';
    //     cout << '\n';
    //         }
	return 0;
}
/*
crypto name                     
                        
*/