#include <iostream>
#include <conio.h>
using namespace std;

const int n = 8;
const int v = 8;

int a[n][n];
int count = 0;
int state = 0;
////////////////////////////////////////////////////////////
void draw(){
   
   cout << "------------------------------------------------------" << endl;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j ++)
      {
         if (a[i][j] == 1)
            cout << a[i][j] << " ";
         else
            cout << "0" << " ";
      }
      cout << endl;
   }
}
////////////////////////////////////////////////////////////
void apply(int i, int j){
   int p, q;
   a[i][j] = 1;
   count++;
   
   for (int col = 0; col < n; col++)
      if (col != j)
         a[i][col]++;
   
   for (int row = 0; row < n; row++)
      if (row != i)
         a[row][j]++;
   
   p = i-1;
   q = j-1;
   while (p>=0 && q >=0){
      a[p][q]++;
      p--;
      q--;
   }

   p = i+1;
   q = j+1;
   while (p<n && q<n){
      a[p][q]++;
      p++;
      q++;
   }
   p = i-1;
   q = j+1;
   while (p>=0 && q<n){
      a[p][q]++;
      p--;
      q++;
   }
   p = i+1;
   q = j-1;
   while (p<n && q>=0){
      a[p][q]++;
      p++;
      q--;
   }

}
////////////////////////////////////////////////////////////

void remove(int i, int j){
   int p, q;
   a[i][j] = 0;
   count--;
   
   for (int col = 0; col < n; col++)
      if (col != j)
         a[i][col]--;
   
   for (int row = 0; row < n; row++)
      if (row != i)
         a[row][j]--;
   
   p = i-1;
   q = j-1;
   while (p>=0 && q >=0){
      a[p][q]--;
      p--;
      q--;
   }

   p = i+1;
   q = j+1;
   while (p<n && q<n){
      a[p][q]--;
      p++;
      q++;
   }
   p = i-1;
   q = j+1;
   while (p>=0 && q<n){
      a[p][q]--;
      p--;
      q++;
   }
   p = i+1;
   q = j-1;
   while (p<n && q>=0){
      a[p][q]--;
      p++;
      q--;
   }
}
////////////////////////////////////////////////////////////
void check(){
   if (count == v){
      draw();
      state++;
      cout << "\t\t\tState : " << state << endl;
      // cout << "press q to exit ...." << endl;
      // char ch = getch();
      // if (ch == 'q')
      //    exit(0);
   }
      
}
////////////////////////////////////////////////////////////
void move(int p, int q){
   apply(p, q);
   check();
   for (int i=p; i < n; i++)
   {  
      for (int j = 0; j < n; j++)
      {
         if (a[i][j] == 0)
         { move(i, j);} 
      }
   }
   remove(p,q);
}
////////////////////////////////////////////////////////////
int main(){
   for (int i = 0; i < n; i ++)
      for (int j = 0; j < n; j++)
         move(i,j);
   return 0;
}
