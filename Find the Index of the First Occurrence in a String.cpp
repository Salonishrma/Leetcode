class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
     for(int i=0;i<haystack.size();i++){
         int k=i;
          int j=0;
         while(needle[j]==haystack[k] && j<n){
         k++;
         j++;
         }
         if (j==n)
         return i;
        }
       return -1;
     }
};
