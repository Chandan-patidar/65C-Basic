/*Write a program Where the user is asked to enter two integers(divisor and dividend)
    and the quotient and the remainder of their division is computed.
    (Both divisor and dividend should be integers.)*/  

#include<iostream>
#include<iomanip>
  using namespace std;

int
main ()
{
int divisor, dividend ,quotient, rem;

  
cout<<"---------------------------------PROGRAM-TO-DISPLAY-QUOTIENT-AND-REMAINDER-----------------------------------------"<<endl;
cout << "Enter a divisor = ";
cin >> divisor;

  
cout << "Enter a dividend = ";
cin >> dividend;

cout<<"----------**************_______ANSWER_________*************-----------"<<endl;

quotient = dividend / divisor;  
cout << "The quotient of "<<divisor<<" and "<<dividend<<" are: "<<quotient<<endl;


rem=dividend-(divisor*quotient);
cout << "The remainder of "<<divisor<<" and "<<dividend<<" are: "<<rem<<endl;

cout<<"-------***************________END__________***************---------------"<<endl;


return 0;

 
}
