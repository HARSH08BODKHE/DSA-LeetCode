class Solution {
public:
    int minMoves(vector<int>& arr) {
        int maxa = INT_MIN;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>maxa){
                maxa = arr[i];
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            count += maxa-arr[i];
        }
        return count;
    }
};