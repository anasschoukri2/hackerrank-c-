#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
    }
    int q;
    cin>>q;
    v.erase(v.begin()+q-1);
    int a;
    cin>>a>>q;
     v.erase(v.begin()+a-1,v.begin()+q-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
           
            cout<<v[i]<<" ";
    }
    return 0;
}
