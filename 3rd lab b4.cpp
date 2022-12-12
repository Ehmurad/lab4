#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int i=1,f=1;
	double x,sqx=1,ans=1,temp=1;
	cin>>x;
	while(temp>0.0001)
	{
		sqx*=x;
		f*=i;
		temp=sqx/f;
		ans+=temp;
		i++;
	}
	cout << abs(ans-exp(x)) << setprecision(6);
}
