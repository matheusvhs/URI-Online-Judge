#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int i, v;
	float sp=0, sn=0, spa=0, sim=0;
	
	for(i=1; i<=5; i++){
		
		cin>>v;
		if(v>0.0){
			
			sp=sp+1;
			
		}
		if(v<0.0){
			
			sn=sn+1;
			
		}
		if(v%2==0){
			
			spa=spa+1;
			
		}
		else{
			
			sim=sim+1;
			
		}
	}
	cout<<spa<<" valor(es) par(es)"<<endl;
	cout<<sim<<" valor(es) impar(es)"<<endl;
	cout<<sp<<" valor(es) positivo(s)"<<endl;
	cout<<sn<<" valor(es) negativo(s)"<<endl;
	
	
	
	return 0;
}