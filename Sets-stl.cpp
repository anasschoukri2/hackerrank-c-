#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;set<long long int>s;
    while(q--){
        long long int x,y;
        
        cin>>x>>y;
        if(x==1){
            s.insert(y);
        }
        else if(x==2){
            s.erase(y);
        }
        else{
            set<long long int>::iterator t;
            t=s.find(y);
            if(t==s.end())cout<<"No\n";
            else cout<<"Yes\n";
        }
    } 
    return 0;
}



