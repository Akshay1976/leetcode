class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int array[2];
        for(int i = 0; i<nums.size();i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    array[0]=i;
                    array[1]=j;
                }
            }
        }
        
        //for(int i=0; i<array.length;)
        return {array[0],array[1]};
    }     
    
};