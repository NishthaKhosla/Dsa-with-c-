#include<iostream>
#include<algorithm>
using namespace std;

int main (){
     int arr [] = {-2,3,4,-1,5,-1,6,1,8};
    int n = sizeof(arr)/sizeof(int);
    //sorting the array
    sort (arr, arr+n);//last element is not included
   //reversing the sorted array
    reverse(arr,arr+n);
    //sorting and reversing the array in one time using inbuilt comparitor
    sort(arr,arr+n,greater <int>());
    for (auto x : arr){
        cout<< x<< ",";
    }
    return  0;
}