// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n){
    // Your code here
   if(n==1) return 0;
   if(arr[0]==0) return -1;
   int jump=1;
   int maxrange=arr[0];
   int step = arr[0];
    int i=1;
    while(1){
        
        maxrange=max(maxrange,arr[i]+i);
       
        if(i==n-1){
           
            return jump;
        }
       
        step--;
        if(step==0){
            jump ++;
            if(i>=maxrange){
                return -1;
            }
            step=maxrange-i;
        }
         i++;
    }
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends