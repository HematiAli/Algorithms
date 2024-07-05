#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int k = 1, bit = 0;
    while (n > 0)
    {
        int b = n % 2;
        bit = bit + (k * b);
        k *= 10;
        n /= 2;
    }
    cout << bit << '\n';
    return 0;
}