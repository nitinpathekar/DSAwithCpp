#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,3,2,4};
    int size =a.size();
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
    cout<<a[1];
    cout<<a.at(1);
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i];
    }

    return 0;
}