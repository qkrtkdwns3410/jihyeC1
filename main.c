#include <stdio.h>
#include <string.h>
#include <math.h>

char person_name[5][20] = {"KIM", "LEE", "PARK", "SONG", "CHOI"};
int per_person_score_list[5][4] = {{34000, 56000, 23000, 78000},
                                   {23000, 65000, 18000, 94000},
                                   {25000, 34000, 19000, 68000},
                                   {18000, 52000, 23500, 73950},
                                   {25000, 38000, 26000, 64000}};

float year_avg = 0.0f;

void sale_score_per_quater();

int bungi_sum(int index) {
    int sum_of_float = per_person_score_list[0][index] + per_person_score_list[1][index] + per_person_score_list[2][index] +
                       per_person_score_list[3][index] +
                       per_person_score_list[4][index];
    
    
    return sum_of_float;
}


void sale_score_report() {
    int sum_of_arr = 0;
    printf(" <<< 판매 실적 보고서>>>\n");
    printf("==============================================================\n");
    printf(" 판매사원       1/4분기       2/4분기       3/4분기       4/4분기       총합        \n");
    printf("==============================================================\n");
    for (int i = 0; i < 5; i++) {
        int sum_of = 0;
        for (int j = 0; j < 4; j++) {
            sum_of += per_person_score_list[i][j];
        }
        sum_of_arr += sum_of;
        printf("%s          %d         %d         %d          %d          %d\n", &person_name[i], per_person_score_list[i][0], per_person_score_list[i][1],
               per_person_score_list[i][2],
               per_person_score_list[i][3], sum_of);
        
        
    }
    printf("분기총합");
    
    for (int i = 0; i < 4; i++) {
        printf("        %d", bungi_sum(i));
    }
    
    printf("    %d", sum_of_arr);
    printf("\n");
    printf("==============================================================\n");
    printf("분기평균");
    for (int i = 0; i < 4; i++) {
        printf("     %.2lf", (float) bungi_sum(i) / 5);
    }
    year_avg = (float) sum_of_arr / 5;
    printf("    %.2lf\n", year_avg);
    printf("==============================================================\n");
    
}


void sale_score_per_quater() {
    int sale_score_per_100[4];
    
    for (int i = 0; i < 4; i++) {
        int graph_size = ((bungi_sum(i) / 5 * 100) / year_avg) / 10;
        sale_score_per_100[i] = graph_size;
    }
    printf("\n");
    printf(" <<< 분기별 판매 실적 그래프 >>>\n");
    
    printf("==============================================================\n");
    
    for (int i = 10; i > 0; i--) {
        printf("|");
        
        for (int j = 0; j < 4; j++) {
            if (i <= sale_score_per_100[j]) {
                printf("                 *");
            } else {
                printf("                  ");
            }
            
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------------\n");
    printf("                1/4              2/4              3/4               4/4");
}

//판매 실적 보고서 생성 프로그램
int main() {

//    for (int i = 0; i < 5; i++) {
//        printf("%s의 판매실적을 입력하세요 (1/4, 2/4, 3/4, 4/4)\n", &person_name[i]);
//        scanf("%d%d%d%d", &per_person_score_list[i][0], &per_person_score_list[i][1], &per_person_score_list[i][2], &per_person_score_list[i][3]);
//
//    }
    // 판매 실적 보고서
    sale_score_report();
    
    //분기별 판매 실적 그래프
    sale_score_per_quater();
    
    return 0;
}



