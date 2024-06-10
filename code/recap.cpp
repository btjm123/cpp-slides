#include <iostream>
#include <string>
#include <cstring>

bool isPrime(int x) {
	if (x <= 1) return false;
	for (int i=2;i<x;i++) {
		if (x % i == 0) return 0;
	}
	return 1;
}

void print(std::string s) {
	std::cout << s << '\n'; 
}

int sum(int a, int b) {
	return a + b;
}

int main () {
	// (1) Variables
	int x = 10;
	bool can = false;
	bool yes = 1;

	std::cout << "Value of x=" << x << '\n';
	std::cout << "Value of can=" << can << '\n';
	std::cout << "Value of yes=" << yes << '\n';

	std::cout << '\n';
	x = 50;
	std::cout << "After modification, x=" << x << '\n';
	x /= 10;
	std::cout << "After modification, x=" << x << '\n';
  x /= 2;
	std::cout << "After modification, x=" << x << '\n';
	x = x + 2;
	std::cout << "After modification, x=" << x << '\n';

	
	float f = 1.9f;
	double pi = 3.14;
	std::string randomStr = "Hello World!";
	std::cout << pi << " " << randomStr << ' ' << f << '\n';

	// (2) Conditions
	std::cout << '\n';
	if (yes && can) {
		std::cout << "The boolean yes and can is true" << '\n';
	} else {
		std::cout << "Either the boolean yes or can is false" << '\n';
	}

	// (3) Functions
	std::cout << '\n';
	print("I got printed here!");
	x = 8;
	if (isPrime(x)) {
		std::cout << x << " is prime" << '\n';
	} else {
		std::cout << x << " is not prime" << '\n';
	}
	std::cout << "Sum of 7 and 13 is " << sum(7, 13) << '\n';

	// (4) Some useful string operations
	std::cout << '\n';
	std::string A; 
	A.push_back('t');
	A.push_back('h');
	A.push_back('e');
	std::cout << "Value of A string=" << A << '\n';
	A.append(" quick brown fox");
	std::cout << "Value of A string=" << A << '\n';
	std::cout << "Value of A[5]=" << A[5] << '\n';
	
	std::string B = A.substr(4, 5);
	std::cout << "Value of B string=" << B << '\n';
   
	// (5) Iteration
	std::cout << '\n';
	for (int i=0;i<=5;i++) {
		std::cout << "Value of i=" << i << '\n';
	}
	int counter = 0;
	while (true) {
		std::cout << "Value of counter=" << counter << '\n';
		if (counter >= 5) break;
		counter++;
	}

	// (6) Arrays (?)
	std::cout << '\n';
	int arr[5]; 
	memset(arr, 0, sizeof(arr));
	for (int i=0;i<5;i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	arr[1] = 5; arr[3] = 7; arr[4] = 9;
  for (int i=0;i<5;i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';

	// (7) Pointers / References
	std::cout << '\n';
	int z = 9;
	int* pz = &z;
	std::cout << "Address of z=" << pz << '\n';
	std::cout << "Value of z pointed to by pz=" << *pz << '\n';
	std::cout << "Value of z=" << z << '\n';
	std::cout << "Size of pz=" << sizeof(pz) << '\n';
	std::cout << "Size of z=" << sizeof(z) << '\n';

	std::cout << '\n';
	int k = 88;
	int& rk = k;
	std::cout << "Value of k=" << k << '\n';
	std::cout << "Value of rk=" << rk << '\n';
	rk = 82;
	std::cout << "Value of k=" << k << '\n';
	std::cout << "Value of rk=" << rk << '\n';

	return 0;
}
