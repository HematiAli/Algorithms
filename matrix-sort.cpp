#include <cstdlib> 
#include <iostream> 
#include <time.h>
using namespace std;


int main()
{
    srand(time(0));
    int n = 4;
    int a[n][n];
    for (int i = 0; i < n; i++)   
        for (int j = 0; j < n; j++)
            a[i][j] = rand()%100;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
    cout << " ++++++++++++++++++++++++++++++++++++++++++++++++\n";

    for (int k = 0; k < n; k++){
        for (int i = n-1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j][k] > a[j+1][k]){
                    int temp = a[j][k];
                    a[j][k] = a[j+1][k];
                    a[j+1][k] = temp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "  ";
        cout << endl;
    }
    
    
  
    return 0;
}