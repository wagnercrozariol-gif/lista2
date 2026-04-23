#include <iostream>
#include <locale.h>
using namespace std;
int main (int argc, char**argv)
{
    setlocale(LC_ALL, "");
	int x;
	int y;
	
 cout << "digite o 1° valor :";
 cin >> x;
 cout << "digite o 2° valor :";
 cin >> y;
 
 if (x>y)
 {
cout <<  "primeiro maior";
}
else 
{
cout << "segundo maior";
}

return 0;
}
