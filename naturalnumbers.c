#include<stdio.h>

int main()
{
	int count, counter;

	printf("how many natural numbers you want? ");
	scanf("%i", &count);
	printf("The natural numbers upto %i are ", count);
	counter = 0;
	counter = counter + 1;
	while(counter < count)
	{
		printf("%i, ", counter);
		counter = counter + 1;
	}
	printf("%i.", counter);

	return 0;
}