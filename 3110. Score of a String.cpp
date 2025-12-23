class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;i++)
        {
            sum=sum+abs(int(s[i])-int(s[i+1]));
        }
        return sum;
    }
};
/*
題目:
給一個字串，要求相減兩個前後的英文字ASCII碼在整個字串中，並且使用絕對值

解題:
如題要求，前後相減的絕對值去相加

ASCII->數字
int(char)

*/