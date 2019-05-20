#include <stdio.h>
#include <string.h>
#include "phone.h"

extern int size;

void printAll(){
	printf("<<Display all contacts in the PhoneBook >>");
	int i=0;
	for(i=0; i<size; i++){
		printf("%s	%s\n",PhoneBook[i].Name,PhoneBook[i].PhoneNumber);
	}
	printf("\n");
}
