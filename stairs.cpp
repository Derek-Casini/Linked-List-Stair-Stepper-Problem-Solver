#include "stairs.h"

using namespace std;

int ways_to_top(int n) {
	if(n == 0 || n == 1){
		return 1;
	}
	else if(n == 2){
		return 2;
	}
	return ways_to_top(n - 1) + ways_to_top(n - 2) + ways_to_top(n - 3);
}
