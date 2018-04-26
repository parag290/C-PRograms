/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

int maxSubArray(vector<int>& nums) {
		
        int max_sum = nums[0];
        int arr[nums.size()];
        arr[0] = nums[0];
        
        for(int i = 1; i<nums.size(); i++){
            if(arr[i-1] < 0){
                arr[i] = nums[i];
            }
            else{
                arr[i] = arr[i-1] + nums[i];
            }
            if(max_sum < arr[i])
                max_sum = arr[i];
        }
        
        return max_sum;
		
	}
