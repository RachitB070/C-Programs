
#include <iostream>

using namespace std;

int main()
{
    int win = 0;
    int lose = 0;
    
    char status; 
    
    for(int i = 1; i<=6; i++) {
        cin >> status;
        if(status == 'W') {
            win++;
        } if( status == 'L') {
            lose++;
        }
        
        } 
    
    if(win == 1 || win ==2) {
        cout << "3";
    }else if(win == 3 ||win == 4) {
        cout << "2";
    } else if(win == 5 || win == 6) {
        cout << "1";
    } else if(win == 0) {
        cout << "-1";
    }
    return 0;
    }

   
    


