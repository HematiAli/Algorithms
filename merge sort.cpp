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

void merge(int a[], int low, int mid, int high){
    int lenleft = mid - low + 1;
    int lenright = high - mid;
    int left[lenleft];
    int right[lenright];
    for (int i = 0; i < lenleft; i++)
        left[i] = a[low+i];

    for (int j = 0; j < lenright; j++)
        right[j] = a[mid+j+1];
    
    int i = 0, j = 0, k = low;

    while (i < lenright && j < lenleft){
        if (left[i] < right[j]){
            a[k] = left[i];
            i++;
        }
        else{
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < lenleft){
        a[k] = left[i];
        i++;
        k++;
    }

    while (j < lenright){
        a[k] = right[j];
        j++;
        k++;
    }
}



void mergSort(int a[], int low, int high){
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergSort(a, low, mid);
    mergSort(a, mid+1, high);
    merge(a, low, mid, high);
}

int main(){
    srand(time(0));
    int n = 10; int a[n];
    creatArray(a, n);
    printArray(a, n);
    cout << endl;
    mergSort(a, 0, n);
    printArray(a, n);

    return 0;
}