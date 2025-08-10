#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
//to print data if a pointer is assigned to head then we can locate all the other datas 
//traversal of list
void linklist(struct node*ptr){
    while (ptr !=NULL){
    printf("element %d\n",ptr->data);
    ptr = ptr->next;
    }
}
int main(){
    struct node * head; //head 1st space of linklist
    struct node * second;
    struct node * third;
    struct node * fourth;
    //allocate memory for nodes in the linked list in heap
    head=(struct node *) malloc (sizeof(struct node));
    second=(struct node *) malloc (sizeof(struct node));
    third=(struct node *) malloc (sizeof(struct node));
    fourth=(struct node *) malloc (sizeof(struct node));
    //link first and second nodes
    head->data =7;
    head->next=second; //pointer allocating to second data
    
    //link second and third nodes
    second->data =11;
    second->next=third; //pointer allocating to third data
    
    //link second and fourth nodes
    third->data =66;
    third->next=fourth; //pointer allocating to fourth data
    
    //terminating the list
    fourth->data =35;
    fourth->next=NULL; //pointer allocating to NULL
    
    linklist(head);// since head==ptr
    
    return 0;

}