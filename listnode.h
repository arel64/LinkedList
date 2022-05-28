//
// Created by arels on 28/05/2022.
//

#ifndef LINKEDLIST_LISTNODE_H
#define LINKEDLIST_LISTNODE_H

typedef struct listNode{
    void*               key;
    struct listNode* prev;
    struct listNode* next;
} ListNode;

#endif //LINKEDLIST_LISTNODE_H
