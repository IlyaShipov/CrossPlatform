#include "Source.h"

using namespace std;

template<typename T>
T Get_Num(T a, T b) {
    T n;
    while (!(cin >> n) || (n < a) || (n > b) || (cin.get() != '\n')) {
        cin.clear();
        cin.ignore(1000000, '\n');
        cout << "Enter correct number: ";
    }
    return n;
}

int main() {
    unordered_map <int, pipe> mp_pipe;
    unordered_map <int, CS> mp_cs;

    int max_pipe_id = 0;
    int max_cs_id = 0;

    do {
        print_menu();
        int cursor = Get_Num(0, 13);

        switch (cursor) {
        case 1: { //���������� �����
            add_pipe_object(mp_pipe, max_pipe_id);
            break;
        }

        case 2: { //�������������� �����
            action_over_pipe(mp_pipe, edit_pipe);
            break;
        }

        case 3: { //�������� �����
            action_over_pipe(mp_pipe, delete_pipe);
            break;
        }
        
        case 4: { //���������� ��
            add_CS_object(mp_cs, max_cs_id);
            break;
        }

        case 5: { //�������������� ��
            action_over_cs(mp_cs, edit_cs);
            break;
        }

        case 6: { //�������� ��
            action_over_cs(mp_cs, delete_cs);
            break;
        }

        case 7: { //�������� ���� ��������
            system("cls");
            cout << left << "All objects\n";
            show_pipe(mp_pipe);
            cout << endl;
            show_cs(mp_cs);
            system("pause");
            break;
        }

        case 8: { //���������� � ����
            save(mp_pipe, mp_cs);
            break;
        }

        case 9: { //�������� �� �����
            upload(mp_pipe, mp_cs, max_pipe_id, max_cs_id);
            break;
        }

        case 10: { //����� ����� �� �����
            filtration_pipe_by_name(mp_pipe);
            break;
        }

        case 11: { //����� ����� �� �������
            filtration_pipe_by_repair(mp_pipe);
            break;
        }

        case 12: { //����� �� �� �����
            filtration_cs_by_name(mp_cs);
            break;
        }

        case 13: { //����� �� �� �������� ����������������� �����
            filtration_cs_by_act_ws(mp_cs);
            break;
        }

        case 0: { //�����
            return 0;
            break;
        }
        }
    } while (true);
    return 0;
}