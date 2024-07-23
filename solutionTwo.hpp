#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include "solutionOne.hpp"

class SolutionTwo{
public:
	int equalPairs(std::vector<std::vector<int>>& grid){
		int output=0;
		std::set<std::vector<int>> res;
		std::unordered_map<int, std::vector<int>> dupe;

		for(int i=0; i<grid.size(); ++i){
			if(res.find(grid[i]) != res.end()){
				dupe[i]=grid[i];
			}
			res.insert(grid[i]);
		}

		for(int i=0; i<grid.size(); i++){
			std::vector<int> temp;
			for(int j=0; j<grid[i].size(); j++){
				temp.push_back(grid[j][i]);
			}

			if(res.find(temp) != res.end()){
				for(auto it: dupe){
					if(it.second==temp){
						++output;
					}
				}
				++output;
			}
		}
		return output;
	}
/*
Input: grid = [[3,2,1],[1,7,6],[2,7,7]]
Output: 1
Explanation: There is 1 equal row and column pair:
- (Row 2, Column 1): [2,7,7]
*/
};

#endif // SOLUTION_TWO_HPP