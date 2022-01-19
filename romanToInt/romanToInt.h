#pragma once
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const string four = "IV";

const string nine = "IX";

const string forty = "XL";

const string ninety = "XC";

const string fourhundred = "CD";

const string ninehundred = "CM";

void addSpecials(string &s, int &total);

void addNormals(string &s, int &total);