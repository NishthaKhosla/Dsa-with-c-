/**in insertion sort we copy a value to a container and check its previous value if the previous value is greater than the selected index then we move the items ahead if not then we copy the the selected elemnt over there only.*/
#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n ){
for( int i=1;i<n-1;i++){
    int current = arr[i];
    int prev = i-1;
    while(prev>0 and current<arr[prev]){
        arr[prev+1] = arr[prev];
        prev = prev -1;
    }
arr[prev+1]=current;
}
}

int main () {
    int arr [] = {-2,3,4,-1,5,-1,6,1,8};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);

    for (auto x : arr){
        cout<< x<< ",";
    }
    return  0;
}