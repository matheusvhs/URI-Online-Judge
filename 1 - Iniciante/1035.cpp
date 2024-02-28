#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int a,b,c,d,cd,ab;
	cin>>a>>b>>c>>d;
	cd=c+d;
	ab=a+b;
	if((b>c)&&(d>a)&&(cd>ab)&&(c>0)&&(d>0)&&(a%2)==0){
		cout<<"Valores aceitos"<<endl;
		}
	else{
		
		cout<<"Valores nao aceitos"<<endl;
	}
	
    return 0;       
}