int singleNumber(int* nums, int numsSize){
    int p = 0;  
    int q = 0;  
    int i;
           for(i = 0; i<numsSize; i++){  
              p = q & (p ^ nums[i]);  
              q = p | (q ^ nums[i]);  
           }  
           return q;  

}