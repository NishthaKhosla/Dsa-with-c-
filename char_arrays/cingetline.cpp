//cin.getline() can read a complete sentence instead of a single char hence making work more easier
#include <iostream>
using namespace std;
int main()
{//for sentence
    // char sentence [1000];
    // cin.getline(sentence,1000);
    // cout<<sentence<<endl;

    //for para
    char para [1000];
    cin.getline(para,1000,'.');
    cout<<para<<endl;
}