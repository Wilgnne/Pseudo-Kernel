// Estrutura de um processo
typedef struct
{
	// exec=1; ready=0; blocked=-1;
	int state;
} process;