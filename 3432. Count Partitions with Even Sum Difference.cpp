class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ans=0;
        int i_sum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            i_sum=i_sum+nums[i];
            int j_sum=0;
            for(int j=i+1;j<nums.size();j++)
            {
                j_sum=j_sum+nums[j];
            }
            if((i_sum+j_sum)%2==0)
                ans++;
        }
        return ans;
    }
};

/*
題目:
給你一個數字陣列，依序拆陣列下去分兩個區塊進行相加，如果值是even(偶)，計數器就+1，回傳相加後有幾個偶數

解題:
i_sum當左區塊，j_sum當右區塊，如題目:如果左區塊跟右區塊是偶數(%2==0)，計數器(ans)累計，回傳ans

*/