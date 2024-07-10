#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(1);

    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(2);    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(1);

    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.front();
    cout<<v.back();
    v.clear();
     cout<<"Capacity: "<<v.capacity()<<endl;
     cout<<"size: "<<v.size()<<endl;
     vector<int> vec(5,0);
     int size =vec.size();
         for(int i=0;i<size;i++){
        cout<<vec[i];
    }
    vector<int> vecto(vec);

    
    return 0;
}