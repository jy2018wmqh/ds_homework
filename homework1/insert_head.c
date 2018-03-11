#include <stdlib.h>
#include <stdbool.h>
#include "../Include/list.h"

bool insert_head(List plist,int val)
{
	Node *p = (Node *)malloc(sizeof(Node));
	p->data = val;
	p->next = plist->next;
	plist->next = p;
	return true;
}
