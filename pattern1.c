/* Write a program which accept number from user and print that number of $ & *
on screen.

Input : 5
Output:$	*	$	*	$	*	$	*	$	*
Input:-5
Output:$	*	$	*	$	*	$	*	$	*
*/


#include<stdio.h>

void Pattern(int iNo)
{

	int iCnt=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("$\t*\t");
	}
}

int main()
{
	int iValue=0;

	printf("Enter the number");
	scanf("%d",&iValue);

	Pattern(iValue);
}
