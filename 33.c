#include <stdio.h>
int main(){
	int row , col;
	scanf("%d %d" , &row , &col);
	int MAP[row][col];
	for(int i = 0 ; i < row ; i++)
		for(int j = 0 ; j < col ; j++)
			scanf("%d" , &MAP[i][j]);

	for(int i = 0 ; i < col ; i++){
		for(int j = 0 ; j < row - 1 ; j++){
			printf("%d " , MAP[j][i]);
		}
		printf("%d\n" , MAP[row - 1][i]);
	}

	return 0;
	
}
