#include<stdio.h>
int main()
{
	int n,arr[100],i;
	printf("enter how many array elements :");
	scanf("%d",&n);
	printf("enter the elements are :\n");
	for(i=0;i<n;i++){
		scanf("%d",&(*(arr+i)));
	}
	printf("Array elements are :\n");
	for(i=0;i<n;i++){
		printf("%d",*(arr+i));
	}
	return 0;
}

/*OUTPUT :-
enter how many array elements :5
enter the elements are :
2
4
6
8
1
Array elements are :
24681 */
