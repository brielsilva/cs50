#include <stdio.h>


int main( int argc, char *argv[])
{
    
    /*printf("Height: ");
   	int height= get_int("Height: ");
    
    while( height < 0 || height < 1){
		height = get_int("Height: ");
    }*/
    int height = (int) argv[1];

    for(int i = 0 ; i <= height ;i++){
    	printf("#");    	
    	printf("\n");

    }

    return 0;
}
  
