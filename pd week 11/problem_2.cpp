#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
fstream file;
string alph;
void file_out(string alpha);
void file_in();
void again_file_out();
bool check(char i,char j);
int main()
{
	cout<<"Enter alphabets...";
	cin>>alph;
	file_out(alph);
	file_in();
	again_file_out();
	return 0;
}
void file_out(string alph)
{
	
	file.open("alphabets.txt",ios ::out);
	file << alph;
	file.close();
}
void file_in()
{
    string s;
	fstream f;
	f.open("alphabets.txt",ios::in);
	f >> s;
	f.close();
	cout<<s;
}
void again_file_out()
{
	
	file.open("alphabets.txt",ios::out);
	for(char i='a' ; i<='z' ; i++)
	{
		for(int j=0 ; alph[j]!='\0' ; j++)
		{
			if(check(i,alph[j]))
			{
				
				file << alph[j];	
				break;
			}
			
			else
			{
				file << i;
				break;
			}	
		}	
		
	}
	file.close();
}