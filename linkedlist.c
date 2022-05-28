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
void listInsert(LinkedList* l,ListNode* node){
    node->next = l->head;
    if(l->head != NULL){
        l->head->prev = node;
    }
    l->head = node;
    node->prev = NULL;
}
ListNode* listInsertKey(LinkedList* l ,void* key){
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->key = key;
    listInsert(l,node);
}
void destroyList(LinkedList* l){
    ListNode* iter =  l->head;
    ListNode* temp;
    while(iter->next!=NULL)
    {
        temp = iter->next;
        iter->prev = NULL;
        iter->next = NULL;
        iter->key  = NULL;
        free(iter);
        iter = temp;
        temp = NULL;
    }
    iter->prev = NULL;
    iter->next = NULL;
    iter->key  = NULL;
    free(iter);
    free(l);
}