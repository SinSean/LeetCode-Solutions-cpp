class Solution {
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[1]!=b[1])
            return a[1]<b[1];
        else
            return a[0]>b[0];
    }
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int i=0;
        int a=intervals[i][1]-1,b=intervals[i][1];
        int count=2;
        
        for(auto & interval: intervals)
        {
            if(interval[0]<=a)
            {
                continue;
            }
            else if(interval[0]<=b)
            {
                a=b;
                b=interval[1];
                count++;
            }
            else
            {
                a=interval[1]-1;
                b=interval[1];
                count=count+2;
            }
        }
        return count;
    }
};

/*
參考
https://www.youtube.com/watch?v=sAafwtqYtGc
*/