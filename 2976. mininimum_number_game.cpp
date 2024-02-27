 class Solution {
    public:
     vector<int> numberGame(vector<int>& nums) {
        vector<int> arr(nums.size());
 
   sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
           swap(nums[i],nums[i+1]);
         }
         for(int i=0;i<nums.size();i++){
            arr[i]=nums[i];
        }
        // arr=nums; you can use it direct too or sepratedly marking each index
        return  arr;
    }
};
