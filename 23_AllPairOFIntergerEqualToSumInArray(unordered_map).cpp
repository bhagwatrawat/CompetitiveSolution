// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int result=0;
        unordered_map <int, int> s;
        for(int i=0;i<n;i++){
           s[arr[i]]++;
        }
       
        for(int i=0;i<n;i++){
           result+=s[k-arr[i]];
           if(arr[i]==k-arr[i]){
               result--;
           }
        }
        return result/2;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends