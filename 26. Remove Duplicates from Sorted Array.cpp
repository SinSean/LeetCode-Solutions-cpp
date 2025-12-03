class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(ans[k]<nums[i])
            {
                ans.push_back(nums[i]);
                k++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<ans.size())
            {
                nums[i]=ans[i];
            }
            else
            {
                nums[i]=NULL;
            }
        }
        return ans.size();
    }
};

/*
題目:
把陣列重複的數字刪除
要求直接更改給你的陣列

解法:
把不重複的存給一個新陣列
把舊陣列重新給值，如果在size是新陣列前就是新陣列的值，如果超過了代表是重複的數字，就給予NULL
*/