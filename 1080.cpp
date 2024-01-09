#include <iostream>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int va;
    int ma, po;

    cin>>ma;
    po=1;

    for(int i = 1; i<100; i++){
        cin>>va;
        if(va>ma){
            ma = va;
            po = i+1;
        }
    }
    cout<<ma<<endl;
    cout<<po<<endl;
    
    return 0;
}