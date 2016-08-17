#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

// template <typename T>
//   string NumberToString ( T Number )
//   {
//      ostringstream convert;// stream used for the conversion
//      convert << Number;// insert the textual representation of 'Number' in the characters in the stream
//      return convert.str();// set 'Result' to the contents of the stream
//   }
// template <typename T>
//   T StringToNumber ( const string &Text )
//   {
//      istringstream ss(Text);
//      T result;
//      return ss >> result ? result : 0;
//   }

int fib(int n){
  if(n==1 | n==0){
    return n;
  }else {
    return( fib(n-2) + fib(n-1) );
  }
}

string fibonacciSerie(int n){
	int aux[] = { 0, 1 };
  string strFib = "{ ";
	for(int i=0; i <= n; ++i){
    if(i !=n ){
  		int tmp;
      strFib += to_string(aux[0]);
  		strFib += ", ";
  		tmp = aux[1];
  		aux[1] = aux[0]+aux[1];
  		aux[0] = tmp;
    } else {
      strFib += to_string(aux[0]);
      strFib += " }\n\n";
    }
	}

	return strFib;
}

int main(void) {
  int choice;
  std::cout << "Qual o ultimo termo \'n\' da série de Fibonacci?" << std::endl;
  std::cin >> choice;
  std::cout << fib(choice) << std::endl;
  std::cout << fibonacciSerie(choice) << std::endl;

  return 0;
}
