#include <iostream> 
#define n 4  
#define INF 10000  
using namespace std; 

void printMatrix(int a[][n]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "      ";

        }
        cout << endl;
    }
    
}   

void floyd(int graph[][n]){
    int a[n][n],i,j,k;
    for (i = 0; i < n; i++)
    {
        for (j=0; j < n; j ++)
            a[i][j] = graph[i][j];
    }
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] > a[i][k] + a[k][j]){
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }
    printMatrix(a);
}

int main()  
{  
    int graph[n][n] = {
                        {0, 8, INF, 1},
                        {INF, 0, 1, INF},
                        {4, 12, 0, 5},
                        {INF, 2, 9, 0}

                    };
    floyd(graph);
    return 0;  
}   
  