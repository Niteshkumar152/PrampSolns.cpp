#include <iostream>
#include<math.h>
using namespace std;

double root(double x, unsigned int n) 
{
  // your code goes here
    int l=0;
    int r=x;
    double ans=0;
    while(l<=r)
    {
      int mid=(l+r)/2;
      if(pow(mid,n)==x)
        return mid;
      else if(pow(mid,n)>x)
        r=mid-1;
      else
      {
         ans=mid;
         l=mid+1;
      }
    }
    
  double inc=0.1;
  
  for(int i=0;i<3;i++)
  {
    while(pow(ans,n)<=x)
    {
      ans+=inc;
    }
    ans-=inc;
    inc=inc/10;
  }
  
  
  return ans;
}

int main() {
  return 0;
}
