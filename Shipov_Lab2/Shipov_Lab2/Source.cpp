#include "Header.h"

using namespace std;

int main() {
    unordered_map <int, pipe> mp_pipe;
    unordered_map <int, CS> mp_cs;
    do {
        print_menu();
        int cursor = Get_Int(0, 13);

        switch (cursor) {
        case 1: { //���������� �����
            add_pipe_object(mp_pipe);
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
            add_CS_object(mp_cs);
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
            show_all_object(mp_pipe, mp_cs);
            break;
        }

        case 8: { //���������� � ����
            save(mp_pipe, mp_cs);
            break;
        }

        case 9: { //�������� �� �����
            upload(mp_pipe, mp_cs);
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