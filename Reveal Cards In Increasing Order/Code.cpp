class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
       sort(deck.begin(),deck.end());
       queue<int>q1;
       int n=deck.size();
       vector<int>v1(n,0);
       for(int i=0;i<n;i++){
            q1.push(i);
       }
       int i=0;
      while(!q1.empty()){
        int x=q1.front();
        v1[x]=deck[i];
        q1.pop();
        if(!q1.empty()){
            int y=q1.front();
            q1.push(y);
            q1.pop();
        }
        i++;
      }
      return v1;
    }
};

  /*     0  1. 2 3 4   5  6
deck = 2 3 5 i=7 11 13 17
queue =           3 1
int x= 17
v1[0]=deck 2
v1[2]=deck 3
v1[4]= deck 5
v1[6]= deck 7
v1[3]=  deck 11
v1[1]= deck 13
v1[5] = deck 17*/







