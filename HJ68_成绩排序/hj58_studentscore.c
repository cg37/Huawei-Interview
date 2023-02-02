#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    struct student* pre;
    struct student* next;
    char name[16];
    int grade;
};
typedef struct {
    struct student* node;
    int size;
} head_node;

void add_node(head_node* head, struct student* node) {
    if(head -> size ==0) {
        node -> pre = node;
        node -> next = node;
        head -> node = node;
        head -> size = 1;
    } else {
        struct student* first = head->node;
        struct student* last = first->pre;
        first -> pre = node;
        node -> next = first;
        last -> next = node;
        node -> pre = last;
        head -> siez
    }
}