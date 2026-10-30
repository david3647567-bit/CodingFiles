// Write a program that filter out array odd values
#include<iostream>
using namespace std;
int main()
{
	
   int x[30];
   
	for(int  i = 0; i <= 10; i ++)
	{
		
		cin >> x[i];
	}
	
	cout << "List of Odd values in array are :";
	
	for(int i = 0 ;i <= 10; i++)
	{
		if(x[i]% 2 == 1)
		{
			cout << x[i]<<",";
		}
		
	}
	
}
