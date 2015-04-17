#ifndef TESTING_H
#define TESTING_H

#include <vector>
#include <iostream>
#include <function>
#include <string>
#include <stream>


/** This function is a work in progress
 *  It probably doesn't have a place among
 *  the testing templates.  Just write your own. */
/* collect test cases */
template <typename T>
std::vector<T> collect_testcases(std::istream& is) {
  int testcase_count;
  T testcase;
  is >> testcase_count;
  return std::vector<T>();
}

/* run the testcases using the function bound by f
 * outputs test results to the output stream
 */
template <typename T>
void run_testcases(std::ostream& os, const std::vector<T>& testcases, std::function<T(std::string)> f) {
  for (int i = 0; i < testcases.size(); ++i) {
    os << "Case #" << i + 1 << ": "
              << f(testcases[i])
              << std::endl;
  }
}

#endif // TESTING_H
