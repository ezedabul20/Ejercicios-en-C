#include "chip.h"
#include "main.h"

int main(void) {
	int i=0;
	sticklpc1769();
	while(1)
	{
		if (!i)
		{
			i=SecuenciaVictoria();
		}
	}
    return 0 ;
}
