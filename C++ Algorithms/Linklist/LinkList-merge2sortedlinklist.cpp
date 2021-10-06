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

void display(Node *head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* mergetwolinklist(Node * head1,Node* head2) {
    Node *pt1=head1,*pt2=head2,*merge = new Node(-1),*pt3=merge;

    while(pt1 && pt2){
        if(pt1->data < pt2->data) {
            pt3->next = pt1;
            pt1 = pt1->next;
        }
        else {
            pt3->next = pt2;
            pt2 = pt2->next;
        }
        pt3 = pt3->next;
    }
    while(pt1){
        pt3->next = pt1;
        pt1 = pt1->next;
        pt3 = pt3->next;
    }
    while(pt2){
        pt3->next = pt2;
        pt2 = pt2->next;
        pt3 = pt3->next;
    }
    return merge->next;
}

Node* mergeRec(Node *head1,Node *head2){
    if(head1) return head2;
    if(head2) return head1;
    Node *result;
    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRec(head1->next,head2);
    }else{
        result = head2;
        result->next = mergeRec(head1,head2->next);
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node *head1 = new Node(1),*head2 = new Node(2);
    head1->next = new Node(3);
    head2->next = new Node(4);
    head1->next->next = new Node(5);
    //head2->next->next = new Node(6);
    head1->next->next->next = new Node(7);
    //head2->next->next->next = new Node(8);

    display(head1);
    display(head2);

    display(mergetwolinklist(head1,head2));
    display(mergeRec(head1,head2));
}