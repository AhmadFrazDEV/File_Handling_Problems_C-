#include<iostream>
using namespace std;
bool isDoger(int num);
int count(int num);
int power(int irritation,int a);
int main()
{
	
	int num;
	cout<<"Enter a number...";
	cin>>num;
	if(isDoger(num))
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
}
bool isDoger(int num)
{
	int irritation = count(num);
	int sum=0;
	for(int x=irritation ; x>0 ; x--)
	{
		int a=num%10;
		int b=power(irritation,a);
		num=num/10;
		sum = sum+b;
	}
	if(sum==num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int count(int num)
{
	int count;
	while(num!=0)
	{
		int i=num%10;
		num = num / 10;
		count++;	
	}	
	return count;
}	
int power(int irritation,int a)
{
	int power=1;
	for(int j=0; j<irritation ; j++)
	{
		int power=power*a;
	}
	return power;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	