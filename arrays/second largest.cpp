//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int a[], int n) {
	    // code here
	    int max=-1;
	    int secondmax=-1;
	    for(int i=0;i<n;i++){
	        // if a[i] greater than largest
	        if(a[i]>max){
	            secondmax=max;
	            max=a[i];
	        }
	        
	        // else if a[i] not greater than largest but it might be greater than second largest
	        else if(a[i]>secondmax && a[i]!=max){
	            secondmax=a[i];
	        }
	    }
	    return secondmax;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
