#include<iostream>
using namespace std;

void print(int arr[][100], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[100][100]; // max 100 rows and 100 columns
    int n, m; // n are rows, m are columns
    cout<<"Enter the no of rows and coloumns required:";
    cin >> n >> m;

    // Iterate over rows
    for(int i = 0; i < n; i++) {
        // Iterate over columns
        for(int j = 0; j < m; j++) {
         // storing the input in arr.
            cin >> arr[i][j];
        }
    }
    
    // Pass the array and dimensions to the print function
   
    print(arr, n, m);
    return 0;
}
