
#include <iostream>

using namespace std;

int main()
{
    int a = 45;
    float b = 400.999;
    
    
    cout << "the value of a is " << (float)a << endl;
    cout << "the value of b is " << int(b) << endl; 
    
    int c = int(b);
    cout << "the value of c is: " << c << endl;
    
    cout << "the value of a + b is : " << a + b << endl;
    cout << "the value of a + int (b) is : " << a + int(b) << endl;
    
    
    return 0;

}
