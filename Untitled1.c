/* program yo print PASCAL triangle */

#include<stdio.h>
#include<conio.h>
main(){
	int i,j,l,m,n;
	printf("\n How many rows ? ");
	scanf("%d", &n);
	printf("\n\t\t\t\t     PASCAL TRIANGLE   \n");
	m = 1;
	for(l = 0; l < n; l++)         /* loop 1 to print n lines */
	{
	  for( i = 40 - 3*l; i > 0; i--)  /* loop 2 to print spaces */
	  printf(" ");
	/* loop to generate and print digits */
	  for(j = 0; j <= l; j++)
	  {
	  	if((j == 0) || (l == 0))
	  	   m = 1;
	  	else
		   m = (m*(l - j + 1))/j;
		printf("%6d", m);     
		}  
	printf("\n");	
	}
}
