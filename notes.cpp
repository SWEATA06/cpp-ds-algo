//copy() function
copy():
copy() is used to copy elements from one range to another.

Time Complexity: O(n), where n is the number of elements to copy.

Example:

vector<int> source = {1, 2, 3, 4, 5};
vector<int> destination(5);
copy(source.begin(), source.end(), destination.begin());  // Copies elements from source to destination
//fill() funtion
fill():
fill() assigns a specified value to all elements in a range.

Time Complexity: O(n), where n is the number of elements to fill.

Example:

vector<int> vec(5);
fill(vec.begin(), vec.end(), 42);  // Fills vec with value 42
//iota() funtion
iota():
iota() assigns increasing values to a range starting from a specified value.

Time Complexity: O(n), where n is the number of elements to assign.

Example:

vector<int> vec(5);
iota(vec.begin(), vec.end(), 1);  // Assigns values 1, 2, 3, 4, 5 to vec
//
vector<int> vec = {1, 3, 5, 7, 9};
  auto it = lower_bound(vec.begin(), vec.end(), 6);
  cout << *it;//ans:7
