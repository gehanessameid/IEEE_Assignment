/*
Author: Gehan Essam Eid

Project: To You have a flowerbed represented by an array flowerbed where 0 means empty and 1 means a flower is planted. Flowers 
cannot be planted next to each other. Given flowerbed and a number n of new flowers, can you plant them without violating the noadjacent-flowers rule.

*/
#include<stdio.h>
/******************** CALL FUNCTION TO TAKE FROM USER Flowerbed *******************************/
void scan_Flowerbed(int Flowerbed[],int sizeFlowerbed);


void main()
{
	/********************************* CREAT VARIABLE **********************/
	int flowerbed[15];
	int place;
	int SizeFlowerbed=15;
	char progstate=0;
	do{
	scan_Flowerbed(flowerbed,15);
	/*****************TAKE FROM USER PLACE WANT TO PLANT IT *****************/
	printf("enter the place (0 to %d):",SizeFlowerbed-1);
	scanf("%d",&place);
	
	/******************* CHECK PLACE IF HER IN Flowerbed AND BEFOR PLACE AND AFTER PLACE ******************/
	if(place>0 && place<SizeFlowerbed-1 && flowerbed[place] ==0 && flowerbed[place-1] ==0 && flowerbed[place+1] ==0 )
	{
		/********************* IF BEFOR PLACE AND AFTER PLACE IS EMPATY ******************************/
		printf("flower can be planted:");
	}
	else
	{
		/********************* IF BEFOR PLACE AND AFTER PLACE IS PLANT ******************************/
		printf("flower can not be planted:");
	}
	
	   /***********************ASK USER IF YOU WANT CONTNOUS THE PROGRAM ******************************/
	printf("If you want to continue Press Any Key \nif you want Exite Enter 'E' or 'e'\n");
	scanf(" %c",&progstate);
	
	} 
	while(progstate!='e' && progstate!='E');
}
/*********************** FUNCTION TO SCAN  Flowerbed ARRY *******************************/
void scan_Flowerbed(int Flowerbed[],int sizeFlowerbed)
{
	
	int Place;
    printf("enter Flowerbed[%d] >>>0<<< for Empety Place  OR >>>>1<<<< For Plant Place\n ",Place+1);
	
	for(Place=0;Place<sizeFlowerbed;Place++ ){
     printf("enter Flowerbed[%d] ",Place);
     scanf("%d",&Flowerbed[Place] );
	 
	
	}
}
