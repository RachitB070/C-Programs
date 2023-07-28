/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int Score;
    
    int Small, Medium, Large;
    
    cin >> Small;
    cin >> Medium;
    cin >> Large;
    
    Score = Small*1 + Medium*2 + Large*3;
    
    if(Score >= 10) {
        cout << "happy";
    } else {
        cout << "sad";
    }

    return 0;
}
