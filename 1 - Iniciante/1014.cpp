#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
 float km, comb;
 cin>>km>>fixed>>setprecision(3)>>comb;
 
 cout<<fixed<<setprecision(3)<<km/comb<<" km/l"<<endl;
 

 
 return 0;
}