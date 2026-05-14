#include <iostream>
#include <locale.h>
using namespace std;
int main (int argc, char**argv)
{
	setlocale(LC_ALL, "");
	int x;
	int y;
	int z;
    cout << " digite o 1º valor :";
    cin >> x;
    cout << " digite o 2º valor :";
    cin >> y;
    cout << " digite o 3º valor :";
    cin >> z;
 
    if (x==y)
	{
		if (x==z)
       	{
      	   cout << "Iguais";
        }		   	
        else
	    {
	    	if (x>z)
			{
				cout << "1º/2º";
			}
			else
			{
				cout << "3º";
			}
		}
	}
    else
	{
		if (x==z)
		{
			if (x>y)
			{
				cout << "1º/3º";
			}
			else
			{
				cout << "2º";
			}
		}
		else
		{
			if (y==z)
			{
				if (y>x)
				{
					cout << "2º/3º";
				}
				else
				{
					cout << "1º";
				}
			}
			else
			{
				if (x>y)
				{
					if (x>z)
					{
						cout << "1º";
					}
					else
					{
						cout << "3º";
					}
				}
				else
				{
					if (y>z)
					{
						cout << "2º";
					}
					else
					{
						cout << "3º";
					}
				}
			}
		}
	}
}
