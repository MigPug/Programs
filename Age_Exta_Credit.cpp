/* 
Extra  Credit:

Make the program a while program that stops when the age is <=0.
Count the number of people 50 and under and the people over 50.
Sum the total fees for each group and the total of all of the fees.
Find the average fee.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{  
   int age, 
       year, 
       counterUnder = 1, 
       counterOver = 1;
       
   string name;
   
   double fee,        
       total,
       sumUnder = 0,
       sumOver = 0;
   
   cout << "Please enter an age: ";
   cin >> age;
   
   cout << "How many years have you been a member with us?: ";
   cin >> year;
   
   while (age > 0)
   {
      if (age > 50)
      {
         fee = 150 + .2 + (100 - year);
         counterOver++;
         sumOver += fee;
      }
      else
      {
         fee = 300 + .2 + (70 - year);
         counterUnder++;
         sumUnder += fee;
      }
      
      cout << setprecision(2) 
           << fixed;
           
      cout << "Your fee is: $" 
           << fee;
      
      cout << endl << endl 
           << "Please enter an age: ";
      cin >> age;
   
      cout << "How many years have you been a member with us?: ";
      cin >> year;
   }
   
   total = sumUnder + sumOver;
 
   cout << endl 
        << "Counted: " << endl 
        << (counterUnder - 1) << " people who are age 50 and under" << endl
        << (counterOver - 1) << " people who are over age 50" << endl << endl;
   
   cout << setprecision(2) << fixed;
   cout << "Total fees for people aged 50 and under: $" << sumUnder << endl
        << "Total fees for people over age 50: $" << sumOver << endl << endl;
   
   cout << "Grand total: $" << total << endl << endl;
   
   total /= ((counterUnder - 1) + (counterOver - 1));
   
   cout << "Average fee: $" << total;
   
   
   cout << endl 
        << endl
        << "Press ENTER to continue...";
   cin.get();
   cin.get();
   return 0;
}