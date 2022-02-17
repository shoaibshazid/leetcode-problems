class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<pair<int,int>>mpp;
        for(int i=0;i<n;i++){
            int row=0,col=0;
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row=i;
                    col=j;
                    mpp.push_back(make_pair(row,col));
                }
            } 
        } 
        for(auto &[i,j]:mpp){
            //cout<<i<<" "<<j<<endl;
            for(int row=i,k=0;k<m;k++){
                matrix[i][k]=0;
            } 
            for(int col=j,k=0;k<n;k++){
                matrix[k][col]=0;
            }
        }
        
    }
};