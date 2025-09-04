#include<stdio.h>

int main()
{
	int count, counter;

	printf("Upto which number you want even numbers? ");
	scanf("%i", &count);
	printf("Even numbers upto %i are ", count);
	counter = 0;
	while(counter < count-1)
	{
		printf("%i, ", counter);
		counter = counter + 2;
	}
	printf("%i.", counter);

	return 0;
}