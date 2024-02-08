#include <iostream>
#include <cstring>
using namespace std;
// inorder to print char array we donot need to use for loop we can directly use cin and cout.

int main()
{
  // char array should not be initialized like this because it will return a garbage value until it finds 0;
  char a[] = {'a', 'b', 'c', 'd'};
   cout << a << endl;

  // the correct way of intializing a char array
  char b[] = {'a', 'b', 'c', 'd', '\0'};
   cout << b << endl;
   
  // it can also be done in this way
  char c[] = "abcd";
  cout << c << endl;

  char d[1000];
  // there are some inbuilt features as well

  cout << strlen(b) << endl; // gives the length of no of visible characters

  cout << sizeof(b) << endl; // gives the space taken by array including 0

  strcpy(d,c);//copies the content of first array to second one.

  cout<<d<<endl;
  //comparing two strings

  cout<<strcmp(c,d)<<endl;//if they are equal it returns 0 oyherwise it returns some other value

//concatinating two strings
char web [] ="www.";
char domain [] = "codingminutes.com";
cout<<strcat(web,domain)<<endl;
return 0;
}