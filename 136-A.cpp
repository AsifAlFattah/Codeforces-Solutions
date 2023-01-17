#include<bits/stdc++.h>
#include <iomanip>

#define M 1000000007
using namespace std;
#define loop(n) for (int i = 0; i < n; i++)

#ifdef Darthrider212
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
#define nline "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


//-----------------------------------------------------------------------------
//converting string to uppercase
//std:: transform(str.begin(), str.end(), str.begin(), ::toupper);

//-------------------------------------------------------------------------
/*---------------------------------------------------Vector STL/Function----------------------------------------------------------
 * vlli v2(v.begin(),v.begin()+size);
 * vlli v2(v)
 * sort(v.begin().v.end())
 * reverse(v.begin(),v.end())
 * (bool) binary_search(v.begin(),v.end(),key)
 * (iterator) lower_bound(v.begin(),v.end(),key);
 * (iterator) upper_bound(v.bein(),v.end(),key);
 * (iterator) v.lower_bound(key);
 * (iterator) v.upper_bound(key);
 * v.erase(v.begin()+i)
 * v.erase(unique(v.begin(),v.end()),v.end())
 * v.erase(v.begin()+i,v.end()-j)  ||    v.erase(v.begin(),v.begin()+j)
 * (bool)next_premutation(v.begin(),v.end())
 * (bool)prev_premutation(v.begin(),v.end())
 *
 * v.push_back(data),v.pop_back(data),(data) v.front() ,(data) v.back() ,(data) v[index] ,(iterator) v.begin() ,(iterator) v.end()
 * (lli) max_e(v) ,(lli)min_e(v) ,lli fmax_i(v) ,lli lmax_i(v) ,lli fmin_i(v) ,lli lmin_i(v)
 */

/*--------------------------------------------------Vector of pairs----------------------------------------------------------------
 * vector<pair<key_type,data type>> vp
 * vp.push_back(make_pair(key,data))
 *
 * sort by key/first element (then data/second)
 * sort(vp.begin(),vp.end())
 *
 * sort by sec element(only by sec)
 * bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
 * {
 *       return (a.second < b.second);
 * }
 * sort(vp.begin(),vp.end(),sortbysec)
 *
 * (data) vp[i].first ,(data) vp[i].second ,
 */

/*----------------------------------------------String Manupulation -------------------------------------------------------------
 * string str2(str1)
 * string str2(str1.begin(),str1.begin()+length)
 * string s=str.substr(starting_index,length)
 * s.erase(s.begin()+index)
 * s.erase(s.begin()+index,s.end()-index)  ||  s.erase(s.begin()+index(),s.begin()+index)
 * s.erase(unique(s.begin(),s.end()),s.end())  ::adjecent will not be same
 * sort(s.begin(),s.end());
 * reverse(s.begin(),s.end())
 *
 * getline(cin,string_name)
 * stringstream(string_name)>>type1_>>type2_>>type3_.........>>typeN_;
 * stringstream STREAM_name(string_name)
 * STREAM_name>>type1_>>type2_>>type3>>type4_>>type5_;
 */

/* -------------------------------------------------STACK------------------------------------------
 * stack<data_type>s
 * push()              :s.push(data)           :O(1)
 * pop()               :s.pop()                :O(1)
 * top()               :s.top()                :O(1)
 * empty()             :s.empty()              :O(1)
 * size()              :s.size()               :O(1)
 */

/* -------------------------------------------------QUEUE------------------------------------------
 * queue<data_type>q
 * push()               :q.push(data)          :O(1)
 * pop()                :q.pop()               :O(1)
 * front()              :q.front()             :O(1)
 * back()               :q.back()              :O(1)
 * empty()              :q.empty()             :O(1)
 * size()               :q.size()              :O(1)
 */

/*------------------------------------------ priority_queue(default MAX HEAP)-------------------------------
 * priority_queue(data_type>pq
 * push()               :pq.push(data)         :O(log(n))
 * pop()                :pq.pop()              :O(long(n))
 * top()                :pq.top()              :O(1)
 * size()               :pq.size()             :O(1)
 * empty()              :pq.empty()            :O(1)
 */

/*-------------------------------SET:Element in sorted order(increasing) and UNIQUE*****----------------------
* declaration     :set<lli>s
* insertion       :s.insert(data)  //insert if it is not present     :O(log(n))
* size            :s.size()                                          :O(1)
* find            :auto it=s.find(data) //if it!=s.end -> data found :O(log(n))
* s.lower_bound() :it=s.lower_bound(data)
* s.upper_bound() :it=s.upper_bound(data)
* lower_bound()   :it=lower_bound(s.begin(),s.end(),data)
* upper_bound()   :it=upper_bound(s.begin(),s.end(),data)
* erase()         :erase(it)
* erase()         :s.erase(it1,it2)
* s.erase()       :s.erase(data)
* loop            :for(auto it=s.begin();it!=s.end();it++)
*/

/*------------------------------------------MAP:Elemnet r SORTED,unlike set we insert (key and data)--------------------------
* declaration   :map<key_type,data_type>m
* insert        :m.insert(make_pair(key,data));                     :O(log(n))
*               :m.insert(pair<type,type>(key,data))
* find          :auto it=m.find(key) //if(it!=m.end)it->first=key   :O(log(n))
* []            :m[key]++      //data=data+1 ,at that key           :O(log(n))
* size          :m.size()                                           :O(1)
* m.lower_bound :it=m.lower_bound(key)
* m.upper_bound :it=m.lower_bound(key)
* lower_bound   :it=lower_bound(m.begin(),m.end(),key)
* upper_bound   :it=upper_bound(m.begin(),m.end(),key)
* erase()       :s.erase(it)
*               :s.erase(it1,it2)
*               :s.erase(key)
* loop          :for(auto it=m.begin();it!=s.end();it++)
*
* it->first ,it->second ,
*/


/*Unorderd SET  :Elements in unsorted order
* declaration   :unordered_set<lli>s
* insertion     :s.insert(data)                                     :O(1)
* size          :s.size()                                           :O(1)
* find          :auto it=s.find(data)//if it!=s.end ->data found    :O(1)
* loop          :for(auto it=s.begin();it!=s.end();it++)
*/

/*Unordered MAP :Element r UNSORTED,unlike unordered set we insert (key and data)
* declaration   :unorderd_map<key_type,data_type> m
* insert        :insert(make_pair(key,data))                        :O(1)
* find          :auto it=m.find(key) //if (it!=m.end)it->first=key  :O(1)
* []            :m[key]++      //data=data+1 ,at that key           :O(1)
* size          :m.size()                                           :O(1)
* loop          :for(auto it=s.begin();it!=s.end();it++)
*/

/* muti_set             :similar to set but have duplicate element
 * multi_set<data_type>ms
 * insert()               :ms.insert(data)         :O(log(n))
 * find()                 :auto it=ms.find(data)   :O(long(n))
 * size()                 :ms.size()               :O(1)
 */

/* multimap              :similar to MAP but can have duplicate keys  :search O(logn):insert O(logn):delete O(logn)
 * mulimap<key_type,data_type>mm
 * mm.insert(pair<key_type,data_type>(key,data))        :O(long(n))
 * multimap<key_type,data_type> mm2(mm.begin(),mm.end())
 * find()                :it=mm.find(key)  //first it   :O(long(n))
 * mm.lower_bound(key)->second //data      mm.lower_bound(key)=it  1st elemet having the key  or mm.end()
 * mm.upper_bound(key)->second //data      mm.upper_bound(key)=it  1st element just after the key or mm.end()
 * mm.erase(key)         :erase all element of the key value
 * mm.erase(mm.begin(),mm.find(key))    :remove all having(key) less than the given key
 * mm.size()                                             :O(1)
 * for(auto it=mm.begin();it!=mm.end;it++)     :traversal
 */
/*__________________________________________________________________________________________________________________________________________________*/

//If you want to just put all the worlds of a paragraph in database use VECTOR
//If you want to make dictionary of the words in paragraph use SET
//If you want to calculate frequency of each words in paragraph use MAP

/*____________________________________________________________________________________________________________________________________________________*/

// function to print string in sorted order
void sortString(string &str)
{
	sort(str.begin(), str.end());
	cout << str;
}


ll pow2(ll val) {
	return 1 << val;
}
ll gcd3(ll a, ll b, ll c) {
	return __gcd(a, __gcd(b, c));
}
ll gcd4(ll a, ll b , ll c, ll d) {
	return __gcd(__gcd(a, b), __gcd(c, d));
}
ll lcm2(ll a, ll b) {return (a * b) / __gcd(a, b);}
ll lcm3(ll a, ll b, ll c) { return lcm2(a, lcm2(b, c));}
ll lcm4(ll a, ll b, ll c, ll d) { return lcm2(lcm2(a, b), lcm2(c, d));}
void google(int t) {cout << "Case #" << t << ": ";}
//------------------------------------------------------------------------------------
bool prime(ll n)
{
	// Corner cases
	if (n <= 1)  return false;
	if (n <= 3)  return true;

	// This is checked so that we can skip
	// middle five numbers in below loop
	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

//-----------------------------------------------------------------------------------------------------------------
int count_factors(ll a) {
	int num = 1, fact = 0;
	while (num * num <= a) {
		if (a % num == 0) {
			fact++;

			if (a / num != num) {
				fact++;
			}
		}
		num++;
	}
	return fact;
}
//------------------------------------------------------------------------------------------------------------------------------------
int countCubes(ll a, ll b)
{
	return (floor(cbrt(b)) - ceil(cbrt(a)) + 1);
}
int countSquares(ll a, ll b) {
	return (floor(sqrt(b)) - floor(sqrt(a - 1)));
}
int SquareCube(long long int N)
{

	int cnt = 0, i = 1;

	while (int(pow(i, 6)) <= N) {
		++cnt;
		++i;
	}

	return cnt;
}
//--------------------------------------------------------------------------------------------------------------------
//  bool bin_search(vector<int> arr){
//    int l = min-1, r = max+1;
//    while (r-l > 1) {
//        int m = (l + r) / 2;

//        if (predicate(m))
//            l = m;
//        else
//            r = m;
//    }
// }
// l will be last true
// r will be first false


//----counting number of set bits __builtin_popcount(j) == 2//if set bits in j=2
//----------------------------------------------------------------------------------------------------------

int main() {
    int n;
	cin >> n;
	vector<int> arr1(n);
	vector<int> arr2(n);
	for (int i = 1; i <= n; i++){
        cin >> arr1[i];
	}
	for (int i = 1; i <= n; i++) {
		arr2[arr1[i]] = i;
	}
	for (int i = 1; i <= n; i++){
		cout << arr2[i] << " ";
	}
}
