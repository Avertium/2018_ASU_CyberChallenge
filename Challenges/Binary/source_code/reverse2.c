#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* genPass(){
	char ctext[] = "How0r0cm2QArrv1se";
	char key[] = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
	char *output = malloc(12 * sizeof(char));
	int i;

	for (i=0; i<strlen(ctext); i++){
		char temp = ctext[i] ^ key[i];
		output[i] = temp;
	}

	output[i] = '\0';

	return output;
}

int main(){
	char passwd[20];
	char* secret;	

	printf("Enter Password: ");
	fgets(passwd, 29, stdin);

	// Strip newline from fgets()
	passwd[strcspn(passwd, "\n")] = 0;

	secret = genPass();
	
	if(strcmp(passwd, secret) == 0)
		printf("Pass! The password is the flag.\n");
	else
		printf("Fail!\n");

	free(secret);

	return 0;
}

	
	
