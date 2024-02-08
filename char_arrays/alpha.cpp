// Find the no of alphabets,digits and spaces in a given sentence
#include <iostream>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();

    int alpha = 0;
    int digit = 0;
    int spaces = 0;

    while (ch != '\n')
    {
        if (ch >= '0' and ch <= '9')
        {
            digit++;
        }
        else if ((ch >= 'a' and ch <= 'z')or(ch >= 'A' and ch <= 'Z'))
            {
                alpha++;
            }
        else if (ch ==' ' or ch == '\t')
        {
            spaces++;
        }

        ch = cin.get();
    }
    cout<<"Total alphabet"<<alpha<<endl;
    cout<<"Total digit"<<digit<<endl;
    cout<<"Total spaces"<<spaces<<endl;

    return 0;
}