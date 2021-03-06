/*
 * @author    : macab (macab@debian)
 * @file      : ChefandParty
 * @created   : Tuesday Feb 19, 2019 05:50:08 IST
*/
#include<bits/stdc++.h>
#define endl 		         "\n"
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define clr(x)                x.clear()
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define psi                   pair<string, int>
#define pci                   pair<char, int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define vi                    vector<int>
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define mii                   map<int, int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned int uint;
using namespace std;

/*
 * source : https://www.codechef.com/problems/CHFPARTY
 * */

int main(){
    /*code goes here*/
    ios::sync_with_stdio();

    ll t, n, it, tmp, max;
    cin >> t;

    vector<ll> vll;

    while(t-- > 0){
        cin >> n;
        max = 0;
        loopl(it, 0, n){
                cin >> tmp;
                vll.emplace_back(tmp);
        }
        sort(vll.begin(), vll.end());
        loopl(it, 0, vll.size()){
            if(max >= vll[it])
                 ++max;
            else
                break;
        }
        cout << max << endl;
        vll.clear();
    }
    return 0;
}

