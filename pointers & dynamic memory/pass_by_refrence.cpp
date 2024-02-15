#include<iostream>
using namespace std;
//pass by refrence variable.
void applyTax(int & income){
    float tax = 0.10;
    income = income*tax;
}

int main(){
    int income;
    cin>>income;

    applyTax(income);
    cout<<income<<endl;
}

