// Write a program to display sum of all digits of given Number N by user //

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number =";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}
