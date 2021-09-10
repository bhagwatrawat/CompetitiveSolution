    #include<bits/stdc++.h>
    using namespace std;
// Detect the loop in a linked list 

    struct Node{
    int data;
    Node *next;
    };
    Node *head;
    bool detectLoop(Node* head)
    {
        // your code here
    
        Node * temp1=head;
        Node * temp2=head;
        while(temp1->next!=NULL && temp2->next!=NULL && temp2->next->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next->next;
            if(temp1==temp2){
                return 1;
            }
        }
        return 0;
    }
//     int main(){
//     int n;
//     cin>>n;
//     head=NULL;
//     Node * temp=new Node();
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
        
//         if(head==NULL){
//             temp->data=x;
//             temp->next=NULL;
//             head=temp;
//         }
//         else{
//             Node * temp1=new Node();
//             temp1->data=x;
//             temp1->next=NULL;
//             temp->next=temp1;
//             temp=temp1;
//         }
//     }
//    bool res=detectLoop(head);
//    if(res){
//        cout<<"True";
//    }
//    else{
//        cout<<"False";
//    }
//     return 0;
//     }