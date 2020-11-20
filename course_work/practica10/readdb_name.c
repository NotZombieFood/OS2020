#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int main(){
    unsigned index;
    Student myStudent;
    char lastName[20];

	printf("lastname: ");
	scanf("%s", lastName);
	int fd = open(dbName, O_RDONLY, 0);

    while(read(fd, &myStudent, sizeof(Student))){
		if(strcmp(myStudent.lastName, lastName)== 0){
			printf("index %d, id %d, firstName %s, lastName %s, semester %c\n",index,
	   myStudent.id, myStudent.firstName, myStudent.lastName, myStudent.semester);
		}
	}
    
    close(fd);
	return 0;
}