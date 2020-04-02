/*Made by Alejandro Nadal
  Task for C for Everyone, Structured Programming*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BASIC_SALARY 10000
#define SALARY_OFFSET 5000
#define NUMBER_EMPLOYEES 3

typedef enum deptos{HR=1,Sales=2,Research=3,SW=4,Executive=5} dept;


void print_dept(dept department);

struct dept_employee{
  dept works_in;
  int salary;
  unsigned int social_security_n;
};

typedef struct dept_employee dept_employee;

void salary_generator(dept_employee *person)
{
  person->salary=BASIC_SALARY + rand()%SALARY_OFFSET;
}
void print_dept_employee(dept_employee person);

void print_dept(dept index_dept)
{
  printf("Department: ");
  switch(index_dept)
    {
    case 1:
      printf("HR");break;
    case 2:
      printf("Sales");break;
    case 3:
      printf("Research");break;
    case 4:
      printf("Software");break;
    case 5:
      printf("Executive");break;
    default:
      printf("Error");break;
    }
  printf("\n");
}
void load_employee(dept_employee *person);

int main()
{
  srand(time(NULL));
  dept_employee workers[NUMBER_EMPLOYEES];
  //Create employees
  for(int i =0;i < NUMBER_EMPLOYEES; i++)
  {
    load_employee(&workers[i]);
    salary_generator(&workers[i]);
  }
  for(int i =0;i < NUMBER_EMPLOYEES;i++)
  {
    print_dept_employee(workers[i]);
  }
  
  return 0;
}

void print_dept_employee(dept_employee person)
{
  print_dept(person.works_in);
  printf("Salary: %d \n", person.salary);
  printf("Social Security Number: %d \n", person.social_security_n);
  printf("\n");
}

void load_employee(dept_employee *person)
{
  printf("Insert the department of the worker\n");
  printf("1.HR\n");
  printf("2.Sales\n");
  printf("3.Research\n");
  printf("4.Software\n");
  printf("5.Executive\n");
  do{
     scanf("%d",&person->works_in);
  }while(person->works_in < 0 || person->works_in >5);
  printf("Insert the Social Security Number\n");
  scanf("%u",&person->social_security_n);
}
