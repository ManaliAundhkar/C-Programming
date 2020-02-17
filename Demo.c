#include<stdio.h>

int Addition(int no1,int no2)
{
	int iAdd=0;
	
	iAdd=no1+no2;
	
	return iAdd;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("The 1st no. is:");
	scanf("%d",&iValue1);
	
	printf("The 2nd no. is:");
	scanf("%d",&iValue2);
	
	iRet=Addition(iValue1,iValue2);
	
	printf("The Addition of two nos. is: %d",iRet);
	
	return 0;
}
