Consider a scenario of demand paged memory. Page table is held in registers. It takes 8 milliseconds to service a page fault if an empty page is available or the replaced page is not modified and 20 milliseconds if the replaced page is modified. Memory access time is 100 nanoseconds. Assume that the page to be replaced is modified 70 percent of the time. Generate a solution to find maximum acceptable page-fault rate for access time that is not more than 200 nanoseconds.



GIVEN,NUMERICAL TYPE
Then (1 - p) is the probability that a memory access costs 100 nsec. s
The probability that a page fault costs 20 msec is 0.7 * p and the 
probability that a page fault costs 8 msec is 0.3 * p. 
Since 1 nsec = 1000000 msec, 
(1 - p) * 100 + 0.7 * p * 20000000 + 0.3 * p * 8000000 = 200 (14000000 + 2400000 - 100)p = 100 p = 100/(16400100) = 6.1 * 10-6 = .0000061 = .00061%

 #include <stdio.h>
#include <stdlib.h>
int main()
{
    float prob1 = 0.7, prob2 = 0.3;
    double long p;              
    long t1 = 100, t2 = 20000000 , t3 = 8000000, tmax = 200; //time is in neno sec an milli sec
    printf("Let p be the page fault rate (the probability that a memory access results in a page fault)\n");
 
    printf("Then  (1 - p) is the probability that a memory access costs 100 nsec.\n");
    printf ("The probability that a page fault costs %ld is %f * p and the probability that a page fault costs                 %  ld is %f * p.\n",t2,prob1,t3,prob2);
    printf("Since 1 nsec = 1000000 msec,\n");
    p = (tmax-t1)/((prob1*t2)+(prob2*t3)-t1);
    printf("%Lf will be the page fault rate.\n",p);
    printf("%Lf percentage\n",p*100);
}

