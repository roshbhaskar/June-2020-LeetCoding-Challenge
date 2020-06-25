int findDuplicate(int* nums, int numsSize){
    int i,j;
    int res=0;
    for (i = 0; i < numsSize; i++) 
   { 
    if (nums[abs(nums[i])] >= 0){
	nums[abs(nums[i])] = -nums[abs(nums[i])];
            } 
    else{
	res= abs(nums[i]); 
            }
     } 
 
    return res;
}