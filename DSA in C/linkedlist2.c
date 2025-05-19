#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node tNode;
tNode* newNode(int data1) {
    tNode* temp = (tNode*)malloc(sizeof(tNode));//allocating memory to structure
    temp->data = data1;
    temp->next = NULL;
    return temp;//returns address of created structure/pointer to a structure 
}

void traverseLinkedList(tNode* head){
    tNode* current = head;
    while(current!=NULL){ //if pointers points to a structure irrespective of whether address is there or not, then it is NOT NULL, whereas if its pointing to nothing, then its NULL. 
        printf("%d ",current->data);//continue from above, current->next basically means current.next so it points to the next structure(node).
        current = current->next;
    }
    printf("\n");
}


tNode* delete(tNode* head, int del){
    tNode* current=head;
    tNode* prev=NULL;
    if(head->data==del){
        tNode* temp = head;
        head=head->next;
        free(temp);
        return head;
    }
    while(current!=NULL && current->next!=del){
        prev=current;
        current=current->next;
    }
    if(current==NULL){
        printf("data not found");
        return head;
    }
    prev->next=
}



tNode* insertAtEnd(tNode* head,int values){
    tNode* new_node = newNode(values);
    if(head==NULL){
        return new_node;
    }
    tNode* curr=head;
    while(curr->next != NULL){
        curr=curr->next;
    }
    curr->next=new_node;
    return head;

}

int main() {
    int target,found;
    tNode* head = NULL;
    head=insertAtEnd(head,10);
    head=insertAtEnd(head,20);
    head=insertAtEnd(head,30);
    head=insertAtEnd(head,40);
    head=insertAtEnd(head,50);
    traverseLinkedList(head);
    head=delete(head,30);
    traverseLinkedList(head);

}