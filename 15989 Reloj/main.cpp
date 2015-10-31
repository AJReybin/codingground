#include <iostream>

using namespace std;

int main()
{
   int h,m;
   cin>>h>>m;
   if(h >= 0 && h < 24 && m >= 0 && m < 60 )
      cout<<((h*5)*6)-360<<" "<<m*6<<endl;
   return 0;
}