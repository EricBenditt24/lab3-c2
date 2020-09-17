// Author: Eric Benditt erb5623@psu.edu
// Collaborator: Kaitlyn Byrnes krb5906@psu.edu
// Collaborator: Youhyun Kim yfk5109@psu.edu
// Collaborator: Adam Henderson ayh5125@psu.edu 
// Section: 4
// Breakout: 8

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h> 
#include <math.h>


int sum_n(int n);
void print_n(const char *s, int n);
int main(void) {

  int n = atoi(readline("Enter an int: "));

    printf("sum is %d.\n",sum_n(n));
  char*s = readline("Enter a string: ");
    print_n(s,n);
  return 0;

}
int sum_n(int n) {
  if (n <=0)
   return 0;
  else 
    return n+sum_n(n-1);
}

void print_n(const char *s, int n){
  if (n<=0){

  return;
  }
  else{
  printf("%s\n",s);
  print_n(s,n-1);
  } 
}