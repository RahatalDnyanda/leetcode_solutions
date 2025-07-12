class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 1;
        bool flag = false;
        for(int i=0; i<n; i++){
            int num = nums[i];
            if(num > 0){
                if(i+1 < n && nums[i] == nums[i+1]){
                    continue;
                }
                if(num == cnt){
                    cnt++;
                }
                else{
                    return cnt;
                }
            }
        }

        return cnt;
    }
};