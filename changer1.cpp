#include <iostream>
#include <string>			  //std::cinを使用
#include <fstream>			  //std::ifstreamを使用
#include <vector>

std::vector<std::string> changeWord(std::vector<std::string> words) {
	for(int i = 0; i < words.size(); i++) {
		for(int j = 0; j < words[i].length(); j++) {
			words[i][j]++;
		}
	}
}

int main() {
	
}
