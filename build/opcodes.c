/* Automatically generated.  Do not edit */
/* See the tool/mkopcodec.tcl script for details. */
#if !defined(SQLITE_OMIT_EXPLAIN) \
 || defined(VDBE_PROFILE) \
 || defined(SQLITE_DEBUG)
#if defined(SQLITE_ENABLE_EXPLAIN_COMMENTS) || defined(SQLITE_DEBUG)
# define OpHelp(X) "\0" X
#else
# define OpHelp(X)
#endif
const char *sqlite3OpcodeName(int i){
 static const char *const azName[] = {
    /*   0 */ "Savepoint"        OpHelp(""),
    /*   1 */ "AutoCommit"       OpHelp(""),
    /*   2 */ "Transaction"      OpHelp(""),
    /*   3 */ "SorterNext"       OpHelp(""),
    /*   4 */ "Prev"             OpHelp(""),
    /*   5 */ "Next"             OpHelp(""),
    /*   6 */ "Checkpoint"       OpHelp(""),
    /*   7 */ "JournalMode"      OpHelp(""),
    /*   8 */ "Vacuum"           OpHelp(""),
    /*   9 */ "VFilter"          OpHelp("iplan=r[P3] zplan='P4'"),
    /*  10 */ "VUpdate"          OpHelp("data=r[P3@P2]"),
    /*  11 */ "Goto"             OpHelp(""),
    /*  12 */ "Gosub"            OpHelp(""),
    /*  13 */ "InitCoroutine"    OpHelp(""),
    /*  14 */ "Yield"            OpHelp(""),
    /*  15 */ "MustBeInt"        OpHelp(""),
    /*  16 */ "Jump"             OpHelp(""),
    /*  17 */ "Once"             OpHelp(""),
    /*  18 */ "If"               OpHelp(""),
    /*  19 */ "Not"              OpHelp("r[P2]= !r[P1]"),
    /*  20 */ "IfNot"            OpHelp(""),
    /*  21 */ "IfNullRow"        OpHelp("if P1.nullRow then r[P3]=NULL, goto P2"),
    /*  22 */ "SeekLT"           OpHelp("key=r[P3@P4]"),
    /*  23 */ "SeekLE"           OpHelp("key=r[P3@P4]"),
    /*  24 */ "SeekGE"           OpHelp("key=r[P3@P4]"),
    /*  25 */ "SeekGT"           OpHelp("key=r[P3@P4]"),
    /*  26 */ "IfNoHope"         OpHelp("key=r[P3@P4]"),
    /*  27 */ "NoConflict"       OpHelp("key=r[P3@P4]"),
    /*  28 */ "NotFound"         OpHelp("key=r[P3@P4]"),
    /*  29 */ "Found"            OpHelp("key=r[P3@P4]"),
    /*  30 */ "SeekRowid"        OpHelp("intkey=r[P3]"),
    /*  31 */ "NotExists"        OpHelp("intkey=r[P3]"),
    /*  32 */ "Last"             OpHelp(""),
    /*  33 */ "IfSmaller"        OpHelp(""),
    /*  34 */ "SorterSort"       OpHelp(""),
    /*  35 */ "Sort"             OpHelp(""),
    /*  36 */ "Rewind"           OpHelp(""),
    /*  37 */ "IdxLE"            OpHelp("key=r[P3@P4]"),
    /*  38 */ "IdxGT"            OpHelp("key=r[P3@P4]"),
    /*  39 */ "IdxLT"            OpHelp("key=r[P3@P4]"),
    /*  40 */ "IdxGE"            OpHelp("key=r[P3@P4]"),
    /*  41 */ "RowSetRead"       OpHelp("r[P3]=rowset(P1)"),
    /*  42 */ "RowSetTest"       OpHelp("if r[P3] in rowset(P1) goto P2"),
    /*  43 */ "Or"               OpHelp("r[P3]=(r[P1] || r[P2])"),
    /*  44 */ "And"              OpHelp("r[P3]=(r[P1] && r[P2])"),
    /*  45 */ "Program"          OpHelp(""),
    /*  46 */ "FkIfZero"         OpHelp("if fkctr[P1]==0 goto P2"),
    /*  47 */ "IfPos"            OpHelp("if r[P1]>0 then r[P1]-=P3, goto P2"),
    /*  48 */ "IfNotZero"        OpHelp("if r[P1]!=0 then r[P1]--, goto P2"),
    /*  49 */ "DecrJumpZero"     OpHelp("if (--r[P1])==0 goto P2"),
    /*  50 */ "IsNull"           OpHelp("if r[P1]==NULL goto P2"),
    /*  51 */ "NotNull"          OpHelp("if r[P1]!=NULL goto P2"),
    /*  52 */ "Ne"               OpHelp("IF r[P3]!=r[P1]"),
    /*  53 */ "Eq"               OpHelp("IF r[P3]==r[P1]"),
    /*  54 */ "Gt"               OpHelp("IF r[P3]>r[P1]"),
    /*  55 */ "Le"               OpHelp("IF r[P3]<=r[P1]"),
    /*  56 */ "Lt"               OpHelp("IF r[P3]<r[P1]"),
    /*  57 */ "Ge"               OpHelp("IF r[P3]>=r[P1]"),
    /*  58 */ "ElseNotEq"        OpHelp(""),
    /*  59 */ "IncrVacuum"       OpHelp(""),
    /*  60 */ "VNext"            OpHelp(""),
    /*  61 */ "Init"             OpHelp("Start at P2"),
    /*  62 */ "PureFunc0"        OpHelp(""),
    /*  63 */ "Function0"        OpHelp("r[P3]=func(r[P2@P5])"),
    /*  64 */ "PureFunc"         OpHelp(""),
    /*  65 */ "Function"         OpHelp("r[P3]=func(r[P2@P5])"),
    /*  66 */ "Return"           OpHelp(""),
    /*  67 */ "EndCoroutine"     OpHelp(""),
    /*  68 */ "HaltIfNull"       OpHelp("if r[P3]=null halt"),
    /*  69 */ "Halt"             OpHelp(""),
    /*  70 */ "Integer"          OpHelp("r[P2]=P1"),
    /*  71 */ "Int64"            OpHelp("r[P2]=P4"),
    /*  72 */ "String"           OpHelp("r[P2]='P4' (len=P1)"),
    /*  73 */ "Null"             OpHelp("r[P2..P3]=NULL"),
    /*  74 */ "SoftNull"         OpHelp("r[P1]=NULL"),
    /*  75 */ "Blob"             OpHelp("r[P2]=P4 (len=P1)"),
    /*  76 */ "Variable"         OpHelp("r[P2]=parameter(P1,P4)"),
    /*  77 */ "Move"             OpHelp("r[P2@P3]=r[P1@P3]"),
    /*  78 */ "Copy"             OpHelp("r[P2@P3+1]=r[P1@P3+1]"),
    /*  79 */ "SCopy"            OpHelp("r[P2]=r[P1]"),
    /*  80 */ "IntCopy"          OpHelp("r[P2]=r[P1]"),
    /*  81 */ "ResultRow"        OpHelp("output=r[P1@P2]"),
    /*  82 */ "CollSeq"          OpHelp(""),
    /*  83 */ "AddImm"           OpHelp("r[P1]=r[P1]+P2"),
    /*  84 */ "RealAffinity"     OpHelp(""),
    /*  85 */ "Cast"             OpHelp("affinity(r[P1])"),
    /*  86 */ "Permutation"      OpHelp(""),
    /*  87 */ "Compare"          OpHelp("r[P1@P3] <-> r[P2@P3]"),
    /*  88 */ "IsTrue"           OpHelp("r[P2] = coalesce(r[P1]==TRUE,P3) ^ P4"),
    /*  89 */ "Offset"           OpHelp("r[P3] = sqlite_offset(P1)"),
    /*  90 */ "Column"           OpHelp("r[P3]=PX"),
    /*  91 */ "Affinity"         OpHelp("affinity(r[P1@P2])"),
    /*  92 */ "MakeRecord"       OpHelp("r[P3]=mkrec(r[P1@P2])"),
    /*  93 */ "Count"            OpHelp("r[P2]=count()"),
    /*  94 */ "ReadCookie"       OpHelp(""),
    /*  95 */ "SetCookie"        OpHelp(""),
    /*  96 */ "BitAnd"           OpHelp("r[P3]=r[P1]&r[P2]"),
    /*  97 */ "BitOr"            OpHelp("r[P3]=r[P1]|r[P2]"),
    /*  98 */ "ShiftLeft"        OpHelp("r[P3]=r[P2]<<r[P1]"),
    /*  99 */ "ShiftRight"       OpHelp("r[P3]=r[P2]>>r[P1]"),
    /* 100 */ "Add"              OpHelp("r[P3]=r[P1]+r[P2]"),
    /* 101 */ "Subtract"         OpHelp("r[P3]=r[P2]-r[P1]"),
    /* 102 */ "Multiply"         OpHelp("r[P3]=r[P1]*r[P2]"),
    /* 103 */ "Divide"           OpHelp("r[P3]=r[P2]/r[P1]"),
    /* 104 */ "Remainder"        OpHelp("r[P3]=r[P2]%r[P1]"),
    /* 105 */ "Concat"           OpHelp("r[P3]=r[P2]+r[P1]"),
    /* 106 */ "ReopenIdx"        OpHelp("root=P2 iDb=P3"),
    /* 107 */ "BitNot"           OpHelp("r[P2]= ~r[P1]"),
    /* 108 */ "OpenRead"         OpHelp("root=P2 iDb=P3"),
    /* 109 */ "OpenWrite"        OpHelp("root=P2 iDb=P3"),
    /* 110 */ "String8"          OpHelp("r[P2]='P4'"),
    /* 111 */ "OpenDup"          OpHelp(""),
    /* 112 */ "OpenAutoindex"    OpHelp("nColumn=P2"),
    /* 113 */ "OpenEphemeral"    OpHelp("nColumn=P2"),
    /* 114 */ "SorterOpen"       OpHelp(""),
    /* 115 */ "SequenceTest"     OpHelp("if( cursor[P1].ctr++ ) pc = P2"),
    /* 116 */ "OpenPseudo"       OpHelp("P3 columns in r[P2]"),
    /* 117 */ "Close"            OpHelp(""),
    /* 118 */ "ColumnsUsed"      OpHelp(""),
    /* 119 */ "SeekHit"          OpHelp("seekHit=P2"),
    /* 120 */ "Sequence"         OpHelp("r[P2]=cursor[P1].ctr++"),
    /* 121 */ "NewRowid"         OpHelp("r[P2]=rowid"),
    /* 122 */ "Insert"           OpHelp("intkey=r[P3] data=r[P2]"),
    /* 123 */ "Delete"           OpHelp(""),
    /* 124 */ "ResetCount"       OpHelp(""),
    /* 125 */ "SorterCompare"    OpHelp("if key(P1)!=trim(r[P3],P4) goto P2"),
    /* 126 */ "SorterData"       OpHelp("r[P2]=data"),
    /* 127 */ "RowData"          OpHelp("r[P2]=data"),
    /* 128 */ "Rowid"            OpHelp("r[P2]=rowid"),
    /* 129 */ "NullRow"          OpHelp(""),
    /* 130 */ "SeekEnd"          OpHelp(""),
    /* 131 */ "SorterInsert"     OpHelp("key=r[P2]"),
    /* 132 */ "IdxInsert"        OpHelp("key=r[P2]"),
    /* 133 */ "IdxDelete"        OpHelp("key=r[P2@P3]"),
    /* 134 */ "DeferredSeek"     OpHelp("Move P3 to P1.rowid if needed"),
    /* 135 */ "IdxRowid"         OpHelp("r[P2]=rowid"),
    /* 136 */ "Destroy"          OpHelp(""),
    /* 137 */ "Clear"            OpHelp(""),
    /* 138 */ "ResetSorter"      OpHelp(""),
    /* 139 */ "CreateBtree"      OpHelp("r[P2]=root iDb=P1 flags=P3"),
    /* 140 */ "SqlExec"          OpHelp(""),
    /* 141 */ "ParseSchema"      OpHelp(""),
    /* 142 */ "LoadAnalysis"     OpHelp(""),
    /* 143 */ "DropTable"        OpHelp(""),
    /* 144 */ "DropIndex"        OpHelp(""),
    /* 145 */ "Real"             OpHelp("r[P2]=P4"),
    /* 146 */ "DropTrigger"      OpHelp(""),
    /* 147 */ "IntegrityCk"      OpHelp(""),
    /* 148 */ "RowSetAdd"        OpHelp("rowset(P1)=r[P2]"),
    /* 149 */ "Param"            OpHelp(""),
    /* 150 */ "FkCounter"        OpHelp("fkctr[P1]+=P2"),
    /* 151 */ "MemMax"           OpHelp("r[P1]=max(r[P1],r[P2])"),
    /* 152 */ "OffsetLimit"      OpHelp("if r[P1]>0 then r[P2]=r[P1]+max(0,r[P3]) else r[P2]=(-1)"),
    /* 153 */ "AggInverse"       OpHelp("accum=r[P3] inverse(r[P2@P5])"),
    /* 154 */ "AggStep"          OpHelp("accum=r[P3] step(r[P2@P5])"),
    /* 155 */ "AggStep1"         OpHelp("accum=r[P3] step(r[P2@P5])"),
    /* 156 */ "AggValue"         OpHelp("r[P3]=value N=P2"),
    /* 157 */ "AggFinal"         OpHelp("accum=r[P1] N=P2"),
    /* 158 */ "Expire"           OpHelp(""),
    /* 159 */ "TableLock"        OpHelp("iDb=P1 root=P2 write=P3"),
    /* 160 */ "VBegin"           OpHelp(""),
    /* 161 */ "VCreate"          OpHelp(""),
    /* 162 */ "VDestroy"         OpHelp(""),
    /* 163 */ "VOpen"            OpHelp(""),
    /* 164 */ "VColumn"          OpHelp("r[P3]=vcolumn(P2)"),
    /* 165 */ "VRename"          OpHelp(""),
    /* 166 */ "Pagecount"        OpHelp(""),
    /* 167 */ "MaxPgcnt"         OpHelp(""),
    /* 168 */ "Trace"            OpHelp(""),
    /* 169 */ "CursorHint"       OpHelp(""),
    /* 170 */ "Noop"             OpHelp(""),
    /* 171 */ "Explain"          OpHelp(""),
    /* 172 */ "Abortable"        OpHelp(""),
  };
  return azName[i];
}
#endif
