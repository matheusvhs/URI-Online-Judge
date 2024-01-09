#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main ()
{
	int Z, N;
	cin >> Z;
	for (int i = 0; i < Z; i++){
		
		cin >> N;
	
		if (N == 0)
			cout << "NULL" << endl;

		else if(N % 2 == 0)
			cout << "EVEN ";

		else if (N % 2 != 0)
			cout << "ODD ";
		
		if (N > 0)
			cout << "POSITIVE" << endl;

		else if (N < 0)
			cout << "NEGATIVE" << endl;

	}

	return 0;
}