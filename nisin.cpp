#include <iostream>

int main() {
	int nisin[] = {0, 0, 0, 0, 0, 0, 0, 0};
	int zyusin;
	std::cout << "数を入力してください : ";
	std::cin >> zyusin;

	if (zyusin > 255) {
		std::cout << "256未満で入力してください" << std::endl;
	} else {
		for (int i = 0; zyusin != 0; i++) {
			nisin[i] = zyusin % 2;
			zyusin /= 2;
		}
		for (int i = (sizeof(nisin) / sizeof(nisin[0]) - 1); i >= 0; i--) {
			std::cout << nisin[i];
		}
		std::cout << std::endl;
	}
}
