#include<bits/stdc++.h>
using namespace std;

long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    
	    long long res=0;
	    for(int i=0;i<n-2;i++){
	        long long j=i+1;
	        long long k=n-1;

	        while(j<k){
                if(arr[i]+arr[j]+arr[k]<sum){
                    res+=(k-j);
                    j++;
                }
                else{
                    k--;
                }
	        }
	    }
	    return res;
	}

int main(){
    long long n ;
    cin>>n;
    long long sum ;
    cin>>sum;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long res=countTriplets(arr,n,sum);
    cout<<res;
}