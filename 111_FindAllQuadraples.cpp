// find all the quadraples in an array e<vector<int> > fourSum(vector<int> &arr, int k) {
    // Your code goes here
    #include <bits/stdc++.h>
    using namespace std;

    vector<vector<int> > fourSum(vector<int> &arr, int k) {
    sort(arr.begin(),arr.end());
    int n=arr.size();
    set<vector<int>> ss;
    vector<vector<int>> res;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int l=j+1;
            int m=n-1;
            while(l<m){
                if(arr[i]+arr[j]+arr[m]+arr[l]==k ){
                vector<int> s;
                s.push_back(arr[i]);
                s.push_back(arr[j]);
                s.push_back(arr[l]);
                s.push_back(arr[m]);
                ss.insert(s);
                l++;
                m--;
            }
            else if(arr[i]+arr[j]+arr[m]+arr[l]<k){
                l++;
            }
            else{
                m--;
            }
            }
            
        }
    }
    for(auto it=ss.begin();it!=ss.end();it++){
        res.push_back(*it);
    }

    return res;
}