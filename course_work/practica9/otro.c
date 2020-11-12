#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv){
	char *src = argv[1];
<<<<<<< HEAD
	char *dest = argv[2];
=======
>>>>>>> 06d6bd8... practica 9

    // Abrir el archivo
	int fd = open(src, O_RDONLY, 0); 
	if(fd<0){
		printf("error al abrir el archivo \n");
		return 1;
	} 

<<<<<<< HEAD
    // El nuevo archivo
	int dfd = open(dest, O_WRONLY | O_CREAT, 0);
=======
	char c;
	while(read(fd, &c, 1)){
		printf("%c", c);
	}
    
	close(fd);
	return 0; 
} , 0);
>>>>>>> 06d6bd8... practica 9

	char c;
	while(read(fd, &c, 1)){
		printf("%c", c);
	}
    
	close(dfd);
	close(fd);
	return 0; 
} 