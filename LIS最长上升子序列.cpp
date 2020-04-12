//leetcode 300
//����������� ��LIS�� 
#include<cstdio>
#include<algorithm>

using namespace std;
const int N=100;
int a[N],dp[N];
//dp[i] ��ʾ�Ե�i��Ԫ�ؽ�β��LIS���� 
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	int ans=-1;  //��¼���dpֵ
	for(int i=1;i<=n;i++)
	{
		dp[i]=1;  //�߽��ʼ����������ÿ��Ԫ���Գ�һ�������У� 
		for(int j=1;j<i;j++)
		{
			if(a[j] < a[i] && (dp[j]+1 > dp[i])){  //��j��β��LIS���� ��i��β��LIS 
				
				dp[i] = dp[j]+1; 
			} 
		} 
		ans = max(ans, dp[i]); 
	} 
	printf("%d",ans);
	return 0;
	 
}
 
