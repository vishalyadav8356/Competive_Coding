class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i>=0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
           digits[i] = 0;
        }

        vector<int> newDigits( digits.size()+1 , 0);
        newDigits[0] = 1;
        return newDigits;
    }
};