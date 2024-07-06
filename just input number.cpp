#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int s = 0;
    char ch = getch();    
    while (ch != 13)
    {
        if ('0' <=ch && ch <= '9'){
            cout << ch;
            s = s * 10 + (ch-'0');
        }
        ch = getch();
    }
    cout << '\n' << s*10;
    return 0;
}