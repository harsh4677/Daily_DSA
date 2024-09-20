#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
}

int serachElm(Node* head, int target){
    Node* temp = head;

    while(temp != nullptr){

        if(head->data == target){
            return 1;
            temp = temp->next;
        }
    }
    return 0;
}
