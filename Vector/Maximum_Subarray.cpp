/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

int maxSubArray(vector<int>& nums) {
		
        int max_sum = nums[0];
        
        int sum = nums[0];
        
        for(int i = 1; i<nums.size(); i++){
            if(sum < 0){
                sum = nums[i];
            }
            else{
                sum += nums[i];
            }
            if(max_sum < sum)
                max_sum = sum;
        }
        
        return max_sum;
		
	}
