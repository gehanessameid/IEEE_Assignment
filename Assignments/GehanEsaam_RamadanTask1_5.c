/*
Author: Gehan Essam Eid
Problem: Given a target amount and an array of coin denominations, find the minimum number of coins 
required to make the change. 
Hint: use array int coins[] = {1, 5, 10,20,50,100}; and write function called int minCoins(int coins[], int n, 
int amount); where n is number of coins 
*/
#include<stdio.h>
void minCoins(int coins[],int amount,int n);

void main(void)
{ 
/***************** CREAT ARRY OF  Coin Denominations ************************/
	int coin_denominations[]={100,50,20,10,5,1};
	
/********************CREAT VARIABLE *************************/
	int amount=0;
	int n=6;
	char progstate=0;
	do 
	{
		/********************* ASK USER TO ENTER AMOUNT *******************/
	printf("plaese enter amount:");
	scanf("%d",&amount);
	
	minCoins(coin_denominations,amount,6);
	
   /***********************ASK USER IF YOU WANT CONTNOUS THE PROGRAM ******************************/
	printf("If you want to continue Press Any Key \nif you want Exite Enter 'E' or 'e'\n");
	scanf(" %c",&progstate);
	
	} 
	while(progstate!='e' && progstate!='E');
}



/********************** FUNCTION TO CALCULATE NUMBER OF PAPER OF Coin Denominations *********************/
void minCoins(int coins[],int amount,int n)
{
	printf("the minmum number of ech paper currency required for amount %d is :\n",amount);
	
	for(int i=0;i<n;i++)
	{
		int count=amount/coins[i];
		if(count>0)
		{
			printf("%d paper(s) of %d\n",count,coins[i]);
		
		amount-=count * coins[i];
		}
	}
}