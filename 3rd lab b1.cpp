#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	for(int i=1000; i<10000; i++)
	{
		int a=0,b=0,c=0,d=0;
		a=i/1000;
		b=i/100%10;
		c=i%100/10;
		d=i%10;
		if(pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4) == i)
		{
			cout << i << endl;
		}
	}
}
