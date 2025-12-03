class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                int count=0;
                for(int j=0;j<needle.size();j++)
                {
                    if(i+j<haystack.size())
                    {
                        if(haystack[i+j]==needle[j])
                        {
                            count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                        return -1;
                }
                if(count==needle.size())
                    return i;
            }
        }
        return -1;
    }
};

/*
題目:
尋找主字串中是否有符合子字串的字串，有的話回傳第一個位置

解法:
先找第一個字符合的
找到後開始字串比對，如果在比對前，已經超出主字串的大小代表不可能，直接回傳-1
在比對的時候使用count變數計數，如果迴圈出來後大小相同子字串，代表有，所以回傳當下的位置，也就是i
*/