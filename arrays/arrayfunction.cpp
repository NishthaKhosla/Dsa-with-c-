#include<iostream>
using namespace std;
//when we pass an array to a function,it only gives it 's address as it passes by refrence(as a pointer) instead of pass by value therefore we get unexpected results.

void printArray(int arr1[],int n){
cout<<"in outer function"<<n<<endl;
for( int i=0;i<n;i++){
    cout<<arr1[i]<<endl;
}
}

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int n =sizeof(arr1)/sizeof(int);

//  cout<<"The no of elements in main "<<n<<endl;
// for( int i=0;i<n;i++){
//     cout<<arr1[i]<<endl;
//}

printArray(arr1,n);
    return 0;
}

