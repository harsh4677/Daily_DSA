#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

}

Node* ArrayToDLL(vector<int>& arr ){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp =new Node(arr[0], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
    
}

Node* inserttail(Node* head, int k){
    Node* newNode = new Node(k);

    if(head == nullptr){
        return NULL;
    }

    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    tail->next = newNode;
    newNode->back = tail;

    return head;
}
