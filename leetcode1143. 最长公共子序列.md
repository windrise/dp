# leetcode1143. 最长公共子序列

**输入**：给定两个字符串 text1 和 text2，返回这两个字符串的最长公共子序列。

**介绍**：一个字符串的 子序列 是指这样一个新的字符串：它是由原字符串在不改变字符的相对顺序的情况下删除某些字符（也可以不删除任何字符）后组成的新字符串。
例如，"ace" 是 "abcde" 的子序列，但 "aec" 不是 "abcde" 的子序列。两个字符串的「公共子序列」是这两个字符串所共同拥有的子序列。

若这两个字符串没有公共子序列，则返回 0。

示例：

> 输入：
>
> sadstory
>
> adminsorry
>
> 输出： 6



```C++
//leetcode 1143
//最长公共子序列 LCS
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
const int N=100;
char A[N],B[N];
int dp[N][N];

int main()
{
	gets(A+1);   //从下标1开始读入 
	gets(B+1);
	int lenA = strlen(A+1);
	int lenB = strlen(B+1);
	
	//边界初始化
	for(int i=0;i<=lenA;i++) 
		dp[i][0]=0;
	for(int j=0;j<=lenB;j++)
		dp[0][j]=0;
	//动态规划 递推
	for(int i=1;i<=lenA;i++)
		for(int j=1;j<=lenB;j++){
			if(A[i] == B[j]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
			
		}
	printf("%d\n",dp[lenA][lenB]);
	return 0;
} 
```



