#include <stdio.h>

int main() {

	//типізація даних, масив на 10 елементів і для циклу, так зміна для перевірки рівності чисел
	int array[10], i, equal = 1;

	//вивести дані про те що потрібно зробити користувачу
	printf("Enter 10 number:\n");


	//ввід десяти єлементів масиву
	for (i = 0; i < 10; i++) {

		scanf_s("%d", &array[i]);

	}


	//перевірка рівності
	for (i = 0; i < 9; i++) {

		if (array[i] != array[i + 1]) {

			equal = 0;
			break;

		}

	}

	//якщо всі 10 елементів рівні
	if (equal) {

		//вивести цифри рівні
		printf("Numbers are equal\n");

	}

	//інакше
	else {

		//типізація мінамальне і максимальне значення, надати їм значення першого елементу масиву
		int max_array = array[0], min_array = array[0];


		//знаходження найбільшого і найменшого значення в масиві
		for (i = 0; i < 10; i++) {

			if (array[i] > max_array) {

				max_array = array[i];

			}

			else if (array[i] < min_array) {

				min_array = array[i];

			}

		}

		//вивести результат
		printf("Max:%d\nMin:%d", max_array, min_array);

	}



	//повернути 0
	return 0;
}