//variabess and Data Types

#include <stdio.h>

int main()
{ //declare 
	char grade ='A' ; //  %c
	char name [15] = {"Bruce"} ; // % s
	int age = 18 ; // %d
	float marks =70 ; //%f
	double pi = 3.142 ; //%lf
	
	printf("enter your grade \t " );
scanf("&%c",&grade);

	printf(" enter my  NAME : \t ");
scanf("&%s",&name);

	printf("enter your age : \t " );
scanf("&%d",&age);

	printf("enter your marks:\t");
	scanf("&f",&marks);
	
	printf("enter pi :\t" );
	scanf("&%lf",&pi);
	return 0;
}
