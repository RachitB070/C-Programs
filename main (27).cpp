#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 10;
    
    // Arthemetic operators 
    cout<< "The value of a + b is: " << a + b << endl;
    cout<< "The value of a - b is: " << a - b << endl;
    cout<< "The value of a * b is: " << a * b << endl;
    cout<< "The value of a / b is: " << a / b << endl;
    cout<< "The value of a % b is: " << a % b << endl;
    cout<< "The value of a++ is: " << a++ << endl;        //prints the value of 'a' and stores its value as "a + 1".
    cout<< "The value of ++a is: " << ++a << endl;           // adds the value of 'a' by 1 then prints it.
    cout<< "The value of a-- is: " << a-- << endl;          //prints the value of 'a' and stores its value as "a - 1".
    cout<< "The value of --a is: " << --a << endl << endl; // subtracts the value of 'a' by 1 then prints it.
    
    
    // Assignment operaters --> used to assign vakues to variables
   int x = 50, y = 30;
   float z = 3.14;
   char letter = 'a';
   string word = "hello world";
   
   
    // Comparision operators 
  cout << "The value of a == b is: " << (a==b)<< endl; //the output shows '0s' and '1s' because for some cases, 
  cout << "The value of a != b is: " << (a!=b)<< endl; // the statement is true and for others, its false.
  cout << "The value of a < b is: " << (a<b)  << endl; //True = 1       False = 0
  cout << "The value of a > b is: " << (a>b)  << endl; 
  cout << "The value of a >= b is: " << (a>=b)<< endl; 
  cout << "The value of a <= b is: " << (a<=b)<< endl << endl; 
  
 
    // Logical Operators. && = and, || = or, ! = opposite or not equal to.
 cout << "The value of ((a==b) && (a < b)) logical operater is: " << ((a==b) && (a < b))<< endl; 
 cout << "The value of ((a==b) && (a < b)) logical operater is: " << ((a!=b) && (a > b))<< endl;
 cout << "The value of ((a==b) || (a < b)) logical operater is: " << ((a==b) || (a > b))<< endl;
 cout << "The value of (!(a==b)) logical operater is: " << (!(a==b))<< endl;

    return 0;
}
