#include<bits/stdc++.h>
using namespace std;

    int countKDifference(vector<int>& nums, int k) 
    { int cnt=0;
        for (int i=0;i<=nums.size()-2;i++)
        {   

            for (int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j]== k)
                {
                    cnt++;
                }
            }

        }

        cout<<cnt<<endl; 







        
    }
};



int main(){
countKDifference()




}