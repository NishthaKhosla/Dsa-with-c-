/**Kadane's Algorithm-
 * here we have two values 1)current sum,2)max sum
 * we update the current sum as we move forward and write max sum found till that point
 * the catch here is that in case the -ve values is making the whole sum -ve then we treat it as 0;
 * 
*/

#include<iostream>
using namespace std;

int maximum_subarray_sum(int arr[], int n){
    int cs =0;
    int ms = 0;
    for(int i=0; i<n;i++){
      cs = cs + arr[i];
      if(cs<0){
        cs=0;
      }
      ms = max(ms,cs);
    }
    return ms;
}



int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<maximum_subarray_sum(arr,n)<<endl;
    return 0;
}
