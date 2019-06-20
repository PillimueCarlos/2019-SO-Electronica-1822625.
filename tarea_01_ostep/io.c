#include <stdio.h>
#include <assert.h>
#include <string.h>

int exists(const char *fname){
	FILE *file;
	if((file = fopen(fname, "r"))){
		fclose(file);
		return 1;
	}
	return 0;
}

int main(int argc, char *argv[]){
	char archiv[35];
	FILE *fd;
	strcpy(archiv, argv[1]);
	assert(exists(archiv));
	fd = fopen(archiv, "r");

	int i = -2;
	fseek(fd, i, SEEK_END);
	printf("%c", fgetc(fd));
	i = i-1;
	while(ftell(fd)!=1){
		fseek(fd, i, SEEK_END);
		printf("%c", fgetc(fd));
		i = i-1;
	}
	printf("\n");
	fclose(fd);
	return 0;
}
