class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        for(char ch: s){
            mpp[ch]++;
        }

        for(char ch: t){
            if(mpp.find(ch) != mpp.end()){
                mpp[ch]--;
                if(mpp[ch] == 0){
                    mpp.erase(ch);
                }
            }
            else{
                return false;
            }
        }

        if(mpp.size() == 0){
            return true;
        }

        return false;
    }
};