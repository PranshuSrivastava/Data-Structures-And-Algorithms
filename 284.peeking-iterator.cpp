/*
 * @lc app=leetcode id=284 lang=cpp
 *
 * [284] Peeking Iterator
 */

// @lc code=start
/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define nline cout<<'\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define F first
#define S second
typedef unordered_map<int,int> mi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
#define mod 1e9+7
using namespace std;
class PeekingIterator : public Iterator {
private:
	int m_next;
	bool m_hasnext;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
		m_hasnext = Iterator::hasNext();
		if(m_hasnext)
		m_next = Iterator::next();
	}

    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
		return m_next;
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
		int t = m_next;
		m_hasnext = Iterator::hasNext();
		if(m_hasnext)
		m_next = Iterator::next();
		return t;
	}

	bool hasNext() const {
		return m_hasnext;
	}
};
// @lc code=end

