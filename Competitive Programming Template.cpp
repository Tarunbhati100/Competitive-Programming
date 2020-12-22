/*
**************************************************************************************************************
        ______             _______ 
       |::::::|           |:::::::|
       |::::::|           |:::::::|
       |::::::|           |:::::::|
               ____________
              |::::::::::::|                   Competitive Programming Template
              |::::::::::::|                   Owner :- Tarun Bhati
              |::::::::::::|
        ____  --------------______
        \::::\             /:::::/
         \::::\___________/:::::/
          \::::::::::::::::::::/
           \::::::::::::::::::/
            ==================
 _______________
|:::::::::::::::|
|:::::::::::::::|     ________          ________________      ______      _____          _____          _____
    |::::::|         /::::::::\        |::::::::::::::::|    |::::::|    |:::::|        /:::::\        /::::/
    |::::::|      __/::::::::::\__     |::::::::::::::::|    |::::::|    |:::::|       /:::::::\      /::::/
    |::::::|     |::::::|  |::::::|    |::::::|   |:::::|    |::::::|    |:::::|      /:::::::::\    /::::/
    |::::::|     |::::::|__|::::::|    |::::::|___|:::::|    |::::::|    |:::::|     /::::: /\:::\__/::::/
    |::::::|     |::::::::::::::::|    |:::::::::::::::/     |::::::|____|:::::|    /::::::/  \:::::::::/
    |::::::|     |::::::|  |::::::|    |::::::|   \::::\     |:::::::::::::::::|   /::::::/    \:::::::/
    |::::::|     |::::::|  |::::::|    |::::::|    \::::\    |:::::::::::::::::|  /::::::/      \:::::/
**************************************************************************************************************
*/
#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define ull unsigned long long
#define lli long long int
#define PI 3.1415926535897932384626
#define el '\n'
#define For(i, n) for(i=0;i<n;i++)
#define kFor(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define vinput(v,n,temp) for(int i=0;i<n;i++){cin>>temp; v.pb(temp);}
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define debarray(i, a, n) For(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it++)
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

template <typename T1, typename T2>

inline std::ostream& operator << (std::ostream& os, const std::pair<T1, T2>& p)
{
    return os << "(" << p.first << ": " << p.second << ")";
}

template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::vector<T>& v)
{
    // bool first = true;
    // os << "[";
    for(unsigned int i = 0; i < v.size(); i++)
    {
        // if(!first)
        //     os << ", ";
        os << v[i]<<" ";
        // first = false;
    }
    return os;
    // return os << "]";
}

template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::set<T>& v)
{
    // bool first = true;
    // os << "{";
    for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
    {
        // if(!first)
        //     os << ", ";
        os << *ii;
        // first = false;
    }
    return os;
    // return os << "}";
}

template<typename T1, typename T2>
inline std::ostream &operator << (std::ostream & os,const std::map<T1, T2>& v)
{
    // bool first = true;
    // os << "{";
    for (typename std::map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
    {
        // if(!first)
        //     os << ", ";
        os << *ii ;
        // first = false;
    }
    return os;
    // return os << "}";
}

template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::unordered_set<T>& v) {
    return os << std::set<T>(all(v));
}

template<typename T1, typename T2>
inline std::ostream &operator << (std::ostream & os,const std::unordered_map<T1, T2>& v) {
    return os << std::map<T1, T2>(all(v));
}

void fastscan(int &number)
{
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    c = getchar(); 
    if (c=='-') 
    { 
        negative = true; 
  
        c = getchar(); 
    } 
  
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    if (negative) 
        number *= -1; 
}

vector<bool> sieve(int n){
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;
}

const ll MOD = 1e9+7;
const ll INF = 1e18;
const double EPS = 1e-6;



/* ********************************************************************************************************/
/* ========== YOUR CODE HERE ========= */
/* ********************************************************************************************************/

void solve() {
    int n;
    cin>>n;
    vector<char> v;
    char temp;
    vinput(v,n,temp);
    cout<<v<<el;
}

/* ********************************************************************************************************/
/* ========== YOUR CODE HERE ========= */
/* ********************************************************************************************************/

int main() {
    fio;
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}