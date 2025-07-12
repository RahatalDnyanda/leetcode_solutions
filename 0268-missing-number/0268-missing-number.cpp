class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int num: nums){
            mpp[num]++;
        }
        
        int missingNum = 0;
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