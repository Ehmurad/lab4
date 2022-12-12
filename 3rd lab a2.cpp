#include <iostream>
using namespace std;
int main()
{
	int n=0,a=0,pol=0,otr=0,nol=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a;
		if(a>0)
		{
			pol++;
		}
		else if(a<0)
		{
			otr++;
		}	
		else
		{
			nol++;
		}	
	}
	cout << pol << " " << otr << " " << nol << endl;
}
