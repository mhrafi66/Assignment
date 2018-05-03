#include "derived.h"

int main()
{
	derived ob(5, 10);
	ob.print_variable(); // error
	return 0;
}