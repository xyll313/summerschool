#include <stdio.h>
#include <stdlib.h>

#define NX 258
#define NY 258

int main(void)
{
int i, j;
double  array[NX][NY];    
    // Add here the definition for array with name 'array'
    // of size NX times NY (258x258)

for(i=0;i<NX;i++){
	for(j=1;j<NY;j++){
 		array[i][j]=0.0;
         }
                 }
// Initialize first the zeros

for(j=0;j<NY;j++){
	array[0][j]=20.0;
	array[NX-1][j]=70.0;         
         } 
// Initial conditions for left and right


for(i=0;i<NX;i++){
	array[i][0]=5.0;
 	array[i][NY-1]=85.0;
                 }
    // and top and bottom boundaries


/*for(i=0;i<NX;i++){
        for(j=0;j<NY;j++){
        	printf("%f ", array[i][j]);  
         }
	printf("\n");
                 }  */
 



   return 0;
}
