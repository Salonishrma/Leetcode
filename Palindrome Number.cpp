class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int num = x;

       long res=0;
       while(num!=0){
          int rem= num%10;
          res=(res*10)+rem;
          num=num/10;
       }

      return res==x;
    }
};
