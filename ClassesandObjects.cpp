#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    private:
       
    public:
        int arr[5];
        void input(){
            for(int i=0;i<5;i++)cin>>arr[i];
        }
        int calculateTotalScore(){
            int ans=0;
            for(int i=0;i<5;i++)ans+=arr[i];
            return ans;
        }
        

};
int main() {
