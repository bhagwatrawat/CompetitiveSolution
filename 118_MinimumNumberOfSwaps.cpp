#include <bits/stdc++.h>
using namespace std;
int  minSwaps(vector<int>&nums){
	    // Code here
	    int n=nums.size();
	    int res=0;
	    vector<pair<int,int>> v(n);
	    for(int i=0;i<n;i++){
	        v[i]={nums[i],i};
	    }
	    sort(v.begin(),v.end());
	 
	    for(int i=0;i<n;i++){
	     if(v[i].first==nums[i]) continue;
	     else{
	         swap(v[i],v[v[i].second]);
	         res++;
	         i--;
	     }
	    }
	    return res;
	    
	}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res=minSwaps(arr);
    cout<<res;
}