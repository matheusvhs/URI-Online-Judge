#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double area, n, raio;
	
	cin>>raio;
	
	cout<< fixed <<setprecision(4);
	n = 3.14159;
	area = n * pow(raio,2);
	
	cout<<"A="<<area<< endl;

	
	return 0;
}
