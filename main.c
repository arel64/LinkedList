#include <malloc.h>
#include "linkedlist.h"
#include <stdio.h>

int compare(const int* a ,const int* b);
int main() {

    LinkedList *listint =(LinkedList *)malloc(sizeof(LinkedList));
    init(listint,compare);

    ListNode * node = malloc(sizeof (ListNode));
    int t = 10;
    int* temp = &t;
    node->key = temp;
    listInsert(listint,node);
    int k = 15,c=13,a=16,d=14;
    int*p = &k;
    listInsertKey(listint,p);
    p = &c;
    listInsertKey(listint,p);
    p = &a;
    listInsertKey(listint,p);
    p = &d;
    listInsertKey(listint,p);

    listDelete(listint,node);
    p = &c;
    ListNode* ret = listSearch(listint,p);
    printf("%d",*(int*)(ret->key));
    listDestroy(listint);
    return 0;
}
int compare(const int* const a ,const int* const b){
    if(*a==*b) return 0;
    return *a>*b ? 1:-1;
}
