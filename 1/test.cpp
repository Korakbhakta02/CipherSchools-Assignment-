#include <bits/stdc++.h>
using namespace std;
int missingno(int a[], int n)
{

    int total = (n * (n+1)) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int missing = missingno(a, n);
    cout << missing;
}
