/*

 	Example:  Write a program that declares an integer, a real, and a char, and pointers to 
 	these variables. Associate the variables with the pointers. Modify the values of each 
 	variable using the pointers. Print the values of the variables before and after the 
 	modification. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main()
{
	int a = 2, *p;
	float b = 3.5, *i;
	char c = 'a', *j;
	
	p = &a;
	i = &b;
	j = &c;
	
	printf("%d\n%f\n%c\n\n", *p, *i, *j);
	
	*p = 9;
	*i = 5.8;
	*j = 'f';
	
	printf("%d\n%f\n%c\n", *p, *i, *j);
	
	return 0;
}
