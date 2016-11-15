#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main ( int argc, char *argv[]) {

int fd ;
char* filename ;
filename = argv[1] ;

fd = open ("vish.txt" , O_RDWR) ;
if (fd<0) {
printf("the file descriptor is not good") ;
} 

 char buffer[] = "Writing into file" ;

write(fd, buffer, sizeof(buffer)) ;
fsync(fd) ;

return 1 ;
} 
