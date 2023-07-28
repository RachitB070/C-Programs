/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    

    
   int array[6][3] = {
       
                    {0,1, 20},
                    {2,3, 40},
                    {4,5, 60},
                    {6,7, 80},
                    {8,9, 100},
                    {10,11, 120}
                    
                        
                    };
   
   for(int i = 0; i<7; i++) {
       for(int j = 0; j < 3; j++) {
           
           cout<<array[i][j];
       }
       
       cout<<endl;
   }

    return 0;
}

