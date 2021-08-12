class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int i,p=1,c0=0;
        int n=nums.size();
        vector<int> answer(n,0);
        for(i=0; i<n; i++)
        {
            if(nums[i]==0)
            {
                c0++;
            }
            else
            {
                p=p*nums[i];
            }
        }
        for(i=0; i<n; i++)
        {
            if(c0==1 && nums[i]==0)
            {
                answer[i]=p;
            }
            else if(c0==0)
            {
                answer[i]=p/nums[i];
            }          
        }
        return answer;
    }
};
