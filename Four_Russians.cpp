#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int Four_Russians(string string1, string string2) {
	// First string must always be larger
	if (string1.size() < string2.size()) {
		cout << "First string is smaller than the second";
		exit(-1);
	}

	int table[string1.size()][string2.size()];
	int block_size = log2(string1.size());
	int i;

	for (i = 0; i < string2.size(); i++) {
		table[i][0] = i;
		table[0][i] = i;
	}
	while (string1[i] != '\0')
		table[i][0] = i++;
}

int main(int argc, char **argv) {
	// Input data check
	if (argc != 3 or !argv[1] or !argv[2])
		return 1;

	string string1 = argv[1];
	string string2 = argv[2];
	float edit_distance = Four_Russians(string1, string2);
	cout << edit_distance;
	return 0;
}
