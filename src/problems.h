#ifndef PROBLEMS_H
#define PROBLEMS_H

#include <string>
#include <vector>
#include <unordered_set>

std::string balancedNum(unsigned long long int number);
bool is_isogram(std::string str);
bool possibly_perfect(const std::vector<char>& key, const std::vector<char>& answers);
int findOdd(const std::vector<int> &numbers);
std::string encode(const std::string &str);
std::string decode(const std::string &str);
std::unordered_set<std::string> bananas(const std::string& s);

#endif // PROBLEMS_H

