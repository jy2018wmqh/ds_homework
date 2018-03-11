#include <stdlib.h>
#include <stdbool.h>
#include "../Include/list.h"

bool insert_pos(List plist,int pos,int key)
{
	int i;
	Node *p;
	for(p=plist,i=0;p!=NULL&&i<pos;i++,p=p->next)  ;
	if(i<pos || p==NULL)
	{
		return false;
	}

	Node *q = (Node *)malloc(sizeof(Node));
	q->data = key;
	q->next = p->next;
	p->next = q;
	return true;
}
