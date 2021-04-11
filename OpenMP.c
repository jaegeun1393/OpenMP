#include <stdio.h> .
#include <omp.h>

int main() {
  open_set_num_threads(8);
  printf("From thread #%d", omp_get_thread_num());
 return 0; 
}

