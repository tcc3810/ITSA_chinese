#include <stdio.h>
int main(){
	int num[6];
	int cal = 0;
	for(int i = 0 ; i < 6 ; i++)
		scanf("%d" , &num[i]);
	for(int j = 5 ; j >= 0 ; j--){
		cal = cal + num[j] * num [j] * num[j];
	}
	printf("%d\n" , cal);
	return 0;
}
