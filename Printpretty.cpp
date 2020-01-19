#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        long long int  n=B;
        n *= 100;
        int k=0;
        while(n){
            k++;
            n/=10;
        } 
        k++;
        k=15-k;
        const int u=k;
        cout<<nouppercase<<setw(0)<<"0x"<<setbase(16)<<(long long int)A<<endl;
        if(B <0)cout<<setw(u)<<setfill('_')<<fixed<<setprecision(2)<<"-"<<B<<endl;
        else
        cout<<setw(u)<<setfill('_')<<fixed<<setprecision(2)<<"+"<<B<<endl;
        cout<<uppercase<<fixed<<setprecision(9)<<scientific<<C<<endl;
	}
	return 0;

}
