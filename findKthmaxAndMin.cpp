// Find the kth max and min element  ;;

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    int n = r-l+1; 
    int key = rand() % n; 
    swap(arr[r],arr[l+key]);
    int i=l-1;
     
   int pivot =arr[r];
   for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
   }
   i++;
   swap(arr[i],arr[r]);
   pivot=i;
   if(pivot+1==k){
       return arr[pivot];
   }
   else if(pivot+1<k){
      return  kthSmallest(arr,pivot+1,r,k);
   }
   else{
      return  kthSmallest(arr,l,pivot-1,k);
   }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int l=0;
    int r=n-1;
    int res=kthSmallest(arr,l,r,k);
    cout<<res;
}
