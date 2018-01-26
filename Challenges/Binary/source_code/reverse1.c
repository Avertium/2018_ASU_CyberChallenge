#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char passwd[30];
	printf("Enter the Password: ");
	fgets(passwd, 29, stdin);

	// Strip newline from fgets()
	passwd[strcspn(passwd, "\n")] = 0;

	if(strcmp(passwd, "Str1ngsAr3Fr13nds")==0){
		printf("Pass! The password is the flag.\n");
	}else{
		printf("Fail!\n");
	}

	return 0;
}
