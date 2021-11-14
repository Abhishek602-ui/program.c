#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter 3 digits");
	scanf("%d%d%d",&x,&y,&z);
	if(x > y && x > z)
	printf("x is greater");
	else if(y > x && y > z)
	printf("y is greater");
	else
	printf("z is greater");
	return 0;
}
