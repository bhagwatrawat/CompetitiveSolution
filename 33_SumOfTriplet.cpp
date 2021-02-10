// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// function to find the triplet which sum to x
// arr[] : The input Array
// N : Size of the Array
// X : Sum which you need to search for 

bool find3Numbers(int arr[], int N, int X)
{
    //Your Code Here
    sort(arr,arr+N);
    for(int i=0;i<N-2;i++){
        int h=X-arr[i];
        int s=i+1;
        int l=N-1;
        while(l>s){
            if(arr[s]+arr[l]>h){
                l--;
            }
            if(arr[s]+arr[l]<h){
                s++;
            }
            if( l!=s && arr[s]+arr[l]==h){
                cout<<arr[i]<<","<<i<<" "<<arr[s]<<","<<s<<" "<<arr[l]<<","<<l<<endl;
                return true;
            }
        }
    }
    return false;
}


// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++){
            cin>>A[i];
        }
			
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}
  // } Driver Code Ends