#include <cassert>
#include <string>

void delete_file(const std::string &fname) {
	assert(!fname.empty());
	remove(fname.c_str());
}

int main() {
	delete_file("tempfile");
//	delete_file("");
}