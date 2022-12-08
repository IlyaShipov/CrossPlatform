#include "Source.h"

int main() {
    unordered_map <int, pipe> mp_pipe;
    unordered_map <int, CS> mp_cs;
    vector <connect> connects;

    do {
        print_menu();
        int cursor = Get_Num(0, 16);

        switch (cursor) {
        case 1: { //���������� �����
            system("cls");
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
            system("cls");
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
            system("cls");
            cout << left << "All objects\n";
            show_pipe(mp_pipe);
            cout << endl;
            show_cs(mp_cs);
            system("pause");
            break;
        }

        case 8: { //���������� � ����
            save(mp_pipe, mp_cs, connects);
            break;
        }

        case 9: { //�������� �� �����
            upload(mp_pipe, mp_cs, connects);
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

        case 14: {
            create_new_connection(connects, mp_pipe, mp_cs);
            break;
        }
        case 15: {
            show_all_connection(connects, mp_pipe, mp_cs);
            break;
        }
        case 16: {
            topology_sort(connects, mp_pipe, mp_cs);
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