//second file "main program"

#include <stdio.h>
#include "file1.h"

int main()
{
    first = 55;
    second = 66;

    int summation = sum2ivar();

    printf("The sum of the first and second variables = %d\n", summation);

    return 0;
}

