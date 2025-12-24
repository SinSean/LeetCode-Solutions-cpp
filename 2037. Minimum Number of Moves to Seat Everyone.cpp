class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int ans=0;
        for(int i=0;i<seats.size();i++)
        {
            ans=ans+abs(seats[i]-students[i]);
        }
        return ans;
    }
};

/*
題目:
給位置跟學生，回傳最少需要移動的次數

解題:
把位置跟學生直接做排序
之後用ans當總合，加總兩個陣列相減的絕對值

有參考解答:
✅Beats 100% - Explained with [ Video ] - C++/Java/Python/JS - Arrays - Sorting - Interview Solution

*/