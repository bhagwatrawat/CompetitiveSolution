// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    //Your code here
    unordered_set<int> s;
    int sum=0;
    s.insert(0);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(s.count(sum)){
            return 1;
        }
        s.insert(sum);
        
    }
    return 0;
}
