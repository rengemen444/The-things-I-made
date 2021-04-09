#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <sstream>

#include <bitset>

int main() {

	
	std::vector<bool> nisin(8);

	std::fill(nisin.begin(),nisin.end(),false);
	int zyusin;

	std::cout << "数を入力してください : ";
	std::cin >> zyusin;

	if (zyusin > 255)
		std::cout << "256未満で入力してください" << std::endl;
	else {
		if(zyusin>=0){

			for (int i = 0; zyusin != 0; i++) {
				nisin[i] = zyusin % 2;
				zyusin /= 2;
			}
			
			std::reverse(nisin.begin(),nisin.end());
			for(auto binary : nisin)
				std::cout << binary;

			/*
			 * おまけのコード
			 *
			 *
			 * std::stringstream strStream;
			 * strStream << std::bitset<8>(zyusin);
			 * std::cout << strStream.str() << std::endl;
			 *
			 *
			*/
		}else{

			//もし負の値だったら、別対応する。
			std::stringstream strStream;
			strStream << std::bitset<8>(zyusin);
			std::cout << strStream.str() << std::endl;
		}
		std::cout  << std::endl;
	}
}
