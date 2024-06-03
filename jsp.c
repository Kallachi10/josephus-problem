#include <stdio.h>
void main(){
    /*d is the common difference between numbers after each stage.
      head is the first number in each round*/
	int n,head = 1,d = 1;
	printf("Enter no of people: ");
	scanf("%d",&n);
	while(n!=1){
		if(n%2 != 0){
			head += d * 2;
		}
		n = n/2;
		d = d * 2;
	}
	printf("Answer: %d\n",head);
}
