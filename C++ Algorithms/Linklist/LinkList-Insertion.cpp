#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head,int val){
    node* n = new node(val);
    if(head == nullptr){
        head = n;
    }
    node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = n;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}