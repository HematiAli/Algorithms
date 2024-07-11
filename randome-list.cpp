#include <cstdlib>  
#include <iostream> 
#include <time.h> 
using namespace std;

int main(){
    srand(time(0));
    int n; cin >> n;
    int a[n];
    int i = 0;
    while (i < n){
        int temp = 1+rand()%n;
        bool flag = false;

        for (int j = 0; j < i; j++)
        {
            if (temp == a[j]) flag = true;
        }
        if (!flag) {a[i++] = temp;}
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl << "K : ";

    int k; cin >> k;
    int count = 0, sum = 0;
    i = k;
    while (count < n){
        if (count % 2 == 0) sum += a[i];
        else sum-= a[i];
        count++;
        i = (i+1) % n;
    }
    cout  << sum;
    return 0;
}