//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int k = 1;
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=i;++j)
            {
                if(j==1)
                {
                    if(i%2==0)
                    {
                        cout << "0 ";
                        k = 0;
                    }
                    else
                    {
                        cout << "1 ";
                        k = 1;
                    }
                }
                else
                {
                    if(k==0)
                    {
                        if(j%2==0)
                        cout << "1 ";
                        else
                        cout << "0 ";
                    }
                    else
                    {
                        if(j%2==0)
                        cout << "0 ";
                        else
                        cout << "1 ";
                    }
                }
            }
            cout << endl;
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends