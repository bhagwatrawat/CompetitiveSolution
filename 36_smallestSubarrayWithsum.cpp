// find the smallest subarray with sum greater than a given int ;
#include <bits/stdc++.h>
using namespace std;

  int sb(int arr[], int n, int x)
{
    // Your code goes here  
  
    int res=n;

    for(int j=0;j<n;j++){
        int count =0;
        int y=0;
        int z=n;
        if(j+res <n) z= j+res;
        for(int i=j;i<z;i++){
            y=y+arr[i];
            count=count +1;
            if(y>x && count<res){
               
                res=count;
                break;
        } 
        }
        
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
    int x;
    cin>>x;
    int res=sb(arr,n,x);
    cout<<res;
}