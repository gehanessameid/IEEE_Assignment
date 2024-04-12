/*
Author: Gehan Essam Eid
Project:Check Whether Number is EVEN or ODD By Using BITWIS OPERATION 
*/

#include<stdio.h>
char  BitWise_ReadBit(int Number , int NumBit);
void main()
{
		/*********************** CREAT VARIABLE *******************/
	
	int  Num         =0;
	int  Bit0        =0;
    char Check_Number=0;
	char progstate   =0;
	do{

/******************** SCAN NUMBER ***********************/	
	printf("Please Enter Your Number: ");
    scanf("%d",&Num);
	
	system("cls");
/******************** CALL FUNCTION TO READ FIRST BIT TO CHECK THE NUMBER IS EVEN OR ODD ******************/
   Check_Number = BitWise_ReadBit(Num,0);
   
   /******************* CHECK THE NUMBER IS EVEN OR ODD *******************/
   if(Check_Number==0)
   {
	   printf("Number=%d is Even\n",Num);
   }else
	   
	printf("Number=%d is Odd\n",Num);
	
	/***********************ASK USER IF YOU WANT CONTNOUS THE PROGRAM ******************************/
	printf("If you want to continue Press Any Key \nif you want Exite Enter 'E' or 'e'\n");
	scanf(" %c",&progstate);
	
	} 
	while(progstate!='e' && progstate!='E');	
	

}

/*************************** FUNCTION READ BIT ******************************/
char  BitWise_ReadBit(int Number , int NumBit)
{
    char  Result = 0 ; 
    Result = ((Number>>NumBit)&1) ;
    return Result ; 
}