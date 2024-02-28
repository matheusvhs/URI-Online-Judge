#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double N;
	cin >> N;

	
	for (int i = 1; i<=N ; i++){
		
	if (i%2==0)
	 	 cout << i << "^2 = " << fixed << setprecision(0) << pow(i,2) << endl;
	}
	return 0;
}