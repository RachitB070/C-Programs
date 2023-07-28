
#include <iostream>

using namespace std;

int main()
{
   string word;
   int tracker = 0;
   
   cin >> word;
   
   for(int i = 0; i<=word.length(); i++) {
       
       if(word[i] == 'I' || word[i] == 'O'|| word[i] == 'S'|| word[i] == 'H' ||word[i] == 'Z'|| word[i] == 'X'|| word[i] == 'N') {
           tracker +=1;
       }
   }
   
   if(tracker == word.length()) {
       cout << "YES";
   } else {
       cout << "NO";
   }  
   
    return 0;
}
