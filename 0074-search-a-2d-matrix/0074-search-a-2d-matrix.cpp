class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        bool x = false;
        int k=0;
        int j=matrix[k].size()-1;
        while(k<matrix.size()){
            if(matrix[k][i]<=target&&matrix[k][j]>=target){
             int low=0;
             int high=j;
             while(low<=high){
                 int mid=low+(high-low)/2;
                 if(matrix[k][mid]==target)return true;
                 else if(matrix[k][mid]<target)low=mid+1;
                 else high=mid-1;
             }
            }
            k++;
        }
        return x;
    }
   
};