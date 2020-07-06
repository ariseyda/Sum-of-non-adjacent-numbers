#include<stdio.h>
/*#include<time.h>*/

//Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. 
//Numbers can be 0 or negative.
//For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. [5, 1, 1, 5] should return 10, since we pick 5 and 5.

int main(){
	
	time_t t;
	int size;
	printf("Enter size of integer list:");
	scanf("%d",&size);
	int array[size];
	/*srand((unsigned) time(&t));*/
	int i,j;
	/*for(i=0;i<size;i++){
		array[i]=(rand() % 25);
	}*/
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("Array:[");
	for(i=0;i<size;i++){
		printf("%d",array[i]);
		if(i<size-1){
			printf(",");
		}
	}
	printf("]\n");
	
	int array1[size];
	int sum=0;
	int b=2,a=0;
	while(b<size){
		for(j=0;j<size;){
			sum+=array[j];
			j+=b;
		
		}
		array1[a]=sum;
		sum=0;
		b++;
		a++;
	
	}
	
	int max=array1[0];
	for(i=1;i<size/2;i++){
		if(array1[i]>max){
			max=array1[i];
		}
	}
	
	printf("Sum:%d",max);
	
	return 0;
}
