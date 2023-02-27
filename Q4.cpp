//contains duplicate
class solution {
    public:
    bool conatinsduplicate(vector<int>& nums){
        map<int,int> m;
        for(int i = 0; i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i : m){
            if(i.second >= 2){
                return true;
            }
        }
        return false;
    }
}