#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv){
	char *src = argv[1];
	char *dest = argv[2];

    // Abrir el archivo
	int fd = open(src, O_RDONLY, 0); 
	if(fd<0){
		printf("error al abrir el archivo \n");
		return 1;
	} 

    // El nuevo archivo
	int dfd = open(dest, O_WRONLY | O_CREAT, 0);

	char c;
	while(read(fd, &c, 1)){
		write(dfd, &c,1);
	}
    
	close(dfd);
	close(fd);
	return 0; 
} 