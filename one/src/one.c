/*
 ============================================================================
 Name        : one.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	//printf("%s",argv[1]);
	char buffer[100];
	scpy(buffer,argc,argv);
	printf("%s",buffer);
	/*while(buffer[i]!='\0')
	{
		printf("")
	}*/
	//printf("%s",buffer);
	puts("!!!Hello World excels!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

void scpy(char *fr,int dg, char **ss)
{
	int i=1;
		int count=0;
		int buffer[100];
		*(ss++);
		while(i<dg)
		{
	char *s=*(ss++);
	while(*s != '\0')
	{
		//printf("%c\n",*(s++));
		*(fr+count)=*(s++);
		count++;
	}
	*(fr+count)=' ';
				count++;
	++i;
	}
		*(fr+count)='\0';
						count++;
}
