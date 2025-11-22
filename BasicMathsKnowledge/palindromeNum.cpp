class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int oldNum=n;
        int reversedNum=0;
        
        while(n>0){
            int ld = n%10;
            reversedNum = (reversedNum*10)+ld;
            n=n/10;
        }
        if(oldNum == reversedNum) return true;
        
        return false;
    }
};
