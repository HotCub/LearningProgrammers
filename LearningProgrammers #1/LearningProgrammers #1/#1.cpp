#include <iostream>
using namespace std;

//-------------------------------------------------------------------------
// 2026. 10. 22 (목)
//-------------------------------------------------------------------------
// GitHub 및 Dev Commit 하는 법
// 프로그래머스 문제 풀기
//-------------------------------------------------------------------------

// [ GitHub 공부 ]

// Ⅰ. Git과 GitHub는 다름 - Git은 서비스, GitHub는 프로그램
// GitHub에서 Git으로 프로젝트를 업로드하는 데에는 3단계가 있다.
// ⑴ VsCode에서 프로젝트를 저장							
//   - 그냥 프로그램만 저장된 상태
// ⑵ GitHub에 VsCode에서 저장한(업데이트한) 코드를 Commit	
//   - GitHub에 업로드하여 업데이트 사항 및 Histrory가 로컬에서만 저장된 상태
// ⑶ Github에 저장된 코드를 Git으로 Push					
//   - ⑵에서 로컬에 저장됐던 내용을 Git으로 업로드하여 서버에 저장하는 상태(타 사용자 접근 能)

// Ⅱ. Git의 브랜치 전략
// Git은 다중 사용자가 하나의 프로젝트를 관리하는 만큼 다양한 사고가 발생할 수 있다. ex) 실수로 메인 프로젝트를 삭제하는 등..
// 때문에 개발자들은 Git 브랜치 전략으로 Master, Develop, Feature 등의 영역으로 프로젝트를 나누어 개발을 진행한다.
// ● Master - 안정된 버전	: 이미 보증된 버전. 개발 단계에서 기능을 추가하다 버그가 발생하는 등의 문제가 발생할 일이 있을 수 있기에
//                            Release 버전 등과 같이 이미 보증된 버전을 최저 Basic의 단계로 유지해둔다.
// ● Develop - 개발 버전	: 다중 사용자가 협업하여 개발하는 버전. 개발 단계의 Basic이라 하면 되겠다.
// ● Feature - 개인 개발	: 개인 사용자가 개발하는 버전. 개인이 개발한 버전을 추후 버그 발생 여부에 따라 Develop에 Merge한다.
// 출처: https://inpa.tistory.com/entry/GIT-%E2%9A%A1%EF%B8%8F-github-flow-git-flow-%F0%9F%93%88-%EB%B8%8C%EB%9E%9C%EC%B9%98-%EC%A0%84%EB%9E%B5

//[PCCE 기출문제] 1번 / 문자 출력	[ 1점 ]
//int main(void) {
//    string message = "Let's go!";
//
//    cout << "3" << std::endl << "2" << std::endl << "1" << endl;
//    cout << message << endl;
//
//    return 0;
//}

//[PCCE 기출문제] 2번 / 각도 합치기	[ 2점 ]
//int main(void) {
//    int angle1;
//    int angle2;
//    cin >> angle1 >> angle2;
//
//    int sum_angle = (angle1 + angle2) % 360;
//    cout << sum_angle << endl;
//    return 0;
//}

//[PCCE 기출문제] 3번 / 수 나누기   [ 6점 ]
//int main(void) {
//    int number;
//    cin >> number;
//
//    int answer = 0;
//
//    while (number > 0) {
//        answer += number % 100;
//        number /= 100;
//    }
//    cout << answer << endl;
//    return 0;
//}

//[PCCE 기출문제] 4번 / 병과분류	[ 2점 ]
//int main(void) {
//    string code;
//    cin >> code;
//    string last_four_words = code.substr(code.size() - 4, 4);
//    if (last_four_words ==
//        "_eye"
//        ) {
//        cout << "Ophthalmologyc";
//    }
//    else if (
//        last_four_words == "head"
//        ) {
//        cout << "Neurosurgery";
//    }
//    else if (
//        last_four_words == "infl"
//        ) {
//        cout << "Orthopedics";
//    }
//
//    else if (last_four_words == "skin")
//    {
//        cout << "Dermatology";
//    }
//
//    else
//    {
//        cout << "direct recommendation";
//    }
//    return 0;
//}


//[PCCE 기출문제] 5번 / 심폐소생술    [ 1점 ]
//vector<int> solution(vector<string> cpr) {
//    vector<int> answer = { 0, 0, 0, 0, 0 };
//    vector<string> basic_order = { "check", "call", "pressure", "respiration", "repeat" };
//
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < cpr[i].size(); j++) {
//            if (cpr[i] == basic_order[j]) {
//                answer[i] = j + 1;
//                break;
//            }
//        }
//    }
//
//    return answer;
//}

//[PCCE 기출문제] 6번 / 물 부족		[ 5점 ]		★ 준영이형 도움 받음
//int solution(int storage, int usage, vector<int> change) {
//    int total_usage = 0;
//    for (int i = 0; i < change.size(); i++) {
//        usage = usage * (static_cast<float>(100 + change[i]) / 100.0f);
//		  ◆ 내 방식 : usage = usage * ((100 + change[i]) / 100);	
//                                                 ↑ 이새끼 나눌 때 float형이라고 명시 혹은 실수형으로 계산해야 한다 단서를 줘야 실수로 계산함.
//        total_usage += usage;
//        if (total_usage > storage) {
//            return i;
//        }
//    }
//    return -1;
//}


//[PCCE 기출문제] 7번 / 버스		[ 1점 ]
//int solution(int seat, vector<vector<string>> passengers) {
//    int num_passenger = 0;
//    for (int i = 0; i < passengers.size(); i++) {
//        num_passenger += func3(passengers[i]);
//        num_passenger -= func4(passengers[i]);
//    }
//    int answer = func1(seat + num_passenger);
//    return answer;
//}

//[PCCE 기출문제] 8번 / 닉네임 규칙	[ 2점 ]
//string solution(string nickname) {
//    string answer = "";
//    for (int i = 0; i < nickname.size(); i++) {
//        if (nickname[i] == 'l') {
//            answer += "I";
//        }
//        else if (nickname[i] == 'w') {
//            answer += "vv";
//        }
//        else if (nickname[i] == 'W') {
//            answer += "VV";
//        }
//        else if (nickname[i] == 'O') {
//            answer += "0";
//        }
//        else {
//            answer += nickname[i];
//        }
//    }
//    while (answer.size() < 4) {
//        answer += "o";
//    }
//    if (answer.size() > 8) {
//        answer = answer.substr(0, 8);
//    }
//    return answer;
//}