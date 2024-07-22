#include<iostream>
using namespace std;
/*
Find the Sum of Numbers in a given range in C++
Given two integer inputs num1 and num2, the objective is to write a code to Find the 
Sum of Numbers in a Given Range in C. To do so we’ll keep iterating and adding the numbers from num1 until num2 
to the Sum variable.

Example
Input : 2 5
Output : 2 + 3 + 4 + 5  = 14
*/
int sumInRange(int a,int n){
    //recursion base case
    if(n<a)             return 0;
    //recursion call
    return (n + sumInRange(a,n-1));
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<sumInRange(a,n)<<endl;
    return 0;
}