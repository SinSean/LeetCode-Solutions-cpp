class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int sum=0;
        for(int i=0;i<apple.size();i++)
        {
            sum=sum+apple[i];
        }
        int ans=0;
        for(int i=capacity.size()-1;i>=0;i--)
        {
            sum=sum-capacity[i];
            ans++;
            if(sum<=0)
                return ans;
        }
        return ans;
    }
};

/*
題目:
給兩個陣列 apple陣列是幾個蘋果、capacity是袋子 拿來裝蘋果
回傳最少需要用到幾個袋子

解題:
這是貪心Greedy的題目
先將袋子陣列排序後，把蘋果數量加總起來，再一個一個從袋子最大的容量去減少，如果使用到了，使用袋子的數量就+1，這邊使用變數ans
如果蘋果裝完了或裝了還有剩，就能回傳用了幾個袋子，也就是ans

*/