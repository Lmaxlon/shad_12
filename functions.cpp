#include "class.h"
#pragma once

namespace sub{
const std::ostream& operator<< (std::ostream &out, const Table &t){
		for (int i = 0; i < t.s.size(); ++i){
			out <<t.s[i]->get_element();
			std::cout << std::endl;
		}
		return out;
	}
Table &Table::add(int _element){
    		s.push_back(new sub::Subsequence(_element));
    		return *this;
    }
int Table::get_out(){
         return s.size();
    }
}