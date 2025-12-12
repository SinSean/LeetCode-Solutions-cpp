class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++)
        {
            if(i%2==1)
            {
                ans++;
            }
        }
        return ans;
    }
};

/*
題目:
求兩整數間的基數

解法:
區間可被mod=1就是基數
用ans當計數器並回傳ans

可參考solution的:✅ O(1) Math trick | Python, C++, Java | with Illustration
*/
