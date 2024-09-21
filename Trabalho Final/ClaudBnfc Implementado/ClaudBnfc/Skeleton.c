#include <stdio.h>
#include <stdlib.h>
#include "Skeleton.h"

/* Function Prototypes for Recursive Visits */
void visitS(S p);
void visitBlock(Block p);
void visitCMDS(CMDS p);
void visitCMD(CMD p);
void visitATB(ATB p);
void visitEXP(EXP p);
void visitSE(SE p);
void visitOPerL(OPerL p);
void visitOPerA(OPerA p);
void visitOPL(OPL p);
void visitCLAUDDIZ(CLAUDDIZ p);
void visitRECEBA(RECEBA p);
void visitATE(ATE p);
void visitFAZAI(FAZAI p);
void visitCONST(CONST p);
void visitVET(VET p);
void visitFUNC(FUNC p);
void visitGOTO(GOTO p);
void visitLABEL(LABEL p);
void visitSTRUCT(STRUCT p);
void visitPOINT(POINT p);
void visitType(Type p);
void visitIdent(Ident p);
void visitVALUE(VALUE p);

void visitS(S p)
{
  switch(p->kind)
  {
  case is_Sst:
    printf("Visiting Sst\n");
    visitBlock(p->u.sst_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing S!\n");
    exit(1);
  }
}

void visitBlock(Block p)
{
  switch(p->kind)
  {
  case is_LBlock:
    printf("Visiting LBlock\n");
    visitCMDS(p->u.lblock_.cmds_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Block!\n");
    exit(1);
  }
}

void visitCMDS(CMDS p)
{
  switch(p->kind)
  {
  case is_CMDSCMD:
    printf("Visiting CMDSCMD\n");
    visitCMD(p->u.cmdscmd_.cmd_);
    break;
  case is_CMDS1:
    printf("Visiting CMDS1\n");
    visitCMD(p->u.cmds1_.cmd_);
    visitCMDS(p->u.cmds1_.cmds_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing CMDS!\n");
    exit(1);
  }
}

void visitCMD(CMD p)
{
  switch(p->kind)
  {
  case is_CMDATB:
    printf("Visiting CMDATB\n");
    visitATB(p->u.cmdatb_.atb_);
    break;
  case is_CMDSE:
    printf("Visiting CMDSE\n");
    visitSE(p->u.cmdse_.se_);
    break;
  case is_CMDATE:
    printf("Visiting CMDATE\n");
    visitATE(p->u.cmdate_.ate_);
    break;
  case is_CMDFAZAI:
    printf("Visiting CMDFAZAI\n");
    visitFAZAI(p->u.cmdfazai_.fazai_);
    break;
  case is_CMDCLAUDDIZ:
    printf("Visiting CMDCLAUDDIZ\n");
    visitCLAUDDIZ(p->u.cmdclauddiz_.clauddiz_);
    break;
  case is_CMDRECEBA:
    printf("Visiting CMDRECEBA\n");
    visitRECEBA(p->u.cmdreceba_.receba_);
    break;
  case is_CMDCONST:
    printf("Visiting CMDCONST\n");
    visitCONST(p->u.cmdconst_.const_);
    break;
  case is_CMDVET:
    printf("Visiting CMDVET\n");
    visitVET(p->u.cmdvet_.vet_);
    break;
  case is_CMDFUNC:
    printf("Visiting CMDFUNC\n");
    visitFUNC(p->u.cmdfunc_.func_);
    break;
  case is_CMDGOTO:
    printf("Visiting CMDGOTO\n");
    visitGOTO(p->u.cmdgoto_.goto_);
    break;
  case is_CMDLABEL:
    printf("Visiting CMDLABEL\n");
    visitLABEL(p->u.cmdlabel_.label_);
    break;
  case is_CMDSTRUCT:
    printf("Visiting CMDSTRUCT\n");
    visitSTRUCT(p->u.cmdstruct_.struct_);
    break;
  case is_CMDPOINT:
    printf("Visiting CMDPOINT\n");
    visitPOINT(p->u.cmdpoint_.point_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing CMD!\n");
    exit(1);
  }
}

void visitATB(ATB p)
{
  switch(p->kind)
  {
  case is_ATB1:
    printf("Visiting ATB1\n");
    visitType(p->u.atb1_.type_);
    visitIdent(p->u.atb1_.ident_);
    visitVALUE(p->u.atb1_.value_);
    break;
  case is_ATB2:
    printf("Visiting ATB2\n");
    visitType(p->u.atb2_.type_);
    visitIdent(p->u.atb2_.ident_);
    visitEXP(p->u.atb2_.exp_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing ATB!\n");
    exit(1);
  }
}

void visitEXP(EXP p)
{
  switch(p->kind)
  {
  case is_EXP1:
    printf("Visiting EXP1\n");
    visitVALUE(p->u.exp1_.value_1);
    visitOPerA(p->u.exp1_.opera_);
    visitVALUE(p->u.exp1_.value_2);
    break;
  case is_EXP2:
    printf("Visiting EXP2\n");
    visitEXP(p->u.exp2_.exp_);
    visitOPerA(p->u.exp2_.opera_);
    visitVALUE(p->u.exp2_.value_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing EXP!\n");
    exit(1);
  }
}

void visitSE(SE p)
{
  switch(p->kind)
  {
  case is_SE1:
    printf("Visiting SE1\n");
    visitOPL(p->u.se1_.opl_);
    visitBlock(p->u.se1_.block_);
    break;
  case is_SE2:
    printf("Visiting SE2\n");
    visitOPL(p->u.se2_.opl_);
    visitBlock(p->u.se2_.block_1);
    visitBlock(p->u.se2_.block_2);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing SE!\n");
    exit(1);
  }
}

void visitOPerL(OPerL p)
{
  switch(p->kind)
  {
  case is_OPerL1:
    printf("Visiting OPerL1\n");
    break;
  case is_OPerL2:
    printf("Visiting OPerL2\n");
    break;
  case is_OPerL3:
    printf("Visiting OPerL3\n");
    break;
  case is_OPerL4:
    printf("Visiting OPerL4\n");
    break;
  case is_OPerL5:
    printf("Visiting OPerL5\n");
    break;
  case is_OPerL6:
    printf("Visiting OPerL6\n");
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing OPerL!\n");
    exit(1);
  }
}

void visitOPerA(OPerA p)
{
  switch(p->kind)
  {
  case is_OPerA1:
    printf("Visiting OPerA1\n");
    break;
  case is_OPerA2:
    printf("Visiting OPerA2\n");
    break;
  case is_OPerA3:
    printf("Visiting OPerA3\n");
    break;
  case is_OPerA4:
    printf("Visiting OPerA4\n");
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing OPerA!\n");
    exit(1);
  }
}

void visitOPL(OPL p)
{
  switch(p->kind)
  {
  case is_OPL1:
    printf("Visiting OPL1\n");
    visitVALUE(p->u.opl1_.value_1);
    visitOPerL(p->u.opl1_.operl_);
    visitVALUE(p->u.opl1_.value_2);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing OPL!\n");
    exit(1);
  }
}

void visitCLAUDDIZ(CLAUDDIZ p)
{
  switch(p->kind)
  {
  case is_CLAUDDIZ1:
    printf("Visiting CLAUDDIZ1\n");
    visitVALUE(p->u.clauddiz1_.value_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing CLAUDDIZ!\n");
    exit(1);
  }
}

void visitRECEBA(RECEBA p)
{
  switch(p->kind)
  {
  case is_RECEBA1:
    printf("Visiting RECEBA1\n");
    visitType(p->u.receba1_.type_);
    visitIdent(p->u.receba1_.ident_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing RECEBA!\n");
    exit(1);
  }
}

void visitATE(ATE p)
{
  switch(p->kind)
  {
  case is_ATE1:
    printf("Visiting ATE1\n");
    visitOPL(p->u.ate1_.opl_);
    visitBlock(p->u.ate1_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing ATE!\n");
    exit(1);
  }
}

void visitFAZAI(FAZAI p)
{
  switch(p->kind)
  {
  case is_FAZAI1:
    printf("Visiting FAZAI1\n");
    visitType(p->u.fazai1_.type_);
    visitIdent(p->u.fazai1_.ident_);
    visitVALUE(p->u.fazai1_.value_);
    visitOPL(p->u.fazai1_.opl_);
    visitBlock(p->u.fazai1_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing FAZAI!\n");
    exit(1);
  }
}

void visitCONST(CONST p)
{
  switch(p->kind)
  {
  case is_CONST1:
    printf("Visiting CONST1\n");
    visitType(p->u.const1_.type_);
    visitIdent(p->u.const1_.ident_);
    visitVALUE(p->u.const1_.value_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing CONST!\n");
    exit(1);
  }
}

void visitVET(VET p)
{
  switch(p->kind)
  {
  case is_VET1:
    printf("Visiting VET1\n");
    visitType(p->u.vet1_.type_);
    visitIdent(p->u.vet1_.ident_);
    visitVALUE(p->u.vet1_.value_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing VET!\n");
    exit(1);
  }
}

void visitFUNC(FUNC p)
{
  switch(p->kind)
  {
  case is_FUNC1:
    printf("Visiting FUNC1\n");
    visitType(p->u.func1_.type_);
    visitIdent(p->u.func1_.ident_);
    visitPARAMS(p->u.func1_.params_);
    visitBlock(p->u.func1_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing FUNC!\n");
    exit(1);
  }
}

void visitGOTO(GOTO p)
{
  switch(p->kind)
  {
  case is_GOTO1:
    printf("Visiting GOTO1\n");
    visitIdent(p->u.goto1_.ident_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing GOTO!\n");
    exit(1);
  }
}

void visitLABEL(LABEL p)
{
  switch(p->kind)
  {
  case is_LABEL1:
    printf("Visiting LABEL1\n");
    visitIdent(p->u.label1_.ident_);
    visitBlock(p->u.label1_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing LABEL!\n");
    exit(1);
  }
}

void visitSTRUCT(STRUCT p)
{
  switch(p->kind)
  {
  case is_STRUCT1:
    printf("Visiting STRUCT1\n");
    visitIdent(p->u.struct1_.ident_);
    visitBlock(p->u.struct1_.block_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing STRUCT!\n");
    exit(1);
  }
}

void visitPOINT(POINT p)
{
  switch(p->kind)
  {
  case is_POINT1:
    printf("Visiting POINT1\n");
    visitType(p->u.point1_.type_);
    visitIdent(p->u.point1_.ident_);
    visitEXP(p->u.point1_.exp_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing POINT!\n");
    exit(1);
  }
}

void visitType(Type p)
{
  printf("Visiting Type: %s\n", p);
}

void visitIdent(Ident p)
{
  printf("Visiting Ident: %s\n", p);
}

void visitVALUE(VALUE p)
{
  switch(p->kind)
  {
  case is_VALUE1:
    printf("Visiting VALUE1: %s\n", p->u.value1_);
    break;
  case is_VALUE2:
    printf("Visiting VALUE2: %d\n", p->u.value2_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing VALUE!\n");
    exit(1);
  }
}
