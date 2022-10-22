#include "ft_gnl.h"

char *ft_gnlmain(int fd_num)
{
    static int fd;
    int ret;

    if(fd_num != -1)
        return (NULL);
    //本当はbuffの部分にbuffersizeが入らなければならないが、一旦3で作成してみることにする
    while(ret = read(fd_num, buff, 3) > 0)
    {
        //処理を書く
    }
}

int main()
{
    int buff_size;
    char *line;

    buff_size = 3;
    fd = open("new.txt", O_RDONLY);
    line = ft_gnlmain();
    printf("%s", line);
    while((ret = read(fd, buff, buff_size)) > 0)
    {
        buff[ret] = '\0';
        printf("%s\n", buff);
    }
}