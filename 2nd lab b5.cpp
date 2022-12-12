#include <iostream>
using namespace std;
int main()
{
	int d=0,m=0,y=0;
	cin >> d >> m >> y;
	if(0<d and (0<m and m<13) and 0<y )
	{
		if(m==1 or m==3 or m==7 or m==10 or m==12)
		{
			if(d<32)
				cout << "Correct" << endl;
			else
				cout << "Error" << endl;
		}
		else if(3<m and m<7 or m==9 or m==11)
		{
			if(d<31)
				cout << "Correct" << endl;
			else 
				cout << "Error" << endl;
		}
		else
			if(y%400 == 0 or (y%4 == 0 and y%100 != 0))
			{
				if(d<30)
					cout << "Correct" << endl;
				else
					cout << "Error" << endl;
			}
			else
			{
				if(d<29)
					cout << "Correct" << endl;
				else
					cout << "Error" << endl;
			}
	}
	else
		cout << "Error" << endl;
}
