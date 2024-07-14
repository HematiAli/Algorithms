#include <cstdlib> 
#include <iostream> 
#include <time.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b; 
    b = temp;
}

void creatArray(int a[], int n){
    for (int i = 0; i < n; i ++)
        a[i] = rand()%100;
}

void printArray(int a[], int n){
    for (int i = 0; i < n; i ++)
        cout << a[i] << "  ";
    cout << endl;
}



void selectionSort(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        swap(a[i], a[minIndex]);
    }
}

int main(){
    srand(time(0));
    int n = 20; int a[n];
    creatArray(a, n);
    printArray(a, n);
    selectionSort(a, n);
    printArray(a, n);
    return 0;
}