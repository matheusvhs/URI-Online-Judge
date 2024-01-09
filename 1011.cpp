#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double pi, f, r;
	
	cin>>r;
	
	pi=3.14159;
	f = (4/3.0)*pi*(pow(r,3));
	cout<<"VOLUME = "<<fixed<<setprecision(3)<<f<<endl;

	
	return 0;
}