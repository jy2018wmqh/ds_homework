#include <stdio.h>
#include <assert.h>
#include "../Include/list.h"

void reverse(List plist)
{
	assert(plist != NULL);
	if(plist==NULL || plist->next==NULL || plist->next->next==NULL)
	{
		return ;
	}

	Node *p = plist->next;
	Node *q = p->next;
	Node *s;
	p->next = NULL;
	while(q!=NULL)
	{
		s = q->next;
		q->next =p;
		p = q;
		q = s;
	}
	plist->next = p;
}
