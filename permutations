 void perm(vector<int>& nums,int mymap[],vector<int>&sto,vector<vector<int>>&ans){
        if(sto.size()==nums.size()){
            ans.push_back(sto);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(mymap[i]==0){
                sto.push_back(nums[i]);
                mymap[i]=1;
                perm(nums,mymap,sto,ans);
                mymap[i]=0;
                sto.pop_back();
            }
        }
    }
 vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sto;
        int mymap[nums.size()];
        for(int i=0;i<nums.size();i++){
            mymap[i]=0;
        }
        perm(nums,mymap,sto,ans);
        return ans;
    }
