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

template<class T, class V> void __print(const pair<T, V> &x) {
	cerr << '{'; __print(x.first);
	cerr << ","; __print(x.second);
	cerr << '}';
}

template<class T> void __print(T v) {
	int f = 0;
	cerr << '{';
	for (auto &i : v) {
		cerr << (f++ ? "," : "");
		__print(i);
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

#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)

// #ifndef LOCAL
// #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif
