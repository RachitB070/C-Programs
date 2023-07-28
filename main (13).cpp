/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int cupcakes;
    int cupcakesinBigBox;
    int cupCakesInSmallBox;
    int cupcakesLeft;
    
    cin >> cupcakesinBigBox;
    cin >> cupCakesInSmallBox;
    
    cupcakesLeft = (cupCakesInSmallBox * 3)+ (cupcakesinBigBox * 8) - 28;
    cout << cupcakesLeft;
    
    

    return 0;
}

