#include<bits/stdc++.h>

using namespace std ;

vector<int>v ;
int first , last ;

int bisect(int f)
{

    first = 0 ;
    last = v.size() - 1 ;
    int mid ;

    while(first<=last)
    {
        mid = (first+last) / 2 ;

        if(f==v[mid])
        {
            first=mid + 1 ;
        }
        else if(f > v[mid])first = mid + 1 ;
        else last = mid - 1 ;
    }
    return first ;
}

int main()
{

    int n, q ;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {
        int o ;
        cin >>  o ;
        v.push_back(o) ;
    }

    sort(v.begin(),v.end()) ;

    cin >> q ;

    int qq[q] ;

    for(int i=0 ; i<q ; i++)
    {
        int o ;
        cin >> o ;
        qq[i] = bisect(o) ;
    }

    for(int i=0 ; i<q ; i++)cout << qq[i] << endl ;

}
