#include <iostream> 
using namespace std; 

int main()  
{  
    int a[12][12] = {0};
    
    
    for (int i = 0; i < 12; i ++)
        a[i][0] = a[i][1] = a[i][10] = a[i][11] = a[0][i] = a[1][i] = a[10][i] = a[11][i] = -1;


    int h[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-1,-2},{1,-2},{-2,-1},{2,-1}};

    int x,y, xnew, ynew, m = 1, min, min_index;
    cout << "ENTER START FOR ROW : ";
    cin >> x;
    cout << "ENTER START FOR COL :  ";
    cin >> y;
    x += 2; y+= 2;
    a[x][y] = m;
    m++;    
    while (m <= 64){
        min = 9;
        for (int k = 0; k < 8; k++)
        {
            xnew = x + h[k][0];
            ynew = y + h[k][1];
            if (a[xnew][ynew] == 0)
            {
                a[xnew][ynew] = m;
                // count empty place
                int counter = 0;
                for (int l = 0; l < 8; l++)
                    if (a[xnew+h[l][0]][ynew+h[l][1]] == 0)
                        counter++;

                if (counter < min){
                    min = counter;
                    min_index = k;
                }
                a[xnew][ynew] = 0;
            }
        }
        x = x + h[min_index][0];
        y = y + h[min_index][1];

        a[x][y] = m;
        m++;
    }


    for (int i = 2; i < 10; i++)
    {
        for (int j = 2; j < 10; j++)
        {
            cout << a[i][j] << " \t ";
        }
        cout << endl;
    }
    
    return 0;  
}  
  