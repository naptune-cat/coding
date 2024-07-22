#include<iostream>
#include<math.h>
using namespace std;
int len(int a){
    int n=0;
     while(a!=0){
        a = a/10;
        n++;
    }
    return n;
}
bool armstrong(int a){
    int sum=0,digit,remaining=a;
    int n = len(a);
    while(remaining!=0){
        digit = remaining%10;
        sum= sum + pow(digit,n);
        remaining = remaining/10;
        
    }
    if(sum==a)              return true;
    else                    return false;
}
int main(){
    int a;
    cin>>a;
    if(armstrong(a))            cout<<"Armstrong number"<<endl;
    else                        cout<<"Not an armstrong num"<<endl;
    return 0;
}