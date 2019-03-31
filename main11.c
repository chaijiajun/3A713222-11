#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	printf("\n");
	scanf("%d",&x);
	printf("\n");
	scanf("%d",&y);
	printf("\n");
	scanf("%d",&z);
	if(x>y)
	{
	if(y>z)
	printf("%d>%d>%d",x,y,z);
	else if(z>y)
	printf("%d>%d>%d",x,z,y);
    }
    if(y>z)
	{
	if(z>x)
	printf("%d>%d>%d",y,z,x);
	else if(x>z)
	printf("%d>%d>%d",y,x,z);
    }
    if(z>x)
	{
	if(x>y)
	printf("%d>%d>%d",z,x,y);
	else if(y>x)
	printf("%d>%d>%d",z,y,x);
    }
	system("pause");
	return 0;
}
