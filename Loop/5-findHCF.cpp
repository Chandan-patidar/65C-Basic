// Write a program to Find GCD or HCF of Two numbers entered by user. //

#include<iostream>
using namespace std;
int main(){
    int n1,n2,teamp,hcf;
    cout<<"Enter a number n1 = ";
    cin>>n1;
    cout<<"Enter a number n2 = ";
    cin>>n2;
        if(n2>n1){
            teamp=n2;
            n2=n1;
            n1=teamp;
            
        }
               for(int i=1;i<=n2;i++){
    
                    if((n1%i==0)&&(n2%i==0)){
                        hcf=i;
                      
                     }
                     
                     
               }
               cout<<hcf;
    }
