#include <iostream>
#include <fstream>
#include <locale>

struct TDLList
{
	std::string str;
	TDLList *prev;
	TDLList *next;
};

struct TListInfo
{
	TDLList *first;
	TDLList *middle;
	TDLList *last;
	int before;
	int after;
	int range;
};

void SetInfo(TListInfo &info, const int range);
void Removefirst(TListInfo &info);
void Shift(TListInfo &info);
void AddLast(TListInfo &info, std::string &str);
void Print(TListInfo &info);
bool GetWord(std::ifstream &in, std::string &str);
bool Separator(const char ch); 
void ClearList(TListInfo &info);

void FilenameRequest(std::ifstream &file);
void WordRequest(std::string &word);
int RangeRequest();
bool GetFirstWord(std::ifstream &file, TListInfo &info);
void WordSearch(std::ifstream &file, TListInfo &info, std::string &word);
