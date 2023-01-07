#include<iostream>
#include<fstream>
using namespace std;
void file_input();
string passRecord(string record , int field);
void display(int i);
string name[100];
string age[100];
int idx = 0;
int main()
{
    file_input();
    string n,a;
    cout<<"Enter Name...";
    getline(cin,n);
    cout<<"Enetr age....";
    getline(cin,a);
    for(int i=0 ; i<idx ; i++)
    {
    	if(n==name[i] && a==age[i])
    	{
    		display(i);
		}
	}
	return 0;
}
void file_input()
{
	string word;
	fstream file;
	file.open("names.txt",ios::in);
	while(!(file.eof()))
	{
		getline(file,word);
		name[idx] = passRecord(word,1);
		age[idx] = stof(passRecord(word,2));
		idx++;
	}
}
string passRecord(string record , int field)
{
	int count = 0;
	string sen;
	for(int i=0 ; i<record.length() ; i++)
	{
		if(record[i]==',')
		{
			count++;
		}
		else if(count == field)
		{
			sen = sen + record[i];
		}
		
	}
	return sen;
}
void display(int i)
{
	cout<<"Happy Birth Day";
}
