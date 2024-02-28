#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double cp1, cp2, qp1, qp2, vp1, vp2, vap;
	
	cin>>cp1>>qp1>>vp1>>cp2>>qp2>>vp2;
	
	
	vap = (qp1*vp1)+(qp2*vp2);
	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<vap<<endl;

	
	return 0;
}