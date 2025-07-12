class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int num: nums){
            mpp[num]++;
        }

        for(auto [num, cnt]: mpp){
            if(cnt == 1){
                return num;
            }
        }

        return -1;
    }
};