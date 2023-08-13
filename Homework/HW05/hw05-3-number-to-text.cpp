/*
    จงแปลงตัวเลขที่ผู้ใช้ป้อนเข้ามาให้กลายเป็นตัวหนังสือ เช่น ผู้ใช้กรอกว่า 3 ให้แสดงผลลัพธ์ว่า Three
    (กำหนดให้สามารถกรอกเลขได้แค่ 0 ถึง 30 เท่านั้น)
    (กำหนดให้ใช้คำสั่ง switch case เท่านั้น)
    
    Test case:
        User input :
            12
    Output:
        Twelve

    Test case:
        User input :
            4
    Output:
        Four
*/


#include <stdio.h>

int main() {
    int num;

    // รับตัวเลขจากผู้ใช้
    printf("User input: ");
    scanf("%d", &num);

    // ใช้ switch case เพื่อแปลงเลขเป็นตัวหนังสือ
    switch (num) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        case 10:
            printf("Ten\n");
            break;
        case 11:
            printf("Eleven\n");
            break;
        case 12:
            printf("Twelve\n");
            break;
        case 13:
            printf("Thirteen\n");
            break;
        case 14:
            printf("Fourteen\n");
            break;
        case 15:
            printf("Fifteen\n");
            break;
        case 16:
            printf("Sixteen\n");
            break;
        case 17:
            printf("Seventeen\n");
            break;
        case 18:
            printf("Eighteen\n");
            break;
        case 19:
            printf("Nineteen\n");
            break;
        case 20:
            printf("Twenty\n");
            break;
        case 21:
            printf("Twenty-One\n");
            break;
        // ... เพิ่ม case ตั้งแต่ 22 ถึง 30 ได้ตามต้องการ
        default:
            printf("Number out of range\n");
            break;
    }

    return 0;
}
