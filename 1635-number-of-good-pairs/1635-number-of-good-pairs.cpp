class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        /*int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
        }

        return cnt;*/
        
        
        //2nd answer

        unordered_map<int, int> mpp;
        for(int num: nums){
            mpp[num]++;
        }

        int ans = 0;
        for(auto [num,cnt]: mpp){
            ans = ans + cnt*(cnt-1)/2;
        }
        return ans;
    }
}; 