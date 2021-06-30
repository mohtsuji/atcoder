#include <iostream>
#include <string>

using namespace std;

int main() {
  int p;
	int	N;
  cin >> p;
 
  // パターン1
  if (p == 1) {
    int price;
    cin >> price;
	cin >> N;
  cout << price * N << endl;
  }
 
  // パターン2
  if (p == 2) {
    string text;
    int price;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
  cout << price * N << endl;
  }
}
