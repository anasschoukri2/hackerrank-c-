#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string s;
    cin>>s;
    while(!cin.fail()){
        cout<<s<<endl;
        cin>>s;
    }
    return 0;
}

