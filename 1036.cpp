#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double delt, r1, r2;
	double a, b, c, ac;
	
	cin>>a>>b>>c;
	ac=a*c;
	delt = (pow(b,2)-(4*ac));
	
	r1 = (-b +sqrt(delt))/(2*a);
	r2 = (-b -sqrt(delt))/(2*a);
	
	
	   if((0>=a)||(delt<0)){
	   cout<<"Impossivel calcular"<<endl;;
	   }
	   
	   
     else
	{
		
	
	cout<<"R1 = "<<fixed<<setprecision(5)<<r1<<endl;
	cout<<"R2 = "<<fixed<<setprecision(5)<<r2<<endl;
	}
    return 0;       
}