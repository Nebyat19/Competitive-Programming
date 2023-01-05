class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result(nums.size());
        for(int i=1;i<nums.size();++i){
            int key=nums[i]; int j=i-1;
            while(j>=0&&key<nums[j]){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=key;
        }
        int index=0;
       for(int i=0;i<nums.size();++i)
       if(nums[i]==target){
    result[index]=i; index++;
       } 
       result.resize(index);
       return result;
    }
};
