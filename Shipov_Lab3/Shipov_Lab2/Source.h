#include "utility.h"
#include <fstream>
#include <string>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

void print_menu();

void add_pipe_object(unordered_map <int, pipe>& mp);

using pipe_func = void(*)(unordered_map <int, pipe>& p, int id);
void edit_pipe(unordered_map <int, pipe>& mp, int id);
void delete_pipe(unordered_map <int, pipe>& mp, int id);
void action_over_pipe(unordered_map <int, pipe>& mp, pipe_func func);

void add_CS_object(unordered_map <int, CS>& mp);

using CS_func = void(*)(unordered_map <int, CS>& p, int id);
void edit_cs(unordered_map <int, CS>& mp, int id);
void delete_cs(unordered_map <int, CS>& mp, int id);
void action_over_cs(unordered_map <int, CS>& mp, CS_func func);

//void show_all_object(const unordered_map <int, pipe>& mp_pipe, const unordered_map <int, CS>& mp_cs);
void show_pipe(const unordered_map <int, pipe>& mp_pipe);
void show_cs(const unordered_map <int, CS>& mp_cs);

void save(const unordered_map <int, pipe>& mp_pipe, const unordered_map <int, CS>& mp_cs, vector <connect>& connects);
void upload(unordered_map <int, pipe>& mp_pipe, unordered_map <int, CS>& mp_cs, vector <connect>& connects);

template<typename T>
using filter_pipe = bool(*)(const pair <int, pipe>& p, T param);
bool check_by_name(const pair <int, pipe>& p, string param);
bool check_by_repair(const pair <int, pipe>& p, bool param);

template<typename T>
unordered_set<int> find_pipe_by_filter(const unordered_map <int, pipe>& mp, filter_pipe<T> f, T param);

void filtration_pipe_by_name(unordered_map <int, pipe>& mp);
void filtration_pipe_by_repair(unordered_map <int, pipe>& mp);


template<typename T>
using filter_cs = bool(*)(const pair <int, CS>& p, T param);
bool check_cs_by_name(const pair <int, CS>& p, string param);
bool check_cs_by_act_ws(const pair <int, CS>& p, float param);

template<typename T>
unordered_set<int> find_cs_by_filter(const unordered_map <int, CS>& mp, filter_cs<T> f, T param);

void filtration_cs_by_name(const unordered_map <int, CS>& mp);
void filtration_cs_by_act_ws(const unordered_map <int, CS>& mp);

void create_new_connection(vector <connect>& connect_cs, unordered_map <int, pipe>& mp_pipe, const unordered_map <int, CS>& mp_cs);
void show_all_connection(vector <connect>& connect_cs, unordered_map <int, pipe>& mp_pipe, const unordered_map <int, CS>& mp_cs);

void topology_sort(vector <connect>& connects, unordered_map <int, pipe>& mp_pipe, const unordered_map <int, CS>& mp_cs);

void dijkstra_algorithm(vector <connect>& connects, unordered_map <int, pipe>& mp_pipe, const unordered_map <int, CS>& mp_cs);
void out_shortest_path(int initial_point, map<int, int>& copy_tmp_cs, unordered_map <int, unordered_map <int, pipe>> inv_adjacency_matrix);

bool breadth_first_search(unordered_map <int, unordered_map <int, int>>& flow_matrix, map<int, int>& parent, int Source, int Stock);
void ford_falkerson(vector <connect>& connects, unordered_map <int, pipe>& mp_pipe, const unordered_map <int, CS>& mp_cs);