 #include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int f;
	cin>>f;
	for(int j=0;j<f;j++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int m;
	    cin>>m;
	    
	    sort(arr,arr+n);
	    int res=arr[m-1]-arr[0];
	    for(int i=1;i<n-m+1;i++){
	        int x=arr[i+m-1]-arr[i];
	        if(x<res) res=x;
	    }
	  cout<<res<<endl;    
	}
	
	return 0;
}