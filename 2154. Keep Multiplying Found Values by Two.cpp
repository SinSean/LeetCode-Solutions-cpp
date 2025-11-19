class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        vector<int> mynums=nums;
        int mynum=original*2;
        int ans=original;
        sort(mynums.begin(),mynums.end());
        int k=0;
        for(int j=0;(j<mynums.size()&&k<mynums.size());j++)
        {
            for(int i=k;i<mynums.size();i++)
            {
                if((mynum/2)==mynums[i])
                {
                    ans=mynum;
                    mynum=mynum*2;
                    k=i;
                    break;
                }
            }
        }
        return ans;
    }
};

/*
mynums複製nums，方便自己使用這個向量陣列
mynum用於判斷*2的數字是否存在這個陣列中
ans是回傳答案的變數，他會記錄下當前讀取到陣列中最大的*2數字
sort排序陣列，讓跑過的數字不用在內層迴圈再跑一次，所以搭配了k變數，這樣每次都是從k變數當起始點開始跑陣列，減少讀取時間
*/