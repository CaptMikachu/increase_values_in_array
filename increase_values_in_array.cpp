#include<iostream>

int adder1(int array_f[], int size_f);
void adder2(int *array_ff);

int main() {


	int array[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = 5;
	}
	int *array_ptr = array;




	std::cout << "array before any adder function" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}




	adder1(array, 10);
	std::cout << std::endl;
	std::cout << "array after normal adder function" << std::endl;
	
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}




	adder2(array_ptr);

	
	std::cout << std::endl;
	std::cout << "array after pointer adder function" << std::endl;
	

	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;


	return 0;
}


int adder1(int array_f[], int size_f) {

	for (int i = 0; i < 10; i++)
	{
		array_f[i] += 1;
	}

	return array_f, size_f;
	
}



void adder2(int *array_ff) {

	for (int i = 0; i < 10; i++)
	{
		*array_ff += 1;
		array_ff += 1;
	}
}