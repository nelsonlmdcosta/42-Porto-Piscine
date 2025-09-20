#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#define BUF_SIZE 30000
void ft_putstr_err(char* str){while(*str)write(2,str++,1);}
int main(int argc,char**argv){
    if(argc<2){ft_putstr_err("File name missing.\n");return 1;}
    for(int i=1;i<argc;i++){
        int fd=open(argv[i],O_RDONLY);
        if(fd<0){ft_putstr_err(strerror(errno));ft_putstr_err("\n");continue;}
        char buffer[BUF_SIZE];
        int ret;
        while((ret=read(fd,buffer,BUF_SIZE))>0)write(1,buffer,ret);
        if(ret<0){ft_putstr_err(strerror(errno));ft_putstr_err("\n");}
        close(fd);
    }
    return 0;
}