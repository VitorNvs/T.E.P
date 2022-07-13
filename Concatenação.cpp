#include <stdio.h>

/**********************************
*	   Concatenando Strings	      *
**********************************/

int len(char str[100]) {
	int tam = 0;
	while(str[tam] != '\0') {
		tam++;
	}
	return tam;
}

int main() {
	char str1[20];
	gets(str1);
	char str2[20];
	gets(str2);
	
	int tam = len(str1) + len(str2);
	
	char str3[40];
	
	int j = 0;
	for(int i = 0; i < tam; i++) {
		if(i < len(str1)){
			if(str1[i] != '\0') {
				str3[i] = str1[i];	
			}	
		}
		else{
			if(str2[j] != '\0') {
				str3[i] = str2[j];	
				j++;
			}
		}
			
	}
	
	str3[tam] = '\0';
	printf("%s",str3);
	
}
