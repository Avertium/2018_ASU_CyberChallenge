#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	//Password is 'supersecure'
	char passwd[20];
	int len;

	printf("Enter Password: ");
	fgets(passwd, 19, stdin);

	//Get string length
	len = strcspn(passwd, "\n");

	//Strip newline from fgets()
	passwd[strcspn(passwd, "\n")] = 0;

	//printf("The string is %s, and length is %d\n", passwd, len);

	if(len == 11)
		if(passwd[10] == '\x65')
			if(passwd[9] == '\x72')
				if(passwd[8] == '\x75')
					if(passwd[7] == '\x63')
						if(passwd[6] == '\x65')
							if(passwd[5] == '\x73')
								if(passwd[4] == '\x72')
									if(passwd[3] == '\x65')
										if(passwd[2] == '\x70')
											if(passwd[1] == '\x75')
												if(passwd[0] == '\x73')
													{
														printf("Pass! The password is the flag.\n");
														return 0;
													}

			    

	printf("Fail!\n");
	return -1;
}
