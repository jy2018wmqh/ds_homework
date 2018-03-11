#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10] = {12,5,38,16,258,69,0,128,286,77};
	int len = sizeof(arr)/sizeof(arr[0]);
  
	if(fork() == 0)
	{
		//Sort(arr,len);
		//printf("%d\n",arr[len-2]);
		printf("%d\n",Search_Sec(arr,len));
	}
	else
	{
		Sort(arr,len);
		Show(arr,len);
	}
	exit(0);
}
