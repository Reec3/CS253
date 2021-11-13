#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>


using namespace std;

class Evaluate {
    const int val;
  public:
    Evaluate(int v) : val(v) {}
    bool operator() (int n) const {
        return n < val;
    }
};

int main() {
	// your code goes here
    int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    cout << count_if(a+3, end(a), Evaluate(14)); // == 11, thats the answer
    
	return 0;
}
