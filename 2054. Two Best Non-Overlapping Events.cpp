class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int starttime=1;
        int lasttime=0;
        int maxtime=0;
        for(int i=0;i<3;i++)
        {   
            if(lasttime<events[i][1])
            {
                lasttime=events[i][1];
            }
        }
        for(int i=0;i<3;i++)
        {
            if(maxtime<events[i][2])
            {
                maxtime=events[i][2];
            }
            events[0][2]+events[1][2]
            events[1][2]+events[2][2]
            events[2][2]+events[0][2]
        }
        
        
    }
};


/*
題目:
給二維陣列 [開始時間，結束時間，花費時間]
要跑完起始->最後的結束時間
回傳最大花費時間
最多可以使用兩組陣列相加

0 0 0
1 0 0
2 0 0


解法:


*/