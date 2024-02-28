#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int i,s=0;
	float v;
	
	for(i=1; i<=6; i++){
		
		cin>>v;
		if(v>0){
			
			s=s+1;
			
		}
		
		
	}
	
	cout<<s<<" valores positivos"<<endl;
	
	return 0;
}