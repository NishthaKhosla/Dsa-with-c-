#include<iostream>
using namespace std;

int watchVideo(int *viewsPtr){
    *viewsPtr = *viewsPtr+1;
}

int main (){
    int views = 100;
    watchVideo(&views);
    cout<<views<<endl;
    return 0;
}