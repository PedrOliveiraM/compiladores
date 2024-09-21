/* File generated by the BNF Converter (bnfc 2.9.5). */

#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.h"

/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2048
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

/* The following are simple heuristics for rendering terminals */
/* You may wish to change them */
void renderCC(Char c);
void renderCS(String s);
void indent(void);
void backup(void);
void onEmptyLine(void);
void removeTrailingSpaces(void);
void removeTrailingWhitespace(void);


char *printS(S p);
char *printBlock(Block p);
char *printCMDS(CMDS p);
char *printCMD(CMD p);
char *printATB(ATB p);
char *printEXP(EXP p);
char *printSE(SE p);
char *printOPerL(OPerL p);
char *printOPerA(OPerA p);
char *printOPL(OPL p);
char *printCLAUDDIZ(CLAUDDIZ p);
char *printRECEBA(RECEBA p);
char *printATE(ATE p);
char *printFAZAI(FAZAI p);
char *printVALUE(VALUE p);
char *printType(Type p);
char *printVET(VET p);
char *printSTRUCT(STRUCT p);
char *printHeteroElements(HeteroElements p);
char *printHeteroElement(HeteroElement p);
char *printFUNC(FUNC p);
char *printGOTO(GOTO p);
char *printLABEL(LABEL p);
char *printConjInt(ConjInt p);
char *printConjReal(ConjReal p);
char *printConjString(ConjString p);
char *printCONST(CONST p);
char *printPOINT(POINT p);

void ppS(S p, int i);
void ppBlock(Block p, int i);
void ppCMDS(CMDS p, int i);
void ppCMD(CMD p, int i);
void ppATB(ATB p, int i);
void ppEXP(EXP p, int i);
void ppSE(SE p, int i);
void ppOPerL(OPerL p, int i);
void ppOPerA(OPerA p, int i);
void ppOPL(OPL p, int i);
void ppCLAUDDIZ(CLAUDDIZ p, int i);
void ppRECEBA(RECEBA p, int i);
void ppATE(ATE p, int i);
void ppFAZAI(FAZAI p, int i);
void ppVALUE(VALUE p, int i);
void ppType(Type p, int i);
void ppVET(VET p, int i);
void ppSTRUCT(STRUCT p, int i);
void ppHeteroElements(HeteroElements p, int i);
void ppHeteroElement(HeteroElement p, int i);
void ppFUNC(FUNC p, int i);
void ppGOTO(GOTO p, int i);
void ppLABEL(LABEL p, int i);
void ppConjInt(ConjInt p, int i);
void ppConjReal(ConjReal p, int i);
void ppConjString(ConjString p, int i);
void ppCONST(CONST p, int i);
void ppPOINT(POINT p, int i);

char *showS(S p);
char *showBlock(Block p);
char *showCMDS(CMDS p);
char *showCMD(CMD p);
char *showATB(ATB p);
char *showEXP(EXP p);
char *showSE(SE p);
char *showOPerL(OPerL p);
char *showOPerA(OPerA p);
char *showOPL(OPL p);
char *showCLAUDDIZ(CLAUDDIZ p);
char *showRECEBA(RECEBA p);
char *showATE(ATE p);
char *showFAZAI(FAZAI p);
char *showVALUE(VALUE p);
char *showType(Type p);
char *showVET(VET p);
char *showSTRUCT(STRUCT p);
char *showHeteroElements(HeteroElements p);
char *showHeteroElement(HeteroElement p);
char *showFUNC(FUNC p);
char *showGOTO(GOTO p);
char *showLABEL(LABEL p);
char *showConjInt(ConjInt p);
char *showConjReal(ConjReal p);
char *showConjString(ConjString p);
char *showCONST(CONST p);
char *showPOINT(POINT p);

void shS(S p);
void shBlock(Block p);
void shCMDS(CMDS p);
void shCMD(CMD p);
void shATB(ATB p);
void shEXP(EXP p);
void shSE(SE p);
void shOPerL(OPerL p);
void shOPerA(OPerA p);
void shOPL(OPL p);
void shCLAUDDIZ(CLAUDDIZ p);
void shRECEBA(RECEBA p);
void shATE(ATE p);
void shFAZAI(FAZAI p);
void shVALUE(VALUE p);
void shType(Type p);
void shVET(VET p);
void shSTRUCT(STRUCT p);
void shHeteroElements(HeteroElements p);
void shHeteroElement(HeteroElement p);
void shFUNC(FUNC p);
void shGOTO(GOTO p);
void shLABEL(LABEL p);
void shConjInt(ConjInt p);
void shConjReal(ConjReal p);
void shConjString(ConjString p);
void shCONST(CONST p);
void shPOINT(POINT p);

void ppInteger(Integer n, int i);
void ppDouble(Double d, int i);
void ppChar(Char c, int i);
void ppString(String s, int i);
void ppIdent(String s, int i);
void shInteger(Integer n);
void shDouble(Double d);
void shChar(Char c);
void shString(String s);
void shIdent(String s);
void bufEscapeS(const char *s);
void bufEscapeC(const char c);
void bufAppendS(const char *s);
void bufAppendC(const char c);
void bufReset(void);
void resizeBuffer(void);

#endif

