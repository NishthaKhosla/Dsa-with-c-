// refrence variables create an another name for the object.Whenever we create a refrence variable it must be initialized

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x; // naming x as y
    // they are having the same value.
    // updating any one updates both the values in this case.

    y++;
    x++;
    cout << x << endl;
    cout << y << endl;

    // there address is also same.
    cout << &x << endl;
    cout << &y << endl;

    return 0;
}