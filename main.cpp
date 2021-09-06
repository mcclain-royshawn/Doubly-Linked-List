//
//  main.cpp
//  DoublyLinkedList
//
//  Created by Royshawn McClain on 10/31/18.
//  Copyright © 2018 Royshawn McClain. All rights reserved.
//

#include "DLinkedList.h"
using namespace dlinkedlist;

int main()
{
    DLinkedList d1;
    
    d1.insert_head(35);
    d1.insert_tail(63);
    d1.insert_head(42);
    d1.insert_after(36);
    d1.display();
    
    return 0;
}
