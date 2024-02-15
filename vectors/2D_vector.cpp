//it is a replacement of 2D Array

#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector <vector <int>> arr = {
{1,2,3},
{4,5,6},
{7,8,9,10},
{11,12},
    };

for(int x:arr){
    cout<<x<<",";
};


    // for(int i=0;i<arr.size();i++){
    //     cout <<arr[i]<<endl;
    // }
    return 0;
}