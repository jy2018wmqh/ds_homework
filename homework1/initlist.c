#include <stdio.h>
#include <assert.h>
#include "../Include/list.h"

void initlist(List plist)
{
	assert(plist != NULL);
	if(plist == NULL)
	{
		return ;
	}
	plist->next = NULL;
}
