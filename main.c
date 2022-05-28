#include <malloc.h>
#include "linkedlist.h"


int compare(int* a ,int* b);
int main() {

    LinkedList *listint =(LinkedList *)malloc(sizeof(LinkedList));
    init(listint,compare);

    ListNode * node = malloc(sizeof (ListNode));
    int t = 10;
    int* temp = &t;
    node->key = temp;
    listInsert(listint,node);
    int k = 15;
    int*p = &k;
    listInsertKey(listint,p);


    destroyList(listint);
    return 0;
}
int compare(int* const a , int* const b){
    if(*a==*b) return 0;
    return *a>*b ? 1:-1;
}
