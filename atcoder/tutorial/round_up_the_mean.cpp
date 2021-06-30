#include <iostream>

using namespace std;

int	main()
{
  	int	a;
  	int	b;
  	int	x;
	double	y;
  
  	cin >> a >> b;
  	x = (a + b) / 2;
	y = (a + b) % 2;
	if (y != 0)
	{
   		 x = x + 1;
	}
  	cout << x << endl;
	return 0;
}
