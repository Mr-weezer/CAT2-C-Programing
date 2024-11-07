/*CAT 2 PROGRAMING
PROGRAM TO DEFINE AND INITIALIZE A 2D ARRAY CALLED SCORES
AUTHOR:FRANCIS MWIGA KIMANI
REG NO:CT101/G/22131/24
*/

#include<stdio.h>
int main(){

	int i;
	int j;

	
	int scores[4][2]={{65,92},{84,72},{35,70},{59,69}};


	for ( i=0;i<4;i++){

		
		for( j=0;j<2;j++){

			printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
			
		}
	}
return 0;
}