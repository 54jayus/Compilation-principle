�#include "pch.h"��#include "framework.h"��#include "Compress.h"��#include "CompressDlg.h"��#include "afxdialogex.h"��#include<iostream>��#include<string>��#include<map>��#include<fstream>����std���#ifdef _DEBUG��#define new DEBUG_NEW��#endif��encode�����string�
uncompress��string�	file_path��map�<string, unsigned char>�map_ژ��num����string�compress��string�	file_path��map�<string, unsigned char>��map_ژ��num����string�
del_indent��string�	file_path����string�	del_notes��string�	file_path����map�<string, unsigned char>�map_�����num��0���string�	file_path��"test.cpp" ����	CAboutDlgۇ�	CDialogEx�������	CAboutDlg�����#ifdef AFX_DESIGN_TIME��enum��IDD��IDD_ABOUTBOX����#endif���ࠤ�DoDataExchange��CDataExchange��pDX�������DECLARE_MESSAGE_MAP�������	CAboutDlg��	CAboutDlg����	CDialogEx��IDD_ABOUTBOX�������	CAboutDlg��DoDataExchange��CDataExchange��pDX�����	CDialogEx��DoDataExchange��pDX�������BEGIN_MESSAGE_MAP��	CAboutDlg��	CDialogEx���END_MESSAGE_MAP����CCompressDlg��CCompressDlg��CWnd��pParent���	CDialogEx��IDD_COMPRESS_DIALOG��pParent����	m_showcpp��_T��"" ������m_hIcon��	AfxGetApp����LoadIcon��IDR_MAINFRAME������CCompressDlg��DoDataExchange��CDataExchange��pDX�����	CDialogEx��DoDataExchange��pDX����DDX_Text��pDX��IDC_COMPRESS_EDIT��	m_showcpp������BEGIN_MESSAGE_MAP��CCompressDlg��	CDialogEx���ON_WM_SYSCOMMAND����ON_WM_PAINT����ON_WM_QUERYDRAGICON����ON_BN_CLICKED��IDC_BROWSE_BUTTON���CCompressDlg��OnBnClickedBrowseButton���ON_BN_CLICKED��IDC_COMPRESS_BUTTON���CCompressDlg��OnBnClickedCompressButton���ON_BN_CLICKED��IDC_UNCOMPRESS_BUTTON���CCompressDlg��OnBnClickedUncompressButton���END_MESSAGE_MAP����BOOL�CCompressDlg��OnInitDialog������	CDialogEx��OnInitDialog�����ASSERT���IDM_ABOUTBOX��0xFFF0���IDM_ABOUTBOX����ASSERT��IDM_ABOUTBOX��0xF000����CMenu��pSysMenu��GetSystemMenu��FALSE������pSysMenu��nullptr�����BOOL�
bNameValid���CString�strAboutMenu���
bNameValid��strAboutMenu��
LoadString��IDS_ABOUTBOX����ASSERT��
bNameValid�������strAboutMenu��IsEmpty�������pSysMenu��
AppendMenu��MF_SEPARATOR����pSysMenu��
AppendMenu��	MF_STRING��IDM_ABOUTBOX��strAboutMenu��������SetIcon��m_hIcon��TRUE�������SetIcon��m_hIcon��FALSE�������TRUE�����CCompressDlg��OnSysCommand��UINT�nID��LPARAM�lParam��������nID��0xFFF0���IDM_ABOUTBOX�����	CAboutDlg�dlgAbout���dlgAbout��DoModal������z����	CDialogEx��OnSysCommand��nID��lParam��������CCompressDlg��OnPaint��������IsIconic�������CPaintDC�dc�|����SendMessage��WM_ICONERASEBKGNDڏ�<WPARAM>��dc��
GetSafeHdc�����0����cxIcon��GetSystemMetrics��	SM_CXICON����cyIcon��GetSystemMetrics��	SM_CYICON����CRect�rect���GetClientRect���rect����x���rect��Width����cxIcon��1���2���y���rect��Height����cyIcon��1���2���dc��DrawIcon��x��y��m_hIcon�����z����	CDialogEx��OnPaint���������HCURSOR�CCompressDlg��OnQueryDragIcon��������	<HCURSOR>��m_hIcon������CString�ConvertUTF8ToCString��std��string�utf8str�����nLen���MultiByteToWideChar��CP_UTF8��NULL���utf8str��data����utf8str��size����NULL��0����std��wstring�wbuffer���wbuffer��resize��nLen�����MultiByteToWideChar��CP_UTF8��NULL��utf8str��data����utf8str��size������LPWSTR���wbuffer��data�����wbuffer��length������#ifdef UNICODE����CString��wbuffer��data����wbuffer��length�������#else��nLen��WideCharToMultiByte��CP_ACP��0���wbuffer��data����wbuffer��length����NULL��0��NULL��NULL����std��string�ansistr���ansistr��resize��nLen����WideCharToMultiByte��CP_ACP��0���LPWSTR���wbuffer��data�����wbuffer��length������LPSTR���ansistr��data�����ansistr��size����NULL��NULL������CString��ansistr��data����ansistr��length�������#endif����CCompressDlg��OnBnClickedBrowseButton������
UpdateData��TRUE����ifstream�ifs��"test.cpp" ��ios��in����string�str1���string�read_str�����ifs��eof������getline��ifs��read_str����str1��read_str���str1��"\r\n" �����	m_showcpp��ConvertUTF8ToCString��str1����
UpdateData��FALSE������string�compress��string�	file_path��map�<string, unsigned char>��map_ژ��num��0����string�file_path_encode��	file_path���pos��file_path_encode��find��"." ����file_path_encode��insert��pos��
"_encode" ����	file_path��	del_notes��	file_path����string�file_path_del��
del_indent��	file_path����ifstream�ifs���ifs��open��file_path_del��ios��in����ofstream�ofs���ofs��open��file_path_encode��ios��out��ios��binary�����read_c�����ifs��eof����ifs��get��read_c��������isalpha��read_c���read_c��'_'�����length��0����word��20����word��length����read_c��������ifs��get��read_c��������isalpha��read_c������isalnum��read_c�����read_c��'_'������z��word��length����read_c�����word��length���'\0'���string�word_str��word���string�read_str��string��1��read_c������map_��find��word_str���map_��end�����ofs��write�썸����map_��word_str��ڟ��map_��word_str�����z����ofs��write�썸���map_��"IDENTIFIER" �ڟ��map_��"IDENTIFIER" ��������	length_uc��length���ofs��write�썸���	length_uc��1����ofs��write�썸��word��length����������ifs��seekg��1��ios��cur�����z���isalnum��read_c������length��0����word��20����word��length����read_c����ifs��get��read_c����������isalnum��read_c������isalpha��read_c�����read_c��'.'����read_c��'-'������z��word��length����read_c�����string�read_str��string��1��read_c����ofs��write�썸���map_��	"NUMBER" �ڟ��map_��	"NUMBER" ��������	length_uc��length���ofs��write�썸���	length_uc��1����ofs��write�썸��word��length���������ifs��seekg��1��ios��cur�����z���read_c��'+'�����ifs��get��read_c������read_c��'+'���ofs��write�썸���map_��"++" ���1���z���read_c��'='���ofs��write�썸���map_��"+=" ���1���z����ofs��write�썸���map_��"+" ���1����ifs��seekg��1��ios��cur�������z���read_c��'-'�����ifs��get��read_c������read_c��'-'���ofs��write�썸���map_��"--" ���1���z���read_c��'='���ofs��write�썸���map_��"-=" ���1���z���read_c��'>'���ofs��write�썸���map_��"->" ���1���z����ofs��write�썸���map_��"-" ���1����ifs��seekg��1��ios��cur�������z���read_c��'*'�����ifs��get��read_c������read_c��'='���ofs��write�썸���map_��"*=" ���1���z����ofs��write�썸���map_��"*" ���1����ifs��seekg��1��ios��cur�������z���read_c��'%'�����ifs��get��read_c������read_c��'='���ofs��write�썸���map_��"%=" ���1���z����ofs��write�썸���map_��"%" ���1����ifs��seekg��1��ios��cur�������z���read_c��'='�����ifs��get��read_c������read_c��'='���ofs��write�썸���map_��"==" ���1���z����ofs��write�썸���map_��"=" ���1����ifs��seekg��1��ios��cur�������z���read_c��'/'�����ifs��get��read_c������read_c��'='���ofs��write�썸���map_��"/=" ���1���z����ofs��write�썸���map_��"/" ���1����ifs��seekg��1��ios��cur�������z���read_c��'&'�����ifs��get��read_c������read_c��'&'���ofs��write�썸���map_��"&&" ���1���z���read_c��'='���ofs��write�썸���map_��"&=" ���1���z����ofs��write�썸���map_��"&" ���1����ifs��seekg��1��ios��cur�������z���read_c��'|'�����ifs��get��read_c������read_c��'|'���ofs��write�썸���map_��"||" ���1���z���read_c��'='���ofs��write�썸���map_��"|=" ���1���z����ofs��write�썸���map_��"|" ���1����ifs��seekg��1��ios��cur�������z���read_c��'!'�����ifs��get��read_c������read_c��'='���ofs��write�썸���map_��"!=" ���1���z����ofs��write�썸���map_��"!" ���1����ifs��seekg��1��ios��cur�������z���read_c��'^'�����ifs��get��read_c������read_c��'='���ofs��write�썸���map_��"^=" ���1���z����ofs��write�썸���map_��"^" ���1�������z���read_c��'<'�����ifs��get��read_c������read_c��'<'�����ifs��get��read_c������read_c��'='���ofs��write�썸���map_��"<<=" ���1���z����ofs��write�썸���map_��"<<" ���1����ifs��seekg��1��ios��cur�������z���read_c��'='���ofs��write�썸���map_��"<=" ���1���z���isalpha��read_c������length��0����word��50����word��length����'<'���word��length����read_c����ifs��get��read_c������word��length����read_c�����read_c��'>'����������	length_uc��length���ofs��write�썸���map_��	"STRING" ���1����ofs��write�썸���	length_uc��1����ofs��write�썸��word��length���������z����ofs��write�썸���map_��"<" ���1����ifs��seekg��1��ios��cur�������z���read_c��'>'�����ifs��get��read_c������read_c��'>'�����ifs��get��read_c������read_c��'='���ofs��write�썸���map_��">>=" ���1���z����ofs��write�썸���map_��">>" ���1����ifs��seekg��1��ios��cur�������z���read_c��'='�����ofs��write�썸���map_��">=" ���1�����z����ofs��write�썸���map_��">" ���1����ifs��seekg��1��ios��cur�������z���read_c��'\"'�����length��0����word��50����word��length����read_c����ifs��get��read_c������word��length����read_c�����read_c��'\"'��������word��length����'\0'�����	length_uc��length���ofs��write�썸���map_��	"STRING" ���1����ofs��write�썸���	length_uc��1����ofs��write�썸��word��length���������z���read_c��'\''�����length��0����word��6����word��length����read_c����ifs��get��read_c���������read_c���92�����word��length����read_c���ifs��get��read_c����word��length����read_c����z���read_c��'\''�����word��length����read_c�������z��word��length����read_c�������	length_uc��length���ofs��write�썸���map_��"CHAR" ���1����ofs��write�썸���	length_uc��1����ofs��write�썸��word��length���������z���read_c��' '�����z���read_c��'#'�����length��0����word��30����word��length����'#'����ifs��get��read_c��������read_c��'\r'��read_c��'\n'�����z��word��length����read_c�����ofs��write�썸���map_��"IDENTIFIER" ���1������	length_uc��length���ofs��write�썸���	length_uc��1����ofs��write�썸��word��length���������ifs��seekg��1��ios��cur�����z���read_c��':'�����ifs��get��read_c������read_c��':'���ofs��write�썸���map_��"::" ���1���z����ofs��write�썸���map_��":" ���1����ifs��seekg��1��ios��cur�������z����string�read_str��string��1��read_c����ofs��write�썸���map_��read_str���1��������ifs��close�����ofs��close�����remove��	file_path��c_str������remove��file_path_del��c_str�������file_path_encode�����string�	del_notes��string�	file_path�����ifstream�ifs���ifs��open��	file_path��ios��in����pos��	file_path��find��'.'����	file_path��insert��pos��"_del_notes" ����ofstream�ofs���ofs��open��	file_path��ios��out�����read_c�����ifs��eof����ifs��get��read_c��������read_c��'\''�����ofs��read_c����ifs��get��read_c���������read_c���92����ofs��read_c���ifs��get��read_c����ofs��read_c����z���read_c��'\''���ofs��read_c��z����ofs��read_c�����������z���read_c��'\"'�����ofs��read_c����ifs��get��read_c��������read_c��'\"'���ofs��read_c��z����ofs��read_c�����������z���read_c��'/'�����ifs��get��read_c������read_c��'/'�����ifs��get��read_c�����read_c��'\n'���ifs��get��read_c����ifs��seekg��1��ios��cur�����z���read_c��'*'����������ifs��get��read_c������read_c��'*'�����ifs��get��read_c������read_c��'/'�����ifs��get��read_c����������z���read_c��EOF�����z��������z��ofs��'/'����z��ofs��read_c������	file_path�����string�
del_indent��string�	file_path�����ifstream�ifs���ifs��open��	file_path��ios��in����pos��	file_path��find��'.'����	file_path��insert��pos��"_del_indent" ����ofstream�ofs���ofs��open��	file_path��ios��out����string�str_line�����ifs��eof�������getline��ifs��str_line����string��iterator�pos_str��str_line��begin������pos_str��str_line��end�����������pos_str���'\t'�����pos_str���' '������z��pos_str��str_line��erase��pos_str���������str_line��length����0���str_line��"\r" ����z����ofs��str_line��'\n'�������ifs��close�����ofs��close������	file_path�����string�
uncompress��string�	file_path��map�<string, unsigned char>�map_ژ��num��0�����string�file_path_decode��	file_path���pos��file_path_decode��find��	"encode" ����file_path_decode��pos���'d'���file_path_decode��pos��1���'e'���fstream�ifs��	file_path��ios��in��ios��binary����fstream�ofs��file_path_decode��ios��out�������ifs���ofs���cerr��"open txt failure" ��endl�����i���map�<string, unsigned char>��iterator�it���string�word�����ifs��eof����ifs��read�썸���iڟ��i���������it��map_��begin����it��map_��end����it��������it��second��i�����word��it��first�������������word��"IDENTIFIER" ����word��	"NUMBER" ����word��	"STRING" ����word��"CHAR" ������length�����	length_uc����word_c��50����ifs��read�썸���	length_uc��1����length̦��	length_uc����ifs��read�썸��word_c��length��������word_c��length���'\0'���ofs��word_c��" " ����z���word��"\n" ��word��"\r" ��word��"\r\n" ���ofs��word��z��ofs��word��" " �����ifs��close�����ofs��close������file_path_decode�����encode������string�keyword_arr�����"asm" ��"else" ��"new" ��"this" ��"bool" ��"explicit" ��
"private" ��"true" ��"break" ���	"export" ��"protected" ��"try" ��"case" ��	"extern" ��	"public" ��
"typedef" ��"catch" ���"false" ��"register" ��	"typeid" ��"char" ��"float" ��"reinterpret_cast" ��"typename" ���"class" ��"for" ��	"return" ��"union" ��"const" ��	"friend" ��"short" ��"unsigned" ���"const_cast" ��"goto" ��	"signed" ��"using" ��"continue" ��"if" ��	"sizeof" ��
"virtual" ���
"default" ��	"inline" ��	"static" ��"void" ��	"delete" ��"int" ��"static_cast" ��"volatile" ���"do" ��"long" ��	"struct" ��
"wchar_t" ��	"double" ��
"mutable" ��	"switch" ��"while" ��"dynamic_cast" ��"namespace" ��"template" ���"#include" ��"main" ����옍�i��0��i����keyword_arr�����keyword_arr��0����i����map_��keyword_arr��i����num����string�operator_arr������"+" ��"-" ��"*" ��"/" ��"%" ��"++" ��"--" ���"==" ��"!=" ��">" ��"<" ��">=" ��"<=" ���"&&" ��"||" ��"!" ���"&" ��"|" ��"^" ��"~" ��"<<" ��">>" ���"=" ��"+=" ��"-=" ��"*=" ��"/=" ��"%=" ��"<<=" ��">>=" ��"&=" ��"^=" ��"|=" ���"." ��"->" ���";" ��"," ���":" ��"::" ���"\a" ��"\b" ��"\f" ��"\n" ��"\r" ��"\t" ��"\v" ��"\\" ��"\'" ��"\?" ��"\0" ���"[" ��"]" ��"{" ��"}" ��"(" ��")" ����옍�i��0��i����operator_arr�����operator_arr��0����i����map_��operator_arr��i����num����string�my_arr�����"IDENTIFIER" ��	"NUMBER" ��	"STRING" ��"CHAR" ����옍�i��0��i����my_arr�����my_arr��0����i����map_��my_arr��i����num������CCompressDlg��OnBnClickedCompressButton������encode�����	file_path��compress��	file_path��map_��num������CCompressDlg��OnBnClickedUncompressButton������	file_path��
uncompress��	file_path��map_��num�����