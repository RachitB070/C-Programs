/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int SpeedLimit;
   int Speed;
   int SpeedRange;
   
   cin >> SpeedLimit;
   cin >> Speed;
   
   SpeedRange =  Speed - SpeedLimit;


    if(SpeedRange >=0 && SpeedRange <=20) {
        cout << "You are speeding and your fine is $100";
    }else if(SpeedRange >=20 && SpeedRange <=30) {
        cout << "You are speeding and your fine is $270";
    } else if(SpeedRange >=31) {
        cout << "You are speeding and your fine is $500";
    } else if(SpeedRange <0){
        cout << "Congratulations, you are within the speed limit!";
    }

    return 0;
}

