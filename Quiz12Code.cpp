#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>


using namespace std;

	// class Evaluate {
	//     const int val;
	//   public:
	//     Evaluate(int v) : val(v) {}
	//     bool operator() (int n) const {
	//         return n < val;
	//     }
	// };

	// bool compare(string a, string b){
	//     return a.back() != b.back() ? a.back() < b.back() : a<b;
	// }

	// bool is_vowel(char c) {
	//     return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
	// }
int main() {
	// your code goes here
    // 	tuple t = {false,5.26,1LL,97.1};        Tuple Question
    // 	auto &[a,b,c,d] = t;
    // 	c = 16;
    // 	cout << get<long long>(t); == 16
	
    // 	tuple <int, double> t = {1,2.3};        Tuple Cout
    // 	    couts == cout << get<double>(t); cout << get<1>(t);
	
	//constexpr long double pi = 3.14159265358979323846264;
	// valid lamba fxn defs ==
	// auto tau = [] {return pi*2}; , auto tau =[]() -> long double {return pi*2};, auto tau = [](){return pi*2};	
	
	// 	vector<string> vsSea = {"Winter", "Spring", "Summer", "Fall"};
	// 	sort(vsSea.begin(), vsSea.end(), compare);
	// 	for (auto s : vsSea)
	// 	    cout << s;
	
    // int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}; This is the Evaluate code
    // cout << count_if(a+3, end(a), Evaluate(14)); // == 11, thats the answer
    
    // string num = "0123456789";   This is the is_vowel code
    // string let = "abcdefghijklmnopqrstuvwxyz";
    // copy_if(let.begin(), let.end(), num.begin(), is_vowel);
    // cout << num;
    
    // string small = "abcde";
    // char big[] = "ABCDEFGHIJ";
    // copy(small.begin(), small.end(), big);
    // cout << big;
    
    // int a[] = {6,13,25,36,80,212};
    // cout << * find(a, a+4,28);
    
	return 0;
}
