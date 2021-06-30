#include <bits/stdc++.h>

using namespace std;

int	main()
{
	int	K;
	long long	g1, g2;
	int N;
	int	tmp, re, i, tmp2;
	int	flag = 0;
	long long	size, N2;

	cin >> N >> K;

	for (int z = 0; z < K; z++)
	{
	N2 = N;
	size = 0;
	g2 = 0;
	g1 = 0;
	while (9 < N2)
	{
		N2 = N2 / 10;
		size++;
	}
	size++;
	vector<int>	v(size);
//printf("size=%d\n", size);
	int	count = 0;
	for (int i = 0; i < size; i++)
	{
		//if ((N % 10) != 0)
		//{
			v[i] = N % 10;
			//printf("v[i]=%d\n", v[i]);
			//count++;
	//	}*/
		N = N / 10;
	}
     // printf("count=%d\n", count);
	//size = count;
       //     printf("size=%d\n", size);
      //for (int i = 0; i < size; i++)
        //printf("%d\n", v[i]);
	for (int i = 0; i < (size - 1); i++)
	{
		for (int j = (size - 1);  j > i; j--)
		{
			if (v[j] < v[j - 1])
			{
				int	k;
                k = v[j];
                v[j] = v[j - 1];
                v[j - 1] = k;
			}
		}
	}
      
	int	j = 1;
	for (int i = 0; i < size; i++)//g1 make
	{
		g1 = g1 + (v[i] * j);
		j = j * 10;
	}
         // printf("g1=%d\n", g1);
	vector<int>	t(size);
	for (int i = 0; i < size; i++)//g2 make
	{
		t[i] = v[size - 1 - i];
	}
	j = 1;
	for (int i = 0; i < size; i++)//g1 make
	{
		g2 = g2 + (t[i] * j);
		j = j * 10;
	}
         // printf("g2=%d\n", g2);
	N = g1 - g2;
    //  printf("N=%d\n", N);
	}
	cout << N;
  

	return (0);
}
