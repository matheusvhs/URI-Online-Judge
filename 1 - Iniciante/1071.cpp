#include <iostream>
using namespace std;
  
int main() {
    int a = 0, b = 0, me = 0, ma = 0, soma = 0;
    cin>>a>> b;
  
    if (a>b){
        ma = a;
        me = b;
    }
    else{
        me = a;
        ma = b;
    }
  
    for(int i = me+1; i <ma; i++ ){
        
        if(i % 2 != 0)
            soma += i;
    }
  
    cout<<soma<<endl;
  
    return 0;
}