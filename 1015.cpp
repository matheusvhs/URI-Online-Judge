#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
 float x1,x2,y1,y2,d;
 float x, y;
 
 cin>>x1>>y1;
 cin>>x2>>y2;
 
 x = x2 - x1;
 y = y2 - y1;
 d = sqrt(pow(x,2)+pow(y,2));
 
 
 cout<<fixed<<setprecision(4)<<d<<endl;

 
 return 0;
}