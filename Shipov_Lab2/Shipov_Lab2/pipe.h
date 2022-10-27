#include <string>

using namespace std;

class pipe {
private:
    string name; // �������� �����
    int lenght = 0; // ����� � �� 
    int diameter = 0; // ������� ����� � ��
    bool repair = 0; // 0 �������������, 1 ��������� � �������

public:
    string get_name() const;
    int get_lenght() const;
    double get_diameter() const;
    bool get_repair() const;

    void set_repair();

    friend ostream& operator<<(ostream& os, const pipe& p);
    friend istream& operator>>(istream& is, pipe& p);
    friend ofstream& operator<<(ofstream& ofs, const pipe& p);
    friend ifstream& operator>>(ifstream& ifs, pipe& p);
    
};

