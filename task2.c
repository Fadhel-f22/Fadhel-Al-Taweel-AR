#include <stdio.h>

int main ()
{
	int N ;
	int flag=0 ;

	printf("please enter yoyr Number:\n");
	scanf("%d",&N);

	for (int i = 2; i<=N*0.5;i++)
	{
		if (N==2)
		{ 
			flag = 0;
			break;
		}

		if (N<2)
		{
                        flag = 1;
                        break;
                }

		if (N % i == 0)
		{
                        flag = 1;
               
		}
	}
	if (flag == 0)
	{
	printf("the number is prime");
	}
	else
	{
	printf("the number is not prime");
	}
	return 0;
}

