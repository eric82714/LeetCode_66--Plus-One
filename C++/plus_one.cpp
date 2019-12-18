class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1] += 1;
        
        if(digits[digits.size()-1] != 10) return digits;
        
        for(int i = digits.size()-1; i > 0; i--){
            if(digits[i] == 10){ 
                digits[i] = 0;
                digits[i-1] += 1;
            }
        }
        
        if(digits[0] != 10) return digits;
        
        digits[0] = 0;
        digits.insert(digits.begin(), 1);
             
        return digits;
    }
};
