/*

 	Example:  Write a program that contains two integer variables. Compare your addresses and 
 	display the largest theirs. 
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
	int a = 2, b = 3;
	int *p = NULL, *i = NULL;
	
	p = &a;
	i = &b;
	
	if(p > i)
	{
		printf("%p", p);
	}
	else
	{
		printf("%p", i);
	}

	return 0;
}
