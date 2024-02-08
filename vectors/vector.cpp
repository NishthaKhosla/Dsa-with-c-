//vector is dynamic array-they grow itself and are nor fixed
//it creates a new array with 2x size.
//they can be used to create dynamic 2D or 3D arrays.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //creating a vector
    vector<int> arr = {1,2,3,4,5,6};
    //pushing an elemnt
    arr.push_back(18);
    //popping the last  element
    arr.pop_back();
    //printing all elemnts of vector
    for(int i =0; i<arr.size();i++){
        cout<<arr [i]<<endl;
    }
    //checking the size
    
    cout<<arr.size()<<endl;
    //checking the capacity
    cout<<arr.capacity()<<endl;
}