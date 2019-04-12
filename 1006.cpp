#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c;
	double ap, ab, ac;
	
	cin>> a>> fixed>> setprecision(1);
	cin>> b>> fixed>> setprecision(1);
	cin>> c>> fixed>> setprecision(1);
	
	ap = (a * 2);
	ab = (b * 3);
	ac = (c * 5);
	cout<< fixed<< setprecision(1);
	cout<< "MEDIA = "<<(ap + ab + ac)/10<<endl;
	
	
	
	return 0;
}
