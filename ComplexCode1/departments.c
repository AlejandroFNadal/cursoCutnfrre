/*Made by Alejandro Nadal
  Task for C for Everyone, Structured Programming*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

//I assume that the basic salary is equal for all departments. I know this is pretty rare, but this wasn't specified in the task.
#define BASIC_SALARY 10000
#define SALARY_OFFSET 5000
#define NUMBER_EMPLOYEES 10

//Here there is the deptos type
typedef enum deptos{HR=1,Sales=2,Research=3,SW=4,Executive=5} dept;

//prototype to print departments
void print_dept(dept department);

struct dept_employee{
  dept works_in;
  int salary;
  unsigned int social_security_n;
};

//Here I create the type dept_employee for simplicity
typedef struct dept_employee dept_employee;

void salary_generator(dept_employee *person);

void print_dept_employee(dept_employee person);

void print_dept(dept index_dept);

void load_employee(dept_employee *person);

//return 1 if the value is a number, else returns 0. It makes sure you cannot input wrong values
int check_if_num(int *var);

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
  //Then, we print the employees
  for(int i =0;i < NUMBER_EMPLOYEES;i++)
  {
    print_dept_employee(workers[i]);
  }
  
  return 0;
}

void salary_generator(dept_employee *person)
{
  person->salary=BASIC_SALARY + rand()%SALARY_OFFSET;
}

void print_dept_employee(dept_employee person)
{
  print_dept(person.works_in);
  printf("Salary: %d \n", person.salary);
  printf("Social Security Number: %d \n", person.social_security_n);
  printf("\n");
}

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

void load_employee(dept_employee *person)
{
  printf("Insert the department of the worker\n");
  printf("1.HR\n");
  printf("2.Sales\n");
  printf("3.Research\n");
  printf("4.Software\n");
  printf("5.Executive\n");
  int n;
  int flag=0;
  
  do{
    flag=check_if_num(&n);
    if(flag == 0 || n < 0 || n >5)
    {
      printf("Incorrect values. Please try again");
    }
  }while(flag == 0|| n < 0 || n >5);
  person->works_in = n;
  
  //This while here forces the user to select one of the 5 departments. 
  printf("Insert the Social Security Number\n");
  //flag = 0;
  do{
  flag=check_if_num(&person->social_security_n);
    if( flag== 0)
    {
    printf("Error, please check your input \n");
    //flag = 0;
    }
  }while(flag == 0);  
}

//This function returns 1 if the value inserted is a number, or 0 if it is not
int check_if_num(int *var)
{
  char strin[100];
  //getchar();
  fgets(strin,100,stdin);
  int len = strlen(strin);
  int i;
  int flag = 1;
  
  for(i = 0; i < len-1;i++)
  {
      if(isdigit(strin[i])== 0)
	      flag=0;
  }
  if(flag == 1)
  {
    *var = atoi(strin);
  }
  else
  {
      printf("Not a number");
      
  }
  return flag;
}
