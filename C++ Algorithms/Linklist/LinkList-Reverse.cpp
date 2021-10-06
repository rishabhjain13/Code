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

void reverse(Node* &head){
    if(head->next == NULL || head == NULL){
        return;
    }
    
    Node *prev = NULL,*nxt,*curr = head;
    while(curr != NULL){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}

Node* reverseRec(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *newhead = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    
    print(head);
    cout<<endl;
    head = reverseRec(head);
    print(head);

}