#include <stdio.h>
int main()
{
int n, reversedInteger = 0, remainder, originalInteger;
printf("Enter the number to check if it a palindrome: ");
scanf("%d", &n);
originalInteger = n;
// reversed ตัวเลขที่รับมา
while( n!=0 )
{
remainder = n%10;
reversedInteger = reversedInteger*10 + remainder;
n /= 10; //(#2)
}
// check ว่า เป็น palindrome หรือไม่
if (originalInteger == reversedInteger){
printf("YES");
}
else{
printf("NO");
}

return 0;
}
