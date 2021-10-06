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

bool detectcycle(Node* head){
    Node *hare = head, *turtle = head;
    while(hare != NULL && hare->next != NULL){
        turtle = turtle->next;
        hare = hare->next->next;
        if(turtle == hare){
            return true;
        }
    }
    return false;
}

void removecycle(Node* &head){
    Node* slow = head, *fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);

    fast = head;

    while(slow->next != fast->next){
        slow =slow->next;
        fast =fast->next;
    }
    slow->next = NULL;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head;

    cout<<detectcycle(head);
    removecycle(head);
    cout<<detectcycle(head);
    
}