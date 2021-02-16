 // Given an array of size N and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
// 1) All elements smaller than a come first.
// 2) All elements in range a to b come next.
// 3) All elements greater than b appear in the end.
// The individual elements of three sets can appear in any order. You are required to return the modified array.




#include<bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int s=0;
        int e=array.size()-1;
        for(int i=0;i<array.size();i++){
            if(i>e) break;
            if(array[i]<a){
                int temp=array[i];
                array[i]=array[s];
                array[s]=temp;
                s++;
            }
            if(array[i]>b){
                int temp=array[i];
                array[i]=array[e];
                array[e]=temp;
                i--;
                e--;
            }
        }
        
    }
    int main(){
        vector<int> array;
        int a;
        int b;
        threeWayPartition(array,a,b);
    }