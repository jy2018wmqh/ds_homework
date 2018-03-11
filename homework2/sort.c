#include <stdio.h>

void Sort(int *arr,int len)
{
	int i;
	int j;
	int tmp;
	for(i=1;i<len;i++)
	{
		tmp = arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j] > tmp)
			{
				arr[j+1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j+1] = tmp;
	}
}
void Show(int *arr,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int Search_Sec(int *arr,int len)
{
	int max = arr[0];
	int max_sec = -1;
	int i;
	for(i=1;i<len;i++)
	{
		if(arr[i] > max)
		{
			max_sec = max;
			max = arr[i];
		}
		if(arr[i]<max && arr[i]>max_sec)
		{
			max_sec = arr[i];
		}
	}
	return max_sec;
}
