/* 
    Problem: https://codingcompetitions.withgoogle.com/codejam/round/0000000000050fc5/0000000000054e9c
    
    Test cases passed
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{
    int Tests;
    cin >> Tests;
    
    for (int t=0; t<Tests; t++)
    {

      int r, c, k;
      cin >> r >> c >> k;
      if (k==r*c-1) 
        {
        cout << "Case #" << t+1 << ": ";
        cout << "IMPOSSIBLE\n";
        }
      else
        {
        cout << "Case #" << t+1 << ": POSSIBLE\n";
        k=r*c-k;
        int var = 0;
        if (c==1)
          {
            cout << "S\n";
            for (int i=1; i<k; i++)
            {
                cout << "N\n";
            }
            int e=1;
            for (int i=max(k, e); i<r*c; i++)
            {
                cout << "S\n";
            }
            continue;
          }

        for (int i=0; i<r; i++)
        {
            for (int j=0; j<c; j++)
            {
                if (i==0 && j==0)
                {
                    cout << "E";
                    var++;
                }
                else
                {
                    if (i==0)
                    {
                        if (var<k)
                        {
                            cout << "W";
                            var++;
                        }
                        else
                        {
                            cout << "E";
                        }
                    }
                    else
                    {
                        if(var<k)
                        {
                            cout << "N";
                            var++;
                        }
                        else
                        {
                            cout << "S";
                        }
                    }
                }
            }
            cout << "\n";
        }




    }





    }

}
