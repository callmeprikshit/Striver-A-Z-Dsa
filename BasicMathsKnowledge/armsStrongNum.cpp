class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int condition=n;
        int sum=0;
        while(n>0){
            int ld = n % 10;
            sum = sum + ld * ld * ld;
            n = n/10;
        }
        if(condition == sum) return true;
        
        else return false;
    }
};
