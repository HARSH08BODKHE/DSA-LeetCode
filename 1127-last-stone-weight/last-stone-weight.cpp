class Solution {
public:
    void deletee(vector<int>& stones, int idx){
        stones.erase(stones.begin() + idx);
    }

    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();

        while(n > 1){
            sort(stones.begin(), stones.end());

            int x = stones[n-2];
            int y = stones[n-1];

            if(x == y){
                deletee(stones, n-1);
                deletee(stones, n-2);
            }
            else{
                stones[n-1] = y-x;
                deletee(stones, n-2);
            }

            n = stones.size();   
        }

        if(stones.empty())
            return 0;

        return stones[0];
    }
};