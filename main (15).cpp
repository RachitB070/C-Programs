#include <iostream>

using namespace std;

int main()
{
    /* These is to print how big or small the square should be 
//   int coulumn;
//   int rows;
   
//   cout << "how many rows do you want to print: ";
//   cin >> rows;
//   cout << "how many columns do you want to print: ";
//   cin >> coulumn;
   
//   for(int i = 1; i <=rows; i++) {
//       for(int j = 1; j <=coulumn; j++) {
//           cout << "*";
//       }
//       cout << endl;
   }
   */
   
   // Amount of triangles being printed by user amount
 int column;
 
 cout << "How many column do yoy want to print: ";
 cin >> column;
 cout << endl;
 
 for(int i = 1; i<=column; i++) {
     for(int j = 1; j<=i; j++) {
            cout << "*";
         }
          cout << endl;
     }
   
 
       return 0;
}
