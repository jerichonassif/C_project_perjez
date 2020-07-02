#include <stdio.h>
#include <string.h>
#include <time.h>



int main(int argc, char **argv)
{
	
	
	
	srand(time(0));
	
	int rand1 = 0 + (rand() % 2);
	printf("%d\n", rand1);
	
	int rand2 =  0 + (rand() % 2);
	printf("%d\n", rand2);
	
	int rand3 =  0 + (rand() % 2);
	printf("%d\n", rand3);
	
	int rand4 =  0 + (rand() % 2);
	printf("%d\n", rand4);
	
	int rand5 =  0 + (rand() % 2);
	printf("%d\n", rand5);
	
	int rand6 =  0 + (rand() % 2);
	printf("%d\n", rand6);
	
	char *x[6] = {
		rand1, rand2 ,rand3 ,rand4 ,rand5 , rand6
	};
	
	for(int i = 0 ; i < 6 ; i++){
		   
		printf("%d", x[i]);
	}
	
	printf("\n");
	
    if( x[0] == 0 && x[1] == 0 && x[2] == 0 && x[3] == 0 && x[4] == 0 && x[5] == 0 ){
   	     	printf("skaka\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 1 && x[5] == 1){
   			printf("bara\n");
   	}else if( x[0] == 0 && x[1] == 0 && x[2] == 0 && x[3] == 0 && x[4] == 0 && x[5] == 1){
   			printf("dst\n");
   	}else if( x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 1 && x[5] == 0){
   			printf("banj\n");
   	}else if( x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 0 && x[5] == 0){
   			printf("arb3a\n");
   	}else if( x[0] == 1 && x[1] == 0 && x[2] == 0 && x[3] == 0 && x[4] == 0 && x[5] == 0){
   			printf("dst\n");
   	}else if( x[0] == 0 && x[1] == 1 && x[2] == 0 && x[3] == 0 && x[4] == 0 && x[5] == 0){
   			printf("dst\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 1 && x[3] == 0 && x[4] == 0 && x[5] == 0){
			printf("dst\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 0 && x[3] == 1 && x[4] == 0 && x[5] == 0){
			printf("dst\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 0 && x[3] == 0 && x[4] == 1 && x[5] == 0){
			printf("dst\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 1 && x[3] == 1 && x[4] == 1 && x[5] == 1){
   			printf("banj\n");
   	}else if( x[0] == 1 && x[1] == 1 && x[2] == 0 && x[3] == 1 && x[4] == 1 && x[5] == 1){
   			printf("banj\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 0 && x[4] == 1 && x[5] == 1){
			printf("banj\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 0 && x[5] == 1){
			printf("banj\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 1 && x[5] == 1){
			printf("banj\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 1 && x[5] == 0){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 1 && x[3] == 1 && x[4] == 1 && x[5] == 0){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 0 && x[3] == 1 && x[4] == 1 && x[5] == 0){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 0 && x[4] == 1 && x[5] == 0){
			printf("arba3a\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 1 && x[3] == 1 && x[4] == 0 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 1 && x[3] == 1 && x[4] == 1 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 0 && x[3] == 1 && x[4] == 0 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 1 && x[3] == 0 && x[4] == 0 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 1 && x[3] == 0 && x[4] == 1 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 1 && x[3] == 0 && x[4] == 1 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 0 && x[3] == 0 && x[4] == 1 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 0 && x[3] == 1 && x[4] == 1 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 0 && x[3] == 1 && x[4] == 1 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 1 && x[3] == 1 && x[4] == 1 && x[5] == 1){
			printf("arba3a\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 0 && x[3] == 0 && x[4] == 0 && x[5] == 1){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 0 && x[3] == 0 && x[4] == 0 && x[5] == 1){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 1 && x[3] == 0 && x[4] == 0 && x[5] == 1){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 0 && x[3] == 1 && x[4] == 0 && x[5] == 1){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 0 && x[3] == 0 && x[4] == 1 && x[5] == 1){
			printf("dowa\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 0 && x[3] == 0 && x[4] == 1 && x[5] == 1){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 0 && x[3] == 0 && x[4] == 0 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 1 && x[3] == 0 && x[4] == 1 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 0 && x[3] == 1 && x[4] == 1 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 0 && x[3] == 1 && x[4] == 0 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 0 && x[3] == 1 && x[4] == 0 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 0 && x[2] == 1 && x[3] == 1 && x[4] == 0 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 1 && x[3] == 0 && x[4] == 0 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 0 && x[1] == 1 && x[2] == 1 && x[3] == 0 && x[4] == 0 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 1 && x[1] == 1 && x[2] == 0 && x[3] == 0 && x[4] == 0 && x[5] == 0){
			printf("dowa\n");
	}else if( x[0] == 1 && x[1] == 0 && x[2] == 0 && x[3] == 0 && x[4] == 1 && x[5] == 1){
			printf("dowa\n");
	}else{
		   	printf("tlata\n");
	}
	
	return 0;
}