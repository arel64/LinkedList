//
// Created by arels on 28/05/2022.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include "listnode.h"
typedef int (*FTT) (const void *,const void *);

typedef struct{
    ListNode* head;
    FTT compare;
}LinkedList;


void init(LinkedList* l,FTT compare);


void listInsert(LinkedList*,ListNode*);
ListNode* listInsertKey(LinkedList*,void*);




void destroyList(LinkedList*);
#endif //LINKEDLIST_LINKEDLIST_H
