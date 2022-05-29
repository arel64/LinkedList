//
// Created by arels on 28/05/2022.
//
#include<stdio.h>
#include "linkedlist.h"
#include "malloc.h"


/*
 * Assume allocated
 */
void init(LinkedList* l,FTT compare){
    l->compare = compare;
    l->head = NULL;
}
ListNode* listInsert(LinkedList* l,ListNode* node){
    node->next = l->head;
    if(l->head != NULL){
        l->head->prev = node;
    }
    l->head = node;
    node->prev = NULL;
    return node;
}
ListNode* listInsertKey(LinkedList* l ,void* key){
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    if(!node){
        return NULL;
    }
    node->key = key;

    return listInsert(l,node);
}
void listDelete(LinkedList* l ,ListNode* p){
    if(p->prev != NULL){
        (p->prev)->next = p->next;
    }else{
        l->head = p->next;
    }
    if(p->next!=NULL)
        (p->next)->prev = p->prev;
}

ListNode* listSearch(LinkedList* l,void* p){
    ListNode* iter = l->head;
    while(iter!=NULL && (l->compare(iter->key,p)!=0)){
        iter = iter->next;
    }
    return iter;
}
void listDestroy(LinkedList* l){
    ListNode* iter =  l->head;
    ListNode* temp;
    while(l->head != NULL)
    {
        temp = l->head;
        l->head = l->head->next;
        free(temp);
    }
    free(iter);
    free(l);
    l=NULL;
}