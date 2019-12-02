#include<iostream>
#include<fstream>
#include<string>
#include<vector>
std::vector<int> foo(int n) {
	std::vector<int> v(5);
	for (int i = 0; i < v.size(); i++) {
		v[i] = i;
	}
	return v;
}
int main(int argc,char ** argv) {
	using std::cout;
	std::vector<std::string> v2;
	cout << v2.size() << std::endl;
	return 0;
}