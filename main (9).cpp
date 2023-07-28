
#include <iostream>

using namespace std;

int main()
{
    int Num1,Num2,Num3,Num4,Num5,Num6,Num7,Num8,Num9,Num10,Num11,Num12,Num13,Num14,Num15,Num16;
    
    cin >> Num1>>Num2>>Num3>>Num4>>Num5>>Num6>>Num7>>Num8>>Num9>>Num10>>Num11>>Num12>>Num13>>Num14>>Num15>>Num16;
    
    int firstr = Num1 + Num2 + Num3+Num4;
    int secondr = Num5+Num6+Num7+Num8;
    int thirdr = Num9+Num10 +Num11+ Num12;
    int fourthr = Num13 + Num14 + Num15 + Num16;
    int firstc = Num1 + Num5 + Num9 + Num13;
    int secondc = Num2 + Num6 + Num10 + Num14;
    int thirdc = Num3 + Num7 + Num11 + Num15;
    int fourthc = Num4 + Num8 + Num12 + Num16;
    
    if(firstr == secondr && secondr == thirdr && thirdr ==fourthr && fourthr == firstc && firstc == secondc && secondc== thirdc && thirdc== fourthc) {
        cout << "magic";
    } else {
        cout << "not magic";
    }
    
 
    return 0;
    }

   
    

