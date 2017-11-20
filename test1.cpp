#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int *a = new int[n];
	int *b = new int[m];
	//считываем отсортированные уже массивы
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	int *result = new int[n + m]; //выделяем память под массив размером N+M
	int i = 0, j = 0;
	int index = 0; //индекс массив-результата на текущей позиции
	while (i < n && j < m) 
	{ 
		if (a[i] < b[j])
		{
			result[index] = a[i];
			i++;
		}
		else
		{
			result[index] = b[j];
			j++;
		}
		index++;
	}

	while (i < n)
  {
	  result[index] = a[i]; index++; i++;
  }
	while (j < m)
	{
		result[index] = b[j]; index++; j++;
	}
  //вывод отсортированного массива
	for (int k = 0; k < n + m; k++)
	{
		cout << result[k] << ' ';
	}
	delete (a, b,result);
	return 0;
}
