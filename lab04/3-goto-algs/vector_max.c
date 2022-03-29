#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 13,27, 15, 22, 6, 20};
	int max;
	int i;

	/* TODO: Implement finding the maximum value in the vector */
	max = v[0];
	i = 1;
	int iteratii = sizeof(v) / sizeof(i);
aici:

	if(max < v[i])
	max = v[i];
	i++;
        if( i < iteratii )
        goto aici;
    
    printf("maximul este %d\n" , max);

    return 0;
}


