#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n=0,max=-1,min=10,temp=0;
	cin>>n;
	while(n>0)
	{
		temp=n%10;
		if(max<temp)
		{
			max=temp;
		}
		if(min>temp)
		{
			min=temp; 
		}
		n=n/10;
	}
	cout << max << " " << min << endl;
}
