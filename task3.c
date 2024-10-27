#include <stdio.h>
int main ()
{
	int num_city ;

	printf("enter the number of cities\n");
	scanf("%d",&num_city);
	
	int populations[num_city];
    	int total = 0;
    	int max;
        int min;
	float average;

	for (int i=0; i < num_city; i++)
	{
		printf("enter the population of city %d\n",i+1);
		scanf(" %d",&populations[i]);
		total = total + populations[i];

		if (i==0) {
			max = min = populations[i];
		}
		else if (populations[i] > max)
		{	
			max = populations[i];
		}
		if (populations[i] < min)
		{
			min = populations[i];
		}
	}

	average = total/num_city;

	printf("mean population:%.2f\n",average);
	printf("Max population: %d\n", max);
	printf("Min population: %d\n", min);

	return 0;
}

