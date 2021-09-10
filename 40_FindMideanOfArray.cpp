#include <bits/stdc++.h>
using namespace std;

 int find_median(vector<int> v)
    {
        // Code here.
        int n=v.size();
        sort(v.begin(),v.end());
        if( n % 2 ==0){
            return (v[n/2]+v[(n/2)-1])/2;
        }
        else{
            return v[n/2];
        }
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=find_median(v);
        cout<<ans<<"\n";
    }
    return 0;
}