#include <stdio.h>
#include "main.h"
#include "usage.h"

int usage(int argc, char **argv)
{
	printf(usage_str, GPUTRIP_VERSION, argv[0]);

	return 0;
}

int main(int argc, char **argv)
{
	if(argc <= 1) return usage(argc, argv);

	return 0;
}
