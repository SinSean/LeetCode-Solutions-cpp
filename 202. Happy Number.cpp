class Solution {
public:
    bool isHappy(int n) {
        int num=n;
        int num_copy=0;
        vector<int> vec2;
        while(true)
        {
            cout<<num<<endl;
            vector<int> vec;
            while(num!=0)
            {
                int temp=(num%10);
                vec.push_back(temp*temp);
                num=num/10;
            }
            num=0;
            for(int i=0;i<vec.size();i++)
            {
                num=num+vec[i];
            //    cout<<vec[i]<<" ";
            }
            if(num==1)
            {
                return true;
            }
            else
            {
                for(int i=0;i<vec2.size();i++)
                {
                    if(vec2[i]==num)
                        return false;
                }
            }
            vec2.push_back(num);
        }
        return false;
    }
};

/*
題目:
給一個正整數n 來看看是不是個Happy數
Happy數的定義就是n這個數字的10倍拆掉後平方相加
如果最後答案會是1，那就是個Happy數並回傳true
如果在途中遇到無窮循環(也就是又重複遇到了)，就回傳false

解法:
先把位數拆解這件事做出來
然後用vec去存讓他們相加變成下一次的num
vec要宣告在迴圈內是因為每次vec的空間使用後都要重新刷新
然而如果找到了num=1，也就是true可回傳

判斷是否重複的部分要在外層宣告一個陣列，陣列去存num有過的數字
如果num在陣列檢查的時候有發現過去存在過了，代表已經進循環，就直接回傳false

*/