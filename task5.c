#include <stdio.h>

int main () {

	int N ;

	printf("Enterthe number of characters:\n");
	scanf("%d", &N);

	char iteration [N];
	int a = 0;
	int o = 0;
	int e = 0;
	int i = 0;
	int u = 0;
	int others = 0;

	for (int j = 0; j < N; ++j)
	{
		printf("enter the char\n");
		scanf(" %c", &iteration [j]);

		if ((iteration [j] == 'a') || (iteration [j] == 'A')){
			a = a +1;
		}
		else if ((iteration [j] == 'o') || (iteration [j] == 'O')){
                        o = o +1;
                }       
		else if ((iteration [j] == 'e') || (iteration [j] == 'E')){
                        e = e +1;
                }       
		else if ((iteration [j] == 'i') || (iteration [j] == 'I')){
                        i = i +1;
                }       
		else if ((iteration [j] == 'u') || (iteration [j] == 'U')){
                        u = u +1;
                }
		else {
                        others = others +1;
                }
	}

	printf("Frequency of a = %d\n",a);
	printf("Frequency of e = %d\n",e);
	printf("Frequency of i = %d\n",i);
	printf("Frequency of o = %d\n",o);
	printf("Frequency of u = %d\n",u);
	printf("Frequency of others = %d\n",others);

	return 0;
}
