#include <stdio.h>

#define MAX 1000000 // カウント回数

/** 
 * @brief ボケるかを判定
 * @param (value) カウントした値
 * @return ボケるべきなら1、それ以外は0
 */
int should_say_joke(int value) {
    int tmp;

    // 3の倍数か判定
    if (value % 3 == 0) {
        // もし3で割った余りが
        // 0ならば1を返す。
        return 1;
    }

    // 3が桁に含まれる数か判定
    while (value != 0) {
        // 下位一桁を取得
        tmp = value % 10;

        // 取得した一桁が3であるか判定
        if (tmp == 3) {
            // もし3だったら1を返す
            return 1;
        }

        // 値を10で割る
        value /= 10;
    }

    // 何もヒットしなければ0を返す
    return 0;
}


/**
 * @brief カウントと表示を行う
 */
void main() {
    int count;

    // 1~MAXまでカウントする
    for (count = 1; count <= MAX; count++) {
        if (should_say_joke(count)) {
            // ボケる方の出力
            printf("(BOKE)%8d\n", count);
        } 
        else {
            // ボケない方の出力
            printf("%14d\n", count);
        }
    }
}
