class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i = 0; i < stones.size();i++){
            q.push(stones[i]);
        }

        int sum  = 0;

        while(!q.empty() && q.size() != 1){
            int y = q.top();
            q.pop();
            int x = q.top();
            q.pop();

            if(x != y) {
                sum += (y-x);
                q.push(sum);
                sum = 0;
            }  
        }
        if(q.empty()) return 0;

        return q.top();
    }
};