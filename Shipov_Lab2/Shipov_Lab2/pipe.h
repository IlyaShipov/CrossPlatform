#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class pipe {
private:
    int id;
    string name; // �������� �����
    int lenght = 0; // ����� � �� 
    int diameter = 0; // ������� ����� � ��
    bool repair = 0; // 0 �������������, 1 ��������� � �������

public:
    string get_name() const;
    bool get_repair() const;

    void set_pipe_id(int id);
    void set_repair();
    void set_repair(bool new_status);

    friend ostream& operator<<(ostream& os, const pipe& p);
    friend istream& operator>>(istream& is, pipe& p);
    friend ofstream& operator<<(ofstream& ofs, const pipe& p);
    friend ifstream& operator>>(ifstream& ifs, pipe& p);
};

