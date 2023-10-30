#include <iostream>
#include <string>
using namespace std;

//selectionsort
void selectionsort(char* a, int n) {
	for (int i = 0; i < n; i++) {
		int j = i;
		for (int k = 0; k < n; k++) {
			if (a[k] < a[j]) {
				j = k;
				swap(a[i], a[j]);
			}
		}
	}
}

class String {
private:
	int length = 100;
	char* str;
public:
	String(char* init) {
		length = strlen(init);
		str = new char [length + 1];
		strcpy_s(str, length + 1, init);
	}
	~String() {
		delete[] str;
	}   
	void frequency() {
		int n = get_length();
		selectionsort(str, n);
		for (int i = 0; i < n; i++) {
			int sum = 0;
			if (str[i] != str[i + 1]) {
				for (int j = 0; j < n; j++) {
					if (str[j] == str[i]) {
						sum++;
					}
				}
				cout << str[i] << " : " << sum << " // ";
			}
		}
	}
	int get_length() {
		return length;
	}
	char* get_string() {
		return str;
	}
};

int main() {
	char* s1 = new char[100];
	cout << "Enter the string: ";
	cin >> s1;
	String s(s1);
	s.frequency();
	delete[] s1;

	return 0;
}