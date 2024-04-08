class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q1;
        stack<int>s1;
        for(int i=0;i<students.size();i++){
            q1.push(students[i]);
        }
        for(int j=sandwiches.size()-1;j>=0;j--){
            s1.push(sandwiches[j]);
        }
        int var =0;
        while(!s1.empty() and var <= q1.size()){
            if(q1.front()!=s1.top())
            {
                q1.push(q1.front());
                q1.pop();
                var++;
            }
            else{
                q1.pop();
                s1.pop();
                var =0;
            }
        }
        return s1.size();
    }
};


