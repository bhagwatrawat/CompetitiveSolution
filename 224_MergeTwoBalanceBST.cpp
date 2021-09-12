// // Method : using merger inorder of bst
// #include <bits/stdc++.h> 
//  using namespace std; 
// struct Node {
//     int data;
//     Node * left;
//     Node * right;
// };
//  Node* newNode(int data){
//     Node* node = new Node();
//     node->data = data;
//     node->left = node->right = NULL;
//     return (node);
// }
// void inorder(Node * root, vector<int> & x){
//     if(root){
//         inorder(root->left,x);
//         x.push_back(root->data);
//         inorder(root->right,x);
//     }
// }
//  int main(){
//     Node *root1 = newNode(100);
//     root1->left     = newNode(50);
//     root1->right = newNode(300);
//     root1->left->left = newNode(20);
//     root1->left->right = newNode(70);
 
//     Node * root2 = newNode(80);
//     root2->left     = newNode(40);
//     root2->right = newNode(120);
//     vector<int> x1;
//     vector<int> x2;
//     inorder(root1,x1);
//     inorder(root2,x2);

//     vector<int> y ; 
//    for(int i=0;i<x1.size();i++){
//        y.push_back(x1[i]);
//    }
//    for(int i=0;i<x2.size();i++){
//        y.push_back(x2[i]);
//    }
//    sort(y.begin(),y.end());
//    balanceBst(y);

// } 