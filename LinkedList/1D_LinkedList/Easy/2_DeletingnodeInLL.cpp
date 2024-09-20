#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(Node* next1, int data1){
        data = data1
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
}

void printll(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


Node* deleteLL(Node* head){
    if(head = NULL || head->next == NULL){
        return NULL;
    }

    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;

    temp->next = nullptr;
    return head;
}

