// Given a sorted array find the first and last ocuurance of a given number inside the array ;

 #include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    int first=-1;
	    int last;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]==x){
	            first=i;
	            break;
	        }
	    }
	     if(first==-1){
	        cout<<-1<<endl;
	        return 0;
	    }
	    for(int i=first;i<n;i++){
	        if(a[i]==x){
	            last=i;
	            
	        }
	    }
	   
	    cout<<first<<" "<<last<<endl;
	 
	}
	return 0;
}