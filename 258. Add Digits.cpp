class Solution {
public:
    int addDigits(int num) {
        int var=num;
        int a;
        while(var>=10)
        {
            a=0;
            while(var>=10)
            {
                a=a+var%10;
                var=var/10;
            }
            a=a+var;
            var=a;
        }
        return a;
    }
};
/*
題目:
給一個整數，將各個位數的數字相加成下一個數字直到數字比10還小並回傳該數

解題:
用兩個變數去解，一個當成當下的num去做除以10，將模10後的數字加給a形成下一次的num
當num如題要求小於10即回傳該變數

*/