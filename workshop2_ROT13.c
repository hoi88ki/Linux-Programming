#include <stdio.h>

char c;

int main(){
	do{
		c = getc(stdin);
		if(feof(stdin))
			break;
		if(((c >= 'A')&&(c <= 'M'))||((c>='a')&&(c<='m')))
			c += 13;
		else if (((c >= 'N')&&(c <= 'Z'))||((c>='n')&&(c<='z')))
			c -= 13;
		printf("%c",c);
	}while(1);
	return 0;
}