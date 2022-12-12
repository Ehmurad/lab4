#include <iostream>
using namespace std;
int main()
{
	int i=1,s=0,temp=0;
	long long n=0;cin>>n;
	while(n>0)
	{
		temp=n%10;
		if(i%2==0)
		{
			temp=temp*2;
			while(temp>0)
			{
				s+=temp%10;
				temp=temp/10;
			}
		}
		else
		{
			s+=temp;
		}
		n=n/10;
		i++;
	}
	if(s%10==0)
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;
}
