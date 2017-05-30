#include "Header.h"

int main()
{
	setlocale(LC_ALL, "rus");
	
	std::ifstream file;
	FilenameRequest(file);

	std::string word;
	WordRequest(word);

	int range = RangeRequest();

	
	TListInfo info;
	SetInfo(info, range);

	if(!GetFirstWord(file, info)) return 0;

	WordSearch(file, info, word);

	ClearList(info);

	

	
	system("pause");
	return 0;
}
