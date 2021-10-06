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

int intersection(Node* head1,Node* head2){
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}