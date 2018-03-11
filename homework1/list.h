#ifndef _MY_MATH_H
#define _MY_MATH_H

#include <stdbool.h>
typedef struct Node
{
	int data;
	struct Node *next;
}Node,*List;

void initlist(List plist);
bool insert_head(List plist,int val);
bool insert_tail(List plist,int val);
bool insert_pos(List plist,int pos,int key);

bool delete_head(List plist);
bool delete_tail(List plist);
bool delete_pos(List plist,int pos);

Node *search(List plist,int key);
void reverse(List plist);
void show(List plist);
#endif
