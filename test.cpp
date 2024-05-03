#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int cur = 0, dest = -1; cur < nums.size(); cur++) //设置初始条件
        {
            if (nums[cur] != 0) //处理非零元素
            {
                swap(nums[dest + 1], nums[cur]); //非零元素提到前面
                dest++;
            }
        }
    }
};