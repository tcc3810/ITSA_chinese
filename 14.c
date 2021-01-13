#include <stdio.h>
#define SWAP(a , b) {int tmp = a; a = b; b = tmp;}
int main(){
	int map[7];
	int x = 0;
	char t;
	while(scanf("%d" , &map[x]) != EOF){
		scanf("%c" , &t);
		x++;
	}
	for(int i = x - 2 ; i >= 0 ; i--){
		for(int j = 0 ; j < i + 1 ; j++){
			if(map[j] < map[j + 1])
				SWAP(map[j] , map[j + 1]);
		}
	}
	int j = x - 1;
	int max = 0;
	int min = 0;
	for(int i = 0 ; i < x ; i++){
		int power = 1;
		int cont = 1;
		while(cont != x - i){
			power = power * 10;
			cont++;
		}
		max = max + power * map[i];
		min = min + power * map[j];
		j--;
	}
	//printf("max : %d\n" , max);
	//printf("min : %d\n" , min);
	printf("%d\n" , max - min);
	return 0;
}
