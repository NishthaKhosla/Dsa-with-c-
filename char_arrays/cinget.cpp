/**The c++ system takes a empty space as null value and stops while printing so we need to handle this while working with cin */
// cin.get-it can accept 1 char ata a time but it can tead everything

#include <iostream>
using namespace std;
int main()
{
    char sentence[1000];
    char temp = cin.get();//read first char
    int len = 1;
    while (temp != '\n')
    {
        len++;
        cout << temp;
        temp = cin.get();
    }
//buffer gets input when you enter
    cout << "length"<<len<<endl;
}