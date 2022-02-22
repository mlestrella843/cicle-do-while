//Write a program that finds the sum of a series of numbers typed by the user. Allow the user to continue entering integers until they type the number 0, then display the sum. After printing the sum, print “Calculate another sum? [Y/N] ”. If the user types Y then start calculating the sum of another sequence of numbers. If the user types N the program should exit. If the user types anything else, print the message “Calculate another sum? [Y/N] ” again.
#include <iostream>
using namespace std;

int main() {

int sum =0, number;
char answer;

do{
  cout<<"Please introduce numbers to sum:  ";
  sum = 0;
  cin>>number; 
  cout<<"\n";  
  while (number != 0) {  
      sum = sum + number;
      cin >> number;
      }
      cout<<"The result of the sum is: " <<sum <<endl;
      
      
      cout<<"Calculate another sum? [Y/N]:  \n";
      cin>>answer;

} while ( (answer != 'N') ) ;

cout<<"A zero or 'N' has just been entered: \n ";  

return 0;

} 