//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void hatao( stack<int>&s, int bichka )
    {
        if(bichka==1)
        {
            s.pop();
            return;
        }
        
        int rakhlo = s.top();
        s.pop();
        hatao(s,bichka-1);
        s.push(rakhlo);
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        
        int bichka = sizeOfStack/2+1;
        hatao(s,bichka);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends
