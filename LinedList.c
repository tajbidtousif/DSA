#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
#include<assert.h>
#include<stdbool.h>

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

struct node* insertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node* insertAtIndex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;

    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node* insertAtEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct node* insertAfterNode(struct Node* head, struct Node* prevNode, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
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

    // head = insertAtFirst(head, 56);
    // linkedlistTraversal(head);

    // head = insertAtIndex(head, 56, 2);
    // linkedlistTraversal(head);

    head = insertAfterNode(head, 1, 25);
    linkedlistTraversal(head);
    
    return 0;
}