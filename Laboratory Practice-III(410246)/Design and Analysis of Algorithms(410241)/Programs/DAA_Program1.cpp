#include<iostream>
using namespace std;
//function using recusion
int rec_fib(int n) {
   if((n==1)||(n==0)) {
      return(n);
   }else {
      return(rec_fib(n-1)+rec_fib(n-2));
   }
}
// function using iteration
void iter_fib(int n) {
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < n; i++) {
      cout << x <<" ";
      z = x + y;
      x = y;
      y = z;
   }
}
int main() {
   int n, i=0;
   cout << "Enter the number of terms of series : ";
   cin >> n;
   cout << "\nFibonnaci Series : ";
   iter_fib(n); //iterative function  call
   cout << "\nFibonnaci Series : ";
   while(i < n) {
      cout << " "<< rec_fib(i); //recusive function  call
      i++;
   }
   cout<<'\n';
   return 0;
}
