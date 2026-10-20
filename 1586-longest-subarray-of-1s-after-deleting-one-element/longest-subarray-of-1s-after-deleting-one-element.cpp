class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k = 1;
        int n = nums.size();
        int flips = 0, i = 0, j = 0;
        int maxlen = INT_MIN, len = INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }
                else{
                    len = j-i-1;
                    maxlen = max(maxlen,len);
                    //i ko just uske age wle 0 se ek idx le jao
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        len = j-i-1;
        maxlen = max(maxlen,len);
        return maxlen;
    }
};