#include<stdio.h>
#include<stdlib.h>

int find_sequence(int value, int step){
	if(value == 1){
		return step;			// reached the value 1
	}
	else{
		if(value < 0){			// if value less than 0 its not impossible to reach 1
			return -1;
		}
		if(value % 2 == 0 && value % 3 == 0){				// if value can divide by 6 without reminder 
			printf("Divide by 6 and get %d\n", value / 6);
			return find_sequence(value / 6, ++step);
		}else{
			if(value % 3 == 0){								// if value can divide by 3 without reminder multiply this value with 2
				printf("multiply by 2 and get %d\n", value * 2);
				return find_sequence(value * 2, ++step);
			}else{											// value can't divide by 3
				return -1;	
			}
		}	
	}
}

int main(){
	int integer;
	scanf("%d",&integer);
	printf("step count = %d\n", find_sequence(integer, 0));
	return 0;
}
