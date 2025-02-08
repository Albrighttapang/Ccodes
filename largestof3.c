#include<stdio.h>
int main(){
	int x,y,z;
	printf("Please enter x;");
	scanf("%d", &x);
	printf("Please enter y;");
	scanf("%d",&y);
	printf("Please enter z;");
	scanf("%d",&z);
	int max=x;
	if(max<y){
		max=y;
	}
	if(max<z){
		max=z;
	}
	printf("The largest number is %d\n", max);
	return 0;
}

