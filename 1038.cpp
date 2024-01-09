#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int n1, n2;
	float v1;
	
	cin>>n1>>n2;
	
	if(n1==1){
		
		v1 = 4;
	}
	if(n1==2){
		
		v1 = 4.5;
	}
	if(n1==3){
		
		v1 = 5;
	}
	if(n1==4){
		
		v1 = 2;
	}
	if(n1==5){
		
		v1 = 1.5;
	}
	
	
	cout<<"Total: R$ "<<fixed<<setprecision(2)<<v1*n2<<endl;
	
	
	
	return 0;
}