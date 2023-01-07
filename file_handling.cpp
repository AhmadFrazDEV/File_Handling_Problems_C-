#include<iostream>
#include<fstream>
using namespace std;
string name[100];
string password[100];
int count=0;
void input();
int menu();
void file_out();
void sign_up();
bool check(string name , string paswd);
bool check_psd(int a, string paswd);
int main()
{
    int option =  menu();
    while(option != 3)
    {
        if(option==1)
        {
            input();
            file_out();
        }
        if(option==2)
        {
            sign_up();
        }
        option =  menu();
    }

}
int menu()
{
    int opt;
    cout<<"1>-Enter data"<<endl;
    cout<<"2>-Sign_up"<<endl;
    cout<<"3>-Exist"<<endl;
    cout<<"\n";
    cout<<"Your option....";
    cin>>opt;
    return opt;
}
void input()
{
    cout<<"ENter your Name...";
    cin>>name[count];
    cout<<"Enter your password...";
    cin>>password[count];
    count++;
}
void file_out()
{
    fstream file;
    file.open("dataFile_1.txt", ios::out);
    for(int i=0  ; i<count ; i++)
    {
        file << name[i] << "," << password[i];
        file << "\n";
    }
    file.close();
}
void sign_up()
{
    string username,pswd;
    cout<<"Enter the User name...";
    cin>>username;
    cout<<"Enter your password...";
    cin>>pswd;
    fstream file;
    file.open("dataFile_1.txt", ios::in);
    if(check(username , pswd))
    {
        cout<<"ACCESS GRANTED";
    }
    else
    {
        cout<<"ACCESS DENIED";
    }
    file.close();
}
bool check(string name , string paswd)
{
    for(int i=0 ; i<count; i++)
    {
        if(name[i]==name)
        {
            int a=i;
            if (check_psd(a,paswd))
            {
                return true;
            }
             
        }
    }
}
bool check_psd(int a, string paswd)
{
    if(paswd==password[a])
    {
        return true;
    }
    else
    {
        return false;
    }
}