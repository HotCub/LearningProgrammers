#include <iostream>
using namespace std;

//-------------------------------------------------------------------------
// 2026. 10. 25 (일)
//-------------------------------------------------------------------------
// 프로그래머스 문제 풀기
//-------------------------------------------------------------------------

//[PCCE 기출문제] 1번 / 출력				[ 1점 ]
//int main(void) {
//    string msg =
//        "Spring is beginning"
//        ;
//    int val1 =
//        3
//        ;
//    string val2 =
//        "3"
//        ;
//
//    cout << msg << endl;
//    cout << val1 + 10 << endl;
//    cout << val2 + "10" << endl;
//
//    return 0;
//}
// ◆ string 자료형에 숫자를 더할 수는 있지만,
//    일반적인 숫자 계산이 아닌 뒤에 그대로 문자처럼 붙는다.

//[PCCE 기출문제] 2번 / 피타고라스의 정리	[ 1점 ]
//int main(void) {
//    int a;
//    int c;
//    cin >> a >> c;
//
//    int b_square = (c * c) - (a * a);
//    cout << b_square << endl;
//    return 0;
//}

//[PCCE 기출문제] 3번 / 나이 계산        	[ 1점 ]
//int main(void) {
//    int year, answer;
//    string age_type;
//    cin >> year >> age_type;
//
//    if (age_type == "Korea" ) {
//        answer = 2030 - year + 1;
//    }
//    else if (age_type == "Year") {
//        answer = 2030 - year;
//    }
//
//    cout << answer << endl;
//    return 0;
//}

//[PCCE 기출문제] 4번 / 저축				[ 1점 ]
//int main(void) {
//    int start;
//    int before;
//    int after;
//    cin >> start >> before >> after;
//
//    int money = start;
//    int month = 1;
//
//    while (money < 70) {
//        money += before;
//        month++;
//    }
//    while (money < 100) {
//        money += after;
//        month++;
//    }
//    cout << month << endl;
//    return 0;
//}

//[PCCE 기출문제] 5번 / 산책				[ 1점 ]
//vector<int> solution(string route) {
//    int east = 0;
//    int north = 0;
//    vector<int> answer(2);
//    for (int i = 0; i < route.length(); i++) {
//        switch (route[i]) {
//        case 'N':
//            north++;
//            break;
//        case 'S':
//            --north;
//            break;
//        case 'E':
//            ++east;
//            break;
//        case 'W':
//            --east;
//            break;
//        }
//    }
//    answer[0] = east;
//    answer[1] = north;
//    return answer;
//}

//[PCCE 기출문제] 6번 / 가채점				[ 1점 ]
//vector<string> solution(vector<int> numbers, vector<int> our_score, vector<int> score_list) {
//    int num_student = numbers.size();
//    vector<string> answer(num_student);
//
//    for (int i = 0; i < num_student; i++) {
//        if (our_score[i] == score_list[numbers[i] - 1]) {
//            answer[i] = "Same";
//        }
//        else {
//            answer[i] = "Different";
//        }
//    }
//
//    return answer;
//}

//[PCCE 기출문제] 7번 / 가습기				[ 2점 ]
//int func1(int humidity, int val_set) {
//    if (humidity < val_set)
//        return 3;
//    return 1;
//}
//
//int func2(int humidity) {
//    if (humidity >= 50)
//        return 0;
//    else if (humidity >= 40)
//        return 1;
//    else if (humidity >= 30)
//        return 2;
//    else if (humidity >= 20)
//        return 3;
//    else if (humidity >= 10)
//        return 4;
//    else if (humidity < 10)
//        return 5;
//}
//
//int func3(int humidity, int val_set) {
//    if (humidity < val_set)
//        return 1;
//    return 0;
//}
//
//int solution(string mode_type, int humidity, int val_set) {
//    int answer = 0;
//    if (mode_type == "auto") {
//        answer = func2(humidity);
//    }
//    else if (mode_type == "target") {
//        answer = func1(humidity, val_set);
//    }
//    else if (mode_type == "minimum") {
//        answer = func3(humidity, val_set);
//    }
//    return answer;
//}

//[PCCE 기출문제] 8번 / 창고 정리				[ 1점 ]
//string solution(vector<string> storage, vector<int> num) {
//    int num_item = 0;
//    vector<string> clean_storage(storage.size());
//    vector<int> clean_num(num.size());
//
//    for (int i = 0; i < storage.size(); i++) {
//        int clean_idx = -1;
//        for (int j = 0; j < num_item; j++) {
//            if (storage[i] == clean_storage[j]) {
//                clean_idx = j;
//                break;
//            }
//        }
//        if (clean_idx == -1) {
//            clean_storage[num_item] = storage[i];
//            clean_num[num_item] = num[i];
//            num_item += 1;
//        }
//        else {
//            clean_num[clean_idx] += num[i];
//        }
//    }
//
//    // 아래 코드에는 틀린 부분이 없습니다.
//
//    int num_max = -1;
//    string answer = "";
//    for (int i = 0; i < num_item; i++) {
//        if (clean_num[i] > num_max) {
//            num_max = clean_num[i];
//            answer = clean_storage[i];
//        }
//    }
//    return answer;
//}