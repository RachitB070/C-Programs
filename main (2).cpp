
#include <iostream>

using namespace std;

int main()
{
   int Num;
   int ScaleNum;
   
   cin >> Num;
   ScaleNum = 3 * Num;
   
   for(int l = 1; l<=Num; l++) {
       for(int i = 1; i<=Num; i++) {
        cout << "*";
}
 for(int i = 1; i<=Num; i++) {
        cout << "X";
}
 for(int i = 1; i<=Num; i++) {
        cout << "*";
}
cout << endl;
   }
   
   for(int m = 1;m<=Num; m++) {
        for(int i = 1; i<=Num; i++) {
        cout << " ";
}
 for(int i = 1; i<=Num; i++) {
        cout << "X";
}
 for(int i = 1; i<=Num; i++) {
        cout << "X";
 }
 cout << endl;
   }
   
for(int N = 1; N<=Num; N++) {
     for(int i = 1; i<=Num; i++) {
        cout << "*";
}
 for(int i = 1; i<=Num; i++) {
        cout << " ";
}
 for(int i = 1; i<=Num; i++) {
        cout << "*";
}    
 cout << endl;
}

    return 0;

}


