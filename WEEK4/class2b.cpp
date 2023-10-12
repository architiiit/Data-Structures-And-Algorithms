//33. LEETCODE QUESTION SEARCHING AN ELEMENT IN SORTED AND ROTATED ARRAY
class Solution
{
public:
    int binarySearch(vector<int> arr, int target, int start, int end)
    {
        int mid = start + (end - start) / 2; // it may lead to integer overflow
        while (start <= end)
        {
            if (arr[mid] == target)
            {
                return mid; // element found
            }
            if (target > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1; // element not found
    }
    int findPivot(vector<int> arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] > arr[mid + 1] && mid + 1 < arr.size())
                return mid;

            if (arr[mid - 1] > arr[mid] && mid - 1 >= 0)
                return mid - 1;

            if (arr[s] >= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid+1;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
    int search(vector<int> &nums, int target)
    {
        int pivotIndex = findPivot(nums);
        if (target >= nums[0] && target <= nums[pivotIndex])
        {
            int ans = binarySearch(nums, target, 0, pivotIndex);
            return ans;
        }
        if (pivotIndex + 1 < nums.size() && target >= nums[pivotIndex + 1] && target <= nums[nums.size() - 1])
        {
            int ans = binarySearch(nums, target, pivotIndex + 1, nums.size() - 1);
            return ans;
        } 
        return -1;
    }
};