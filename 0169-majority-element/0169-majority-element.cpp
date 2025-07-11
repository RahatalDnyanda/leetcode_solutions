class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int, int> mpp; //{num, idx}
        int count = ceil((double)n/2);
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] >= count){
                return nums[i];
            }
        }

        return -1;
    }
};