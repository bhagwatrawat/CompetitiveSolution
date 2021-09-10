
#include <bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    int counta=0;
    int countb=0;
    while(a>0){
        if(a&1==1) counta++;
        a=a>>1;
    }
    while(b>0){
        if(b&1==1) countb++;
        b=b>>1;
    }
    return counta>countb;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,comp);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}