# The Angle 
## Description
在高中的時候，我們教了廣義角  
一個廣義角，我們可以找到他的最大負同界角和最小正同界角  
請你設計一個程式，計算他的最大負同界角和最小正同界角。  

## Input  Format
每筆測資第一行會有以空間格的兩個整數 `a 和 b`  

## Output Format
對於每筆測資:   
若 b 為 奇數，輸出`原始角度 a的最大負同界角`  
若 b 為 偶數，輸出`原始角度 a的最小正同界角`  
  
行尾換行  

## Sample Input
  - **Sample Input #1**
  > 200 1  
  
  - **Sample Input #2**
  > -380 0  


  
## Sample Output
  - **Sample Output #1**
  > 200 -160   
  
  - **Sample Output #2**
  > -380 20  
  
## Scoring 
  * a <= 10<sup>9</sup>
  * b <= 10<sup>100</sup>
  
| Subtask | Score | Constraints 
| ------- | ----- | -----------  
| 1       | 20    |  a <= 360 , b <= 10
| 2       | 20    |  a <= 720 , b <= 10
| 3       | 20    |  a <= 10 <sup>9</sup> , b <= 10 <sup>9</sup> 
| 4       | 20    |  a <= 10 <sup>9</sup> , b <= 10 <sup>50</sup> 
| 5       | 20    |  題目範圍 

## Note
  * 能力指標: 迴圈
  * 多筆測資
  * 題目ID: Angle
  * 由於輸入頗大，請加入輸入優化 (參見下方範例程式碼)
```cpp
#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	return 0;
}
```

## Judging
run-time limit: 2000 ms  
memory limit: 60000000 byte  
測資數量: 5