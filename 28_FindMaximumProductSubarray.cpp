#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	   if(n==1){
	        return arr[0];
	    }
	    long long ss=1;
	    long long  mini=1;
	    long long maxi=1;
	    long long overall=1;
	    for(int i=0;i<n;i++){
	     if(arr[i]>0){
	         maxi=maxi*arr[i];
	         mini=min(mini*arr[i],ss);
	         
	     }
	     else if(arr[i]==0){
	         maxi=1;
	         mini=1;
	     }
	     else{
	         long long x=maxi;
	         maxi=max(mini*arr[i],ss);
	         mini=x*arr[i];
	         
	     }
	     overall=max(overall,maxi);
	     
	    }
	    return overall;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends