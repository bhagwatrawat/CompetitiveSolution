#include <bits/stdc++.h>
using namespace std;

 int minSwap(int *arr, int n, int k) {
    // Complet the functio
    int good=0;
    int bad=0;
    int mi=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=k) good++;
       
    }
    for(int i=0;i<good;i++){
        if(arr[i]>k) bad++;
      
    }
    
    int i=0;
    int j=good-1;
    while(j<n){
        mi=min(mi,bad);
        j++;
        if(j<n && arr[j]>k) bad++;
        if(arr[i]>k) bad--;
        i++;
    }

    return mi;
    
}

int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        cout<<minSwap(arr,n,k)<<"\n";
    }
    return 0;
}