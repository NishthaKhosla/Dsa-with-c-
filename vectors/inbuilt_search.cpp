#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main (){
    vector <int> arr ={10,20,30,40,50}; 
    int key ;
    cout<<"enter the key you want to search"<<endl;
    cin>>key;
    //it is linear search.
    vector <int> ::iterator it = find(arr.begin(),arr.end(),key);
    //index=adress-base address
    //it returns address and arr.begin gives base address
    if(it!=arr.end()){
cout<<" Element present at index -" <<it-arr.begin()<<endl;
    }
    else{
        cout<<"Element not found";
    }
    
;}