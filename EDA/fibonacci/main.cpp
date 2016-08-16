#include <iostream>
int fib(int n){
  if(n==1 | n==0){
    return n;
  }else {
    std::cout << ( fib(n-2) + fib(n-1) ) << std::endl;
  }
}

int main(void) {
  std::cout << fib(4) << std::endl;
  return 0;
}
