#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc,char**argv){
    if(argc!=3){write(2,"Usage: ./ft_tail -c <filename>\n",29);return 1;}
    if(strcmp(argv[1],"-c")!=0){write(2,"Invalid option\n",15);return 1;}
    int count=atoi(argv[2]);
    int fd=open(argv[3],O_RDONLY);
    if(fd<0){perror("open");return 1;}
    char *buf=malloc(count);
    if(!buf){perror("malloc");return 1;}
    lseek(fd,-count,SEEK_END);
    read(fd,buf,count);
    write(1,buf,count);
    free(buf);
    close(fd);
    return 0;
}