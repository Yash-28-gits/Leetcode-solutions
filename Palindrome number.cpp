class Solution {
public:
    bool isPalindrome(int x) {
        long int reverse = 0;
        long int remainder = 0;
        

        int n1 = x; 
   
        if(x>=0){
            while (x != 0)
        {
            remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x /= 10;
        }

        if (reverse == n1)
            return true;
        else
            return false;
        
        }
         else{
            return false;
        }

        }
       
};