/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry=0;
    int *out;
    for (int i=digitsSize-1; i>=0; i--) {
        if (digits[i] == 9) {
            digits[i] = 0;
            carry = 1;
        }else {
            digits[i] ++;
            carry=0;
            break;
        }
    }
    if (carry == 1) {
        * returnSize = digitsSize+1;
        out = malloc((* returnSize)*sizeof(int));
        out[0] = 1 ;
        for (int j=0; j<digitsSize; j++) {
            out[j+1]=digits[j];
        }
        return out;  
    }else {
        * returnSize = digitsSize;
        out = malloc((* returnSize)*sizeof(int));
        out = digits;
        return out;
    }
    return -1;
}