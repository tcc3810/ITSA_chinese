#include <stdio.h>
int main(){
	int num[6];
	for(int i = 0 ; i < 6 ; i++)
		scanf("%d" , &num[i]);
	for(int j = 5 ; j >= 0 ; j--){
		printf("%d" , num[j]);
		if(j != 0)
			printf(" ");
	}
	printf("\n");
	return 0;
}
