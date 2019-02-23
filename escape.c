#include <stdio.h>

int main(int argc, char *argv[])
{
	char buf[256];
	int ret;

	while ((ret = fread(buf, 1, sizeof(buf), stdin)) > 0) {
		for (int i = 0; i < ret; i++) {
			switch (buf[i]) {
			case '&': printf("&amp;"); break;
			case '"': printf("&quot;"); break;
			case '\'': printf("&apos;"); break;
			case '<': printf("&lt;"); break;
			case '>': printf("&gt;"); break;
			default: printf("%c", buf[i]); break;
			}
		}
	}
	return 0;
}

