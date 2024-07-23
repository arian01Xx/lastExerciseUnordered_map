#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>

class SolutionOne {
public:
    bool closeStrings(std::string word1, std::string word2) {
        std::vector<int> fre1(26,0);
        std::vector<int> fre2(26,0);

        for(char ch: word1){
            fre1[ch - 'a']++;
        }
        for(char ch: word2){
            fre2[ch - 'a']++;
        }

        for(int i=0; i<26; i++){
            if(fre1[i]==0 && fre2[i]!=0 || fre1[i]!=0 && fre2[i]==0){  //si es que tienen la misma cantidad de letras
                return false;
            }
        }

        //jamas importò detallar ambas reglas solo ordenarlas y verificar si ambas cadenas eran iguales
        //impresionante
        std::sort(fre1.begin(), fre1.end());
        std::sort(fre2.begin(), fre2.end());
        for(int i=0; i<26; i++){
            if(fre1[i] != fre2[i]){
                return false;
            }
        }
        return true;
    }
    /*
Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"
    */
};

#endif // SOLUTION_ONE_HPP