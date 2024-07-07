#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n];
	int number = 1;
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < n; j ++)
		{
			if (i % 2 == 0)
			{
				a[i][j] = number;
				number++;
			}
			else {
				a[i][n-j-1] = number;
				number++;
			}

		}
	}
	for (int i = 0; i < n; i++)
		{for (int j = 0; j < n; j ++)
			cout << a[i][j] << "\t";
		cout << '\n';
		}
	
	return 0;
}
/*
for example:
	n = 4
			1	 2	 3	 4
			8	 7	 6	 5
			9	 10	 11	 12
			16	 15	 14	 13
*/