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

ListNode* listInsert(LinkedList*,ListNode*);
ListNode* listInsertKey(LinkedList*,void*);

void listDelete(LinkedList*,ListNode*);

ListNode* listSearch(LinkedList*,void*);


void listDestroy(LinkedList*);
#endif //LINKEDLIST_LINKEDLIST_H
