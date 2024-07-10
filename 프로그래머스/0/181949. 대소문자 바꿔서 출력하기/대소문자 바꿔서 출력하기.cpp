#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i])) 
        {
            cout << (char)toupper(str[i]);
        } 
        else if (isupper(str[i])) 
        {
            cout << (char)tolower(str[i]);
        } 
        else 
        {
            cout << str[i];
        }
    }
    
    return 0;
}