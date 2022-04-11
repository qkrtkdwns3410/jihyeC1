#include <stdio.h>
#include <string.h>

void sale_score_report(int per_person_score_list[5][4], char person_name[5][20]) {
    printf("======================================================\n");
    printf("        판매사원  1/4분기  2/4분기  3/4분기  4/4분기  총합        \n");
    printf("======================================================\n");
    for (int i = 0; i < 5; i++) {
        printf("%s %d %d %d %d %d %d",)
    }
}

//판매 실적 보고서 생성 프로그램
int main() {
    char person_name[5][20] = {"KIM", "LEE", "PARK", "SONG", "CHOI"};
    int per_person_score_list[5][4] = {{34000, 56000, 23000, 78000},
                                       {23000, 65000, 18000, 94000},
                                       {25000, 34000, 19000, 68000},
                                       {25000, 38000, 26000, 64000}};
//    for (int i = 0; i < 5; i++) {
//        printf("%s의 판매실적을 입력하세요 (1/4, 2/4, 3/4, 4/4)\n", &person_name[i]);
//        for (int j = 0; j < 4; j++) {
//            scanf_s("&d", &per_person_score_list[i][j]);
//        }
//
//    }
    sale_score_report(per_person_score_list);
    
    return 0;
}


