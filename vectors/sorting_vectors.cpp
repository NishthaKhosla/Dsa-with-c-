#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int totalMarks(vector <int> marks){
    return marks[0]+marks[1] +marks[2];

}
bool compare(pair<string,vector<int>> s1,pair<string,vector<int>> s2){
    vector<int>m1=s1.second;
    vector<int>m2=s2.second;
    return totalMarks(m1)>totalMarks(m2);
}
int main (){
    vector<pair<string,vector<int>>> student_marks = {
        {"Rohan",{10,20,30}},
        {"Prakash",{10,21,3}},
        {"Hardika",{4,5,6}},
        {"Raman",{10,25,13}},
    };

    sort(student_marks.begin(),student_marks.end(),compare);
    for(auto s:student_marks){
        cout<<s.first<<" "<<totalMarks(s.second)<<endl;
    }
    return 0;
}