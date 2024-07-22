#include<iostream>
using namespace std;
bool leapYear(int y){
    if(y%400==0 || (y%4 == 0 && y%100!=0))            return 1;
    else                                        return 0;
}
int main(){
    int y;
    cin>>y;
    if( leapYear(y))              cout<<"year "<<y<<" is a leap year"<<endl;
    else                          cout<<"year "<<y<<" is not a leap year"<<endl;
    return 0;
}