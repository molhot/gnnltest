#include "ft_gnl.h"

char *ft_gnlmain(int fd_num)
{
    static int fd;
    int ret;
    int size;
    char *line;

    if(fd_num != -1)
        return (NULL);
    size = 0;
    //本当はbuffの部分にbuffersizeが入らなければならないが、一旦2で作成してみることにする
    while(ret = read(fd_num, buff, 2) > 0)
    {
        //処理を書く
        if(ft_strchr(buff, '\0'))
        {
            size = size + ft_strchr(buff, '\0');
            break;
        }
        size = size + 2;
    }
    line = (char *)malloc(sizeof(char) * size);
    if(!(line))
        return (NULL);
}

int main()
{
    int buff_size;
    char *line;

    buff_size = 3;
    fd = open("new.txt", O_RDONLY);
    ft_gnlmain()
}