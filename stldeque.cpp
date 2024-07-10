#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    int n=d.size();
    for (int i=0;i<n;i++){
        cout<<d[i]<<endl;
    }
    return 0;
}