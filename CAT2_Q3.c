/*CAT 2 PROGRAMING
AUTHOR:FRANCIS MWIGA KIMANI
REG NO:CT101/G/22131/24
*/
#include<stdio.h>
int main(){
int hours;
float wages;
float gross_pay;
float taxes;
float net_pay;

//user to enter the hours worked
printf("enter the hours worked:");
scanf("%d",&hours);

//puser to enter the wages paid per hour
printf("enter the wages paid per hour:");
scanf("%f",&wages);	

//calculate the grosspay
gross_pay=hours*wages;

//calculate the taxes
taxes=gross_pay*0.15;

//calculate the net pay
net_pay=gross_pay-taxes;

// print the results
printf("gross_pay is:%f\n",gross_pay);
printf("taxes is:%f\n",taxes);
printf("net_pay is:%f\n",net_pay);
	
	return 0;
}
