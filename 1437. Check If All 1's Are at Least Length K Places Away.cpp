class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i=0;
        while(nums[i]==0)
        {
            i++;
            if(i>=nums.size())
            {
                return true;
            }
        }
        int count;
        while(true)
        {
            if(nums[i]==1)
            {
                count=0;
                i++;
            }
            if(i>=nums.size())
            {
                return true;
            }
            while(nums[i]==0)
            {
                count++;
                i++;
                if(i>=nums.size())
                {
                    return true;
                }
            }
            if(count<k)
            {
                return false;
            }
        }
    }
};
/*
第一個while用於抓第一個1 如果都是0那就直接回傳true
第二個while開始抓下個1之前的0是不是比k多，所以用計數count
第二個while 的第二個if用於看是不是已經超出陣列了 ex:[0001]
第二個while 的第二層while去抓有幾個0，但如果超出陣列大小代表不會有下個1，直接回傳true
第二個while 的第三個if碰到的時候 代表抓完count了(幾個0)，如果比k還少，那就是false
*/