#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern)
{
	char ok1 = 1;
	unsigned int i = 0;
	for(; i < strlen(s) && ok1; i ++)
	{
		char ok2 = 1;
		unsigned int j = 0;
		for(; j < strlen(pattern) && ok2; j++)
		{
			if( *(s+i+j) != *(pattern + j))
			ok2 = 0;
		}

		if(ok2)
		{	
			printf("Pattern-ul se afla pe pozitia %u\n" , i);
			ok1 = 0;
			unsigned int x=0;
		
			for(; x<j; x++)
			{
				s+i+x = s+i+x+j;
			}
			
			
		}



	}


	return s;
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";

	(void) s;
	(void) pattern;

	// Decomentati linia dupa ce ati implementat functia delete_first.
	 printf("%s\n", delete_first(s, pattern));

	return 0;
}
