// Write a program to reverse given Number N by user.//

#include<iostream>
using namespace std;
int main(){
    int n,reverse=0;
    cout<<"Enter a number = ";
    cin>>n;
    while(n!=0){
        int rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    cout<<"Reversed Numbear :- "<<reverse<<endl;
    return 0;
    
}
