
#include <iostream>

using namespace std;

int main()
{
    int age;
    
    cout << "what is your age: ";
    cin >> age;
    
    switch(age) { // you can switch between conditions based on the output
        case 18:
        cout << "you are 18 years old" << endl;
        break; // break function only works on swich and loop conditions. 
               //It ignores the code below it if condition is met
        
    case 22:
        cout << "you are 22 years old" << endl;
        break;
     
        case 50:
        cout << "you are 50 years old" << endl;
        break;
                
    
    default:
    cout << "there are no special cases" << endl;
    break;
    }

    cout << "Done with switch case";


    return 0;
}
