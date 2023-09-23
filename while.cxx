#include <iostream> // allow input output
// #include <iomanip>  // allow scientific notation
// #include <cmath>    // allow math functions
// #include <cstdlib>  // allow random number generation
// #include <ctime>    // allow random number generation
// #include <vector>
// #include <string> // allow siquenz from of carater from the user.
// #include <fstream>
// #include <sstream>
// #include <algorithm>
// #include <ostream>
using namespace std; // allow me to exclude "std::cout "

int main(int argc, const char **argv)
{
  int count = 0;

  ::cout << "Count to 10" << std::endl;

  while (count <= 10)

  {
    std::cout << count << std::endl;
    count++;
    // count = count+1
    // count += 1;
    // std::cout <<  std::endl;
  }
  return 0;
}
