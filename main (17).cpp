
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    double randomNum[10] = {};
    double Sum;

    for(int i = 1; i<= 10; i++)
    {
       
            
        cout << "Enter number " << i << " in the program: ";
        cin >> randomNum[i]; //this will include the total amoutnt of numbers in the array, which will be outputd to the program  
         //Enter code for average
         
            
    } 
    Sum = randomNum[0] + randomNum[1] + randomNum[2] + randomNum[3] + randomNum[4] + randomNum[5] + randomNum[6] + randomNum[7] + randomNum[8] + randomNum[9] + randomNum[10];
    double Average = Sum / 10;
    
   
             cout << "The sum of all these numbers are: " << Sum << endl; 
             cout << "The average of these numbers are: " << Average << endl;

    return 0;
    
}


