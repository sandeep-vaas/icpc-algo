#include <iostream>
#include <climits>
#include <cmath> 

/* Update if you are testing more
 * Assuming 
 */
#define TESTS 7
#define TEST_INPUTS {-128,	\
		0,  		\
		1,		\
		2, 		\
		45,		\
		101,		\
		127}

#define EXPECTED_OUTPUT {false,	\
		false,		\
		false,		\
		true,		\
		false,		\
		true,		\
		true}

using namespace std;

/* is_prime checks whether the number is prime and returns true for any prime
 * and positive integer and returns false for any other condition
 */

bool is_prime(long n) {
	if(n <= 1) return false;
	long test = sqrt(n), i = 0;
	for(i = test; i > 1; i--){
		if((n % i) == 0) return false;
	}	
	return true;
}

/* prime_tester unit tests the is_prime for a set of inputs mentioned at the
 * top
 */

void prime_tester(void) {
	bool expected[TESTS] = EXPECTED_OUTPUT;
	long inputs[TESTS] = TEST_INPUTS;
	int i = 0;
	for(i = 0; i < TESTS; i++){
		if(expected[i] == is_prime(inputs[i])) {
			cout<<"Test "<<i<<": Passed! Input: "<<inputs[i]<<endl;
		} else {
			cout<<"Test "<<i<<": Failed! Failing input: "<<inputs[i]<<endl;
		}		
	}
}


/* Uncomment to test the code*/
//int main(void) {
//	prime_tester();
//	return 0;
//}

