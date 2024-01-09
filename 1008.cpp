#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int num, ht;
	double sph;
	
	cin>>num>>ht>>sph;
	
	cout<<"NUMBER = "<<num<<endl;
	cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<ht*sph<<endl;
	
	return 0;
}