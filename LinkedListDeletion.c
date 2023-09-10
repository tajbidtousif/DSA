#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
#include<assert.h>

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

struct node* deleteFirstElement(struct Node* head){
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node* deleteAtIndex(struct Node* head, int index){
    struct Node* p = head;
    struct Node* q = head->next;
    int i = 0;

    while(i!=index-1){
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);

    return head;
}

struct node* deleteAtLast(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;

    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    return head;
}

struct node* deleteAfterNode(struct Node* head, struct Node* prevNode){
    struct Node* p = prevNode;
    struct Node* q = prevNode->next;

    p->next = q->next;
    free(q);

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

    head = deleteFirstElement(head);
    printf("After deleting first element\n");
    linkedlistTraversal(head);
}