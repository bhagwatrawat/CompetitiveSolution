// Reverse a linked list in groups of given size;

    #include<bits/stdc++.h>
    using namespace std;

    struct Node{
    int data;
    Node *next;
    };
    Node *head;
    Node *reverse (Node *head, int k)
    { 
        // Complete this method
        Node * temp=head;
        Node * head1=NULL;
        Node * head2=NULL;
        Node * head3=NULL;
        Node * head4=NULL;
        for(int i=0;i<k;i++){
            if(temp==NULL){
                return head1;
            }
            
            Node * temp1=temp->next;
            temp->next=head1;
            if(head1==NULL) head2=temp;
            head1=temp;
            temp=temp1;
        }
        int i=0;
        while(temp!=NULL){
            
            Node * temp1=temp->next;
            temp->next=head3;
            if(head3==NULL){
                head4=temp;
            }
            head3=temp;
            temp=temp1;
            i++;
            if(i==k){
                i=0;
                head2->next=head3;
                head2=head4;
                head3=NULL;
            }
        }
        if(head2!=head4){
            head2->next=head3;
        }
        return head1;
    }
    int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
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
    Node * temp1=reverse(head,k);
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    return 0;
    }