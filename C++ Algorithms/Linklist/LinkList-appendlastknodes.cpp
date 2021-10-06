#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

int length(Node *head){
    int size = 0;
    while(head){
        head = head->next;
        size++;
    }
    return size;
}

Node* appendlast(Node* head,int k){
    if(k  == length(head) ) return head;
    k = length(head)%k;
    Node* curr=head,*last = head,*nxt = head;
    int count = 1;
    while(last->next != NULL){
        if(count == k){
            curr = last;
        }
        last = last->next;
        count++;
    }

    nxt = curr->next;
    curr->next = NULL;
    last->next = head;
    return nxt;
    
}

void display(Node* head){
    while(head){
        cout<<head->data <<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    display(head);
    cout<<length(head);
    cout<<endl;
    display(appendlast(head,7));



}