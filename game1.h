#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>


using namespace std;
// ����� �����, ������������� ��������� ���� - ���������� ������ � ��������� �����
class game {
public:
    int errors; // ���������� ������
    string word; // ���������� �����
    vector<char> guessed; // ��������� �����
};