class Solution {
public:
    int tribonacci(int n) {
        if(n ==0){
            return 0;
        }
        else if(n==1 ||n==2){
            return 1;
        }
        vector<int>v1(n+1,0);
        v1[0]=0;
        v1[1]=v1[2]=1;
        for(int i=3;i<=n;i++){
            v1[i]=v1[i-3]+v1[i-2]+v1[i-1];
        }
        return v1[n];
    }
};
