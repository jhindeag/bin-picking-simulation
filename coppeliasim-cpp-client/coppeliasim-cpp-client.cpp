﻿#include "coppeliasim-cpp-client.h"


int main()
{
	coppeliasim_cpp::CoppeliaSimClient client;

	if (client.initialize())
	{
		client.log_msg("You can log info to the Command line and CoppeliaSim!");
		client.stopSimulation();
	}
	else
	{
		return 1;
	}

	return 0;
}
