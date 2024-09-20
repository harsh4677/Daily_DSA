#include<bits/stdc+=.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(Node* next1, int data1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr
    }
}

int lengthofLinkedlist(Node* head){
    Node* temp = head;
    int count = 0;

    while(tmep != NULL){
        temp = temp->next;
        count++;
    }

    return count;
}
