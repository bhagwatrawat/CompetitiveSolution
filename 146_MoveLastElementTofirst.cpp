    #include<bits/stdc++.h>
    using namespace std;

    struct Node{
    int data;
    Node *next;
    };
    Node *head;
    Node * MoveElement(){
        Node * temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        int data=temp->next->data;
        temp->next=NULL;
        Node * temp1=new Node();
        temp1->data=data;
        temp1->next=head;
        head=temp1;
        return head;
    }
    int main(){
    int n;
    cin>>n;
    head=NULL;
    Node * temp=new Node();
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        
        if(head==NULL){
            temp->data=x;
            temp->next=NULL;
            head=temp;
        }
        else{
            Node * temp1=new Node();
            temp1->data=x;
            temp1->next=NULL;
            temp->next=temp1;
            temp=temp1;
        }
    }

    Node * temp1=MoveElement();

    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    return 0;
    }