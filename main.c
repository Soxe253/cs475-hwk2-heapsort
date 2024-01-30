#include <stdio.h>
#include "employee.h"
#include "heap.h"
#define MAX_EMPLOYEES 5
int main(int argc, char *argv[])
{
	Employee A[MAX_EMPLOYEES];
	for(int i = 0; i < MAX_EMPLOYEES; i++){
		printf("Type the name of the employee: ");//take in name and salary of employee to add to array
		scanf("%s",A[i].name);
		printf("Type the salary: ");
		scanf("%d", &A[i].salary);
	}
	printList(A, MAX_EMPLOYEES);
	heapSort(A, MAX_EMPLOYEES);
	printList(A, MAX_EMPLOYEES);

	return 0;
}
