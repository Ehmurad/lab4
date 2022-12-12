#include <iostream>
using namespace std;
int main()
{
	int m=0,k=1,f0=0,f1=1,f2=0; 
	cin >> m;
	while(m>=f2)
	{
		f2=f1+f0;
		f0=f1;
		f1=f2;
		k++;
	}
	cout << f2 << " " << k << endl;
}
