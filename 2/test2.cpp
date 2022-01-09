#include <bits/stdc++.h>
using namespace std;
int solution(vector<int>& arr, int t)
{
    int closest= INT_MAX;
    for (int i = 0; i < arr.size() ; i++)
    {
        for(int j =i + 1; j < arr.size(); j++)
        {
            for(int k =j + 1; k < arr.size(); k++)
            {
                if(abs(t - closest) > abs(t- (arr[i] + arr[j] + arr[k])))
                    closest= (arr[i] + arr[j] + arr[k]);
            }
        }
    }
    return closest;
}
int main()
{
    int n,x;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter target:";
    cin>>x;
    vector<int> a;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        int temp;
    cin>>temp;
    a.push_back(temp);
    }

    int sol=solution(a, x);
cout<<sol;
}

