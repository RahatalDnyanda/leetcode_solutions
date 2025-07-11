class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int, int> mpp; //{num, cnt}
        int count = n/3;

        vector<int> ans;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }

        for(auto [num, cnt]: mpp){
            if(cnt > count){
                ans.push_back(num);
            }
        }

        return ans;
    }
};