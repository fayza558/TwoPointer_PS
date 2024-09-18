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
    int goodSegments=0;
    for(int r=0;r<n;r++)
    {
        currSum+=arr[r];

        while(currSum>s)
        {
            currSum-=arr[l];
            l++;

        }
        goodSegments+=(r-l+1);

    }
    cout<<goodSegments<<endl;
    return 0;
}
