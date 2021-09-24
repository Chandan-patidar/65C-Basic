/* Q1-1 write a program to calculate sum of first N Natural
	(N is entered by user)*/
	
#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter a positive integer :";
	cin>>n;
	for (int i=1;i<n;i++){
		sum+=i;
		
	}
	cout<<"sum = "<<sum;
	return 0;
}
