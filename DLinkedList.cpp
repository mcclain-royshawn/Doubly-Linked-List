//
//  DLinkedList.cpp
//  DoublyLinkedList
//
//  Created by Royshawn McClain on 10/31/18.
//  Copyright © 2018 Royshawn McClain. All rights reserved.
//

#include "DLinkedList.h"
#include <iostream>
using namespace dlinkedlist;

DLinkedList::DLinkedList()
{
    head=NULL;
    tail=NULL;
}

void DLinkedList::insert_head(int value) {
    Node* temp=new Node;
    temp->data=value;
    if(head==NULL && tail==NULL) {
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        tail=temp;
    } else {
        head->prev=temp;
        temp->next=head;
        temp->prev=NULL;
        head=temp; }
    }

void DLinkedList::insert_tail(int value) {
    Node* temp=new Node;
    temp->data=value;
    if(head==NULL && tail==NULL) {
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        
        tail->next=temp;
        temp->next=NULL;
        temp->prev=tail;
        tail=temp;
    }
}

void DLinkedList::insert_before(int value){
    
    Node* temp=new Node;
    Node* after_node=new Node;
    temp->data=value;
    if(head==NULL && tail==NULL) {
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        tail=temp;
    }
    
    else{
        int node_num;
        
        cout<<"Enter a node number to enter before."<<endl;
        cin>>node_num;
        after_node=head;
        
        for (int i=0;i<node_num;i++)
        {
            temp=after_node;
            after_node=after_node->next;
        }
        
        temp->next=after_node;
        temp->prev=after_node->prev;
        temp->prev->next=temp;
        after_node->prev=temp;
    }
    
}

void DLinkedList::insert_after(int value)
{
    Node* temp=new Node;
    Node* prev_node=new Node;
    temp->data=value;
    if(head==NULL && tail==NULL) {
        temp->next=NULL;
        temp->prev=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        int node_num;
        
        cout<<"Choose a node number to enter after."<<endl;
        cin>>node_num;
        prev_node=head;
        
        for (int i=0;i<=node_num;i++)
        {
            prev_node=prev_node->next;
            temp=prev_node;
        }
        
        temp->prev=prev_node;
        temp->next=prev_node->next;
        temp->next->prev=temp;
        prev_node->next=temp;
        
        if(temp->next != NULL)
        {
            temp->next->prev= temp;
        }
    }
}

void DLinkedList::delete_head()
{
    Node* temp=new Node;
    temp=head;
    head->prev=NULL;
    head=temp->next;
    delete temp;
    

}

void DLinkedList::delete_tail()
{
    Node* temp=new Node;
    temp=tail;
    tail->prev=NULL;
    tail=temp->prev;
    delete temp;
    
}

void DLinkedList::delete_pos()
{
    int pos;
    Node* temp = new Node;
    temp=head;
    
    cout<<"Enter a position to delete: ";
    cin>>pos;
    for (int i=0;i<pos;i++)
    {
        temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
}

void DLinkedList::display()
{
    int counter=1;
    
    while (head!=NULL) {
        cout<<"Node "<<counter<<": "<<head->data<<endl;
        head=head->next;
        counter++;

}
