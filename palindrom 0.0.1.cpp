
#include <string> 
#include <iostream> 
using namespace std; 
int main() { 
  string str1; 

 cout << "Enter a string:"<< endl; 
 cin >> str1; 

bool isPalindrome = true; 
for (int i = 0; i < str1.length() / 2; ++i) 
{ 
if (str1[i] != str1[str1.length() - 1 - i]) 
{ 
isPalindrome = false; 
break; 
} 
} 

cout <<isPalindrome << endl; 

cin.get(); 
return 0; 
}

