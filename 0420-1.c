#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) 
{
    int i, n[10],j;
	srand(time(NULL));
	
	
	   for(i=0;i<10;i++)
	   {
		printf("array=%d\n",n[i]=rand());
	   }
   	   for(j=0;j<3;j++)
   	    {
		 printf("array3=%d\n",n[1+(rand()%10)]);
        }
	return 0;

}
