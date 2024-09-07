/*

 	Example: Write a program, which reads 10 real values and stores them in a vector. Next, 
 	search for positive numbers and calculate their sum.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int i;
	float vector[MAX], sum;
	
	printf("Enter %d real values: \n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%f",&vector[i]);
	}
	
	for(i = 0; i < MAX; i++){
		if(vector[i] >= 0) {
			sum = sum + vector[i];	
		}
	}
	
	printf("Sum of the positive numbers in the vector: %.2f\n", sum);

	return 0;
}
