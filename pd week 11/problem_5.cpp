#include <iostream>
#include <fstream>

using namespace std;

int getParse(string abc, int num)
{
   int commaCount = 1;
   string item;
   for(int y=0 ; y<abc.length() ; y++)
   {
      if(abc[y] == ',')
      {
          commaCount = commaCount + 1;
      }
      else if(commaCount == num)
      {
          item = item + abc[y];
      }
   }
   int item_int = stoi(item);
   return item_int;
}



void pizza_points(int minOrders, int minPrice)
{
    string wholeLine;
    fstream textFile;
    textFile.open("input.txt", ios::in);

    while(!textFile.eof())
    {
        getline(textFile, wholeLine);

        int count = 0;
        string orders;
        int start, end;
        string orderValues;
        string name;
        int counter = 0;

        for(int x = 0; wholeLine[x]!=' '; x++)
        {
            name = name + wholeLine[x];
            counter++;
        }

        for(int j=counter+1; wholeLine[j] != ' '; j++)
            orders = orders + wholeLine[j];

        for(int i=0; i<wholeLine.length(); i++)
        {
            if(wholeLine[i] == '[')
                start = i;
            if(wholeLine[i] == ']')
                end = i;
        }

        for(int y = start+1; y<end; y++)
        {
            orderValues = orderValues + wholeLine[y];
        }

        const int size = stoi(orders);
        int arrayOrderValues[size];

        for(int z=0; z<size; z++)
        {
            arrayOrderValues[z] = getParse(orderValues, z+1);
        }



        for(int k=0; k<size; k++)
        {
            if(arrayOrderValues[k]  >= minPrice)
            {
                count++;
            }
        }
        
        if(count >= minOrders)
        {
            cout << name << endl;
        }
    }

    textFile.close();
}

main()
{
    int minOrders, minPrice;

    cout << "Enter Min Orders >> ";
    cin >> minOrders;

    cout << "Enter Min Price >> ";
    cin >> minPrice;

    pizza_points(minOrders, minPrice);
}