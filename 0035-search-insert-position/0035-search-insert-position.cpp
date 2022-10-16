class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int n= nums.size();
        while(i<n)
        {
            if(nums[i]==target)
            {
                return i;
            }
            
            else if(nums[i]<target)
            {
                i++;
            }
            else
            {
                return i;
            }
            
        }
        return i;
        
    }
};