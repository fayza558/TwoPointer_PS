/*#include <iostream>
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
    long long goodSegments=0;
    for(int r=0;r<n;r++)
    {
        currSum+=arr[r];

        while(currSum>s)
        {
            goodSegments+=(n-r);
            currSum-=arr[l];
            l++;

        }


    }
    cout<<goodSegments<<endl;
    return 0;
}

*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

    long long n, s;
    cin >> n >> s;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long l = 0, r = 0;
    long long current_sum = 0;
    long long count = 0;

    while (r < n) {
        current_sum += a[r];
        while (current_sum >= s) {
            count += (n - r);
            current_sum -= a[l];
            l++;
        }
        r++;
    }


    cout << count << endl;

    return 0;
}
