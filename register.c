#include<stdio.h>
#include<string.h>
#include"phone.h"
extern int size;
static int err=0;
void registerPhoneData() {
	char pw[] = "qwerty1234";
	printf("password: ");

do{
	char a[30];
	scanf("%s",a);
	if(strcmp(a,pw)==0){
		printf("New User Name: ");
		scanf("%s", PhoneBook[size].Name);
		printf("PhoneNumber: ");
		scanf("%s", PhoneBook[size].PhoneNumber);
		printf("Registered...");
		size++;
		break;
	}
	else{
		err++;
	if(err==3){
		printf("You are not allowed to cccees PhoneBook.");
		}
	}
}
while(err != 3);  
}
