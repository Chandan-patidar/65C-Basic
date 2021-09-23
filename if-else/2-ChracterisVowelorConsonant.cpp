// Q2 Write a program to check whether a chracter is Vowel or consonant.

#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char c;
    
    cout<<c;
    cin>>c;
    
    if(isalpha(c)){
    
        if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')){
            cout<<c<<"is vowel";
        }
    
        else{
            cout<<c<< "is consonant";
        
        }
    }
    else{
        cout<<"enter alpha value";
    }
    
    return 0;
}
