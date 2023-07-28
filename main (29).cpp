
#include <iostream>

using namespace std;

int glo = 70; // this is the global variable since it is not contained inside of a function.
int x = 80;

void variable() {
    cout << glo << endl; // prints the global variable first because there is no local variable stored inside of the "variable" function
}

int main() // program responds to the local variable first, then the global variable.
{
    int x = 25;
    int glo = 50; // this is the local variable since it is stored inside of a function.
    glo = 6;
    
    variable(); 
    cout<<glo << endl; // prints the local variable "6"
    
    cout<< "the global variable in this code is " <<:: glo << " and " <<:: x << endl;
    //using ':: before the variable', refers to the actual global variable.
    
    cout <<:: x + ::glo << endl; //test
    
    return 0;
}


