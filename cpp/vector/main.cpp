#include <iostream>
#include <vector>
using namespace std;

int main(){
	std::vector<int> numbers;
	int num;

	std::cout<<"wpisz liczby do posorowania lub -1 aby zakonczyć" <<std::endl;
	while(true){
	    std::cin>>num;
	    if (num==-1) break;
	    numbers.push_back(num);
	}

        int x = numbers.size();
	for(int i = 0; i < x - i; ++i){
		for(int j = 0; j < x - i - 1; ++j){
		    if(numbers[j] > numbers[j+1]){
			std::swap(numbers[j], numbers[j+1]);
		}
	    }
	}

	std::cout<<"liczby po sortowaniu:";
	for(int num:numbers) {
	    std::cout<<num<<" ";
	}

	std::cout<<std::endl;
	return 0;
}
