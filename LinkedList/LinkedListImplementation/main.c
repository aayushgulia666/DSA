#include <stdlib.h>
#include <stdio.h>

/**
 * author: Aayush Gulia
 * email: aayushgulia88@gmail.com
 * website: https://www.aayushgulia.com
 * dated: 01-08-2022 16:51
 *
 * Program to implement Linked List in C programming language
 */

struct Node{
    int data;
    struct Node * next;
};

struct Node * first;

void Create(int A[], int n){ // n -> length of array.
    int i;
    struct Node *t, *last;              // t -> temporary node, last -> last node.

    first = (struct Node *)malloc(sizeof (struct Node));

    first->data = A[0];
    first->next = NULL;

    last = first;

    for(i = 1; i < n; i++){
        t = (struct Node *) malloc(sizeof (struct Node));
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
}

void Display(struct Node * p){
    while (p){
        printf("%d\n", p->data);
        p = p->next;                // goes to next node.
    }
}

int Count (struct Node * p){
    int c = 0;
    while(p != NULL){
        c++;
        p = p->next;
    }

    return c;
}

int main(){

    int A[10] = {1,2,3,4,5,6,7,8,9,0};
    int len = 10;

    Create(A, len);
    Display(first);
    printf("%d\n", Count(first));

    return 0;
}
