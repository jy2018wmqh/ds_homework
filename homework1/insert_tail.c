#include <stdlib.h>
#include <stdbool.h>
#include "../Include/list.h"

bool insert_tail(List plist,int val)
{
	Node *p;
	for(p=plist;p->next!=NULL;p=p->next)  ;

	Node *q = (Node *)malloc(sizeof(Node));
	q->data = val;
	q->next = p->next;
	p->next = q;
	return true;
}
