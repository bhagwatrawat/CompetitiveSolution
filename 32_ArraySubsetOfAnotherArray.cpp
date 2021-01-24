#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int n;
	cin>>n;
	for(int j=0;j<n;j++){
	    int s1,s2;
	    cin>>s1>>s2;
	    int arr1[s1];
	    int arr2[s2];
	    unordered_set<int> s;
	    
	    for(int i=0;i<s1;i++){
	        cin>>arr1[i];
	        s.insert(arr1[i]);
	    }
	    for(int i=0;i<s2;i++){
	        cin>>arr2[i];
	    }
	    for(int i=0;i<s2;i++){
	        if(!s.count(arr2[i])){
	            cout<<"No"<<endl;
	            return 0;
	        }
	    }
	    cout<<"Yes"<<endl;
	    
	}
	return 0;
}