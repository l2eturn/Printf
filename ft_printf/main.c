#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	//ft_printf("Hello my nickname start with %c , and my real name is %s ,I'm %d year-old\n",'T',"Smarttapon",-2147483648);
	printf("%d\n",ft_printf("Hello my nickname start with %c , and my real name is %s ,I'm %d year-old\n",'T',"Smarttapon",-2147483648));
}
