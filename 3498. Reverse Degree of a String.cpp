class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans=ans+(int('z'-s[i])+1)*(i+1);
        }
        return ans;
    }
};

/*
題目:
給你一個字串還有字母對應的數值，字母在第一位數就x1，第二就x2，以此類推

解題:
用ans變數當相加的儲存器，用char z-a=25的性質去解，並且如題目要求，在第幾格就乘上該位數

*/