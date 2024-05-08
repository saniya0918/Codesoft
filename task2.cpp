//task2-simple calculator
#include<iostream>
using namespace std;
int main()
{
	int ch;
	float num1,num2;
	cout<<"Perform following operations:\n1.Add\n2.Substract\n3.Multiply\n4.Divide";
	cout<<"\nEnter your choice:";
	cin>>ch;
	cout<<"\nEnter first operator:";
	cin>>num1;
	cout<<"Enter second operator:";
	cin>>num2;
	
	switch(ch)
	{
		case 1:
			{
				cout<<"\nAddition is:"<<num1+num2;
				break;
			}
		case 2:
			{
				cout<<"\nSubstraction is:"<<num1-num2;
				break;
			}
		case 3:
			{
				cout<<"\nMultiplication is:"<<num1*num2;
				break;
			}
		case 4:
			{
				cout<<"\nDivision is:"<<num1/num2;
				break;
			}
		default:
			{
				cout<<"Wrong choice!Try again";
			}
		}
return 0;
}

