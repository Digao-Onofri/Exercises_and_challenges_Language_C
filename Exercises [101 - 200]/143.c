/*

 	Example:  Make a function that takes an array of integers, their size (N), and two integer 
 	variables. Store the minimum and maximum value of the array in these variables. The main 
 	must read N, read the vector, call the function, and print the smallest value separated from 
 	the largest by a single space. Use only pointer arithmetic, that is, make this program 
 	without using square brackets. In Moodle, enter your full program (main + roles). 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>

void mami(int *a, int n, int ma, int mi);

int main() {
	int *a;
	int i, n, ma, mi;
	
	scanf("%d", &n);
	
	a = (int *)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++) {
		scanf("%d", (a + i));
	}
	
	ma = *(a + 0);
	mi = *(a + 0);
	
	mami(a, n, ma, mi);
	
	return 0;
}

void mami(int *a, int n, int ma, int mi) {
	int i;
		
	for(i = 0; i < n; i++) {
		if(*(a + i) > ma) {
			ma = *(a + i);
		}
		if(*(a + i) < mi) {
			mi = *(a + i);
		}
	}
	
	printf("%d %d", mi, ma);
}
