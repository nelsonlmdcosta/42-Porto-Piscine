#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc,char**argv){
    if(argc!=3){write(2,"Usage: ./ft_hexdump -C <filename>\n",32);return 1;}
    if(strcmp(argv[1],"-C")!=0){write(2,"Invalid option\n",15);return 1;}
    int fd=open(argv[2],O_RDONLY);
    if(fd<0){perror("open");return 1;}
    unsigned char buf[16];
    int n; long offset=0;
    while((n=read(fd,buf,16))>0){
        printf("%08lx  ",offset);
        for(int i=0;i<16;i++){if(i<n)printf("%02x ",buf[i]);else printf("   ");if(i==7)printf(" ");}
        printf(" |%.*s|\n",n,buf);
        offset+=n;
    }
    close(fd);
    return 0;
}