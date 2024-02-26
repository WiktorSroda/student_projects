#include <iostream>

int main() {
    int n;
    bool p;

    std::cout << "Podaj koniec tego przedziału: ";
    std::cin >> n;

    for(int i = 2; i <= n; i++){
        p = true;

        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                p = false;
                break;
            }
        }
        if(p == true)
            std::cout << i << std::endl;
    }

    return 0;
}
