//leetcode 300
//最长上升子序列 （LIS） 
#include<cstdio>
#include<algorithm>

using namespace std;
const int N=100;
int a[N],dp[N];
//dp[i] 表示以第i个元素结尾的LIS长度 
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	int ans=-1;  //记录最大dp值
	for(int i=1;i<=n;i++)
	{
		dp[i]=1;  //边界初始条件（假设每个元素自成一个子序列） 
		for(int j=1;j<i;j++)
		{
			if(a[j] < a[i] && (dp[j]+1 > dp[i])){  //以j结尾的LIS并入 以i结尾的LIS 
				
				dp[i] = dp[j]+1; 
			} 
		} 
		ans = max(ans, dp[i]); 
	} 
	printf("%d",ans);
	return 0;
	 
}
 
