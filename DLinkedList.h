//
//  DLinkedList.h
//  DoublyLinkedList
//
//  Created by Royshawn McClain on 10/31/18.
//  Copyright © 2018 Royshawn McClain. All rights reserved.
//

#ifndef DLinkedList_h
#define DLinkedList_h


#include<iostream>

namespace dlinkedlist
{
    using namespace std;
    
    struct Node
    {
        int data;
        Node *next,*prev;
    };
    class DLinkedList
    {
    private:
        Node *head,*tail;
    public:
        DLinkedList();
        void insert_head(int);
        void insert_tail(int);
        void insert_before(int);
        void insert_after(int);
        void delete_head();
        void delete_tail();
        void delete_pos();
        void display();
 
    };
}

#endif /* DLinkedList_h */
