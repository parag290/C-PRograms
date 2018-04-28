/*
IMP : Learn to join one vector at the end of another vector

There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

Example 1:
nums1 = [1, 3]
nums2 = [2]

The median is 2.0
Example 2:
nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5
*/

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        nums1.insert(nums1.end(),nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
        
        if(nums1.size()%2 == 1)
            return nums1[nums1.size()/2];
        else
            return (nums1[nums1.size()/2]+nums1[nums1.size()/2-1])/2.0;
    }
