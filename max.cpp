#include <iostream>

int main(){


	int a[3][3] = {1, 2, 3, 4, 1};
	int max = a[0];

	for (int i = 0; i < 5; ++i)
	{
		if(a[i] > max){
			max = a[i];
		} 
	
	}

	std::cout << max;
}