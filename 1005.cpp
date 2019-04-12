#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float a, b;
	double ap, ab;
	
	cin>> a>> fixed>> setprecision(1);
	cin>> b>> fixed>> setprecision(1);
	
	ap = (a * 3.5);
	ab = (b * 7.5);
	cout<< fixed<< setprecision(5);
	cout<< "MEDIA = "<<(ap + ab)/11<<endl;
	
	
	
	return 0;
}
