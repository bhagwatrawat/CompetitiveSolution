#include <bits/stdc++.h>
using namespace std;
 int PalinArray(int a[], int n)
{  //add code here.
    for(int j=0 ;j<n;j++){
        string s= to_string(a[j]);
        int len = s.length();
   
    // Traversing through the string 
    // upto hlaf its length
    for (int i = 0; i < len / 2; i++) {
       
        // Comparing i th character 
        // from starting and len-i
        // th character from end
        if (s[i] != s[len - i - 1])
            return 0;
    }
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<PalinArray(a,n)<<endl;
    }
}