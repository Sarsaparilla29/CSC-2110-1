#include <iostream>
using namespace std;

int main(){
   int numList[6] = {25, 37, 62, 78, 92, 13};
   int *listPtr = numList;
   cout << *listPtr << endl;
   cout << listPtr << endl;
   int *temp = listPtr + 2;
   //cout << *temp << endl;
   int num;

   *listPtr = *(listPtr + 1) - *listPtr;
   cout << *listPtr << endl;
   listPtr++;
   num = *temp;
   cout << "num: " << num << endl;
   temp++;
   listPtr++;
   for(int i = 0; i < 6; i++){
       cout << numList[i] << " "; 
   }
   cout << endl;
   *listPtr = *temp;
   for(int i = 0; i < 6; i++){
       cout << numList[i] << " "; 
   }
   cout << endl;
   *temp = num;
   cout << "*temp = num: ";
   for(int i = 0; i < 6; i++){
       cout << numList[i] << " "; 
   }
   cout << endl;

   listPtr = listPtr + 2;
   for(int i = 0; i < 6; i++){
       cout << numList[i] << " "; 
   }
   cout << endl;
   *listPtr = *(listPtr - 1);
   cout << "Final: ";
   for(int i = 0; i < 6; i++){
       cout << numList[i] << " ";
   }
   cout << endl;

}

