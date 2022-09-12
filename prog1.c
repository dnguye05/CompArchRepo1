#include <stdio.h>

int main(){
	int total = 0;
	int nums[] = {1, 2, 3, 4, 5};
	for(int i = 0; i < 5; i++){
		printf("%d : %d\n", i, nums[i]);
		total = total + nums[i];
	}
	printf("Total: %d\n", total);
	return 0;
}
