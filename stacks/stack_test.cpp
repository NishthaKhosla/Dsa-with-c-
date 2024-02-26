#include <iostream>
#include <string.h>
#include "stackLL.h"
using namespace std;

int main(){
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('p');

    while(s!=NULL){
        cout<<s.top()<<endl;
    }

    return 0;
}