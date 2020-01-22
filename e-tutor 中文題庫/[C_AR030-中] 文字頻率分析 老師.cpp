#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>


struct Diction{
	std::string str_Word;
	int int_Freq;
};

struct CompName{
	std::string str_StrName;
	bool operator() (Diction obj_Rhs) {
		if(str_StrName== obj_Rhs.str_Word){
			return true;
		}
		else{
			return false;
		}
	}
	CompName(std::string str_StrName){
		this->str_StrName= str_StrName;
	}
};

int main() {
	std::string str_Pre="app";
	std::string str_Msg="";
	std::vector<std::string> obj_Tok;
	getline(std::cin, str_Msg);
	char chr_Msg[str_Msg.length()+1];
	strcpy(chr_Msg,str_Msg.c_str());
	const char* ctchrptr_Del=" ";

	char* chrptr_StrArr= strtok(chr_Msg, ctchrptr_Del);
	while(chrptr_StrArr!=NULL){
		std::string str_C2S(chrptr_StrArr);
		obj_Tok.push_back(str_C2S);
		chrptr_StrArr= strtok(NULL, ctchrptr_Del);
	}

	//APP
	for(auto objptr_It= obj_Tok.begin(); objptr_It!= obj_Tok.end(); objptr_It++){
		std::string str_Str1= (*objptr_It).substr(0,str_Pre.length());
		if(str_Str1.compare(str_Pre)==0){
			std::cout<< (*objptr_It) <<"\n";
		}
	}
	std::cout<<"========================================";
	//Word
	std::vector<Diction> obj_TokAFre;
	for(auto objptr_It= obj_Tok.begin(); objptr_It!= obj_Tok.end(); objptr_It++){
		std::vector<Diction>::iterator objptr_FindIt= std::find_if(obj_TokAFre.begin(),obj_TokAFre.end(), CompName(*objptr_It));
		if(objptr_FindIt==obj_TokAFre.end()){
			Diction obj_Dic;
			obj_Dic.int_Freq=1;
			obj_Dic.str_Word= *objptr_It;
			obj_TokAFre.push_back(obj_Dic);
		}
		else{
			(objptr_FindIt)->int_Freq= (*objptr_FindIt).int_Freq+1;
		}
	}

	for(auto objptr_It= obj_TokAFre.begin(); objptr_It!= obj_TokAFre.end(); objptr_It++){
		std::cout<< objptr_It->str_Word <<": "<< objptr_It->int_Freq<< "\n";
	}
	std::vector<Diction>().swap(obj_TokAFre);
	std::vector<std::string>().swap(obj_Tok);
	return 0;
}
