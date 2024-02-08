#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

//Bruteforce method
int print_largestsum(int arr[], int n)
{
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int subarraySum = 0;

            for (int k = i; k <= j; k++)
            {
                subarraySum += arr[k];
            }

            largestSum = max(largestSum, subarraySum);
        }
    }

    return largestSum;
}

int main()
{
    int arr[] = {1, 2, -3, 4, 5, 6, -7};
    int n = sizeof(arr)/sizeof(int);

    
    int result = print_largestsum(arr, n);
    cout << "Largest Sum: " << result << endl;

    return 0;
}