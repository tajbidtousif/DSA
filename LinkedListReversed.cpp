#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

};

void linkedlistTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* ReversedLinkedList(struct Node* head){
    struct Node* prevptr = NULL;
    struct Node* currptr = head;
    struct Node* nextptr;

    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}


int main(){
    
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data =30;
    third->next = NULL;

    linkedlistTraversal(head);

    head = ReversedLinkedList(head);
    printf("After Reversing\n");
    linkedlistTraversal(head);
    
    return 0;
}