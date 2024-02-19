#include<iostream>

using namespace std;

class vector{
//Data members 
int *arr;
int cs;
int ms;


//constructor,destructor,methods
public:
  vector(){
    cs =0;
    ms = 1;
    arr = new int[ms];
}

void push_back(int d){
    //two cases - if vector is full we need to copy it to new address with double memory.
    //if array is not full then we need add to next index onlr

    if(cs==ms){
        //create a new array with double capacity and delete old one
        int *oldArr = arr;
        ms = 2*ms;
        arr = new int [ms];
        for(int i=0;i<cs;i++){
             arr[i]=oldArr[i];

        }
        //delete
        delete [] oldArr;
    }

    arr[cs]=d;
    cs++;
}

void pop_back(int d){
 if(cs>=0){
    cs--;
 }
}
//front,back,at(i),[]
int front(){
    return arr[0];
}
int back (){
    return arr[cs-1];
}
int size(){
    return cs;
}
int capacity(){
    return ms;
}
int at(int i){
    return arr[i];
}
//opearor overloading

// int operator[](int i ){
//     return arr[i];
// }
};

int main(){
    vector v;
    v.push_back(8);
  
    v.push_back(6);
   
    v.push_back(7);
   

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
}

