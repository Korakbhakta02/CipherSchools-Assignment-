#include<bits/stdc++.h>
using namespace std;
int robber(vector<int>& nums) {
		map<int,int> mp;
		int mx=0;
		for(int i=0;i<nums.size();i++){
			if(i<2)
			{
				mp[i]=nums[i];
			}
			else if(i==2){
				mp[i]=nums[i]+mp[i-2];
			}
			else{
				mp[i]=nums[i]+max(mp[i-2],mp[i-3]);
			}
			if(mx<mp[i])
					mx=mp[i];
		}

		return mx;
	}
int main()
{

int n;
cout<<"Enter size:";
cin>>n;
vector<int> a;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    a.push_back(temp);
}
int mon=robber(a);
cout<<mon;
}
