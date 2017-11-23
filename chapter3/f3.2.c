#include "apue.h"
#include <fcntl.h>

char buf1[16394] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main(void){
    int fd;
    if((fd = creat("file.nohole", FILE_MODE))<0)
        err_sys("buf1 write error");
    if(write(fd, buf1, 16394)!=16394)
	err_sys("buf1 write error");
//    if(lseek(fd, 16384, SEEK_SET)==-1)
//	err_sys("lseek error");
//    if(write(fd, buf2, 16394)!= 16394)
//	err_sys("buf2  write error");
    exit(0);
}
