#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
string s;
string name[5];
string age[5];
void file_in();
string passrecord(string record , int field);
int main()
{
 	file_in();
 	
 	return 0;
}
void file_in()
{
	int idx=0;
	string word;
	fstream file;
	file.open("NAMES.txt" , ios::in);
	getline(file,word);
	name[idx]=strcpy(passrecord(word,1));
	age[idx] = stoi(passrecord(word,2));
	if(age[idx]%2==0)
	{
		getBirthdaycake();
	}
	else
	{
		getBirthdaycake();
	}
	file.close();
	cout<<age[idx];
}
string passrecord(string record , int field)
{
	int count=1;
	string item;
	for(int i = 0 ; i<record.length() ; i++)
	{
		if(record[i]==',')
		{
			count++;
		}
		else if(count == field)
		{
			item = item + record[i];
		}
	}
	return item;
	
}