// 计算停车费用。
// 三小时内 $2，超出每小时 $.5（不满按一小时计算）。
// 二十四小时内最高收费 $10

#include <stdio.h>
#include <math.h>

float calculateCharges(int hrs); // hrs 代表小时

int main(void){
  int hrs;
  float hrsF[3];
  float charges[3];
  int count = 0;
  
  do {
    printf("Enter your pooling hours:");
    fflush(stdout);
    scanf("%f", &hrsF[count]);
    
    hrs = ceil(hrsF[count]); // 向上取整
    charges[count] = calculateCharges(hrs);

    count++;
  } while (count < 3);

  printf("%-6s%12s%12s\n", "Cars", "Hours", "Charges"); // 打印表头
  for (int i = 0;i < 3; ++i){
    printf("%-6d%12.2f%12.2f\n", i + 1, hrsF[i], charges[i]);
  }
  printf("%-6s%12.2f%12.2f\n",
	 "TOTAL",
	 hrsF[0] + hrsF[1] + hrsF[2],
	 charges[0] + charges[1] + charges[2]); // 打印总和

  return 0;
}

float calculateCharges(int hrs){
  if (hrs <= 3)
    return 2.00;
  else if (hrs >= 16) // 10.00 = 2.00 + .50 * 16
    return 10.00;
  else
    return (2.00 + (hrs - 3) * .50);
}
