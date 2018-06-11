// 发送端：
// 1，建立管道：
mkfifo(FIFO_FILE_PATH, 0777);
// 2，打开管道：
int fd = open("/tmp/myfifo", O_WRONLY);
// 3，写数据：
write(fd , “Love Linux!”, 11);
 
// 接收端：
// 1，打开管道：
int fd = open("/tmp/myfifo", O_RDONLY);
// 2，读数据：
read(fd , r_buf, 11);

// 注意
// 1.权限问题。例如cups权限固定700，测试发现在中标麒麟/tmp/* 下无法创建管道！
// 2.阻塞问题。
     不使用 nonblock：打开fifo的写端，open函数在管道被读取以前会被阻塞
     使用nonblock：如果fifo的读端没有人open，所以一定会返回失败。必须先以读的方式打开fifo后，才能以nonblock方式打开写。
