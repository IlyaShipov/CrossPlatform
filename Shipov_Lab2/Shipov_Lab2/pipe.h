#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class pipe {
private:
    int id;
    string name; // �������� �����
    int lenght; // ����� � �� 
    int diameter; // ������� ����� � ��
    bool repair; // 0 �������������, 1 ��������� � �������

public:
    static int max_pipe_id;
    pipe() {
        id = max_pipe_id++;
        name = "PIPE";
        lenght = 0;
        diameter = 0;
        repair = 0;
    }
    string get_name() const;
    bool get_repair() const;
    int get_id() const;

    //void set_pipe_id(int id);
    void set_repair();
    void set_repair(bool new_status);

    friend ostream& operator<<(ostream& os, const pipe& p);
    friend istream& operator>>(istream& is, pipe& p);
    friend ofstream& operator<<(ofstream& ofs, const pipe& p);
    friend ifstream& operator>>(ifstream& ifs, pipe& p);
};

