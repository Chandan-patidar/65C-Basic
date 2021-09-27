/* Write a program to genrate multiplication table of namber 	
	(entered by the user ) using a for loop */
	
#include<iostream>
using namespace std;
int main(){
	int n;
	
	cin>>n;
	
	for(int i=1;i<=10;i++){
		cout<<n<<"X"<<i<<"="<<n*i<<endl;
	}
	
}
