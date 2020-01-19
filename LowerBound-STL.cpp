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
    while(n--) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        vector<int>:: iterator x =lower_bound(v.begin(), v.end(), a);
        (v[x-v.begin()]==a)? cout<<"Yes ":cout<<"No ";
        cout<<x-v.begin()+1<<endl;
        
    }
    return 0;
}
