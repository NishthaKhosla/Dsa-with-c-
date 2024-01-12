#include<iostream>
using namespace std;

int linear_search(int arr[], int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
       
        
    }

    return -1;

}

int main(){
int arr[] = {13,17,8,6,5,9,10,11};
int n = sizeof(arr)/sizeof(int);
int key  ;
cin>>key;

int index= linear_search(arr,n,key);

 if(index!=-1){
    cout<<key<<" is present at index "<<index<<endl;
 }
 else{
    cout<<"key is not present";
 }
 
return 0;
}