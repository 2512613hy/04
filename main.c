#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int time;
	
	printf("input seconds :");
	scanf("%i", &time);
	
	printf("the time is %i : %i\n", time/60, time%60);
 	
	return 0;
}
