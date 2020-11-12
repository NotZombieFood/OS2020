#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv){
	char *src = argv[1];

    // Abrir el archivo
	int fd = open(src, O_RDONLY, 0); 
	if(fd<0){
		printf("error al abrir el archivo \n");
		return 1;
	} 

	char c;
	while(read(fd, &c, 1)){
		printf("%c", c);
	}
    
	close(fd);
	return 0; 
} 