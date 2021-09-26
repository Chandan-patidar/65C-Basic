/* Write a program to Find Factorial of a given number N
	(N is entered by user) */

#include<iostream>
using namespace std;
int main(){
	int n,fact;
	cin>>n;
	fact=1;
	while(n>1){
		fact*=n;
		n--;
	}

         cout<<fact;
 }
