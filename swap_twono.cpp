#include<stdio.h>
int main(){
	int a,b,c;
	int *ptr_a,*ptr_b;
	printf("enter the 1st no :");
	scanf("%d",&a);
	printf("enter the 2nd no :");
	scanf("%d",&b);
	ptr_a=&a;
	ptr_b=&b;
	printf("Before Swaping :a=%d,b=%d\n",*ptr_a,*ptr_b);
	c=*ptr_a;
	*ptr_a=*ptr_b;
	*ptr_b=c;
	printf("After Swaping :a=%d,b=%d\n",*ptr_a,*ptr_b);
	return 0;
}

/*OUTPUT :-
enter the 1st no :5
enter the 2nd no :6
Before Swaping :a=5,b=6
After Swaping :a=6,b=5  */
