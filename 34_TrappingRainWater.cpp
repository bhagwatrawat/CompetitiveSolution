#include <bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n){

    // Your code here
      int res=0;
      int a[n];
      for(int i=0;i<n;i++){
          a[i]=0;
      }
      int l,r,maxl,maxr;
      l=0;
      r=n-1;
      maxl=arr[l];
      maxr=arr[r];
      while(l<r){
          if(maxl<=maxr){
              l=l+1;
              if(arr[l]>maxl){
                  maxl=arr[l];
                  
              }
              else{
                  a[l]=maxl-arr[l];
              }
          }
          if(maxl>maxr){
              r=r-1;
              if(arr[r]>maxr){
                  maxr=arr[r];
                   
              }
              else{
                  a[r]=maxr-arr[r];
                  
              }
          }
      }
      for(int i=0;i<n;i++){
           
          res+=a[i];
      }
    return res;
    
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=trappingWater(arr,n);
    cout<<res;
}    