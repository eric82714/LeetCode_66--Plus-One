/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize;
    int* returnArray = malloc(*returnSize * sizeof(int));
    
    digits[digitsSize-1] += 1;
    returnArray = digits;
        
    if(digits[digitsSize-1] != 10) return returnArray;
        
    for(int i = digitsSize-1; i > 0; i--){
        if(digits[i] == 10){ 
            digits[i] = 0;
            digits[i-1] += 1;
        }
    }
        
    if(digits[0] != 10) return returnArray;
    
    *returnSize = digitsSize + 1;
    returnArray = malloc(*returnSize * sizeof(int));
    for(int i = 0; i < *returnSize; i++){
        if(i == 0) *(returnArray+i) = 1;
        else *(returnArray+i) = 0;
    }   
             
    return returnArray;
}
