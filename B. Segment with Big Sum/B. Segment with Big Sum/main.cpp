#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    long long s;
    cin>>n>>s;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    long long currSum=0;
    int minLen=INT_MAX;
    for(int r=0;r<n;r++)
    {
        currSum+=arr[r];
        while(currSum>=s)
        {
            minLen=min(minLen,r-l+1);
            currSum-=arr[l];
            l++;
        }

    }
    if(minLen==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<minLen<<endl;
    }

    return 0;
}
