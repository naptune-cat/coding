#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n){
    if(n<2)         return 0;
    else{
        for(int i=2;i<= sqrt(n); i++){
            if(n%i == 0)
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(prime(n))                cout<<"prime"<<endl;
    else                        cout<<"not prime"<<endl;
    return 0;
}