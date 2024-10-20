/*

 	Example: Using a structure vector, make a program that reads the name and phone number of 
	5 people and print them alphabetically by name. Tip: Search for the usage details of 
	strcmp() function.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
#define N 5
typedef struct client{
	char name[50];
	char phone[50];
	
} client;


int main(){	
	client v[N], aux;
	int i, j, check = 0;
	
	for(i = 0; i < N; i++){
		pritnf("Enter your name:\n");
		scanf(" %[^\n]", v[i].name);
		printf("Enter you phone:\n");
		scanf(" %[^\n]", v[i].phone);
	}
	
	//organizing the clients by alphabetical order
	for(i = 0; i < N; i++){
		for(j = i + 1; j < N; j++){
			check = strcmp(v[i].name, v[j].name);
			if(check > 0){	
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			} 
		}
	}
	
	//printing the names in alphabetical order
	for(i = 0; i < N; i++){
		printf("%s %s\n", v[i].name, v[i].phone);
	}
	
	return 0;
}
