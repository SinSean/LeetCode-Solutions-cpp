class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        while(i<bits.size())
        {
            if(bits[i]==0)
            {
                i++;
                if(i==bits.size())
                    return true;
            }
            else
            {
                i=i+2;
            }
        }
        return false;
    }
};
/*
遇到0 就+1
遇到1 就+2
1的情況不用判斷後面是0還是1，因為題目規定最後一定會有0
如果遇到0後，+1的i跟bits的size一樣大，那就是True(最後一個為0 [落單的0])
其餘皆為false
*/