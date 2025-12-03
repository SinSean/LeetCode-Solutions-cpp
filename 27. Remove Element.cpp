class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
                ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<ans.size())
                nums[i]=ans[i];
            else
                nums[i]=NULL;
        }
        return ans.size();
    }
};

/*
跟No.26相似
題目:
移除陣列裡面等同於val的值
要求更改給予的nums陣列

解法:
先把不是val的存到新陣列
舊陣列複製新陣列的數值，當超出新陣列的大小時，代表都是val(不要的)，更改為NULL

*/