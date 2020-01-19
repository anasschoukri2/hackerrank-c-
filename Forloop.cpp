#include <bits/stdc++.h>

using namespace std;


string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int main()
{   
    int n,m;
    cin >> n >> m;
    for(int i=n;i<=m;i++){
        if(i<10)cout<<arr[i]<<endl;
        else(i&1)?cout<<"odd\n":cout<<"even\n";
    }
    return 0;
}
