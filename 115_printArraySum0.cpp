#include <bits/stdc++.h>
using namespace std;

long long findSubarray(int *arr, int n ) {
    //code here
    long long counter=0;
    int sum=0;
    unordered_map<int,int> s(0);
    for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum==0){
          counter++;
      }
      if(s.count(sum)){
         counter+=s[sum];
      }
      s[sum]++;
    }
    return counter;
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long res=findSubarray(arr,n);
    cout<<res;
}