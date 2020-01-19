#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

map<string,int>m;
int main() {
    int q;
    cin>>q;
    while(q--){
        int x,mark;
        string s;
        cin>>x>>s;
        if(x==1){
            cin>>mark;
            m[s]+=mark;
        }
        else if(x-3){
            m[s]=0;
        }
        else{
            cout<<m[s]<<endl;
        }
    }   
    return 0;
}



