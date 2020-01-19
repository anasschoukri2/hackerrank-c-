#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int>v[100004];
    int n,q;
    cin>>n>>q;
    for(int j=0;j<n;j++){
        int a;
        cin>>a;
        for(int i=0;i<a;i++){
            int k;
            cin>>k;
            v[j].push_back(k);
        }
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<v[a][b]<<endl;
    }
    return 0;
}

