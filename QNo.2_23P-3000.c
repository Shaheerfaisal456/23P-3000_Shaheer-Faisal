#include<stdio.h>
int main () {
	int n,i;
	int a;
	a=3*n+1;
	int b;
	b=n/2;
	printf("Upper limit number N : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	
	if(i%n==2) {
		
		printf("%d",b);
		
		
	}
	else if(i%n==1){
	printf("%d",a);
	}

	if(a==1 || b==1) {
		continue;
	}	
	printf("Length of the longest Collatz sequence: %d\n",a,b);
	
	


}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

