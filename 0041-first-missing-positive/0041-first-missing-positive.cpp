class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int num: nums){
            if(num > 0){
                mpp[num]++;
            }
        }
        
        int missingNum = 1;
        for(auto [num, _]: mpp){
            if(mpp.find(missingNum) != mpp.end()){
                missingNum++;
            }
            else{
                return missingNum;
            }
        }

        return missingNum;
    }
};