#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int cur = 0, dest = -1; cur < nums.size(); cur++) //���ó�ʼ����
        {
            if (nums[cur] != 0) //�������Ԫ��
            {
                swap(nums[dest + 1], nums[cur]); //����Ԫ���ᵽǰ��
                dest++;
            }
        }
    }
};