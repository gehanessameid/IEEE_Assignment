/*
Author: Gehan Essam Eid
Project: Compare Two Strings Without Using String Library Functions

*/
#include<stdio.h>
char Compare_Tow_Strings(char str1[], char str2[]);
void main()
{
	/************************ CREAT VARIABLE ***********************/
	char progstate=0;
	char String_1[100];
	char String_2[100];
	char compare=0;
	
	do
	{ 
	/********************** TAE FROM USER TOW STRING **********************/
		printf("Please Enter The First String:");
		scanf(" %[^\n]s",&String_1);
	
		printf("Please Enter The Second String:");
		scanf(" %[^\n]s",&String_2);
		system("cls");

/**************************** CALL FUNCTION TO COMPARE TOW STRINGS ****************************/
		compare = Compare_Tow_Strings(String_1,String_2);
		
/**************************** CHECK THE DIFFERENCE BETWEN STRINGS *******************************/

if(compare==0)
{
	printf("The Tow Strings Are Equal\n");
}else
	printf("The Tow Strings Are Not Equal\n");

		
	/***********************ASK USER IF YOU WANT CONTNOUS THE PROGRAM ******************************/
	printf("If you want to continue Press Any Key \nif you want Exite Enter 'E' or 'e'\n");
	scanf(" %c",&progstate);
	
	} 
	while(progstate!='e' && progstate!='E');	
	
}

 char Compare_Tow_Strings(char str1[], char str2[])
 {
	 /************** Check Tow Strings Until NULL TERMINATOR IS REACHED ******************/
	 int count=0;
	 while(str1[count] != str2[count])
	 {
		 /**************** IF CHARACTERS ARE NOT EQUAL >>>>RETURN 1<<<<<<<<< *****************/
		 if(str1[count] != str2[count])
			 
		 return 1;
		 
	 
	 count++;
	 }
	 /*************** IF TOW STRINGS ARE EQUAL >>>>>>>>>>>>>>RETURN 0<<<<<<<<<<<< ***************/
	 return 0;
	
 }