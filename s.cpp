#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//bool check(char i,char j)
//{
//	if(i==j)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
int main()
{
//	string ch;
//	cout<<"Enter alphabets...";
//	cin>>ch;
//	for(char i='a' ; i<='z' ; i++)
//	{
//		for(int j=0 ; ch[j]!='\0' ; j++)
//		{
//			if(check(i,j))
//			{
//				
//				cout<<ch[j];	
//				break;
//			}
//			
//			else
//			{
//				cout<<i;
//				break;
//			}	
//		}	
//		
//	}












	string s;
	cout<<"Enter the string......";
	cin>>s;
	for(int i=0 ; s[i]!='\0' ; i++)
	{
		for(int j='a' ; j<='z' ; j++)
		{
			if(s[i]==j)
			{
				break;
			}
			else
			{
				cout<<j;
			}
		}
		
	}
	
	
















}