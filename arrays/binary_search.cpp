//binary search works on sorted arrays
/**
 * here we divide array into 2 parts and have 3 pointers start,end and mid
 * if the value required is greater than mid then the part before mid is discarded and search goes on in other part and process continues until elemnt is found
 * vice verca for if the value is less than mid
 * the point at which start>end,search ends and we say elemnt is not present
 * 
*/

#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
int s = 0;
int e = n-1;

while(s<=e){
    int mid = (s+e)/2;
if(arr[mid] == key){
        return mid;
    }

    else if (arr[mid]<key){
        s = mid+1;
    }

    else {
        e = mid-1;
    }
}
return -1;
}

int main(){

    int arr[] = {10,20,30,40,50,70,89};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter the key you want to search:";
    cin>>key;

    int index = binary_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" key is present at "<<index<<endl;

    }
    else{ 
        cout<<"key is not present";
    }
}