//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    private:
    int solve(int n,int k){
        //base case
        if(n==1) return 0;
        
        // relation 
        int ans=solve(n-1,k);
        return (ans+k)%n;
    }
    public:
    int josephus(int n, int k){
    
     int ans= solve(n,k);
     return (ans+1);
       
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends