#include <stdio.h>
#include <string.h>
#include "phone.h"
extern int size;


void searchByName(){
	char b[10];
	printf("Enter a name to search: ");
	scanf("%s",b);

	int i=0;
	for(i=0; i< size; i++){
		if(strcmp(b,PhoneBook[i].Name)==0){
			printf("%s	%s\n",PhoneBook[i].Name,PhoneBook[i].PhoneNumber);
			break;}
		else
			printf("Oops! %s is not in the PhoneBook.",b);
		}
printf("\n");
}

