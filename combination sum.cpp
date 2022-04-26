void combination(int ind,int tar,vector<int>&can,vector<int>&cur,vector<vector<int>>&fina){
        if(ind==can.size()){
            if(tar==0){
                fina.push_back(cur);
            }
            return ;
        }
        if(can[ind]<=tar){
        cur.push_back(can[ind]);
        //tar-=can[ind];
        combination(ind,tar-can[ind],can,cur,fina);
        cur.pop_back();
       // tar+=can[ind];
        }
        
        combination(ind+1,tar,can,cur,fina);
        return ;
        

    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>cur;
        vector<vector<int>>fina;
        combination(0,target,candidates,cur,fina);
        return fina;
    }
