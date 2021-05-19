#include <stdlib.h>
#include <stdio.h>
void main(){
    printf("%g\n", atof("  -0.0000000123junk"));
    printf("%g\n", atof("0.012"));
    printf("%g\n", atof("15e16"));
    printf("%g\n", atof("-0x1afp-2"));
    printf("%g\n", atof("inF"));
    printf("%g\n", atof("Nan"));
    printf("%g\n", atof("1.0e+309"));
    printf("%g\n", atof("0.0"));
    printf("%g\n", atof("palavra"));
}