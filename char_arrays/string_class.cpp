/**Strings can be defined with class <string> as well.It is more flexible and forms a dynamic array*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string st = "hello world";
    cout<<st<<endl;
    string s;
getline(cin,s,'.');

for(char ch : s){
    cout<<ch<<",";
}
cout<<s<<endl;
}