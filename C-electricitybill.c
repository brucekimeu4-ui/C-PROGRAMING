/*
NAME:Bruce kimeu
REG:CT100/G/30761/26
DESCRPTION:electricity bill
*/

#include <stdio.h>

int main()
{
	float calculatebill(float amount);
	float units;
	
	float bill=0;
	float result, electrictybill,amount;
	float electricitybill;
	printf("enter units used : \t");
	scanf("%f", &units);
	
	;result=calculatebill(bill);
	;electricitybill='units*amount';
	
	printf("Electricity bill :\n");
	printf("==========\n");
	printf("units used: %f \n", electricitybill);
	printf("======\n");
	
	
	return 0;
}

float calculatebill(float electricitybill){
	float units;
	float amount;
	float;electricitybill;
	
	if(units <100){
		electricitybill=10*units;
	}
	else if(units<199){
		electricitybill=15*units;
	}
	else if(units<=200){
		electricitybill=20*units;
	}
	
	return amount;
}