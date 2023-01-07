#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void morsecode();
main()
{
    morsecode();   
}
void morsecode()
{
    string name;
    cout<<"enter name:";
    getline(cin,name);
    fstream newfile;
    newfile.open("morsechnager.txt",ios::out);
    newfile<<name;
    for(int i=0;name[i] != '\0';i++)
    {
        if(name[i] == 'A' || name[i] == 'a')
        cout<<".-";
        else if(name[i] == 'B' || name[i] == 'b')
        cout<<"-..";
        else if(name[i] == 'C' || name[i] == 'c')
        cout<<"-.-";
        else if(name[i] == 'D' || name[i] == 'd')
        cout<<"-..";
        else if(name[i] == 'E' || name[i] == 'e')
        cout<<".";
        else if(name[i] == 'F' || name[i] == 'f')
        cout<<"..-.";
        else if(name[i] == 'G' || name[i] == 'g')
        cout<<"--.";
        else if(name[i] == 'H' || name[i] == 'h')
        cout<<"....";
        else if(name[i] == 'I' || name[i] == 'i')
        cout<<"..";
        else if(name[i] == 'J' || name[i] == 'j')
        cout<<".---";
        else if(name[i] == 'K' || name[i] == 'k')
        cout<<"-.-";
        else if(name[i] == 'L' || name[i] == 'l')
        cout<<".-..";
        else if(name[i] == 'M' || name[i] == 'm')
        cout<<"--";
        else if(name[i] == 'N' || name[i] == 'n')
        cout<<"-.";
        else if(name[i] == 'O' || name[i] == 'o')
        cout<<"---";
        else if(name[i] == 'P' || name[i] == 'p')
        cout<<".--.";
        else if(name[i] == 'R' || name[i] == 'r')
        cout<<".-.";
        else if(name[i] == 'Q' || name[i] == 'q')
        cout<<"--.-";
        else if(name[i] == 'S' || name[i] == 's')
        cout<<"...";
        else if(name[i] == 'T' || name[i] == 't')
        cout<<"-";
        else if(name[i] == 'U' || name[i] == 'u')
        cout<<"..-";
        else if(name[i] == 'V' || name[i] == 'v')
        cout<<"...-";
        else if(name[i] == 'W' || name[i] == 'w')
        cout<<".--";
        else if(name[i] == 'X' || name[i] == 'x')
        cout<<"-..-";
        else if(name[i] == 'Y' || name[i] == 'y')
        cout<<"-.--";
        else if(name[i] == 'Z' || name[i] == 'z')
        cout<<"--..";
        else 
        cout<<".....";
    }
    newfile.close();
}
