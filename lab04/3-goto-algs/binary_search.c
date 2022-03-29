#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = v[2]; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;
	int mijloc;


	/* TODO: Implement binary search */
binar:
	mijloc = (start + end) / 2;
	if(v[mijloc] == dest)
	{
	printf("\nElement gasit pe pozitia %d\n" , mijloc);
	return 0;
	}
	if(end < start)
	{
	printf("\nElementul nu este in sir\n");
	return 0;
	}
	if(dest > v[mijloc] )
	{
	start = mijloc + 1;
	goto binar;
	}
	end = mijloc - 1;
	goto binar;
	




}
