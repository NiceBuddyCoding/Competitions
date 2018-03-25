#include <iterator>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
#define ul unsigned long int
int main()
{
   nsigned int T=0; cin>>T; //number of test cases T.

   for(auto t=0; t<T; ++t)
   {
      ul B=0, N=0;
      cin>>B >>N;           //B the budget and N the number of late night parties.

      multimap<ul,ul> MAP;  //<excitement level(Ei), ticket fee(Ci) >

      for(auto i=0; i<N; ++i)
      {
         ul Ci=0, Ei=0;
         cin>>Ci >> Ei;
         MAP.insert(make_pair(Ei,Ci));
      }

      ul COST=0, FUN=0;
      for(auto itr=MAP.rbegin(); itr!=MAP.rend(); ++itr)
      {
         //cout<<COST<<" "<<FUN<<" "<<B<<endl;
         if( COST+ ( (*itr).second ) <= B )
         {
            COST+=( (*itr).second ); //ticket fee(Ci)
            FUN +=( (*itr).first  ); //excitement level(Ei)
         }
      }

      cout<<COST<<" "<<FUN<<endl;
   }
    return 0;
}
3
50 3
10 60
20 100
30 120
40 5
12 10
16 10
20 10
24 10
8 3
10 4
3 2
1 1
4 3
2 1


50 220
36 23
10 7
