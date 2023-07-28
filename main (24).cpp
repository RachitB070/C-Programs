
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int FirstNum;
    int SecondNum;
    int ThirdNum;
    
    int squarefirstNum;
    int squareSecondNum;
    int squareThirdNum;
    
    cout << "Enter your first number: " ;
    cin >> FirstNum;
    
    cout << "Enter your second number: " ;
    cin >> SecondNum;
    
    //ThirdNum = SecondNum + 1;
    
    
    squarefirstNum = pow(FirstNum, 2);
    squareSecondNum = pow(SecondNum, 2);
    squareThirdNum = pow(ThirdNum, 2);
    

    ThirdNum = sqrt(squarefirstNum + squareSecondNum);

    
     if(ThirdNum == (sqrt(squarefirstNum + squareSecondNum))) {
         cout << "The third number for the pythagras triplet is: " << ThirdNum;
     } else{
         cout << "These numbers are not a pythagras triplet";
     }
    
    
    return 0;
}


