#include <iostream>
#include <boost/random.hpp>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
	
	// Throwing dice.
	// Mersenne Twister.
	boost::random::mt19937 myRng;
	// Set the seed.
	myRng.seed(static_cast<boost::uint32_t> (std::time(0))); // Uniform in range [1,6]
	boost::random::uniform_int_distribution<int> six(1,6);

	map<int, long> statistics; // Structure to hold outcome + frequencies 
	int outcome; // Current outcome
	int n;
	cout << "Enter the number of times of rolling the dice: " << endl;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		outcome = six(myRng);
		++statistics[outcome];
	}

	cout << "How many trials? " << n  << "\n" << endl;
	for (int i = 1; i <= 6; ++i) {
		printf("Trials %d has %.4f%% outcomes \n", i, (float(statistics[i]) / n * 100));
	}

	return 0;
}