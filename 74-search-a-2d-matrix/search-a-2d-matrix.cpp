class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        // vector<int> v(m*n, 0);
        // int k = 0;
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++) v[k++] = (matrix[i][j]);
        // }
        
        // int lo = 0;
        // int hi = m*n-1;

        // while(lo <= hi){
        //   int mid = lo+(hi-lo)/2;
        //   if(v[mid] == target){
        //     return true;
        //     break;
        //   }
        //   else if(v[mid] > target) hi = mid-1;
        //   else lo = mid+1;

        // } 
        // return false;

        int lo = 0;
        int hi = m*n-1;

        while(lo <= hi){
            int mid = lo+(hi-lo)/2;
            if(matrix[mid/n][mid%n] == target){
                return true;
                break;
            } 
            else if(matrix[mid/n][mid%n] > target){
                hi = mid-1;
            } 
            else lo = mid+1;
        }
        return false;
    }
};