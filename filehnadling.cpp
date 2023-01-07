#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
const int size = 100;
string names[size];
string passwords[size];
int count = 0;
int menu();
void signup();
void file_out();
void signin(string name, string password);
bool isValidname(string name, string paswd);
bool isValidpaswd(int i ,string paswd);
main()
{
    int option = menu();
    while(option != 3)
    {
        if(option == 1)
        {
            string name, password;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Password: "; 
            cin >> password;

            signin(name, password);
        }
         if (option == 2)
        {
            signup();
            file_out();
        }
        option = menu();
    }
}



int menu()
{
    int option;
    // system("cls");
    cout << "1. Sign In" << endl;
    cout << "2. Sign Up" << endl;
    cout << "3. Exit" << endl;

    cout << "Enter Your Option: ";
    cin >> option;

    return option;
}

void signup()
{
    cout << "Enter Name: ";
    cin >> names[count];
    

    cout << "Enter Password: ";
    cin >> passwords[count];
    
    count++;
}

void file_out()
{
    fstream file;
    file.open("Userdatafile.txt", ios::out);

    for(int i=0; i<count ; i++)
    {
        file << names[i] << ", " << passwords[i] << endl; 
    }

    file.close();

}

bool isValidname(string name, string paswd)
{
	for(int i=0 ; i<count ; i++)
	{
		if(name==names[i])
		{
			int a=i;
			if(isValidpaswd(a,paswd))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
bool isValidpaswd(int i ,string paswd)
{
	if(paswd==passwords[i])
	{
		return true;
	}
	else
	{
		return false;
	}
}
void signin(string name, string password)
{
    
    fstream file;
    file.open("Userdatafile.txt", ios::in);
    if(isValidname(name,password))
    {
        system("Color 02");
    	cout<<"-----ACCESS GRANT------"<<endl;
        
	}
	else
	{
        system("Color 04");
		cout<<"-------ASSCESS DENIED-----"<<endl;
        
	}
	file.close();

}


