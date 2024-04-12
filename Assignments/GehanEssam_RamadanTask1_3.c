/*
Author: Gehan Essam Eid

Project: To Add Two Complex Numbers Using Structures And Functions.

*/
#include<stdio.h>
/******************* FUNCTION TO ADD TOW STRUCT **************************/
struct Complex Add_Complex_Numbers(struct Complex Num1,struct Complex Num2);

/**************** Creat Struct To Complex Numbers *********************************/ 
typedef struct Complex{
	
	float real_part;
	float imaginary_part;
	
}ComplexNumbers;

void main()
{
	/******************* CREAT OBJJECT BY STRUCT **********************************/
	ComplexNumbers Number1;
	ComplexNumbers Number2;
	ComplexNumbers Sumation;
	char progstate=0;
	do{
		
/********************** TAKE FROM USER >>>>>>>>>REAL PART NUMBER<<<<<<<< AND >>>>> EMAGINARY PART NUMBER <<<<<<<**********/
	
     printf("please Enter The First Number\n ");	
     printf("please Enter Real Part:");
	 scanf("%f",&Number1.real_part);

	 printf("please Enter imaginary Part:");
	 scanf("%f",&Number1.imaginary_part);

	 printf("please Enter The Second Number \n");
	 printf("please Enter Real Part:");
	 scanf("%f",&Number2.real_part);

	 printf("please Enter imaginary Part:");
	 scanf("%f",&Number2.imaginary_part);
	 system("cls");
/******************* Call FUNCTION TO SUMATION TO NUMBERS **************************/
	 Sumation = Add_Complex_Numbers(Number1,Number2);
	  /**************** DISPLAY SUMATION **************************************/
	  printf("Sumation Of Tow Complex Number=\n");
	 printf("%0.3f+%0.3fi\n",Sumation.real_part,Sumation.imaginary_part);
	 
	 
	 	/***********************ASK USER IF YOU WANT CONTNOUS THE PROGRAM ******************************/
	printf("If you want to continue Press Any Key \nif you want Exite Enter 'E' or 'e'\n");
	scanf(" %c",&progstate);
	
	} 
	while(progstate!='e' && progstate!='E');
}
struct Complex Add_Complex_Numbers(struct Complex Num1,struct Complex Num2){
	
	ComplexNumbers Sum;
	Sum.real_part      = Num1.real_part     + Num2.real_part;
	Sum.imaginary_part =Num1.imaginary_part + Num2.imaginary_part;
	
	return Sum;
	
}