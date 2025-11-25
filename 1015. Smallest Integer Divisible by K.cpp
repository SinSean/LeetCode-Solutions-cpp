class Solution {
public:
    int smallestRepunitDivByK(int k) {
        vector<int> vec;
        int num=0;
        for(int i=0;i<k;i++)
        {
            num=num*10+1;
            if(num%k==0)
                return i+1;
            else
                num=num%k;
        }
        return -1;
    }
};

/*
題目:
    給一個int k，回傳一個由1組成可被k整除的最小數字，而回傳的是有幾個1的
    數字都是由1進行表示

舉例:
    Input: k = 1
    Output: 1
    Explanation: The smallest answer is n = 1, which has length 1.
    回傳1，因為1可以被k=1整除

    Input: k = 2
    Output: -1
    Explanation: There is no such positive integer n divisible by 2.
    回傳-1，由11...111組成的都是奇數，奇數無法被偶數的2整除

    Input: k = 3
    Output: 3
    Explanation: The smallest answer is n = 111, which has length 3.    
    回傳1，3個1也就是111可以被k=3整除 (111/3=37)

解法:
定義一個int num拿來當一串11...111用
如果num可以被k整除，那就回傳i+1(代表現在數字到了幾個1)
如果在for裡面找不到答案，則回傳-1
這邊有個重點 11...111會超出變數的大小
這邊就做一件事:如果%完是不能被k整除的，那就看%完剩多少，下次繼續算，這樣int就不會超出大小

*/