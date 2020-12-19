
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int i,cnt;
	char ch;
	char filename[80];
	FILE*fp;
	strcpy(filename,argv[2]);//因为第一位默认为0
	fp=fopen(filename,"r");
	cnt=0;
	i=1;
	if(strcmp(argv[1],"-c")==0 || strcmp(argv[1],"-C")==0)//如果第二位与-c或-C相等

	{
		while(!feof(fp))//当没有到文件末尾时
	    {
		    ch = fgetc(fp);//从文件指针fp指定的文件中读一个字符并存入ch变量中。
		    

                 cnt++;
			}
	
	   
	    printf("字符数:%d\n",--cnt);
	}
	else if (strcmp(argv[1],"-w")==0 || strcmp(argv[1],"-W")==0)
	{
		while(!feof(fp))//一开始缺少了到文件末尾结束
		{
		ch=fgetc(fp);
		if(ch==' '||ch==',')
		{
			 i++;
			 
			
		}
		}

		
		printf("单词数:%d\n",i);
	}
	return 0;
}


	

