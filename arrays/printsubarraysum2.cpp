//prefix sum array
/**
 * we create another array in which we store the sum of all indexes one by one
 * then we just print the sum of required indexes
 * 
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

//Prefix sum approach.
int print_largestsum(int arr[], int n)
{
    int prefix[100] = {0};
    prefix[0]=arr[0];
    for( int i=1;i<n;i++){
        prefix[i]=prefix[i-1] + arr[i];
    }
    
    int largestSum = 0;
    for (int i = 0; i < n; i++) 
    {

        for (int j = i; j < n; j++)
        {
            int subarraySum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];

           
            largestSum = max(largestSum, subarraySum);
        }
    }

    return largestSum;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    
    int result = print_largestsum(arr, n);
    cout << "Largest Sum: " << result << endl;

    return 0;
}