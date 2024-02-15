#include<iostream>
using namespace std;
 int main  (){
    //in case of char 2d arrays we need to pass the no of coloumns and the no of rows are taken as the no of rows having the conent.
    char numbers [][10] = {
        "one",
        "two",
        "three",
        "fourty",
        "twenty",
        "eighty",
    };
    for(int i=0;i<6;i++){
        //for(int j =0;j<10;j++);
        cout<<numbers [i]<<endl;
    }

    //char arrays are treated differently...it prints the complete string instead of a single char
    return 0;
 }