//pointer is a special variable that holds the address for otherr variable
//it is declared using a *

#include<iostream>
using namespace std;

int main (){
int x = 10;

//& gives the address of variable 
cout<< &x << endl;

int *xptr = &x;//gives the same address 
cout<<xptr<<endl;
//address of a pointer variable
cout<<&xptr<<endl;
//pointer to pointer
int ** xxptr = &xptr;
cout<< xxptr<<endl;
return 0;
}
