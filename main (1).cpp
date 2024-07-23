#include "solutionOne.hpp"
#include "solutionTwo.hpp"

int main(){

	SolutionOne one;
	std::string inputOne="abc";
	std::string inputTwo="bca";
	bool outputOne=one.closeStrings(inputOne, inputTwo);
	std::cout<<outputOne<<std::endl;

	SolutionTwo two;
	std::vector<std::vector<int>> inputTwo1={{3,2,1},{1,7,6},{2,7,7}};
	int outputTwo=two.equalPairs(inputTwo1);
	std::cout<<outputTwo<<std::endl;

	return 0;
}