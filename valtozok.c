#include<stdio.h>
	int main()
{
	int valtozo_1 = 2,valtozo_2 = 4;
						printf("valtozo_1=%d valtozo_2=%d\n",valtozo_1,valtozo_2);
	valtozo_1 = ( valtozo_1 - valtozo_2 );
	valtozo_2 = ( valtozo_1 + valtozo_2 );
	valtozo_1 = ( valtozo_2 - valtozo_1 );
						printf("valtozo_1=%d valtozo_2=%d\n",valtozo_1, valtozo_2);
return 0;
}
