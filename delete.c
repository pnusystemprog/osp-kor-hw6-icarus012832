#include <stdio.h>
#include <string.h>
#include "phone.h"
extern int size;

void deleteByName(){
	char c[13];
	printf("Enter a name to delete : ");
	scanf("%s",c);

	int i;
	for(i=0;i<size;i++){
		if(strcmp(c,PhoneBook[i].Name)==1){
			int d;
			for(d=i; i<size;d++){
				strcpy(PhoneBook[d].Name,PhoneBook[d+1].Name);
				strcpy(PhoneBook[d].PhoneNumber,PhoneBook[d+1].PhoneNumber);
				}
			}
	size--;
	printf("%s is deleted...",c);
	}
}	

