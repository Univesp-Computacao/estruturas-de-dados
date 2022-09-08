#include "queue.h"
#include "stack.h"
#include <iostream>
using namespace std;

int main() {
  bool palindrome = true;
  
  char character;
  char stackChar;
  char queueChar;
  
  Stack stack;
  Queue queue;    
  cout << "Adicione uma string." << endl;    
  cin.get(character);
  while (character != '\n') {
      stack.push(character);
      queue.enqueue(character);
      cin.get(character);
    }
  while (palindrome && !queue.isEmpty())
    {
      stackChar = stack.pop();
      queueChar = queue.dequeue();
      if (stackChar != queueChar)
	palindrome = false;
    }
  if (palindrome)
    cout << "String é Palindrome" << endl;
  else
    cout << "String não é palindrome" << endl;
  return 0; 
}
