//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        int i=0;
        int j=0;
        int cd=1;
        int ci=0;
        int cj=0;
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};
        while(i>=0 && i<R && j>=0 && j<C)
        {
            ci=i;
            cj=j;
            if(matrix[i][j]==0)
            {
                i+=x[cd];
                j+=y[cd];
            }
            else{
                cd=(cd+1)%4;
                matrix[i][j]=0;
                i+=x[cd];
                j+=y[cd];
            }
        }
        pair<int,int>ans;
        ans.first=ci;
        ans.second=cj;
        return ans;

    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends