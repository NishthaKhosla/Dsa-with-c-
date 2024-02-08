/**in order to reverse array we have three things start,end and mid
 * we swap start with end and inc start pointer by 1 and decrease end pointer by 1
   In case of odd no.s the middle element remains same
*/

#include <iostream>
using namespace std;

void reverse_array(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s = s + 1;
        e = e - 1;
    }
}

int main()
{
    int arr[] = {3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(int);
    cout << "Initial array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse_array(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
