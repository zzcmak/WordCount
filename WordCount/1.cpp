
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int i,cnt;
	char ch;
	char filename[80];
	FILE*fp;
	strcpy(filename,argv[2]);//��Ϊ��һλĬ��Ϊ0
	fp=fopen(filename,"r");
	cnt=0;
	i=1;
	if(strcmp(argv[1],"-c")==0 || strcmp(argv[1],"-C")==0)//����ڶ�λ��-c��-C���

	{
		while(!feof(fp))//��û�е��ļ�ĩβʱ
	    {
		    ch = fgetc(fp);//���ļ�ָ��fpָ�����ļ��ж�һ���ַ�������ch�����С�
		    

                 cnt++;
			}
	
	   
	    printf("�ַ���:%d\n",--cnt);
	}
	else if (strcmp(argv[1],"-w")==0 || strcmp(argv[1],"-W")==0)
	{
		while(!feof(fp))//һ��ʼȱ���˵��ļ�ĩβ����
		{
		ch=fgetc(fp);
		if(ch==' '||ch==',')
		{
			 i++;
			 
			
		}
		}

		
		printf("������:%d\n",i);
	}
	return 0;
}


	

