class Solution {
  public:
    void seq(vector<int>&arr,int tar,vector<vector<int>>&ve,vector<int>&ds,int ind){
        if(tar==0){
            ve.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){  
            if(i>ind and arr[i]==arr[i-1]){
                continue;
            }
            if(arr[i]>tar){
                break;
            }
            ds.push_back(arr[i]);
            seq(arr,tar-arr[i],ve,ds,i+1);
            ds.pop_back();
        }
    }
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum2(vector<int> &arr, int tar) {
        // Your code here
        vector<vector<int>>ve;
        vector<int>ds;
        sort(arr.begin(),arr.end());
        seq(arr,tar,ve,ds,0);
        return ve;
    }
