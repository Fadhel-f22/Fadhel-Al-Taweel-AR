#include <stdio.h>

int main ()
{
	float Inc ;
	int N ;

	printf("please enter a positive integer N:\n");
	scanf("%d",&N);

	printf("please enter an increment value less than 1:\n");
        scanf(" %f",&Inc);

	printf("descending order\n");

	for (int i=N; i>=0;--i)
	{
		printf("%d",i);
	}
	printf("\n");
	printf("Incremental order\n");

	 for (int i=1; i<=N;++i)
        {
                printf("%d",i);
        }
	printf("\n");
	printf("Incremental order with Inc less than 1\n");
	 if (Inc < 1)
	{ 
		for (float i=0.0; i<=N;i=i+Inc)
	{
                printf("%.2f  ",i);
        }
	printf("\n");
	}
	else
	{
		printf("Error");
	}

	return 0;
}
