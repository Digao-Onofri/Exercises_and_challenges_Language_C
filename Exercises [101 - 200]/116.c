/*

 	Example:  Using only pointers, write a program that reads a sentence of up to 80 characters 
 	and prints it in reverse order by converting all lowercase characters to uppercase. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char v[80], *p;
	int i;
	
	scanf("%[^\n]", v);
	
	for(i = strlen(v) - 1; i >= 0; i--)
	{
		p = &v[i];
		if(isupper(*p))
		{
			printf("%c", *p);
		}
		else
		{
			printf("%c", toupper(*p));
		}
	}
	
	return 0;
}
