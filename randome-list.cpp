#include <cstdlib>  
#include <iostream> 
#include <time.h> 
using namespace std;

int main(){
    srand(time(0));
    int n; cin >> n;
    int *a = new int [n];
    int i = 0, count = 0;
     
    while (i < n){
        int temp = 1+rand()%n;
        bool flag = false;
        for (int j = 0; j < i; j ++)
        {
            if (a[j] == temp) {flag = true; break;}
        }
        if (!flag) {a[i] = temp; i++;}
        count++;
    }
    cout << "[ ";
    for (int i = 0; i < n; i ++)
        cout << a[i] << "  ";
    
    cout << "]" << endl << "the number of creating randome number is : " << count;
    return 0;
}