#include<stdio.h>

int main()
{
	int count, counter;

	printf("Upto which number you want odd numbers? ");
	scanf("%i", &count);
	printf("Odd numbers upto %i are ", count);
	counter = 1;
	while(counter < count-1)
	{
		printf("%i, ", counter);
		counter = counter + 2;
	}
	printf("%i.", counter);

	return 0;
}