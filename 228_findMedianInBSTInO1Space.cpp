#include <bits/stdc++.h> 
using namespace std; 
struct Node{
    int data;
    Node * right;
    Node * left;
};
Node * newNode(int data){
    Node * node =new Node();
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
void countNodes(Node * root, int & count){
    if(root){
        countNodes(root->left,count);
        count++;
        countNodes(root->right,count);
    }
}
Node * successor(Node * root){
    if(root){
        while(root!=NULL && root->right!=NULL){
            root=root->right;
        }
    }
    return root;
}
void findMedian(Node * root,int count , Node * prev ,int & currCount, int & median){
    if(root){
        findMedian(root->left,count,root,currCount,median);
        currCount++;
        if(count%2==0 && currCount==(count/2)+1){
           Node * x= successor(root->left);
            median= (x->data+ root->data)/2;
        }
        if(count%2!=0 && currCount==(count+1)/2){
            median=root->data;
        }
        findMedian(root->right,count,root,currCount,median);
    }
}

int main(){
    Node * root=newNode(50);
    root->left=newNode(30);
    root->left->left=newNode(20);
    root->left->right=newNode(40);
    root->right=newNode(70);
    root->right->right=newNode(80);
  

    int count =0;
    countNodes(root,count);
    int result=0;
    int currCount=0;
    findMedian(root,count,NULL,currCount,result);
    cout<<result;
} 