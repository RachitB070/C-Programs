#include <iostream>

using namespace std;

int main()
{
//   for(int i; i <= 10; i++) {
//       if(i == 5) { // continue function executes the next line of code as soon as the condition of the continue staatement is met.
//           continue; //in this case, the continue function didnt print out 5 since it was ignored
//       }
//       cout << i << endl;
//   }

for(int i; i <=10; i++) {
    if(i == 5) { //as soon as the break condition is met it ignores the coe in the loop and runs the next code.
        break;
    }
    cout << i << endl;
}

cout << "hello world";

   
   
    return 0;
}

