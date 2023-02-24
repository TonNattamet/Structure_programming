


// สอบวันเสาร์ 25 / 2 / 2566  ตอน 13.00 - 15.00 
// ห่องที่ ใช้ ชั้น 6 
// ข้อสอบ 3 ข้อ 
// 1) ออกเรื่อง for ซ้อน for สร้าง สามเหลียม สี่เหลี่ยม 
// 2) matrix บวก ลบ คูณ matrix tracport
// 3) หา sd x_bar ผลต่างระหว่างจุด หรือ พื้นที่ วงกลม พื้นที่สามเหลี่ยน
// 4) ออก if กับ for และ array

// ใช้ภาษา C หรือ CPP


#include <stdio.h>

int main() {
    int nums[5];
    
    // Prompt the user to input 5 numbers using a loop
    for (int i = 0; i < 5; i++) {
  
        scanf("%d", &nums[i]);
    }
 
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}
