#include <iostream>
using namespace std;
int main ()
{
	int x1,y1,z1,a,b,c,z,x,e,x2,y2,z2,n;
	cout << "how many rockets do u need?";
	cin >> n;
	x1=1000*n; // sulfur for powder;
	x2=1500*n; // coal for powder;
	a=500*n; // powder for exp;
	e=10*n; // exp for rockets;
	b=100*n; // sulfur for exp;
	c=100*n; // metal fragments for exp;
	z=30*n; // fuel for exp;
	y1=300*n; // sulfur for powder;
	y2=450*n; // coal for powder;
	z2=150*n; // powder for rockets;
	x=2*n; // pipes for rockets;
	cout << "u need " << e << "exp " << z2 << " powder (for rockets)" << x << " pipes" << endl;
	cout << "total" << endl;
	cout << "sulfur " << x1+b+y1 << " coal " << x2+y2 << " metal fragments " << c << " fuel " << z;
	return 0;
}