# include<stdio.h>
int main()
{
	int num;
	printf("enter a number ");
	scanf("%d",&num);
	if((num%5==0) && (num%11==0))
	printf("no is divisible by 5 and 11");
	else 
	printf("the no. is not divisible");
	return 0;
}
