#include<stdio.h>
#include<stdlib.h>

//  Definition for singly-linked list.
 struct ListNode {
    int val;
     struct ListNode *next;
 };
 


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* Node=head;
    struct ListNode* temp=head;
    int counter=0;
    if(Node->next==NULL)
    {
        free(head);
        return NULL;
    }
    while(Node!=NULL)
    {
        counter++;
        Node=Node->next;
    }
    Node=head;
    counter-=n;
    while(Node->next!=NULL && counter>1)
    {
        counter--;
        Node=Node->next;
    }
    
    if(Node->next!=NULL &&counter!=0)
    {
        temp=Node->next;
        Node->next=Node->next->next;
        free(temp);
    }else if(counter==0)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    return head;
}