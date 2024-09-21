#ifndef SKELETON_H
#define SKELETON_H

typedef struct S *S;
typedef struct Block *Block;
typedef struct CMDS *CMDS;
typedef struct CMD *CMD;
typedef struct ATB *ATB;
typedef struct EXP *EXP;
typedef struct SE *SE;
typedef struct OPerL *OPerL;
typedef struct OPerA *OPerA;
typedef struct OPL *OPL;
typedef struct CLAUDDIZ *CLAUDDIZ;
typedef struct RECEBA *RECEBA;
typedef struct ATE *ATE;
typedef struct FAZAI *FAZAI;
typedef struct CONST *CONST;
typedef struct VET *VET;
typedef struct FUNC *FUNC;
typedef struct GOTO *GOTO;
typedef struct LABEL *LABEL;
typedef struct STRUCT *STRUCT;
typedef struct POINT *POINT;
typedef char *Type;
typedef char *Ident;
typedef struct VALUE *VALUE;
typedef struct PARAMS *PARAMS;

enum S_Kind { is_Sst };
enum Block_Kind { is_LBlock };
enum CMDS_Kind { is_CMDSCMD, is_CMDS1 };
enum CMD_Kind { 
    is_CMDATB, is_CMDSE, is_CMDATE, is_CMDFAZAI, is_CMDCLAUDDIZ, is_CMDRECEBA, 
    is_CMDCONST, is_CMDVET, is_CMDFUNC, is_CMDGOTO, is_CMDLABEL, is_CMDSTRUCT, is_CMDPOINT 
};
enum ATB_Kind { is_ATB1, is_ATB2 };
enum EXP_Kind { is_EXP1, is_EXP2 };
enum SE_Kind { is_SE1, is_SE2 };
enum OPerL_Kind { is_OPerL1, is_OPerL2, is_OPerL3, is_OPerL4, is_OPerL5, is_OPerL6 };
enum OPerA_Kind { is_OPerA1, is_OPerA2, is_OPerA3, is_OPerA4 };
enum OPL_Kind { is_OPL1 };
enum CLAUDDIZ_Kind { is_CLAUDDIZ1 };
enum RECEBA_Kind { is_RECEBA1 };
enum ATE_Kind { is_ATE1 };
enum FAZAI_Kind { is_FAZAI1 };
enum CONST_Kind { is_CONST1 };
enum VET_Kind { is_VET1 };
enum FUNC_Kind { is_FUNC1 };
enum GOTO_Kind { is_GOTO1 };
enum LABEL_Kind { is_LABEL1 };
enum STRUCT_Kind { is_STRUCT1 };
enum POINT_Kind { is_POINT1 };
enum VALUE_Kind { is_VALUE1, is_VALUE2 };

struct S {
  enum S_Kind kind;
  union {
    struct { Block block_; } sst_;
  } u;
};

struct Block {
  enum Block_Kind kind;
  union {
    struct { CMDS cmds_; } lblock_;
  } u;
};

struct CMDS {
  enum CMDS_Kind kind;
  union {
    struct { CMD cmd_; } cmdscmd_;
    struct { CMD cmd_; CMDS cmds_; } cmds1_;
  } u;
};

struct CMD {
  enum CMD_Kind kind;
  union {
    struct { ATB atb_; } cmdatb_;
    struct { SE se_; } cmdse_;
    struct { ATE ate_; } cmdate_;
    struct { FAZAI fazai_; } cmdfazai_;
    struct { CLAUDDIZ clauddiz_; } cmdclauddiz_;
    struct { RECEBA receba_; } cmdreceba_;
    struct { CONST const_; } cmdconst_;
    struct { VET vet_; } cmdvet_;
    struct { FUNC func_; } cmdfunc_;
    struct { GOTO goto_; } cmdgoto_;
    struct { LABEL label_; } cmdlabel_;
    struct { STRUCT struct_; } cmdstruct_;
    struct { POINT point_; } cmdpoint_;
  } u;
};

struct ATB {
  enum ATB_Kind kind;
  union {
    struct { Type type_; Ident ident_; VALUE value_; } atb1_;
    struct { Type type_; Ident ident_; EXP exp_; } atb2_;
  } u;
};

struct EXP {
  enum EXP_Kind kind;
  union {
    struct { VALUE value_1; OPerA opera_; VALUE value_2; } exp1_;
    struct { EXP exp_; OPerA opera_; VALUE value_; } exp2_;
  } u;
};

struct SE {
  enum SE_Kind kind;
  union {
    struct { OPL opl_; Block block_; } se1_;
    struct { OPL opl_; Block block_1; Block block_2; } se2_;
  } u;
};

struct OPerL {
  enum OPerL_Kind kind;
};

struct OPerA {
  enum OPerA_Kind kind;
};

struct OPL {
  enum OPL_Kind kind;
  union {
    struct { VALUE value_1; OPerL operl_; VALUE value_2; } opl1_;
  } u;
};

struct CLAUDDIZ {
  enum CLAUDDIZ_Kind kind;
  union {
    struct { VALUE value_; } clauddiz1_;
  } u;
};

struct RECEBA {
  enum RECEBA_Kind kind;
  union {
    struct { Type type_; Ident ident_; } receba1_;
  } u;
};

struct ATE {
  enum ATE_Kind kind;
  union {
    struct { OPL opl_; Block block_; } ate1_;
  } u;
};

struct FAZAI {
  enum FAZAI_Kind kind;
  union {
    struct { Type type_; Ident ident_; VALUE value_; OPL opl_; Block block_; } fazai1_;
  } u;
};

struct CONST {
  enum CONST_Kind kind;
  union {
    struct { Type type_; Ident ident_; VALUE value_; } const1_;
  } u;
};

struct VET {
  enum VET_Kind kind;
  union {
    struct { Type type_; Ident ident_; VALUE value_; } vet1_;
  } u;
};

struct FUNC {
  enum FUNC_Kind kind;
  union {
    struct { Type type_; Ident ident_; PARAMS params_; Block block_; } func1_;
  } u;
};

struct GOTO {
  enum GOTO_Kind kind;
  union {
    struct { Ident ident_; } goto1_;
  } u;
};

struct LABEL {
  enum LABEL_Kind kind;
  union {
    struct { Ident ident_; Block block_; } label1_;
  } u;
};

struct STRUCT {
  enum STRUCT_Kind kind;
  union {
    struct { Ident ident_; Block block_; } struct1_;
  } u;
};

struct POINT {
  enum POINT_Kind kind;
  union {
    struct { Type type_; Ident ident_; EXP exp_; } point1_;
  } u;
};

struct VALUE {
  enum VALUE_Kind kind;
  union {
    char* value1_;
    int value2_;
  } u;
};

#endif
