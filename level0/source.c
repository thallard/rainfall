#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int value = atoi(argv[1]);
	if (value == 423)
	{
		char *buf = "/bin/sh";
		char *str = strdup(buf);
		gid_t egid = getegid();
		uid_t euid = geteuid();
		
		setregid(egid, egid);
		setreuid(euid, euid);

		execv(str, NULL);

	}
	fwrite("No !\n", 1, 5, (FILE *)stderr);
	return 0;
}
