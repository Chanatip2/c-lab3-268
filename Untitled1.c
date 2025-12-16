#include <stdio.h>

int main(){
	int score;
	
	scanf("%d",&score);
	if (score < 0 || score > 100) {
		printf("Error\n");
	} else if (score >= 68){
		if (score >= 85){
			printf("A");
		} else if (score >= 75){
			printf("B");
		} else if (score >= 65){
			printf("C\n");
			printf("You need %d more points to Get B.\n",75 - score);
		}
	} else {
		if (score >= 55){
			printf("D");
		} else {
			printf("F");
		}
	}
	return 0;
}


