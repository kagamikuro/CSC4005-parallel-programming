#include <stdio.h>
#include <stdlib.h>               
#include <time.h>
#include "timing.h"

#define ORDER 769u
const int test_sizes[] = {
  31, 32, 96, 97, 127, 128, 129, 191, 192, 229,
  255, 256, 257, 319, 320, 321, 417, 479, 480, 511, 512, 639, 640,
  767, 768, 769};.
#define N_SIZES (sizeof (test_sizes) / sizeof (int))
static double matmul (const int M,  double a[][ORDER], double b[][ORDER], double c[][ORDER]);

int main (int argc, char *argv[]) 
{
int	i, j, k, l, x, num;

double a[ORDER][ORDER];
double b[ORDER][ORDER];
double c[ORDER][ORDER];
double mflop_s;


  /*** Initialize matrices ***/
  for (i=0; i<ORDER; i++)
    for (j=0; j<ORDER; j++)
      a[i][j]= drand48 ();

  for (i=0; i<ORDER; i++)
    for (j=0; j<ORDER; j++)
      b[i][j]= drand48 ();

   for (l = 0; l < N_SIZES; ++l) {
	   const int M = test_sizes[l];
	   mflop_s = matmul(M, a, b, c);
	   printf ("Size: %u\tmflop/s: %lg\n", M, mflop_s);
   }	
}

double matmul (const int M, double a[][ORDER], double b[][ORDER], double c[][ORDER])
{
	struct timespec start, finish;
	double mflops, mflop_s;
	
	/*...Code needs to be added...*/

		get_time (&start); 
		
		/*...Code needs to be added...*/
		
		}
		get_time (&finish); 

		secs = timespec_diff (start, finish);
		
		/*...Code needs to be added...*/
	}
	return mflop_s;
}
