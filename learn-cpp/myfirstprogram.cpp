#include <iostream>
using namespace std;

// a short comment
int main() {
    /* a really long
    super duper long
    extremely long
    comment */
  cout << "Hello World! \n";
  cout << "Testing some characters" << endl;
  cout << "I am learning C++";

  // create some variables of a few different types and print them
  int my_int = 3;
  string my_string = "\"Hello string\"";
  char my_char;
  my_char = 'C';
  double my_double = 4.0;
  bool my_bool;
  my_bool = true;

  // Print the variables
  cout << "\nMy int is " << my_int << ".";
  cout << "\nMy string is " << my_string << ".";

  // Try some basic math
  double sum = my_int + my_double;
  cout << "\nSum=" << sum;

  // defining multiple vars at a time
  int x =1, y=2, z=3;
  int a,b,c;
  a = b = c = 40;

  // defining constants
  const int days_per_week = 7;

  // use the cin variable
  int your_x;
  cout << "\nPlease enter an integer:\n";
  cin >> your_x; // get the input here
  cout << "\nYour integer:" << your_x;

  return 0;
}
