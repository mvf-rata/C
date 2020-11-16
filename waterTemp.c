#include <stdio.h>

int main()
{
	double temp;
	printf("Enter the temperatur: \n");
	scanf("%lf", &temp);
	if (temp >= 100.0)
		printf("The water is evaporating.\n");
	else if (temp > 0.0)
		printf("The water is fluid\n");
	else
		printf("The water is frozen.\n");
	return 0;
}