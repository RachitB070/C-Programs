
#include <iostream>

using namespace std;

int main()
{
    //how many charactersin a string
    
    string phrase = "hello world";
    cout<< phrase.length() << endl;
    
    //printing specific characters in a string
    
    cout << phrase[0] << endl;
    //(you can also change that assigned character )
    phrase[0] = 'r';
     phrase[3] = 'f';
    cout<< phrase<< endl;    
    
    //how to locate different characters in a string
    cout<< phrase.find("world", 0)<< endl;
    
    //how to take certain partsof a string(first number represents how many characters later it will take the string,
                                           //second number represents howmany characters it WILL TAKE in the string)
    cout<< phrase.substr(5, 10)<<endl;
    //or
    string phrasesub =phrase.substr(1, 9);
    cout<<phrasesub<< endl;
    
    return 0;
}

