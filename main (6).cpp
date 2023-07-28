
#include <iostream>

using namespace std;

int main()
{
    int Num1, Num2, Num3, Num4;
   
    cin >> Num1 >> Num2 >> Num3>> Num4;
    
    if(Num1 > Num2 && Num2 > Num3 && Num3 > Num4) {
        cout << "Fish Diving";
    } else if(Num1 < Num2 && Num2 < Num3 && Num3 < Num4) {
        cout << "Fish Rising";
    } else if(Num1 == Num2 && Num2 == Num3 && Num3 == Num4) {
        cout << "Fish At Constant Depth";
    } else{
        cout << "No Fish";
        }
    
    

    return 0;
}
