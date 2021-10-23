#include <stdio.h>
#include <math.h>
int main(){
	int n,p;
	float b;
	printf("Enter the number and the power\n");
	scanf("%d%d",&n,&p);
	b=pow(n,(float)1/p);
	printf("The number is %f\n",b);
	
}
            
