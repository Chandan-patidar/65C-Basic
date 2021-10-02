/* Write a program to calculate power to calculate power of a Number without using inbuilt pow() function by taking Two inputs from
    user as Base and exponent respectively */
    
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int Base,exponent,result;
    cout<<"Enter a Base = ";
    cin>>Base;
    cout<<"Enter a exponent = ";
    cin>>exponent;
    result= pow(Base,exponent);
    
    cout<<result;
    
}
