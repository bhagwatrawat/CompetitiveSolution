// Find the minumim and maximum element of an array with minimum number of comparisons.

#include<bits/stdc++.h>
using namespace std;

pair<int,int> findMaxAndMin(int *arr,int n,int start,int end){
    if(start==end){
        pair<int,int > minmax;
        minmax.first=arr[start];
        minmax.second=arr[start];
        return minmax;
    }
    if(start+1==end){
        pair<int,int> minmax;
        if(arr[start]<arr[end]){
            minmax.first=arr[start];
            minmax.second=arr[end];
            return minmax;
        }
        else{
            minmax.first=arr[end];
            minmax.second=arr[start];
            return minmax;
        }
    }
    else{
        int mid=(start+end)/2;
        pair<int,int> s1=findMaxAndMin(arr,n,start,mid);
        pair<int,int>s2=findMaxAndMin(arr,n,mid ,end);
        if(s1.first<s2.first && s1.second>s2.second){
            return s1;
        }
        if(s1.first<s2.first && s1.second<s2.second){
            s1.second=s2.second;
            return s1;
        }
        if(s1.first>s2.first && s1.second<s2.second){
            return s2;
        }
        if(s1.first>s2.first && s1.second>s2.second){
            s1.first=s2.first;
            return s1;
        }

    }
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    pair<int,int> res=findMaxAndMin(arr,n,start,end);
    cout<<res.first<<" "<<res.second;
}