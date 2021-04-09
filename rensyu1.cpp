#include <iostream>

int main() {
    //ここ最近初めて数列の存在を知ったのでやってみる
    //等差数列っていうらしい

    int kiten = 2;
    int tasukazu = 4;

    while (kiten <= 100) {
        std::cout << kiten << " ";
        kiten += tasukazu;
    } //100まで表示

    std::cout << std::endl;
}