//write a function that takes in n x m 2D array and prints the all array elemnts in a spiral order
/**
 * input-
 * 1  2  3   4
 * 5  6  7   8
 * 9  10 11 12
 * 13 14 15 16
 *  
 * output-
 * 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

in order to acheive this we need to 
1)print first row from starting coloumn till last coloumn
2)print last coloumn from second row till last row
3)print last row from second last coloumn till first coloumn
4)print first coloumn from second last row till second row
and the process continues

for this we need 4 loops and 4 containers
1)start row
2)end col
3)end row
4)start col

*/

#include<iostream>
using namespace std;

void print(int arr[][10],int n,int m){
int start_row = 0;
int end_row = n-1;
int start_col = 0;
int end_col = m-1;

while(start_col<=end_col and start_row <=end_row){

    //start row
    for(int col = start_col; col<=end_col; col++){
        cout<<arr[start_row][col]<<" ";
    }
    //end col
    for(int row=start_row+1;row<=end_row;row++){
         cout<<arr[row][end_col]<<" ";
    }
    //end row
    for(int col=end_col-1;col>=start_col;col--){
        if(start_row==end_row){
            break;
        }
        cout<<arr[end_row][col]<<" ";
    }
    //start col
    for(int row = end_row-1;row>=start_row+1;row--){
        if(start_col==end_col){
            break;
        }
        cout<<arr[row][start_col]<<" ";
    }

    //update to move to inner spiral
    start_row++;
    end_row--;
    start_col++;
    end_col--;

}

}


int main(){
    int arr [][10] = { {1,2,3,4},
                        {12,13,14,15},
                        {11,16,15,6},
                        {10,9,8,7}};

    int n =4; 
    int m=4;
    print(arr,n,m);
}