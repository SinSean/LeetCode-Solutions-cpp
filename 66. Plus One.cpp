class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> vec=digits;
        bool flag=false;
        int i=vec.size()-1;
        vec[i]=vec[i]+1;
        for(i;i>=0;i--)
        {
            if(vec[i]>=10)
            {
                flag=true;
                vec[i]=0;
            }
            if(flag)
            {
                if(i>0)
                {
                    vec[i-1]++;
                    flag=false;
                }
            }
        }
        if(flag)
        {
            vec[0]=0;
            vec.insert(vec.begin(), 1);
        }
        return vec;
    }
};

/*
解題:
給一個整數陣列，他是十進制的，輸出尾數+1後的結果

Ex1:
digits = [4,3,2,1] 輸出就會是 digits = [4,3,2,2]
Ex2:
digits = [9,9] 輸出就會是 digits = [1,0,0] 

解法:
就從陣列最後直接+1做處理就好，如果有進位的話，用一個旗標表示有進位並把當前位置設置為0
當進位的數字有+1的時候，也做一樣的事情，去判斷是否進位
若最後旗標設置還在1，代表陣列最前方將插入數字1

遇到問題:
不小心多打了  '=' ，  '=' 跟 '==' 是不一樣的
重複宣告int i
*/