// return the array where the value of array is equals to its index value ;


#include <bits/stdc++.h>
using namespace std;
vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> res;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1) res.push_back(arr[i]);
	    }
	    return res;
	}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> res= valueEqualToIndex(arr,n);
        if(res.empty()){
            cout<<"NOT FOUND";

        }
        else{
            for(int x:res){
                cout<<x<<" ";

            }

        }
        cout<<endl;
    }
}
	