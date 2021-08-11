class Solution {
public:
    int fib(int n)
    {
        int f0,f1,f,i;
        f0=0;
        f1=1;
        for(i=0; i<n-1; i++)
        {
            f=f0+f1;
            f0=f1;
            f1=f;
        }
        return f;
    }
};
