#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <sstream>

#include <bitset>

int main() {

	std::vector<bool> nisin,withHugouNisin;

	nisin.resize(8);

	std::fill(nisin.begin(),nisin.end(),false);

	int zyusin;

	std::cout << "数を入力してください : ";
	std::cin >> zyusin;

	if (zyusin < -255 || zyusin > 255)
		std::cout << "-256より大きく256未満で入力してください" << std::endl;
	else {
		if(zyusin<0){
			//もし負の値だったら、別対応する。
			std::stringstream strStream;
			strStream << std::bitset<8>(zyusin);
			std::cout << strStream.str() << std::endl;
		}else{
			for (int i = 0; zyusin != 0; i++) {
				nisin[i] = zyusin % 2;
				zyusin /= 2;
			}
			for (int i = (sizeof(nisin) / sizeof(nisin[0]) - 1); i >= 0; i--) {
				std::cout << nisin[i];
			}
		}
	}
}
