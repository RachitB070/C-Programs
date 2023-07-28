#include <iostream>

using namespace std;

int main()
{
    int Term;
  
    cin >> Term;
    int Num = 1;
    
    for(int i = 1; i<=Term; i++) {
        for(int j = 1; j<=i; j++) {
            cout << "";
            for(int num = 1; num <= j; j++) {
            cout << num;
        }
        }
        cout << endl;
    }

    return 0;
}

