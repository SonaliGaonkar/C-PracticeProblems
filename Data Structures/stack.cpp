#include <iostream>
#include <stack>
#include <string>
using namespace std;
void display(stack<int> st) // display function for stack
{
  while (!st.empty())
  {
    cout << st.top() << "  ";
    st.pop();
  }
}
void dis(stack<string> st) // display function for stack
{
  while (!st.empty())
  {
    cout << st.top() << "  ";
    st.pop();
  }
}
int main()
{
  stack<int> numbers; // stack for integers
  numbers.push(1);    // push element in stack
  numbers.push(2);
  numbers.push(23);
  numbers.push(41);
  numbers.push(88);
  numbers.push(123);
  cout << "\n\nInitial stack : \n";
  display(numbers);
  numbers.pop(); // pop element from stack
  numbers.pop();
  cout << "\n\nStack after pop : \n";
  display(numbers);

  stack<string> alphabets; // stack for alphabets
  alphabets.push("H");
  alphabets.push("E");
  alphabets.push("L");
  alphabets.push("L");
  alphabets.push("O");
  cout << "\n\nThe reversed alphabets are : \n";
  dis(alphabets);

  stack<string> sentence; // stack for sentence
  sentence.push("Using");
  sentence.push("stack");
  sentence.push("in");
  sentence.push("C++");
  sentence.push("programming");
  cout << "\n\nThe reversed sentence is : \n\n";
  dis(sentence);
  return 0;
}