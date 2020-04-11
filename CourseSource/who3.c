#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <utmp.h>
#include <time.h>

/*#define NRECS 16
#define NULLUT((struct utmp *)NULL)
#define UTSIZE (sizeof(struct utmp))

static char utmpbuf[NRECS * UTSIZE];	//storage
static int num_recs;			//总共有多少条记录
static int cur_rec;			//next to go
static int fd_utmp = -1;		//read from*/
void show_info(struct utmp*);
void show_time(long);

/*utmp_open(char * filename){
	fd_utmp = open(filename,O_RDONLY);	//打开文件
	cur_rec = num_recs = 0;
	return fd_utmp;				//返回文件类型
}

struct utmp * utmp_next(){
	struct utmp * recp;
	if (fd_utmp == -1){
		return NULLUT;
	}
	if (cur_rec == num_recs && utmp_relaod() == 0)	//判断是否有剩余
		return NULLUT;

	recp = (struct utmp *)&utmpbuf[cur_rec * UTSIZE];
	cur_rec++;
	return recp;
}

int utmp_reload(){
	int amt_read;
	amt_read = read(fd_utmp,utmpbuf,NRECS * UTSIZE);
	num_recs = amt_read/UTSIZE;
	cur_rec = 0;
	return num_recs;
}

utmp_close(){
	if (fd_utmp != -1)
		close(fd_utmp);
}*/


int main()
{
    struct utmp current_record;
    int         utmpfd;
    int         reclen = sizeof(current_record);

    if((utmpfd = open(UTMP_FILE, O_RDONLY)) == -1)
    {
        perror(UTMP_FILE);
        return 0;
    }

    while(read(utmpfd, &current_record, reclen) == reclen)
        show_info(&current_record);
    close(utmpfd);

    return 0;
}

void show_info(struct utmp *utbufp)
{
    if(utbufp->ut_type != USER_PROCESS) return;

    printf("% -8.8s", utbufp->ut_user);//左对齐，最多显示8个字符，不足右边补空格
    printf(" ");
    printf("% -8.8s", utbufp->ut_line);
    printf(" ");
    show_time(utbufp->ut_time); //显示时间
    printf("(%s)", utbufp->ut_host);
    printf("\n");
}

void show_time(long ltime)
{
    char * cp;
    cp = ctime(&ltime);
    printf("%12.12s", cp+4);
}

