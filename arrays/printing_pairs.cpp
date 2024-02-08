/**
 * we need to print all the possible pairs in array once
 * we have two pointers i and j-initially j is next to i and increases
 * It prints all the i,j pairs
 * when j reaches end i is incremented by 1 and the process continues
*/

#include<iostream>
using namespace std;

void print_pairs(int arr[],int n){
   
  for(int i=0;i<n;i++){
     int x = arr[i];

     for(int j= i+1;j<n;j++){
     int y = arr[j];

     cout<<x<<","<<y<<endl;
  }
  cout<<endl;
 
    
}}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);

print_pairs(arr,n);

    return 0;
}