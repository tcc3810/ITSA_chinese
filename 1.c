#include <stdio.h>
int main(){
	int num[100];
	int i = 0;
	while(scanf("%d" , &num[i]) != EOF)
		i++;
	for(int j = i - 1 ; j >= 0 ; j--){
		printf("%d" , num[j]);
		if(j != 0)
			printf(" ");
	}
	printf("\n");
	return 0;
}
