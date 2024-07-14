#include <cstdlib> 
#include <iostream> 
#include <time.h>
using namespace std;


void creatArray(int a[], int n){
    srand(time(0));
    for (int i = 0; i < n; i ++)
        a[i] = rand()%100;
}

void printArray(int a[], int n){
    for (int i = 0; i < n; i ++)
        cout << a[i] << "  ";
    cout << endl;
}



void insertionSort(int a[], int n){
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i -1;
        while (j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main(){
    srand(time(0));
    int n = 100; int a[n];
    creatArray(a, n);
    printArray(a, n);
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}