//defrence operator gives bucket stored at some address used with *
#include<iostream>
using namespace std;
 int main (){
    int x =10;
    int *xptr=&x;
    cout<<xptr<<endl;
    //gives the bucket stored at that address
    cout<<* xptr<<endl;

 }