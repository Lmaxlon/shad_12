#pragma once
#include <iostream>
#include <vector>


namespace sub{
    class Subsequence{
    public:
        explicit Subsequence(int _element): element(_element){};
        virtual int get_element(){return element;}
        virtual void set_element(int arg){element = arg;}
    protected:
        int element;
    };

    class Table{
    public:
        std::vector<Subsequence*> s;
        ~Table()
	    {
	        for (int i(0); i<s.size(); i++)
	            delete[] s[i];
	        s.clear();
	        s.shrink_to_fit();
	    }
	    Table &add(int _element);
        int get_out();
        friend const std::ostream& operator<< (std::ostream &out, const Table &t);
    };
}