#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int, string> student;
    student[1]="Nitin";
    student[2]="Pintu";
    student[3]="Vikash";
    map<int, string> :: iterator itr;
    for(itr=student.begin();itr!=student.end();itr++){

    }
    return 0;
}
