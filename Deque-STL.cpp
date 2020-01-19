#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k){
	deque<int> q;
    for(int i = 0; i < n; i++)
    {
        while(!q.empty() && arr[i] > q.back())
            q.pop_back();  
        q.push_back(arr[i]);  
        if(i >= k && q.front() == arr[i-k])
            q.pop_front();  
        if(i >= k-1)
            (i < n-1) ? cout<<q.front()<<" ":cout<<q.front()<<"\n";
    }
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

