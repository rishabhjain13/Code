#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = val;
        next = NULL;
    }
};

Node* reversek(Node* &head,int k){
    Node *prev = NULL,*curr=head,*nxt;
    int count =0;
    while(curr != NULL && count<k){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}