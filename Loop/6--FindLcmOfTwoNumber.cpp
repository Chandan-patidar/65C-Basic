// Write a program to find LCM of two numbers entered  by user.//

#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter a number n1 = "<<endl;
    cin>>n1;
    cout<<"Enter a nnumber n2 = "<<endl;
    cin>>n2;
    for(int i=n1; i<=n1*n2; ++i){
        if(( i % n1 == 0 ) && ( i % n2 == 0)){
            cout<<i<<endl;
            break;
        }
    }
}
