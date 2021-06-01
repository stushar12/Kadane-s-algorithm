#include<bits/stdc++.h>
using namespace std;


int main()
{
   vector<int> arr{-5,4,2,-6,1};

   int n=arr.size();

   int currsum=0;
   int maxsum=INT_MIN;
   for(int i=0;i<n;i++)
   {
      currsum+=arr[i];

      if(currsum>maxsum)
      maxsum=currsum;

      if(currsum<0)
      currsum=0;
   }

   cout<<maxsum;
   
}