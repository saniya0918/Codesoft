#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned int) time(NULL));
	int num=(rand()%100)+1;
	int guess=0;
	do
	{
		cout<<"Enter guess (1-100):";
		cin>>guess;
		
		if(guess>num)
		{
			cout<<"Guess the lower number!"<<endl;
		}
		else if(guess!=num)
		{
			cout<<"Guess the higher number!"<<endl;
		}
		else
		{
			cout<<"You won!"<<endl;
		}
		
	}while(guess!=num);
return 0;
}

