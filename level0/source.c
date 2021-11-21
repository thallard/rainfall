#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
	int value = atoi(argv[1]);
	if (value == 423)
	{
		char *str = ft_strdup("/bin/sh");
		gid_t egid = getegid();
		uid_t euid = geteuid();
		
		

	}
	

}
