class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int min_ind =i;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]<nums[min_ind]){
                    min_ind = nums[j];
                }
                if(nums[i]!= min_ind)
                {swap(nums[i], min_ind);}
            }

        }
    }
    return nums;
};

