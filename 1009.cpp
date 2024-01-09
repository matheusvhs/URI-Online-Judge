#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	string nomev;
	double sal, vendas, vp, sv;
	
	cin>> nomev;
	cin>> sal;
	cin>> vendas;
	
	vp = (vendas*15)/100;
	
	sv = sal + vp;
	
	cout<< "TOTAL = R$ "<<fixed<<setprecision(2)<<sv<<endl;
	
	
	
	
	
	
	
	
		
	return 0;
}
