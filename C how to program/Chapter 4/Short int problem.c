#include<stdio.h>

int main(void){
	
	short int a,b,c;
	printf("a=%d b=%d \n",sizeof(a),sizeof(b));
	printf("a=%d b=%d c=%d \n",&a,&b,&c);
	
	/*a=1;
	b=1;
	c=1;
	printf("a=%d, b=%d\n",a,b);
	
	

	
	for(a;a<10;a++){
		printf("a=%d b=%d c=%d b=",a,b,c);
		scanf("%d",&b);
		
			for(b;b>=1;b--){
				printf("a=%d b=%d c=%d c=",a,b,c);
				scanf("%d",&c);
					for(c;c>=1;c--)
						printf("a=%d b=%d c=%d\n",a,b,c);
			}
					
		
	}
	*/
	a=1;
	b=1;
	c=1;
	printf("a=%d, b=%d\n",a,b);
	
		for(c;c<10;c++){
		printf("a=%d b=%d c=%d b=",a,b,c);
		scanf("%d",&b);
		
			for(b;b>=1;b--){
				printf("a=%d b=%d c=%d a=",a,b,c);
				scanf("%d",&a);
					for(a;a>=1;a--)
						printf("a=%d b=%d c=%d\n",a,b,c);
			}
					
		
	}
}
