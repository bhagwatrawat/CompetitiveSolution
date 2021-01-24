 void nextPermutation(vector<int>& nums) {
        int index1=-1;
        int index2;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0 && index1!= -1;i--){
            if(nums[i]>nums[index1]){
                index2=i;
                swap(nums[index1],nums[index2]);
                break;
            }
        }
        
        reverse(nums.begin()+index1+1,nums.end());
    }