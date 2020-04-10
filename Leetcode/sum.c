#include <stdio.h>
#define NumsSize 4
int nums[NumsSize]= {2,7,11,15};
int* twoSum(int* nums,int numsSize,int target);

int* twoSum(int* nums,int numsSize,int target){
	int i,j;
	int temp[2];
	if (target <= 17 && target >= 9){
		i = 0;
		
		for(j=1;j<=3;j++){
			if((nums[i]+nums[j]) == target)
				return i,j;
		}
	}
	if (target > 17 && target < 26){
		i = 1;
		for(j=2;j<=3;j++){
			if((nums[i]+nums[j]) == target)
				return i,j;
		}
	}
	if (target == 26){
		i = 2,j = 3;
		return i,j;
	}
}

void main(){
	int t=9,i;
	int temp[2];
	for(i=0;i<2;i++){
		temp[i]=twoSum(nums,NumsSize,t);
	}
	printf("[%d,%d]\n",temp[0],temp[1]);

}
