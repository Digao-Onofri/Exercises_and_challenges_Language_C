/*

 	Example:  Make a program that reads an A matrix of integers (3x3). Next, read a matrix B (3x3). 
  	Create a matrix C (3x3) composed of the largest values of each position of A and B. 
   	Print C as answer. 
 	Youtube lesson: https://youtu.be/ACdqQJk9SEE
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 3
int main()
{
	int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], i, j;

	printf("Enter the values of the matrix a:\n");
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			scanf("%d", &a[i][j]);
		}
	} 

	printf("Enter the values of the matrix b:\n");
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			scanf("%d", &b[i][j]);
		}
	} 

	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			if(a[i][j] > b[i][j]){
				c[i][j] = a[i][j];
			}
			else{
				c[i][j] = b[i][j];
			}
		}
	}

	printf("The matrix with the biggest values is equal to:\n");
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){      
                	printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
