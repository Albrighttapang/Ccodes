#include<stdio.h>
int main(){
	int x,y,temp;
	printf("Please enter x;\n");
	scanf("%d",&x);
	printf("Please enter y;\n");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("X is now %d and y in now %d\n",x,y);
	return 0;}
