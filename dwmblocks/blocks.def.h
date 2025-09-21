//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 💻 RAM: ", "memory",			6,					2},

	{ " 📊 CPU: ", "cpu",			1,					0},

	{ " 📦 ", "packages",			300,				9},

	{" 🕑 ", "clock",		   		60,					1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
