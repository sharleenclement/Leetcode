//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        int k = 1;
        for(int i=1;i<=2*n;i++)
        {
            if(i<=n)
            {
                for(int j=1;j<=n-i;++j)
                cout << " ";
                
                for(int j=1;j<=i;++j)
                cout << "* ";
                
                cout << endl;
            }
            else
            {
                for(int j=n+1;j<=i-1;++j)
                cout << " ";
                
                for(int j=1;j<=i-k;++j)
                cout << "* ";
                
                cout << endl;
                
                k+=2;
            }
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends