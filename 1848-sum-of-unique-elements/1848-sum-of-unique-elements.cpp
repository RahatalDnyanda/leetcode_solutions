class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mpp; //{num, cnt}
        for(int num: nums){
            mpp[num]++;
        }

        int sum = 0;
        for(auto [num, cnt]: mpp){
            if(cnt == 1){
                sum = sum + num;
            }
        }

        return sum;
    }
};