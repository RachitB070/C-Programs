/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void houseItems(string name, int AmtOfItems) {
    cout<< "you have a " << name << " and you have " << AmtOfItems << " amount of items" << endl;
}

int main()
{
    
  houseItems("fan", 15);
  houseItems("clock", 20);
  houseItems("door", 45);    
  

    return 0;
}

