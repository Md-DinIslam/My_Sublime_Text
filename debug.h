// #include <bits/stdc++.h>
// using namespace std;

// #define _cout cerr

//DEBUG
void __print(int x) {cerr << x << " ";}
void __print(long x) {cerr << x << " ";}
void __print(long long x) {cerr << x << " ";}
void __print(unsigned x) {cerr << x << " ";}
void __print(unsigned long x) {cerr << x << " ";}
void __print(unsigned long long x) {cerr << x << " ";}
void __print(float x) {cerr << x << " ";}
void __print(double x) {cerr << x << " ";}
void __print(long double x) {cerr << x << " ";}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "1 " : "0 ");}

// Special Case....
void __print(const vector<bool> &v) {
	int f = 0;
	cerr << '{';
	for (auto i : v) {
		cerr << (f++ ? "," : "");
		__print(i);
	}
	cerr << "}";
}

template<class T, class V> void __print(const pair<T, V> &x) {
	cerr << '{'; __print(x.first);
	cerr << ","; __print(x.second);
	cerr << '}';
}

template<class T, class V> void __print(const map<T, vector<V>> &pr) {
	cerr << "{";
	for (auto x : pr) {
		cerr << "{";
		__print(x.first);
		cerr << "--> ";
		bool f = 0;
		for (auto v : x.second) {
			cerr << (f++ ? "," : "");
			__print(v);
		}
		cerr << "}";
	}
	cerr << "}";
}

template<class T, class V> void __print(const map<vector<V>, T> &pr) {
	cerr << "{";
	for (auto x : pr) {
		cerr << "{";
		bool f = 0;
		for (auto v : x.first) {
			cerr << (f++ ? "," : "");
			__print(v);
		}
		cerr << "}, ";
		__print(x.second);
		cerr << "}";
	}
	cerr << "}";
}

template<class T> void __print(T v) {
	int f = 0;
	cerr << '{';
	for (auto i : v) {
		cerr << (f++ ? "," : "");
		__print(i);
	}
	cerr << "}";
}

template<class T> void __print(queue<T> q) {
	int f = 0;
	cerr << '{';
	while (!q.empty()) {
		cerr << (f++ ? "," : "");
		__print(q.front());
		q.pop();
	}
	cerr << "}";
}

template<class T> void __print(priority_queue<T> pq) {
	int f = 0;
	cerr << '{';
	while (!pq.empty()) {
		cerr << (f++ ? "," : "");
		__print(pq.top());
		pq.pop();
	}
	cerr << "}";
}

template<class T> void __print(stack<T> st) {
	int f = 0;
	cerr << '{';
	while (!st.empty()) {
		cerr << (f++ ? "," : "");
		__print(st.top());
		st.pop();
	}
	cerr << "}";
}

void _print() {cerr << "]\n";}

template <class T, class... V> void _print(T t, V... v) {
	__print(t);
	if (sizeof...(v))
		cerr << ", ";
	_print(v...);
	// cerr << "]\n";
}

#define debug(x...) cerr << "[" << #x << "] = ["; _print(x);

// #ifndef LOCAL
// #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif

// Debug
// #ifdef LOCAL
// #include "debug.h"
// #else
// #define debug(x...)
// #endif
