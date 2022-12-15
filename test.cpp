//C语言有3种结构：顺序
//                选择 if-else  switch-case
//				循环 while    do-while             for
//                            ↑至少执行一次循环体 
//#include<stdio.h>
//int main(){
//	if(){
//	}
//	if else(){
//	}
//	else(){
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main(){
//	switch(){
//		case xx :   ;break;
//		case xx :   ;break;
//		default:    ;break;   //注意别忘了default 
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main(){
//	while(){
//	}                        //循环体都是，重复到不满足条件为止 
//	return 0;
//}

//例题：编程计算并输出n!的值，其中n从键盘上输入

//输入n
// scanf("%d",&n);
//输出n！
// printf("n!=%d\n",result );
 
//#include<stdio.h>
//int main(){
//	int n,result=1,i=1;
//	scanf("%d",&n);
//		while(i<n){
//		i++;                   i++步长1，i=i+2步长为2 
//		result=result*i;      乘法给result赋1，加法赋0 
//	}                   
//	printf("n!=%d\n",result);
//	return 0;
//}

//输入 m
//输出  前m项之和

//#include<stdio.h>
//int main(){
//	int m,result=0,sign=1,i=1;
//	scanf("%d",&m);
//	while(i<=m){
//		result=result+(i*2-1)*sign;
//		i++;
//		sign=-sign;
//			} 
//	printf("1-3+5-7+9-11...的前m项和为%d\n",result);
//	return 0;
//} 

//for(初始值;符合条件;更新变量){
//	执行操作; 
//}

//#include<stdio.h>
//int main(){
//	int shu,i=1;
//	for(i=1;i<=100;i++){
//	printf("%5d",i);
//	shu++;
//	if(shu%8==0){
//		printf("\n");
//	}
//}
//	return 0;
//}
