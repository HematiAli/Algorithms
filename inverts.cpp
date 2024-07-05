#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string name;
    getline(cin, name);
    bool same = true;
    int i = 0, j = name.length() - 1;
    
    while (i <= j)
    {
        if (name[i] == name[j]) {i++; j--; continue;}
        else {same = false; break;}
    }
    if (same) cout << "YES";
    else cout << "NO";
    return 0;
}