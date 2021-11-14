#include<stdio.h>
int main ()
{
	char x;
	printf(" enter a value");
	scanf("%c",&x);
	if(x>='a' && x<='z' || x>='A' && x<='Z')
	printf("character ");
	else
	printf("not a character");
	return 0;
}
