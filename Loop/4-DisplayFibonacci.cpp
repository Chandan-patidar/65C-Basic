/* Write a program to Display Fibonacci upto Certain number number
    (n is entered by user)*/
    
#include<iostream>
using namespace std;
int main(){
    int n,t1=0,t2=1,nexterm;
    cout<<"Enter a number = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<t1<<",";
            continue;
        }
        if(i==2){
        cout<<t2<<",";
        continue;
        }
    
    nexterm=t1+t2;
    t1=t2;
    t2=nexterm;
    cout<<nexterm<<",";
    }
    return 0;
}
