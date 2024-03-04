int majorityElement(vector<int>& nums) {
        int c=0;
        int e;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                c++;
                e=nums[i];
            }
            else if(nums[i]==e){
                c++;
            }
            else{
                c--;
            }

            

        }

        int c1=0;

        for(int i=0;i<nums.size();i++) {
            if(nums[i]==e){
                c1++;
            }
        }

        if(c1>(nums.size()/2)){
            return e;
        }

        return -1;


        
    }