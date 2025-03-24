/* Amerike university
   Author: Julio López
   Practice #: 15
   Date: 23/03/25
   Description: This program shall ask the user for 10 names, and the program shall tell where the word was found, and how many times*/

   #include <iostream>
   using namespace std;
   
   void Repetition(std::string Name[], int Size) {
       int count[Size] = {0}; 
       bool counted[Size] = {false}; 
   
       for (int i = 0; i < Size; i++) {
           if (counted[i]) continue;
   
           count[i] = 1; 
           for (int j = i + 1; j < Size; j++) {
               if (Name[i] == Name[j]) {
                   count[i]++;
                   counted[j] = true;
               }
           }
       }
   
 
       std::cout << "Repetition: \n ";
       for (int i = 0; i < Size; i++) {
           if (!counted[i]) {
               std::cout << Name[i] << " appeared " << count[i] << " times.\n";
           }
       }
   }
   
   int main() {
       int size;
       

       std::cout << "Enter the number of names: (Up to 10) ";
       std::cin >> size;
   
       std::string names[size];
   
       std::cout << "Enter " << size << " names:\n";
       for (int i = 0; i < size; i++) {
           std::cin >> names[i];
       }
   

      Repetition(names, size);
   
       return 0;
   }
   