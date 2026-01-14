#include <iostream>

int main() {
	// {} or {0} to initialize int variables
	int total {};
	int a {}, b {}, c {};
	const int count {3};

	std::cout << "Enter three numbers separated by spaces: ";
	std::cin >> a >> b >> c;

	total = a + b + c;

	double result {0.0};
	result = static_cast<double>(total) / count;
	// result = (double) total / count -> old style of casting

	std::cout << "\nThe sum of the numbers: " << total << std::endl;
	std::cout << "The average of the numbers: " << result << std::endl;

	return 0;
}
