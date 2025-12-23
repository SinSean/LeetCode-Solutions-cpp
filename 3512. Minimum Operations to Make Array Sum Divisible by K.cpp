class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        if(sum%k==0)
        {
            return 0;
        }
        return sum%k;
    }
};

/*
題目:
給nums陣列，如果k可以整除，就回傳0，不行就回傳總共操作次數
總共操作次數就是讓nums的數字一直-1，操作一次紀錄1，回傳操作了幾次才能讓總和/k不會有餘數

解題:
如題把nums相加成sum，sum%k如果是0就回傳0，不然就回傳sum%k(因為操作次數就是一直對nums-1，也就是+1+1+1)

*/