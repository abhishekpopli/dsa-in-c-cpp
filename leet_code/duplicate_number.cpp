class duplicate {
public:
    int findDuplicate(vector<int>& nums) {
        if (nums.size() > 1)
        {
            int slow = nums[0];
            int fast = nums[nums[0]];
            while (slow != fast)
            {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }
            // now we got the merging point inside cycle
            //we need to find entry point of the cycle
            // as per floyd algoithm, we are sure that both will merge
            // after moving x times (dist from beginning to the entry point)
            fast = 0;
            while (fast != slow)
            {
                fast = nums[fast];
                slow = nums[slow];
            }
            return slow;
        }
        return -1;

    }
};