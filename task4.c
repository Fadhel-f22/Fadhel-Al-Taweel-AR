#include <stdio.h>
int main () {

	int x = 0;	
	int y = 0;
	int i ;
	char str ;

	printf("Enter your X position: \n");
	scanf("%d", &x);

	printf("Enter your Y position: \n");
        scanf(" %d", &y);

	while( x>=0 && x <=4 && y>=0 && y<=4){
		printf("enter your direction\n");
		scanf("%c", &str);	
		
		if ( str == 'r' ){
			x = x + 1;
			if (x > 4){
				break;
			}
		}
		if ( str == 'l' ){
                        x = x - 1;
                        if (x < 0){
                                break;
                        }
                }
		if ( str == 'u' ){
                        y = y - 1;
                        if (y < 1){
                                break;
                        }
                }
		if ( str == 'd' ){
                        y = y + 1;
                        if (y > 4){
                                break;
                        }
                }

	}
	if ( x == 5){
	printf("The player has reached the boundary at (%d,%d)\n",x-1,y);
	}
	else if ( x == 0){
        printf("The player has reached the boundary at (%d,%d)\n",x+1,y);
        }
	else if ( y == 5){
        printf("The player has reached the boundary at (%d,%d)\n",x,y-1);
        }
	else if ( y == 0){
        printf("The player has reached the boundary at (%d,%d)\n",x,y+1);
        }


	return 0;
}
