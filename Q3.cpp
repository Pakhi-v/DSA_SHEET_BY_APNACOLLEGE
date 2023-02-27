//maximum subarray(kadans algo)
class solution {
    public :
    int maxSubarrau(vector<int>& nums){
        int currsum  = 0;
        int maxsum = nums[0];

        for(int i = 0 ; i<nums.size() ; i++){
            currsum = currsum + nums[i];
            maxsum = max(maxsum,currsum);
            if(currsum < 0)
            currsum = 0;
        }
      return maxsum;
    }
}