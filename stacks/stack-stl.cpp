/**atacks can be implemented using arrays,vectors,linkedlist
 * Arrays - are fixed size u need to check if the space is available
 * vector-if space ends,vectors doubles itself
 * linked-list-creates nodes and is dynamic
 */
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void insertAtBottom(stack<int> &s, int data)
{
    if (s.empty())
    {
        s.push(data);
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s, data);
    s.push(temp);
};

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int t = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, t);
}

int main()
{
    stack<int> books;
    books.push(1);
    books.push(2);
    books.push(4);
    books.push(7);

    reverse(books);
    insertAtBottom(books, 5);

    while (!books.empty())
    {
        cout << books.top() << endl;
        books.pop();
    }
    return 0;
}