#include <iostream>
using namespace std;
int main()
{
	int n=0; cin >> n;
	double ans=0,a=0;
	for(int i=0;i<n;i++)
	{
		cin >> a;
		ans+=a*a;
	}
	cout << ans/n << endl;
}	
