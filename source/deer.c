#include <stdio.h>
//#include "sync.h"
//#include "config.h"
#include "interact.h"
#define LD_VER "0.9.5"
#define CODENAME "Bambi"
#include <libxml2/libxml/parser.h>
#include "config.h"
int main()
{
        printf("***************************************\n");
        printf("\tLiquidDeer %s %s\n", LD_VER, CODENAME);
        printf("***************************************\n");
       warning();
         yesman();

//        read_config();


//        synchro();

}

