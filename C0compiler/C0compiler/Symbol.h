#ifndef __SYMBOL_H__
#define __SYMBOL_H__

#include <map>
#include <set>
#include <string>

using namespace std;
enum Symbol{
	IDENT,			/*number 0*/
	NUMBER, 
	PLUS, 
	MINUS, 
	MULTI, 
	DIVID, 
	EQL, 
	NEQ, 
	LSS, 
	LEQ, 
	GTR, 
	GEQ, 
	LPARENT, 
	RPARENT,
	LBRACKET,
	RBRACKET,
	LBRACE,
	RBRACE,
	SINGQUO,
	DOUBQUO,
	COMMA,
	SEMICOLON,
	BECOMES,
	IFSYM,
	ELSESYM,
	FORSYM,
	WHILESYM,
	SCANFSYM,
	PRINTFSYM,
	SWITCHSYM,
	CASESYM,
	DEFAULTSYM,
	VOIDSYM,
	RETURNSYM,
	MAINSYM,
	CONSTSYM,
	INTSYM,
	CHARSYM,
	CONSTCHAR,
	CONSTSTRING,
	COLON,			/*number 41*/
	POSNUMBER,
	ZERONUMBER,
	UNKNOWNSYM
};

#endif