/**when we have range the counting sort is preferrred
 * we create a new array from 0 to largest index
 * we scan through original array
 * when we see a number we increase the frequency of that index by 1 each time
 * then we change the original array on the basis of frequency of newly created array
*/

#include<iostream>
#include<vector>
using namespace std;

 void count_sort(int arr[],int n){
    int largest = -1;
    //finding the largest element
for(int i=0;i<n;i++){
    max(largest,arr[i]);
}
//creating a new dynamic array 
vector <int> freq(largest+1,0);

//update the frequency array
for (int i=0;i<n;i++) {
    freq[arr[i]]++;
}
//put back the elemnts from freq into original array
int j = 0;
for(int i=0; i<=largest;i++){
    while(freq[i]>0){
        arr[j] = i;
        freq[i]--;
        j++;
    }
    return;
}
 }

int main(){
     int arr [] = {2,3,4,1,5,12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    count_sort(arr,n);

    for(int i =0;i<n;i++){
        cout << arr[i] <<endl;
    }
    return 0;
}