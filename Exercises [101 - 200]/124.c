/*

 	Example:  Make a program that declares a structure for the registration of N students, where 
 	the user informs N. Store the following information about the students: enrollment, full 
 	name, and age. Using pointer arithmetic, read the information from N students, and 
 	then show the name of the oldest student and the youngest student. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>

typedef struct registration {
	char enroll[50];
	char name[50];
	int age;
} registration;

int main() {
	int N;
	printf("Amount of registers:\n");
	scanf("%d", &N);
	
	registration v[N];
	int i, *p, bigger = 0, lower = 0;
	
	for(i = 0; i < N; i++) {
		printf("Enter the enrollment number:\n");
		scanf(" %s", v[i].enroll);
		printf("Enter the name:\n");
		scanf(" %[^\n]", v[i].name);
		printf("Enter the age:\n");
		scanf(" %d", &v[i].age);
	}
	
	for(i = 0; i < N; i++) {
		p = &v[i].age;
		if(*p < v[i + 1].age) {
			bigger = i + 1;
			lower = i;
		}
	}
	
	printf("Oldest: %s\n", v[bigger].name);
	printf("Newest: %s\n", v[lower].name);

	return 0;
}
