#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr; // empty vector
    int n,in;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        arr.push_back(in);
    }
    sort(arr.begin(),arr.end()); // sort from begin to end
    // to sort from first unti x elements, use sort(arr.begin(),arr.begin()+x)

    vector<int>::iterator it;
    for(it=arr.begin();it!=arr.end();it++)
        cout<<*it<<" ";



}
