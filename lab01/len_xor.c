#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	int len = 0;
	while ( *(str + len))
	len++;

	return len;
}

void equality_check(const char *str)
{
	
	int pow, urm;
	for(int i = 0; i < my_strlen(str); i++)
	{
		pow = 1 << i;
		urm = (i+pow) % my_strlen(str);
		if (!(*(str+i)^*(str+urm)))
		printf ("Caracterul :%c  Adresa :%p \n", *(str+i), (&str+i));
	}


	
	(void) str;
}

int main(void)
{
    char s[50];
	scanf("%s", s);
	printf("lenght = %d \n" ,my_strlen(s));
	equality_check(s);
	
	return 0;
}

