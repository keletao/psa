//�㷨������ɺ��ٴγ�ʼ����ҵ��Ϣ
#include "node.h"
#include "global.h"

void initial_jobs_again()
{
    for(int i=1;i<=num;i++){
        jobs[i].finish_time=0;
        jobs[i].excellent=0;
        jobs[i].tr_time=0;
        jobs[i].wtr_time=0;
        jobs[i].visited=false;
    }
}
