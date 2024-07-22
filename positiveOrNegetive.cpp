#include<iostream>
using namespace std;
bool negetiveOrPositive(int a){
    if(a>=0)            return 1;
    else                return 0;
}
int main(){
    int a;
    cin>>a;
    if( negetiveOrPositive(a))              cout<<"positive"<<endl;
    else                                    cout<<"Negetive"<<endl;
    return 0;
}