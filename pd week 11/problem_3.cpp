#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void textchecker();
main()
{
    textchecker();
}
void textchecker()
{
    string line;
    cout<<"enter line:";
    getline(cin,line);
    fstream newfile;
    newfile.open("data.txt",ios::out);
    newfile<<line;
    newfile.close();
    newfile.open("data.txt",ios::in);
    string newline;
    int count=0;
    getline(newfile,newline);
    int i=0;
    for(;newline[i] != '\0';i++)
    {
        if(newline[i] == '[' || newline[i] == ']')
        {
            count++;
            continue;
        }
        else 
        {
            cout<<newline[i];
        }
    }
    if(count == i )
    {
        cout<<"What... why did you make this?"<<endl;
    }
    newfile.close();
}