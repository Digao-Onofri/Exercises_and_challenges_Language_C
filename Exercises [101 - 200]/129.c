/*

 	Example:  Make a function that receives a date and displays it on the screen in full textual 
 	format. Example: for 01/01/2000, print: January 1, 2000. Your scanf should read the date in 
 	mm//dd/yyyy format.
 	Youtube lesson: https://youtu.be/expVhkFrXjM
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>

char * getmonth(int month);

int main() {
	char * answer;
	int day, month, year;
	
	printf("Enter the date: (mm/dd/yyyy)\n");
	scanf("%d/%d/%d", &month, &day, &year);
	
	answer = getmonth(month);

	printf("%s %d ,%d\n", answer, day, year);

	return 0;
}

char * getmonth(int month) {
	char * getmonth;
	switch(month){
		case 1 : month = 1;
			getmonth = "January";
			break;
		case 2: month = 2;
			getmonth = "February";
			break;
		case 3: month = 3;
			getmonth = "March";
			break;
		case 4: month = 4;
			getmonth = "April";
			break;
		case 5: month = 5;
			getmonth = "May";
			break;
		case 6: month = 6;
			getmonth = "June";
			break;
		case 7: month = 7;
			getmonth = "July";
			break;
		case 8: month = 8;
			getmonth = "August";
			break;
		case 9: month = 9;
			getmonth = "September";
			break;
		case 10:month = 10;
			getmonth = "October";
			break;
		case 11:month = 11;
			getmonth = "November";
			break;
		case 12:month = 12;
			getmonth = "December";
			break;
	}
	
	return getmonth;
}	
