#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int i;
	double s=0, v=0, vt=0;
	
	for(i=0; i<6; i++){
		
		cin>>v;
		if(v>0.0){
			
			s++;
			vt=vt+v;
			
		}
		
		
	}
	
	cout<<s<<" valores positivos"<<endl;
	cout<<fixed<<setprecision(1)<<vt/s<<endl;
	return 0;
}