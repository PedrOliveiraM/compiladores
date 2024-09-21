#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"


class Skeleton : public Visitor
{
public:
  void visitProgram(Program *p);
  void visitDef(Def *p);
  void visitArg(Arg *p);
  void visitStm(Stm *p);
  void visitExp(Exp *p);
  void visitType(Type *p);
  void visitpDefs(pDefs *p);
  void visitDFun(DFun *p);
  void visitADecl(ADecl *p);
  void visitSExp(SExp *p);
  void visitSDecls(SDecls *p);
  void visitSInit(SInit *p);
  void visitSReturn(SReturn *p);
  void visitSReturnVoid(SReturnVoid *p);
  void visitSAte(SAte *p);
  void visitSFor(SFor *p);
  void visitSBlock(SBlock *p);
  void visitSSeSenao(SSeSenao *p);
  void visitSClaudiz(SClaudiz *p);
  void visitSReceba(SReceba *p);
  void visitETrue(ETrue *p);
  void visitEFalse(EFalse *p);
  void visitEInt(EInt *p);
  void visitEDouble(EDouble *p);
  void visitEString(EString *p);
  void visitEId(EId *p);
  void visitEApp(EApp *p);
  void visitETimes(ETimes *p);
  void visitEDiv(EDiv *p);
  void visitEPlus(EPlus *p);
  void visitEMinus(EMinus *p);
  void visitELt(ELt *p);
  void visitEGt(EGt *p);
  void visitELtEq(ELtEq *p);
  void visitEGtEq(EGtEq *p);
  void visitEEq(EEq *p);
  void visitENEq(ENEq *p);
  void visitEAss(EAss *p);
  void visitETyped(ETyped *p);
  void visitType_bool(Type_bool *p);
  void visitType_int(Type_int *p);
  void visitType_double(Type_double *p);
  void visitType_void(Type_void *p);
  void visitType_string(Type_string *p);
  void visitListDef(ListDef *p);
  void visitListArg(ListArg *p);
  void visitListStm(ListStm *p);
  void visitListExp(ListExp *p);
  void visitListId(ListId *p);

  void visitId(Id x);
  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);

};


#endif
