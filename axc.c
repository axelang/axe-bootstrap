#define nil ((void*)0)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define len_ptr(x) ((x)->len)
#define len_v(x) ((&(x))->len)
#define len(x) len_v(x)

#ifdef _WIN32
#define NOMINMAX
#define NOGDI
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#ifdef __APPLE__
#include <ctype.h>
#include <mach-o/dyld.h>
#endif
#include <sys/stat.h>
#include <sys/types.h>
#ifdef _WIN32
#include <io.h>
#include <direct.h>
#endif
#ifndef _WIN32
#include <dirent.h>
#endif
#include <execinfo.h>
#include <signal.h>
#include <unistd.h>

static void axe_segv_handler(int sig) {
    const char* name = (sig == SIGSEGV ? "SIGSEGV" : (sig == SIGABRT ? "SIGABRT" : "SIGNAL"));
    fprintf(stderr, "Fatal: %s received.\n", name);
    void* frames[64];
    int n = backtrace(frames, 64);
    if (n > 0) {
        fprintf(stderr, "Backtrace (%d frames):\n", n);
        backtrace_symbols_fd(frames, n, fileno(stderr));
    }
    fflush(stderr);
    _exit(139);
}

int __axe_argc = 0;
char** __axe_argv = NULL;

struct std__arena__Arena;
struct std__string__StringBuilder;
struct std__string__string;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct std__arena__Arena;
struct std__string__StringBuilder;
struct std__string__string;
struct std__errors__error;
struct std__string__StringBuilder;
struct std__string__string;
struct std__arena__Arena;
struct std__string__StringBuilder;
struct std__string__string;
struct std__errors__error;
struct std__string__StringBuilder;
struct std__string__string;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct std__string__StringBuilder;
struct std__string__string;
struct std__os__ExecResult;
struct std__string__StringBuilder;
struct std__string__string;
struct std__errors__error;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct std__arena__Arena;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct std__arena__Arena;
struct std__string__StringBuilder;
struct std__string__string;
struct std__errors__error;
struct std__string__StringBuilder;
struct std__string__string;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct std__arena__Arena;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct structs__MacroDef;
struct structs__ParserContext;
struct structs__Scope;
struct structs__ASTNode;
struct std__string__StringBuilder;
struct std__string__string;
struct std__maps__StringIntMap;
struct std__maps__StringFloatMap;
struct std__maps__StringBoolMap;
struct std__maps__StringStringMap;
struct std__maps__IntIntMap;
struct std__maps__FloatIntMap;
struct std__maps__IntFloatMap;
struct std__maps__FloatFloatMap;
struct std__maps__IntBoolMap;
struct std__maps__BoolIntMap;
struct std__maps__FloatBoolMap;
struct std__maps__BoolFloatMap;
struct std__maps__BoolBoolMap;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct std__arena__Arena;
struct std__string__StringBuilder;
struct std__string__string;
struct lexer__Token;
struct std__string__StringBuilder;
struct std__string__string;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct lexer__Token;
struct lexer__Token;
struct structs__MacroDef;
struct structs__ParserContext;
struct structs__Scope;
struct structs__ASTNode;
struct structs__MacroDef;
struct structs__ParserContext;
struct structs__Scope;
struct structs__ASTNode;
struct lexer__Token;
struct std__string__StringBuilder;
struct std__string__string;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct std__maps__StringIntMap;
struct std__maps__StringFloatMap;
struct std__maps__StringBoolMap;
struct std__maps__StringStringMap;
struct std__maps__IntIntMap;
struct std__maps__FloatIntMap;
struct std__maps__IntFloatMap;
struct std__maps__FloatFloatMap;
struct std__maps__IntBoolMap;
struct std__maps__BoolIntMap;
struct std__maps__FloatBoolMap;
struct std__maps__BoolFloatMap;
struct std__maps__BoolBoolMap;
struct std__os__ExecResult;
struct std__string__StringBuilder;
struct std__string__string;
struct std__maps__StringIntMap;
struct std__maps__StringFloatMap;
struct std__maps__StringBoolMap;
struct std__maps__StringStringMap;
struct std__maps__IntIntMap;
struct std__maps__FloatIntMap;
struct std__maps__IntFloatMap;
struct std__maps__FloatFloatMap;
struct std__maps__IntBoolMap;
struct std__maps__BoolIntMap;
struct std__maps__FloatBoolMap;
struct std__maps__BoolFloatMap;
struct std__maps__BoolBoolMap;
struct std__arena__Arena;
struct std__string__StringBuilder;
struct std__string__string;
struct std__errors__error;
struct std__errors__error;
struct std__string__StringBuilder;
struct std__string__string;
struct std__os__ExecResult;
struct structs__MacroDef;
struct structs__ParserContext;
struct structs__Scope;
struct structs__ASTNode;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
struct std__string__StringBuilder;
struct std__string__string;
struct std__os__ExecResult;
struct std__maps__StringIntMap;
struct std__maps__StringFloatMap;
struct std__maps__StringBoolMap;
struct std__maps__StringStringMap;
struct std__maps__IntIntMap;
struct std__maps__FloatIntMap;
struct std__maps__IntFloatMap;
struct std__maps__FloatFloatMap;
struct std__maps__IntBoolMap;
struct std__maps__BoolIntMap;
struct std__maps__FloatBoolMap;
struct std__maps__BoolFloatMap;
struct std__maps__BoolBoolMap;
struct std__errors__error;
struct std__os__ExecResult;
struct std__string__StringBuilder;
struct std__string__string;
struct std__lists__IntList;
struct std__lists__FloatList;
struct std__lists__CharList;
struct std__lists__LongList;
struct std__lists__DoubleList;
struct std__lists__StringList;
struct std__lists__BoolList;
typedef struct std__arena__Arena std__arena__Arena;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct std__arena__Arena std__arena__Arena;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__errors__error std__errors__error;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__arena__Arena std__arena__Arena;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__errors__error std__errors__error;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__os__ExecResult std__os__ExecResult;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__errors__error std__errors__error;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct std__arena__Arena std__arena__Arena;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct std__arena__Arena std__arena__Arena;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__errors__error std__errors__error;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct std__arena__Arena std__arena__Arena;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct structs__MacroDef structs__MacroDef;
typedef struct structs__ParserContext structs__ParserContext;
typedef struct structs__Scope structs__Scope;
typedef struct structs__ASTNode structs__ASTNode;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__maps__StringIntMap std__maps__StringIntMap;
typedef struct std__maps__StringFloatMap std__maps__StringFloatMap;
typedef struct std__maps__StringBoolMap std__maps__StringBoolMap;
typedef struct std__maps__StringStringMap std__maps__StringStringMap;
typedef struct std__maps__IntIntMap std__maps__IntIntMap;
typedef struct std__maps__FloatIntMap std__maps__FloatIntMap;
typedef struct std__maps__IntFloatMap std__maps__IntFloatMap;
typedef struct std__maps__FloatFloatMap std__maps__FloatFloatMap;
typedef struct std__maps__IntBoolMap std__maps__IntBoolMap;
typedef struct std__maps__BoolIntMap std__maps__BoolIntMap;
typedef struct std__maps__FloatBoolMap std__maps__FloatBoolMap;
typedef struct std__maps__BoolFloatMap std__maps__BoolFloatMap;
typedef struct std__maps__BoolBoolMap std__maps__BoolBoolMap;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct std__arena__Arena std__arena__Arena;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct lexer__Token lexer__Token;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct lexer__Token lexer__Token;
typedef struct lexer__Token lexer__Token;
typedef struct structs__MacroDef structs__MacroDef;
typedef struct structs__ParserContext structs__ParserContext;
typedef struct structs__Scope structs__Scope;
typedef struct structs__ASTNode structs__ASTNode;
typedef struct structs__MacroDef structs__MacroDef;
typedef struct structs__ParserContext structs__ParserContext;
typedef struct structs__Scope structs__Scope;
typedef struct structs__ASTNode structs__ASTNode;
typedef struct lexer__Token lexer__Token;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct std__maps__StringIntMap std__maps__StringIntMap;
typedef struct std__maps__StringFloatMap std__maps__StringFloatMap;
typedef struct std__maps__StringBoolMap std__maps__StringBoolMap;
typedef struct std__maps__StringStringMap std__maps__StringStringMap;
typedef struct std__maps__IntIntMap std__maps__IntIntMap;
typedef struct std__maps__FloatIntMap std__maps__FloatIntMap;
typedef struct std__maps__IntFloatMap std__maps__IntFloatMap;
typedef struct std__maps__FloatFloatMap std__maps__FloatFloatMap;
typedef struct std__maps__IntBoolMap std__maps__IntBoolMap;
typedef struct std__maps__BoolIntMap std__maps__BoolIntMap;
typedef struct std__maps__FloatBoolMap std__maps__FloatBoolMap;
typedef struct std__maps__BoolFloatMap std__maps__BoolFloatMap;
typedef struct std__maps__BoolBoolMap std__maps__BoolBoolMap;
typedef struct std__os__ExecResult std__os__ExecResult;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__maps__StringIntMap std__maps__StringIntMap;
typedef struct std__maps__StringFloatMap std__maps__StringFloatMap;
typedef struct std__maps__StringBoolMap std__maps__StringBoolMap;
typedef struct std__maps__StringStringMap std__maps__StringStringMap;
typedef struct std__maps__IntIntMap std__maps__IntIntMap;
typedef struct std__maps__FloatIntMap std__maps__FloatIntMap;
typedef struct std__maps__IntFloatMap std__maps__IntFloatMap;
typedef struct std__maps__FloatFloatMap std__maps__FloatFloatMap;
typedef struct std__maps__IntBoolMap std__maps__IntBoolMap;
typedef struct std__maps__BoolIntMap std__maps__BoolIntMap;
typedef struct std__maps__FloatBoolMap std__maps__FloatBoolMap;
typedef struct std__maps__BoolFloatMap std__maps__BoolFloatMap;
typedef struct std__maps__BoolBoolMap std__maps__BoolBoolMap;
typedef struct std__arena__Arena std__arena__Arena;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__errors__error std__errors__error;
typedef struct std__errors__error std__errors__error;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__os__ExecResult std__os__ExecResult;
typedef struct structs__MacroDef structs__MacroDef;
typedef struct structs__ParserContext structs__ParserContext;
typedef struct structs__Scope structs__Scope;
typedef struct structs__ASTNode structs__ASTNode;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__os__ExecResult std__os__ExecResult;
typedef struct std__maps__StringIntMap std__maps__StringIntMap;
typedef struct std__maps__StringFloatMap std__maps__StringFloatMap;
typedef struct std__maps__StringBoolMap std__maps__StringBoolMap;
typedef struct std__maps__StringStringMap std__maps__StringStringMap;
typedef struct std__maps__IntIntMap std__maps__IntIntMap;
typedef struct std__maps__FloatIntMap std__maps__FloatIntMap;
typedef struct std__maps__IntFloatMap std__maps__IntFloatMap;
typedef struct std__maps__FloatFloatMap std__maps__FloatFloatMap;
typedef struct std__maps__IntBoolMap std__maps__IntBoolMap;
typedef struct std__maps__BoolIntMap std__maps__BoolIntMap;
typedef struct std__maps__FloatBoolMap std__maps__FloatBoolMap;
typedef struct std__maps__BoolFloatMap std__maps__BoolFloatMap;
typedef struct std__maps__BoolBoolMap std__maps__BoolBoolMap;
typedef struct std__errors__error std__errors__error;
typedef struct std__os__ExecResult std__os__ExecResult;
typedef struct std__string__StringBuilder std__string__StringBuilder;
typedef struct std__string__string std__string__string;
typedef struct std__lists__IntList std__lists__IntList;
typedef struct std__lists__FloatList std__lists__FloatList;
typedef struct std__lists__CharList std__lists__CharList;
typedef struct std__lists__LongList std__lists__LongList;
typedef struct std__lists__DoubleList std__lists__DoubleList;
typedef struct std__lists__StringList std__lists__StringList;
typedef struct std__lists__BoolList std__lists__BoolList;
typedef struct __list_structs__ASTNode_t __list_structs__ASTNode_t;
typedef struct __list_lexer__Token_t __list_lexer__Token_t;
typedef struct __list_std__string_t __list_std__string_t;
typedef struct __list_structs__MacroDef_t __list_structs__MacroDef_t;
typedef struct __list_int32_t_t __list_int32_t_t;
typedef struct __list_bool_t __list_bool_t;
typedef struct __list_int64_t_t __list_int64_t_t;
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
typedef enum {
    lexer__TokenType_IDENTIFIER,
    lexer__TokenType_NUMBER,
    lexer__TokenType_STR,
    lexer__TokenType_CHAR,
    lexer__TokenType_INTERPOLATED_STR,
    lexer__TokenType_COMMENT,
    lexer__TokenType_WHITESPACE,
    lexer__TokenType_NEWLINE,
    lexer__TokenType_LPAREN,
    lexer__TokenType_RPAREN,
    lexer__TokenType_LBRACE,
    lexer__TokenType_RBRACE,
    lexer__TokenType_LBRACKET,
    lexer__TokenType_RBRACKET,
    lexer__TokenType_COMMA,
    lexer__TokenType_DOT,
    lexer__TokenType_COLON,
    lexer__TokenType_SEMICOLON,
    lexer__TokenType_PLUS,
    lexer__TokenType_MINUS,
    lexer__TokenType_STAR,
    lexer__TokenType_SLASH,
    lexer__TokenType_OPERATOR,
    lexer__TokenType_INCREMENT,
    lexer__TokenType_DECREMENT,
    lexer__TokenType_PLUS_ASSIGN,
    lexer__TokenType_MINUS_ASSIGN,
    lexer__TokenType_AND,
    lexer__TokenType_OR,
    lexer__TokenType_NOT,
    lexer__TokenType_FN,
    lexer__TokenType_LET,
    lexer__TokenType_MUT,
    lexer__TokenType_IF,
    lexer__TokenType_ELSE,
    lexer__TokenType_ELIF,
    lexer__TokenType_WHILE,
    lexer__TokenType_FOR,
    lexer__TokenType_IN,
    lexer__TokenType_RETURN,
    lexer__TokenType_BREAK,
    lexer__TokenType_CONTINUE,
    lexer__TokenType_MODEL,
    lexer__TokenType_ENUM,
    lexer__TokenType_USE,
    lexer__TokenType_MATCH,
    lexer__TokenType_CASE,
    lexer__TokenType_TEST,
    lexer__TokenType_ASSERT,
    lexer__TokenType_REF,
    lexer__TokenType_MACRO,
    lexer__TokenType_RAW,
    lexer__TokenType_PLATFORM,
    lexer__TokenType_PARALLEL,
    lexer__TokenType_LOCAL,
    lexer__TokenType_SINGLE,
    lexer__TokenType_TO,
    lexer__TokenType_REDUCE,
    lexer__TokenType_OPAQUE,
    lexer__TokenType_FOREIGN,
    lexer__TokenType_EXTERN,
    lexer__TokenType_UNSAFE,
    lexer__TokenType_STAR_DOT,
    lexer__TokenType_PUB,
    lexer__TokenType_PRINT,
    lexer__TokenType_DEF,
    lexer__TokenType_VAL,
    lexer__TokenType_MAIN,
    lexer__TokenType_MOD,
    lexer__TokenType_DEFAULT,
    lexer__TokenType_LOOP,
    lexer__TokenType_NEW,
    lexer__TokenType_OVERLOAD,
    lexer__TokenType_EXTERNAL,
    lexer__TokenType_SWITCH,
    lexer__TokenType_XOR,
    lexer__TokenType_WHEN,
    lexer__TokenType_IS,
    lexer__TokenType_DOLLAR
} lexer__TokenType;

typedef struct std__arena__Arena {
    uintptr_t buffer;
    uintptr_t capacity;
    uintptr_t offset;
} std__arena__Arena;

typedef struct std__string__StringBuilder {
    char* data;
    uintptr_t len;
    uintptr_t cap;
} std__string__StringBuilder;

typedef struct std__string__string {
    char* data;
    uintptr_t len;
    uintptr_t cap;
} std__string__string;

typedef struct std__lists__IntList {
    int32_t* data;
    uintptr_t len;
    uintptr_t cap;
} std__lists__IntList;

typedef struct std__lists__FloatList {
    float* data;
    uintptr_t len;
    uintptr_t cap;
} std__lists__FloatList;

typedef struct std__lists__CharList {
    char* data;
    uintptr_t len;
    uintptr_t cap;
} std__lists__CharList;

typedef struct std__lists__LongList {
    int64_t* data;
    uintptr_t len;
    uintptr_t cap;
} std__lists__LongList;

typedef struct std__lists__DoubleList {
    double* data;
    uintptr_t len;
    uintptr_t cap;
} std__lists__DoubleList;

typedef struct std__lists__StringList {
    std__string__string* data;
    uintptr_t len;
    uintptr_t cap;
} std__lists__StringList;

typedef struct std__lists__BoolList {
    bool* data;
    uintptr_t len;
    uintptr_t cap;
} std__lists__BoolList;

typedef struct std__errors__error {
    struct std__string__string msg;
} std__errors__error;

typedef struct std__os__ExecResult {
    int32_t exit_code;
    struct std__string__string output;
} std__os__ExecResult;

typedef struct lexer__Token {
    int32_t token_type;
    struct std__string__string value;
    int32_t line;
    int32_t column;
} lexer__Token;

typedef struct structs__MacroDef {
    __list_std__string_t* params;
    __list_lexer__Token_t* body;
} structs__MacroDef;

typedef struct std__maps__StringStringMap {
    std__lists__StringList* keys;
    std__lists__StringList* values;
} std__maps__StringStringMap;

typedef struct structs__Scope {
    struct std__maps__StringStringMap variables;
    structs__Scope* parent;
} structs__Scope;

typedef struct structs__ParserContext {
    __list_lexer__Token_t* tokens;
    int32_t pos;
    bool is_axec;
    bool check_entry_point;
    struct std__string__string current_module;
    struct structs__Scope current_scope;
    struct std__string__string filename;
    bool in_test_block;
} structs__ParserContext;

typedef struct structs__ASTNode {
    struct std__string__string node_type;
    __list_structs__ASTNode_t* children;
    int32_t line;
    struct std__string__string source_file;
    union {
        struct {
            struct std__string__string name;
            struct std__string__string param_name;
            struct std__string__string call_expr;
            __list_std__string_t* type_names;
            __list_std__string_t* target_functions;
        } overload_node;
        struct {
            struct std__string__string name;
            bool is_mutable;
            struct std__string__string initializer;
            struct std__string__string type_name;
            int32_t ref_depth;
        } declaration;
        struct {
            struct std__string__string name;
            bool is_mutable;
            struct std__string__string element_type;
            struct std__string__string size;
            struct std__string__string size2;
            __list_std__string_t* initializer;
        } array_decl;
        struct {
            struct std__string__string array_name;
            struct std__string__string index;
            struct std__string__string index2;
        } array_access;
        struct {
            struct std__string__string array_name;
            struct std__string__string index;
            struct std__string__string index2;
            struct std__string__string value;
        } array_assign;
        struct {
            struct std__string__string element_type;
            __list_std__string_t* elements;
        } array_literal;
        struct {
            struct std__string__string name;
            __list_std__string_t* params;
            struct std__string__string return_type;
            bool is_public;
            __list_std__string_t* tags;
            __list_std__string_t* type_params;
            bool is_generic;
            __list_std__string_t* when_branch_types;
            __list_int32_t_t* when_branch_counts;
            __list_int32_t_t* when_branch_starts;
        } function;
        struct {
            struct std__string__string name;
            __list_std__string_t* params;
            __list_std__string_t* param_types;
            __list_lexer__Token_t* body_tokens;
        } macro_node;
        struct {
            struct std__string__string condition;
            struct std__string__string message;
        } assert_node;
        struct {
            struct std__string__string condition;
            __list_structs__ASTNode_t* elif_branches;
            __list_structs__ASTNode_t* else_body;
        } if_node;
        struct {
            __list_std__string_t* messages;
            __list_bool_t* is_expressions;
        } println;
        struct {
            __list_std__string_t* messages;
            __list_bool_t* is_expressions;
        } print;
        struct {
            struct std__string__string variable;
            struct std__string__string expression;
            struct std__string__string operator;
        } assignment;
        struct {
            struct std__string__string function_name;
            __list_std__string_t* args;
        } func_call;
        struct {
            __list_std__string_t* parts;
            __list_std__string_t* expressions;
        } interpolated_str;
        struct {
            struct std__string__string initialization;
            struct std__string__string condition;
            struct std__string__string increment;
            bool is_mutable;
            struct std__string__string var_name;
            struct std__string__string var_type;
            struct std__string__string init_value;
            bool is_parallel;
            __list_std__string_t* reduction_clauses;
        } for_loop;
        struct {
            struct std__string__string var_name;
            struct std__string__string array_name;
            struct std__string__string array_size;
        } for_in;
        struct {
            struct std__string__string expression;
        } return_node;
        struct {
            struct std__string__string code;
        } raw_c;
        struct {
            struct std__string__string module_name;
            __list_std__string_t* imports;
            bool import_all;
        } use_node;
        struct {
            struct std__string__string name;
            bool is_public;
            __list_std__string_t* field_names;
            __list_std__string_t* field_types;
            __list_std__string_t* union_member_parents;
            __list_std__string_t* union_member_names;
            __list_std__string_t* union_member_types;
        } model_node;
        struct {
            struct std__string__string name;
            __list_std__string_t* values;
        } enum_node;
        struct {
            struct std__string__string model_name;
            struct std__string__string variable_name;
            bool is_mutable;
            __list_std__string_t* field_names;
            __list_std__string_t* field_values;
        } model_instantiation;
        struct {
            struct std__string__string object_name;
            struct std__string__string member_name;
            struct std__string__string value;
        } member_access;
        struct {
            struct std__string__string header_file;
        } external_import;
        struct {
            __list_std__string_t* type_names;
        } opaque_node;
        struct {
            __list_std__string_t* type_names;
        } foreign_node;
        struct {
            struct std__string__string function_name;
            __list_std__string_t* params;
            struct std__string__string return_type;
        } extern_node;
        struct {
            __list_structs__ASTNode_t* body;
        } unsafe_node;
        struct {
            struct std__string__string expression;
        } switch_node;
        struct {
            struct std__string__string value;
            bool is_default;
        } case_node;
        struct {
            struct std__string__string variable;
            bool is_increment;
        } inc_dec;
        struct {
            struct std__string__string object_name;
            struct std__string__string member_name;
            bool is_increment;
        } member_inc_dec;
        struct {
            struct std__string__string platform_name;
        } platform_node;
        struct {
            struct std__string__string initialization;
            struct std__string__string condition;
            struct std__string__string increment;
            __list_std__string_t* reduction_clauses;
        } parallel_for;
        struct {
            __list_std__string_t* private_vars;
            __list_std__string_t* private_types;
            __list_bool_t* is_mutable;
        } parallel_local;
        struct {
            __list_std__string_t* type_params;
            __list_std__string_t* concrete_types;
        } when_branch;
        int32_t empty;
    } data;
} structs__ASTNode;

typedef struct std__maps__StringIntMap {
    std__lists__StringList* keys;
    std__lists__IntList* values;
} std__maps__StringIntMap;

typedef struct std__maps__StringFloatMap {
    std__lists__StringList* keys;
    std__lists__FloatList* values;
} std__maps__StringFloatMap;

typedef struct std__maps__StringBoolMap {
    std__lists__StringList* keys;
    std__lists__BoolList* values;
} std__maps__StringBoolMap;

typedef struct std__maps__IntIntMap {
    std__lists__IntList* keys;
    std__lists__IntList* values;
} std__maps__IntIntMap;

typedef struct std__maps__FloatIntMap {
    std__lists__FloatList* keys;
    std__lists__IntList* values;
} std__maps__FloatIntMap;

typedef struct std__maps__IntFloatMap {
    std__lists__IntList* keys;
    std__lists__FloatList* values;
} std__maps__IntFloatMap;

typedef struct std__maps__FloatFloatMap {
    std__lists__FloatList* keys;
    std__lists__FloatList* values;
} std__maps__FloatFloatMap;

typedef struct std__maps__IntBoolMap {
    std__lists__IntList* keys;
    std__lists__BoolList* values;
} std__maps__IntBoolMap;

typedef struct std__maps__BoolIntMap {
    std__lists__BoolList* keys;
    std__lists__IntList* values;
} std__maps__BoolIntMap;

typedef struct std__maps__FloatBoolMap {
    std__lists__FloatList* keys;
    std__lists__BoolList* values;
} std__maps__FloatBoolMap;

typedef struct std__maps__BoolFloatMap {
    std__lists__BoolList* keys;
    std__lists__FloatList* values;
} std__maps__BoolFloatMap;

typedef struct std__maps__BoolBoolMap {
    std__lists__BoolList* keys;
    std__lists__BoolList* values;
} std__maps__BoolBoolMap;

typedef struct __list_structs__ASTNode_t {
    structs__ASTNode* data;
    int len;
    int capacity;
} __list_structs__ASTNode_t;

static inline __list_structs__ASTNode_t __list_structs__ASTNode_init(void) {
    __list_structs__ASTNode_t list;
    list.data = NULL;
    list.len = 0;
    list.capacity = 0;
    return list;
}

static inline void __list_structs__ASTNode_push(__list_structs__ASTNode_t* list, structs__ASTNode item) {
    if (list->len >= list->capacity) {
        int new_capacity = list->capacity == 0 ? 8 : list->capacity * 2;
        structs__ASTNode* new_data = (structs__ASTNode*)realloc(list->data, new_capacity * sizeof(structs__ASTNode));
        if (new_data == NULL) { fprintf(stderr, "Out of memory\n"); exit(1); }
        list->data = new_data;
        list->capacity = new_capacity;
    }
    list->data[list->len++] = item;
}

typedef struct __list_lexer__Token_t {
    lexer__Token* data;
    int len;
    int capacity;
} __list_lexer__Token_t;

static inline __list_lexer__Token_t __list_lexer__Token_init(void) {
    __list_lexer__Token_t list;
    list.data = NULL;
    list.len = 0;
    list.capacity = 0;
    return list;
}

static inline void __list_lexer__Token_push(__list_lexer__Token_t* list, lexer__Token item) {
    if (list->len >= list->capacity) {
        int new_capacity = list->capacity == 0 ? 8 : list->capacity * 2;
        lexer__Token* new_data = (lexer__Token*)realloc(list->data, new_capacity * sizeof(lexer__Token));
        if (new_data == NULL) { fprintf(stderr, "Out of memory\n"); exit(1); }
        list->data = new_data;
        list->capacity = new_capacity;
    }
    list->data[list->len++] = item;
}

typedef struct __list_std__string_t {
    std__string__string* data;
    int len;
    int capacity;
} __list_std__string_t;

static inline __list_std__string_t __list_std__string_init(void) {
    __list_std__string_t list;
    list.data = NULL;
    list.len = 0;
    list.capacity = 0;
    return list;
}

static inline void __list_std__string_push(__list_std__string_t* list, std__string__string item) {
    if (list->len >= list->capacity) {
        int new_capacity = list->capacity == 0 ? 8 : list->capacity * 2;
        std__string__string* new_data = (std__string__string*)realloc(list->data, new_capacity * sizeof(std__string__string));
        if (new_data == NULL) { fprintf(stderr, "Out of memory\n"); exit(1); }
        list->data = new_data;
        list->capacity = new_capacity;
    }
    list->data[list->len++] = item;
}

typedef struct __list_structs__MacroDef_t {
    structs__MacroDef* data;
    int len;
    int capacity;
} __list_structs__MacroDef_t;

static inline __list_structs__MacroDef_t __list_structs__MacroDef_init(void) {
    __list_structs__MacroDef_t list;
    list.data = NULL;
    list.len = 0;
    list.capacity = 0;
    return list;
}

static inline void __list_structs__MacroDef_push(__list_structs__MacroDef_t* list, structs__MacroDef item) {
    if (list->len >= list->capacity) {
        int new_capacity = list->capacity == 0 ? 8 : list->capacity * 2;
        structs__MacroDef* new_data = (structs__MacroDef*)realloc(list->data, new_capacity * sizeof(structs__MacroDef));
        if (new_data == NULL) { fprintf(stderr, "Out of memory\n"); exit(1); }
        list->data = new_data;
        list->capacity = new_capacity;
    }
    list->data[list->len++] = item;
}

typedef struct __list_int32_t_t {
    int32_t* data;
    int len;
    int capacity;
} __list_int32_t_t;

static inline __list_int32_t_t __list_int32_t_init(void) {
    __list_int32_t_t list;
    list.data = NULL;
    list.len = 0;
    list.capacity = 0;
    return list;
}

static inline void __list_int32_t_push(__list_int32_t_t* list, int32_t item) {
    if (list->len >= list->capacity) {
        int new_capacity = list->capacity == 0 ? 8 : list->capacity * 2;
        int32_t* new_data = (int32_t*)realloc(list->data, new_capacity * sizeof(int32_t));
        if (new_data == NULL) { fprintf(stderr, "Out of memory\n"); exit(1); }
        list->data = new_data;
        list->capacity = new_capacity;
    }
    list->data[list->len++] = item;
}

typedef struct __list_bool_t {
    bool* data;
    int len;
    int capacity;
} __list_bool_t;

static inline __list_bool_t __list_bool_init(void) {
    __list_bool_t list;
    list.data = NULL;
    list.len = 0;
    list.capacity = 0;
    return list;
}

static inline void __list_bool_push(__list_bool_t* list, bool item) {
    if (list->len >= list->capacity) {
        int new_capacity = list->capacity == 0 ? 8 : list->capacity * 2;
        bool* new_data = (bool*)realloc(list->data, new_capacity * sizeof(bool));
        if (new_data == NULL) { fprintf(stderr, "Out of memory\n"); exit(1); }
        list->data = new_data;
        list->capacity = new_capacity;
    }
    list->data[list->len++] = item;
}

typedef struct __list_int64_t_t {
    int64_t* data;
    int len;
    int capacity;
} __list_int64_t_t;

static inline __list_int64_t_t __list_int64_t_init(void) {
    __list_int64_t_t list;
    list.data = NULL;
    list.len = 0;
    list.capacity = 0;
    return list;
}

static inline void __list_int64_t_push(__list_int64_t_t* list, int64_t item) {
    if (list->len >= list->capacity) {
        int new_capacity = list->capacity == 0 ? 8 : list->capacity * 2;
        int64_t* new_data = (int64_t*)realloc(list->data, new_capacity * sizeof(int64_t));
        if (new_data == NULL) { fprintf(stderr, "Out of memory\n"); exit(1); }
        list->data = new_data;
        list->capacity = new_capacity;
    }
    list->data[list->len++] = item;
}

bool loud_logger = false;
bool is_release_build = false;
bool keep_emitted_file = false;
bool run_after_compile = false;
bool print_tokens = false;
bool print_ast = false;
bool build_shared_lib = false;
bool bootstrap_mode = false;
std__lists__StringList* include_paths = nil;
bool quiet_mode = false;
bool syntax_check_only = false;
std__string__string target_triple = {0};
std__string__string sysroot_path = {0};
bool compile_only = false;
std__lists__StringList* library_paths = nil;
std__lists__StringList* link_libraries = nil;
int32_t g_lexer_current_line;
std__maps__StringStringMap g_type_aliases = {0};
std__maps__StringBoolMap g_imported_modules = {0};
std__maps__StringStringMap g_list_of_types = {0};
std__maps__StringBoolMap g_var_mutability = {0};
std__maps__StringBoolMap g_var_actually_mutated = {0};
__list_std__string_t g_mutable_vars_in_scope = {0};
__list_std__string_t g_all_vars_in_scope = {0};
std__maps__StringBoolMap g_var_actually_used = {0};
std__maps__StringIntMap g_var_declaration_lines = {0};
std__maps__StringStringMap g_var_declaration_files = {0};
std__maps__StringIntMap g_var_scope_depth = {0};
int32_t g_current_scope_depth;
bool g_function_has_raw_block;
bool g_check_shadowing;
__list_std__string_t g_macro_names = {0};
__list_structs__MacroDef_t g_macro_defs = {0};
std__maps__StringBoolMap g_processed_modules = {0};
std__maps__StringStringMap g_import_model_names = {0};
std__arena__Arena g_model_names_arena = {0};
std__maps__StringBoolMap g_imported_symbols = {0};
std__arena__Arena g_imported_symbols_arena = {0};
std__maps__StringStringMap g_type_mappings = {0};
std__maps__StringIntMap g_ref_depths = {0};
std__maps__StringBoolMap g_is_mutable = {0};
std__maps__StringStringMap g_function_prefixes = {0};
std__maps__StringStringMap g_model_names = {0};
std__maps__StringBoolMap g_enum_names = {0};
std__maps__StringBoolMap g_opaque_types = {0};
std__maps__StringBoolMap g_foreign_types = {0};
std__maps__StringBoolMap g_generated_typedefs = {0};
std__maps__StringBoolMap g_generated_functions = {0};
std__maps__StringStringMap g_field_types = {0};
std__maps__StringBoolMap g_pointer_fields = {0};
std__maps__StringStringMap g_var_types = {0};
std__maps__StringBoolMap g_list_element_types = {0};
std__lists__StringList* g_list_elements = {0};
std__lists__StringList* g_global_external_headers = {0};
std__lists__StringList* g_windows_external_headers = {0};
std__lists__StringList* g_posix_external_headers = {0};
std__lists__StringList* g_linux_external_headers = {0};
std__lists__StringList* g_macos_external_headers = {0};
std__lists__StringList* g_freebsd_external_headers = {0};
std__lists__StringList* g_openbsd_external_headers = {0};
std__lists__StringList* g_netbsd_external_headers = {0};
std__lists__StringList* g_dragonflybsd_external_headers = {0};
std__string__StringBuilder* g_renderer_sb = {0};
std__maps__StringBoolMap g_emitted_globals = {0};
std__maps__StringBoolMap g_emitted_prototypes = {0};
std__maps__StringStringMap g_global_var_prefixes = {0};
std__maps__StringBoolMap g_generic_functions = {0};
std__maps__StringStringMap g_function_param_types = {0};
std__maps__StringStringMap g_function_return_types = {0};
std__maps__StringBoolMap g_extern_functions = {0};
std__maps__StringBoolMap g_overloads = {0};
std__string__string g_current_source_file = {0};
int32_t g_current_line;
std__maps__StringStringMap* g_current_type_mapping = {0};
bool g_emit_line_directives;
bool std__algorithms__strlst_contains(std__lists__StringList lst, std__string__string value);
bool std__algorithms__strlst_contains_c(std__lists__StringList lst, char* value);
bool std__algorithms__intlst_contains(std__lists__IntList lst, int32_t vlue);
std__arena__Arena std__arena__Arena__create(uintptr_t size);
void std__arena__Arena__destroy(std__arena__Arena* arena);
void* std__arena__Arena__alloc(std__arena__Arena* arena, uintptr_t size);
void* std__arena__Arena__alloc_array(std__arena__Arena* arena, uintptr_t element_size, uintptr_t count);
void std__arena__Arena__reset(std__arena__Arena* arena);
int32_t std__arena__Arena__used(std__arena__Arena* arena);
uintptr_t std__arena__Arena__remaining(std__arena__Arena* arena);
void std__io__print_char(char value);
void std__io__println_char(char value);
void std__io__print_chrptr(char* value);
void std__io__println_chrptr(char* value);
void std__io__print_str(std__string__string value);
void std__io__println_str(std__string__string value);
void std__io__print_f32(float value);
void std__io__println_f32(float value);
void std__io__println_f64(double value);
void std__io__print_f64(double value);
void std__io__println_i64(int64_t value);
void std__io__print_i64(int64_t value);
void std__io__print_i32(int32_t value);
void std__io__println_i32(int32_t value);
void std__io__print_bool(bool value);
void std__io__println_bool(bool value);
int32_t std__io__read_i32();
float std__io__read_f32();
std__string__string std__io__read_str(std__arena__Arena arena);
std__string__StringBuilder std__string__StringBuilder__init(uintptr_t initial_capacity);
void std__string__StringBuilder__ensure_capacity(std__string__StringBuilder* sb, uintptr_t additional);
void std__string__StringBuilder__append(std__string__StringBuilder* sb, std__string__string s);
void std__string__StringBuilder__append_c(std__string__StringBuilder* sb, char* s);
void std__string__StringBuilder__append_char(std__string__StringBuilder* sb, char c);
std__string__string std__string__StringBuilder__to_string(std__string__StringBuilder* sb);
void std__string__StringBuilder__clear(std__string__StringBuilder* sb);
void std__string__StringBuilder__destroy(std__string__StringBuilder* sb);
std__string__string std__string__string__create(char* data);
std__string__string std__string__string__create_with_capacity(std__arena__Arena* arena, int32_t capacity);
void std__string__string__destroy(std__string__string* s);
std__string__string std__string__replace_all(std__string__string s, std__string__string from, std__string__string dest);
std__string__string std__string__i32_to_string(int32_t value);
uintptr_t std__string__str_len(std__string__string s);
std__string__string std__string__to_title_case(std__string__string s);
std__string__string std__string__to_upper(std__string__string s);
std__string__string std__string__to_lower(std__string__string s);
void std__string__str_copy(std__string__string src, std__string__string desta);
std__string__string std__string__concat_chr(std__string__string a, char b);
std__string__string std__string__substring_se(std__string__string s, int32_t start, int32_t end);
char* std__string__substring_scse(std__string__string s, int32_t start, int32_t end);
char* std__string__substring_cse(char* s, int32_t start, int32_t end);
bool std__string__equals_c(std__string__string a, char* b);
int32_t std__string__compare(std__string__string a, std__string__string b);
bool std__string_equals(std__string__string a, std__string__string b);
std__string__string std__string__concat_c(std__string__string original, char* addon);
std__string__string std__string__concat(std__string__string dest, std__string__string src);
char* std__string__first_occurrence(std__string__string s, int32_t c);
char* std__string__substring(std__string__string haystack, std__string__string needle);
bool std__string__str_contains(std__string__string s, std__string__string substr);
bool std__string__str_contains_c(std__string__string s, char* substr);
int32_t std__string__str_to_int(std__string__string s);
int64_t std__string__str_to_long(char* s);
int32_t std__string__is_alpha(int32_t c);
int32_t std__string__is_digit(int32_t c);
int32_t std__string__is_alphanum(int32_t c);
char* std__string__to_upper_chrptr(char* s);
char* std__string__to_lower_chrptr(char* s);
int32_t std__string__to_upper_chr(int32_t c);
int32_t std__string__to_lower_chr(int32_t c);
char* std__string__str_dup(char* s);
int32_t std__string__str_ncmp(char* s1, char* s2, int32_t n);
char* std__string__str_ncopy(char* dest, char* src, int32_t n);
char* std__string__int_to_str(int32_t value, char* buffer);
char* std__string__long_to_str(int64_t value, char* buffer);
char* std__string__float_to_str(float value, char* buffer);
char* std__string__double_to_str(double value, char* buffer);
char std__string__get_char(std__string__string s, int32_t pos);
int32_t std__string__find_char_from(std__string__string s, char c, uintptr_t start);
int32_t std__string__find_last_char(std__string__string s, char c);
int32_t std__string__find_substr(std__string__string s, std__string__string substr);
std__string__string std__string__substr(std__string__string s, int32_t start, int32_t length);
bool std__string__has_prefix(std__string__string s, std__string__string prefix);
bool std__string__has_suffix(std__string__string s, std__string__string suffix);
std__string__string std__string__trim_prefix(std__string__string s, std__string__string prefix);
std__string__string std__string__trim_suffix(std__string__string s, std__string__string suffix);
std__string__string std__string__lstrip(std__string__string s);
std__string__string std__string__rstrip(std__string__string s);
std__string__string std__string__strip(std__string__string s);
std__string__string std__string__str(char* data);
bool std__lists__int_eq(int32_t a, int32_t b);
bool std__lists__long_eq(int64_t a, int64_t b);
bool std__lists__float_eq(float a, float b);
bool std__lists__double_eq(double a, double b);
bool std__lists__char_eq(char a, char b);
bool std__lists__bool_eq(bool a, bool b);
std__lists__IntList* std__lists__IntList__create(std__arena__Arena* arena, uintptr_t capacity);
void std__lists__IntList__push(std__lists__IntList* lst, std__arena__Arena* arena, int32_t value);
int32_t std__lists__IntList__get(std__lists__IntList* lst, uintptr_t index);
void std__lists__IntList__clear(std__lists__IntList* lst);
bool std__lists__IntList__contains(std__lists__IntList* lst, int32_t value);
void std__lists__IntList__print_all(std__lists__IntList* lst);
std__lists__FloatList* std__lists__FloatList__create(std__arena__Arena* arena, uintptr_t capacity);
void std__lists__FloatList__push(std__lists__FloatList* lst, std__arena__Arena* arena, float value);
float std__lists__FloatList__get(std__lists__FloatList* lst, uintptr_t index);
void std__lists__FloatList__clear(std__lists__FloatList* lst);
bool std__lists__FloatList__contains(std__lists__FloatList* lst, float value);
void std__lists__FloatList__print_all(std__lists__FloatList* lst);
std__lists__CharList* std__lists__CharList__create(std__arena__Arena* arena, uintptr_t capacity);
void std__lists__CharList__push(std__lists__CharList* lst, std__arena__Arena* arena, char value);
char std__lists__CharList__get(std__lists__CharList* lst, uintptr_t index);
void std__lists__CharList__clear(std__lists__CharList* lst);
bool std__lists__CharList__contains(std__lists__CharList* lst, char value);
void std__lists__CharList__print_all(std__lists__CharList* lst);
std__lists__LongList* std__lists__LongList__create(std__arena__Arena* arena, uintptr_t capacity);
void std__lists__LongList__push(std__lists__LongList* lst, std__arena__Arena* arena, int64_t value);
int64_t std__lists__LongList__get(std__lists__LongList* lst, uintptr_t index);
void std__lists__LongList__clear(std__lists__LongList* lst);
bool std__lists__LongList__contains(std__lists__LongList* lst, int64_t value);
void std__lists__LongList__print_all(std__lists__LongList* lst);
std__lists__DoubleList* std__lists__DoubleList__create(std__arena__Arena* arena, uintptr_t capacity);
void std__lists__DoubleList__push(std__lists__DoubleList* lst, std__arena__Arena* arena, double value);
double std__lists__DoubleList__get(std__lists__DoubleList* lst, uintptr_t index);
void std__lists__DoubleList__clear(std__lists__DoubleList* lst);
bool std__lists__DoubleList__contains(std__lists__DoubleList* lst, double value);
void std__lists__DoubleList__print_all(std__lists__DoubleList* lst);
std__lists__StringList* std__lists__StringList__create(std__arena__Arena* arena, uintptr_t capacity);
void std__lists__StringList__push(std__lists__StringList* lst, std__arena__Arena* arena, std__string__string value);
std__string__string std__lists__StringList__get(std__lists__StringList* lst, uintptr_t index);
void std__lists__StringList__clear(std__lists__StringList* lst);
bool std__lists__StringList__contains(std__lists__StringList* lst, std__string__string value);
void std__lists__StringList__print_all(std__lists__StringList* lst);
std__lists__BoolList* std__lists__BoolList__create(std__arena__Arena* arena, uintptr_t capacity);
void std__lists__BoolList__push(std__lists__BoolList* lst, std__arena__Arena* arena, bool value);
bool std__lists__BoolList__get(std__lists__BoolList* lst, uintptr_t index);
void std__lists__BoolList__clear(std__lists__BoolList* lst);
bool std__lists__BoolList__contains(std__lists__BoolList* lst, bool value);
void std__lists__BoolList__print_all(std__lists__BoolList* lst);
std__errors__error std__errors__error__create(char* msg);
void std__errors__error__print_self(std__errors__error err);
void std__errors__panic(std__errors__error err);
void std__errors__enforce(bool condition, std__errors__error err);
void std__errors__enforce_raw(bool condition, char* msg);
std__errors__error std__errors__test_error();
int32_t std__os__exec_from_string(std__string__string cmd);
int32_t std__os__exec(char* cmd);
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
std__os__ExecResult std__os__exec_capture(std__string__string cmd);
void std__os__quit(int32_t code);
bool std__os__file_exists(std__string__string path);
std__string__string std__os__read_file(std__string__string path);
bool std__os__write_file(std__string__string path, std__string__string contents);
bool std__os__is_directory(std__string__string path);
bool std__os__is_file(std__string__string path);
bool std__os__is_symbolic_link(std__string__string path);
bool std__os__delete_file(std__string__string path);
bool std__os__rm_dir(std__string__string path);
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
char* std__os__dirent_d_name(uintptr_t entry);
int32_t std__os__stat_is_dir(uintptr_t st);
#endif
#ifdef _WIN32
char* std__os__finddata_name(uintptr_t data);
int32_t std__os__finddata_is_dir(uintptr_t data);
#endif
bool std__os__rm_dir_recursive(std__string__string path);
#ifndef _WIN32
int32_t std__os__stat_is_reg(uintptr_t st);
#endif
void std__os__collect_files_recursive(std__string__string path, std__lists__StringList* result, std__arena__Arena* arena);
std__lists__StringList* std__os__list_files_recursive(std__string__string path, std__arena__Arena* arena);
std__string__string std__os__get_user_home_dir();
std__string__string std__os__get_env(std__string__string name);
std__lists__StringList* std__os__get_cmdline_args(std__arena__Arena* arena);
std__string__string std__os__get_cwd();
#ifdef __APPLE__
#endif
std__string__string std__os__get_executable_path();
std__string__string std__os__get_executable_dir();
std__string__string std__os__get_short_filename(std__string__string path);
bool builds__command_exists(std__string__string cmd);
void builds__filter_and_print_errors(std__string__string output);
bool builds__has_double_underscore(std__string__string name);
void builds__prefix_root_enums(structs__ASTNode* node, std__string__string mprefix);
void builds__prefix_root_functions(structs__ASTNode* node, std__string__string mprefix);
void builds__print_ast_node(structs__ASTNode* node, int32_t indent);
bool builds__has_entry_tag(__list_std__string_t* tags);
void builds__count_entry_points(structs__ASTNode* node, int32_t* main_count, int32_t* custom_entry_count, int32_t* test_count);
bool builds__validate_entry_points(structs__ASTNode* node, std__string__string filename);
bool builds__compile_file(std__string__string filename, bool is_axec, std__string__string output_filename);
std__string__string builds__replace_extension(std__string__string filename, std__string__string new_ext);
std__string__string builds__get_output_filename(std__string__string specified_output, std__string__string input_filename);
bool builds__should_link_openmp(structs__ASTNode* ast, std__string__string filename);
bool builds__has_parallel_blocks(structs__ASTNode* ast);
void builds__collect_model_names(structs__ASTNode* ast);
void builds__collect_declared_functions(structs__ASTNode* ast);
void gstate__set_loud_logger(bool v);
void gstate__set_release_build(bool v);
void gstate__set_keep_emitted_file(bool v);
void gstate__set_run_after_compile(bool v);
void gstate__set_print_tokens(bool v);
void gstate__set_print_ast(bool v);
void gstate__set_build_shared_lib(bool v);
void gstate__set_bootstrap_mode(bool v);
void gstate__set_include_paths(std__lists__StringList* paths);
std__lists__StringList* gstate__get_include_paths();
void gstate__set_quiet_mode(bool v);
void gstate__set_syntax_check_only(bool v);
void gstate__set_target_triple(std__string__string triple);
std__string__string gstate__get_target_triple();
void gstate__set_sysroot_path(std__string__string path);
std__string__string gstate__get_sysroot_path();
void gstate__set_compile_only(bool v);
bool gstate__get_compile_only();
void gstate__set_library_paths(std__lists__StringList* paths);
std__lists__StringList* gstate__get_library_paths();
void gstate__set_link_libraries(std__lists__StringList* libs);
std__lists__StringList* gstate__get_link_libraries();
void gstate__debug_print_i32(int32_t msg);
void gstate__debug_print_str(std__string__string msg);
void gstate__debug_print_raw(char* msg);
std__maps__StringIntMap* std__maps__StringIntMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__StringIntMap__clear(std__maps__StringIntMap* map);
void std__maps__StringIntMap__add(std__maps__StringIntMap* map, std__arena__Arena* arena, std__string__string key, int32_t value);
void std__maps__StringIntMap__set(std__maps__StringIntMap* map, std__arena__Arena* arena, std__string__string key, int32_t value);
int32_t std__maps__StringIntMap__get(std__maps__StringIntMap* map, std__string__string key);
bool std__maps__StringIntMap__contains(std__maps__StringIntMap* map, std__string__string key);
int32_t std__maps__StringIntMap__size(std__maps__StringIntMap* map);
int32_t std__maps__StringIntMap__pop(std__maps__StringIntMap* map, std__string__string key);
std__maps__StringFloatMap* std__maps__StringFloatMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__StringFloatMap__clear(std__maps__StringFloatMap* map);
void std__maps__StringFloatMap__add(std__maps__StringFloatMap* map, std__arena__Arena* arena, std__string__string key, float value);
void std__maps__StringFloatMap__set(std__maps__StringFloatMap* map, std__arena__Arena* arena, std__string__string key, float value);
float std__maps__StringFloatMap__get(std__maps__StringFloatMap* map, std__string__string key);
bool std__maps__StringFloatMap__contains(std__maps__StringFloatMap* map, std__string__string key);
int32_t std__maps__StringFloatMap__size(std__maps__StringFloatMap* map);
float std__maps__StringFloatMap__pop(std__maps__StringFloatMap* map, std__string__string key);
std__maps__StringBoolMap* std__maps__StringBoolMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__StringBoolMap__clear(std__maps__StringBoolMap* map);
void std__maps__StringBoolMap__add(std__maps__StringBoolMap* map, std__arena__Arena* arena, std__string__string key, bool value);
void std__maps__StringBoolMap__set(std__maps__StringBoolMap* map, std__arena__Arena* arena, std__string__string key, bool value);
bool std__maps__StringBoolMap__get(std__maps__StringBoolMap* map, std__string__string key);
bool std__maps__StringBoolMap__contains(std__maps__StringBoolMap* map, std__string__string key);
int32_t std__maps__StringBoolMap__size(std__maps__StringBoolMap* map);
bool std__maps__StringBoolMap__pop(std__maps__StringBoolMap* map, std__string__string key);
std__maps__StringStringMap* std__maps__StringStringMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__StringStringMap__clear(std__maps__StringStringMap* map);
void std__maps__StringStringMap__add(std__maps__StringStringMap* map, std__arena__Arena* arena, std__string__string key, std__string__string value);
void std__maps__StringStringMap__set(std__maps__StringStringMap* map, std__arena__Arena* arena, std__string__string key, std__string__string value);
std__string__string std__maps__StringStringMap__get(std__maps__StringStringMap* map, std__string__string key);
bool std__maps__StringStringMap__contains(std__maps__StringStringMap* map, std__string__string key);
int32_t std__maps__StringStringMap__size(std__maps__StringStringMap* map);
std__string__string std__maps__StringStringMap__pop(std__maps__StringStringMap* map, std__string__string key);
std__maps__IntIntMap* std__maps__IntIntMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__IntIntMap__clear(std__maps__IntIntMap* map);
void std__maps__IntIntMap__append(std__maps__IntIntMap* map, std__arena__Arena* arena, int32_t key, int32_t value);
void std__maps__IntIntMap__add(std__maps__IntIntMap* map, std__arena__Arena* arena, int32_t key, int32_t value);
void std__maps__IntIntMap__set(std__maps__IntIntMap* map, std__arena__Arena* arena, int32_t key, int32_t value);
int32_t std__maps__IntIntMap__get(std__maps__IntIntMap* map, int32_t key);
bool std__maps__IntIntMap__contains(std__maps__IntIntMap* map, int32_t key);
int32_t std__maps__IntIntMap__size(std__maps__IntIntMap* map);
int32_t std__maps__IntIntMap__pop(std__maps__IntIntMap* map, int32_t key);
std__maps__FloatIntMap* std__maps__FloatIntMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__FloatIntMap__clear(std__maps__FloatIntMap* map);
void std__maps__FloatIntMap__append(std__maps__FloatIntMap* map, std__arena__Arena* arena, float key, int32_t value);
void std__maps__FloatIntMap__add(std__maps__FloatIntMap* map, std__arena__Arena* arena, float key, int32_t value);
void std__maps__FloatIntMap__set(std__maps__FloatIntMap* map, std__arena__Arena* arena, float key, int32_t value);
int32_t std__maps__FloatIntMap__get(std__maps__FloatIntMap* map, float key);
bool std__maps__FloatIntMap__contains(std__maps__FloatIntMap* map, float key);
int32_t std__maps__FloatIntMap__size(std__maps__FloatIntMap* map);
int32_t std__maps__FloatIntMap__pop(std__maps__FloatIntMap* map, float key);
std__maps__IntFloatMap* std__maps__IntFloatMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__IntFloatMap__clear(std__maps__IntFloatMap* map);
void std__maps__IntFloatMap__append(std__maps__IntFloatMap* map, std__arena__Arena* arena, int32_t key, float value);
void std__maps__IntFloatMap__add(std__maps__IntFloatMap* map, std__arena__Arena* arena, int32_t key, float value);
void std__maps__IntFloatMap__set(std__maps__IntFloatMap* map, std__arena__Arena* arena, int32_t key, float value);
float std__maps__IntFloatMap__get(std__maps__IntFloatMap* map, int32_t key);
bool std__maps__IntFloatMap__contains(std__maps__IntFloatMap* map, int32_t key);
int32_t std__maps__IntFloatMap__size(std__maps__IntFloatMap* map);
float std__maps__IntFloatMap__pop(std__maps__IntFloatMap* map, int32_t key);
std__maps__FloatFloatMap* std__maps__FloatFloatMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__FloatFloatMap__clear(std__maps__FloatFloatMap* map);
void std__maps__FloatFloatMap__append(std__maps__FloatFloatMap* map, std__arena__Arena* arena, float key, float value);
void std__maps__FloatFloatMap__add(std__maps__FloatFloatMap* map, std__arena__Arena* arena, float key, float value);
void std__maps__FloatFloatMap__set(std__maps__FloatFloatMap* map, std__arena__Arena* arena, float key, float value);
float std__maps__FloatFloatMap__get(std__maps__FloatFloatMap* map, float key);
bool std__maps__FloatFloatMap__contains(std__maps__FloatFloatMap* map, float key);
int32_t std__maps__FloatFloatMap__size(std__maps__FloatFloatMap* map);
float std__maps__FloatFloatMap__pop(std__maps__FloatFloatMap* map, float key);
std__maps__IntBoolMap* std__maps__IntBoolMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__IntBoolMap__clear(std__maps__IntBoolMap* map);
void std__maps__IntBoolMap__append(std__maps__IntBoolMap* map, std__arena__Arena* arena, int32_t key, bool value);
void std__maps__IntBoolMap__add(std__maps__IntBoolMap* map, std__arena__Arena* arena, int32_t key, bool value);
void std__maps__IntBoolMap__set(std__maps__IntBoolMap* map, std__arena__Arena* arena, int32_t key, bool value);
bool std__maps__IntBoolMap__get(std__maps__IntBoolMap* map, int32_t key);
bool std__maps__IntBoolMap__contains(std__maps__IntBoolMap* map, int32_t key);
int32_t std__maps__IntBoolMap__size(std__maps__IntBoolMap* map);
bool std__maps__IntBoolMap__pop(std__maps__IntBoolMap* map, int32_t key);
std__maps__BoolIntMap* std__maps__BoolIntMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__BoolIntMap__clear(std__maps__BoolIntMap* map);
void std__maps__BoolIntMap__append(std__maps__BoolIntMap* map, std__arena__Arena* arena, bool key, int32_t value);
void std__maps__BoolIntMap__add(std__maps__BoolIntMap* map, std__arena__Arena* arena, bool key, int32_t value);
void std__maps__BoolIntMap__set(std__maps__BoolIntMap* map, std__arena__Arena* arena, bool key, int32_t value);
int32_t std__maps__BoolIntMap__get(std__maps__BoolIntMap* map, bool key);
bool std__maps__BoolIntMap__contains(std__maps__BoolIntMap* map, bool key);
int32_t std__maps__BoolIntMap__size(std__maps__BoolIntMap* map);
int32_t std__maps__BoolIntMap__pop(std__maps__BoolIntMap* map, bool key);
std__maps__FloatBoolMap* std__maps__FloatBoolMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__FloatBoolMap__clear(std__maps__FloatBoolMap* map);
void std__maps__FloatBoolMap__append(std__maps__FloatBoolMap* map, std__arena__Arena* arena, float key, bool value);
void std__maps__FloatBoolMap__add(std__maps__FloatBoolMap* map, std__arena__Arena* arena, float key, bool value);
void std__maps__FloatBoolMap__set(std__maps__FloatBoolMap* map, std__arena__Arena* arena, float key, bool value);
bool std__maps__FloatBoolMap__get(std__maps__FloatBoolMap* map, float key);
bool std__maps__FloatBoolMap__contains(std__maps__FloatBoolMap* map, float key);
int32_t std__maps__FloatBoolMap__size(std__maps__FloatBoolMap* map);
bool std__maps__FloatBoolMap__pop(std__maps__FloatBoolMap* map, float key);
std__maps__BoolFloatMap* std__maps__BoolFloatMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__BoolFloatMap__clear(std__maps__BoolFloatMap* map);
void std__maps__BoolFloatMap__append(std__maps__BoolFloatMap* map, std__arena__Arena* arena, bool key, float value);
void std__maps__BoolFloatMap__add(std__maps__BoolFloatMap* map, std__arena__Arena* arena, bool key, float value);
void std__maps__BoolFloatMap__set(std__maps__BoolFloatMap* map, std__arena__Arena* arena, bool key, float value);
float std__maps__BoolFloatMap__get(std__maps__BoolFloatMap* map, bool key);
bool std__maps__BoolFloatMap__contains(std__maps__BoolFloatMap* map, bool key);
int32_t std__maps__BoolFloatMap__size(std__maps__BoolFloatMap* map);
float std__maps__BoolFloatMap__pop(std__maps__BoolFloatMap* map, bool key);
std__maps__BoolBoolMap* std__maps__BoolBoolMap__create(std__arena__Arena* arena, int32_t capacity);
void std__maps__BoolBoolMap__clear(std__maps__BoolBoolMap* map);
void std__maps__BoolBoolMap__append(std__maps__BoolBoolMap* map, std__arena__Arena* arena, bool key, bool value);
void std__maps__BoolBoolMap__add(std__maps__BoolBoolMap* map, std__arena__Arena* arena, bool key, bool value);
void std__maps__BoolBoolMap__set(std__maps__BoolBoolMap* map, std__arena__Arena* arena, bool key, bool value);
bool std__maps__BoolBoolMap__get(std__maps__BoolBoolMap* map, bool key);
bool std__maps__BoolBoolMap__contains(std__maps__BoolBoolMap* map, bool key);
int32_t std__maps__BoolBoolMap__size(std__maps__BoolBoolMap* map);
bool std__maps__BoolBoolMap__pop(std__maps__BoolBoolMap* map, bool key);
lexer__Token lexer__create_token(int32_t token_type, char* value);
lexer__Token lexer__create_token_with_line(int32_t token_type, char* value, int32_t line);
bool lexer__is_hex_digit(char ch);
bool lexer__is_whitespace(char ch);
bool lexer__is_ident_char(char ch);
bool lexer__check_boundary(std__string__string source, int32_t pos, int32_t source_len);
bool lexer__str_equals(std__string__string s1, char* s2, int32_t start, int32_t len, int32_t source_len);
__list_lexer__Token_t lexer__lex(std__string__string source);
void parser__initialize_all();
void parser__macros_add(std__string__string name, structs__MacroDef defn);
bool parser__macros_contains(std__string__string name);
structs__MacroDef parser__macros_get(std__string__string name);
bool parser__is_all_digits(std__string__string s);
std__string__string parser__expand_macros_in_expression(std__string__string expr);
void parser__register_variable(std__string__string var_name, bool is_mutable, int32_t line_num, std__string__string source_file);
void parser__register_for_mutation_tracking(std__string__string var_name);
void parser__register_for_usage_tracking(std__string__string var_name);
void parser__push_scope();
void parser__pop_scope();
void parser__clear_local_variables();
bool parser__is_variable_declared(std__string__string var_name);
bool parser__is_variable_mutable(std__string__string var_name);
void parser__mark_variable_mutated(std__string__string var_name);
void parser__mark_variable_used(std__string__string var_name);
void parser__scan_expression_for_usage(std__string__string expr);
bool parser__contains_c_call(std__string__string s);
void parser__scan_expression_for_addr(std__string__string expr);
void parser__scan_expression_for_c_calls(std__string__string expr);
void parser__scan_function_args_for_ref_params(std__string__string args_str);
void parser__check_null_usage(structs__ParserContext* ctx, std__string__string ident);
bool parser__has_function_call_in_expression(std__string__string expr);
std__string__string parser__extract_function_name(std__string__string expr);
bool parser__has_pointer_syntax(std__string__string type_str);
void parser__add_child_to_ast(structs__ASTNode* ast, structs__ASTNode child);
structs__ASTNode parser__parse(__list_lexer__Token_t* tokens, bool is_axec, bool check_entry_point, std__string__string current_module, std__string__string filename);
void parser__parse_top_level(structs__ParserContext* ctx, structs__ASTNode* ast);
void parser__skip_whitespace(structs__ParserContext* ctx);
lexer__Token parser__peek(structs__ParserContext* ctx);
int32_t parser__current_line(structs__ParserContext* ctx);
std__string__string parser__format_error(structs__ParserContext* ctx, std__string__string message);
lexer__Token parser__consume(structs__ParserContext* ctx);
bool parser__expect(structs__ParserContext* ctx, int32_t expected_type);
std__string__string parser__parse_type(structs__ParserContext* ctx);
int32_t parser__parse_ref_depth(structs__ParserContext* ctx);
structs__ASTNode parser__parse_function(structs__ParserContext* ctx);
structs__ASTNode parser__parse_statement_helper(structs__ParserContext* ctx, structs__Scope* scope);
void imports__reset_processed_modules();
void imports__register_model_name(std__string__string short_name, std__string__string prefixed_name);
std__string__string imports__lookup_model_name(std__string__string short_name);
void imports__register_imported_symbol(std__string__string symbol_name);
bool imports__is_symbol_imported(std__string__string symbol_name);
bool imports__has_imported_module(std__string__string name);
void imports__add_processed_module(std__string__string path);
bool imports__is_module_processed(std__string__string path);
std__string__string imports__get_module_prefix(std__string__string module_name);
std__string__string imports__get_dir_from_path(std__string__string path);
std__string__string imports__join_path(std__string__string base_dir, std__string__string rel);
std__string__string imports__make_module_path(std__string__string base_dir, std__string__string use_module);
void imports__append_child(structs__ASTNode* program, structs__ASTNode child);
void imports__prefix_function_node(structs__ASTNode* node, std__string__string module_prefix, std__maps__StringBoolMap* exported);
void imports__prefix_model_node(structs__ASTNode* node, std__string__string module_prefix);
void imports__prefix_enum_node(structs__ASTNode* node, std__string__string module_prefix);
std__maps__StringBoolMap imports__build_exported_name_map(structs__ASTNode* imported);
std__string__string imports__prefix_type_name(std__string__string type_name, std__string__string module_prefix, std__maps__StringBoolMap* exported);
void imports__prefix_types_in_node(structs__ASTNode* node, std__string__string module_prefix, std__maps__StringBoolMap* exported);
bool imports__check_symbol_exists_in_program(structs__ASTNode* program, std__string__string symbol_name);
void imports__merge_imported_module(structs__ASTNode* program, structs__ASTNode* imported, std__string__string use_module);
structs__ASTNode imports__process_imports(structs__ASTNode* ast, std__string__string base_dir, bool is_axec, std__string__string current_file, bool is_top_level, std__string__string module_name);
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
char* std__os__dirent_d_name(uintptr_t entry);
int32_t std__os__stat_is_dir(uintptr_t st);
#endif
#ifdef _WIN32
char* std__os__finddata_name(uintptr_t data);
int32_t std__os__finddata_is_dir(uintptr_t data);
#endif
#ifndef _WIN32
int32_t std__os__stat_is_reg(uintptr_t st);
#endif
#ifdef __APPLE__
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
char* std__os__dirent_d_name(uintptr_t entry);
int32_t std__os__stat_is_dir(uintptr_t st);
#endif
#ifdef _WIN32
char* std__os__finddata_name(uintptr_t data);
int32_t std__os__finddata_is_dir(uintptr_t data);
#endif
#ifndef _WIN32
int32_t std__os__stat_is_reg(uintptr_t st);
#endif
#ifdef __APPLE__
#endif
void renderer__set_source_file(std__string__string filename);
void renderer__set_emit_line_directives(bool v);
void renderer__renderer_add_prefix(std__string__string original, std__string__string prefixed);
bool renderer__has_external_header(std__string__string header_name);
std__string__string renderer__platform_macro_start(std__string__string platform_name);
static std__string__string renderer__emit_line_directive(int32_t line);
void renderer__initialize_renderer();
static bool renderer__is_builtin_type(std__string__string type_name);
std__string__string renderer__extract_base_type(std__string__string type_name);
static bool renderer__is_language_keyword(std__string__string name);
bool renderer__is_all_upper_or_underscore(std__string__string name);
static bool renderer__is_c_constant(std__string__string name);
static bool renderer__is_builtin_function(std__string__string name);
bool renderer__is_valid_symbol(std__string__string symbol_name);
void renderer__validate_type_imported(std__string__string type_name);
void renderer__register_function_signature(std__string__string func_name, __list_std__string_t* params, std__string__string ret_type, std__arena__Arena* arena);
std__string__string renderer__infer_expression_type(std__string__string expr);
void renderer__validate_function_call(std__string__string func_name, std__string__string args_str, int32_t depth);
void renderer__collect_function_signatures(structs__ASTNode* node, std__arena__Arena* arena, std__string__string prefix);
void renderer__collect_foreign_types(structs__ASTNode* node);
void renderer__build_function_signatures(structs__ASTNode* ast);
void renderer__collect_external_imports(structs__ASTNode* node, std__string__string current_platform, std__arena__Arena* arena);
std__string__string renderer__get_base_type_from_field(std__string__string field_type);
std__string__string renderer__normalize_numeric_dots(std__string__string s);
bool renderer__is_escaped_quote(std__string__string expr, int32_t pos);
std__string__string renderer__replace_keyword_outside_strings(std__string__string expr, std__string__string keyword, std__string__string replacement);
std__string__string renderer__replace_substr_outside_strings(std__string__string expr, std__string__string old_sub, std__string__string replacement);
std__string__string renderer__rewrite_pointer_member_accesses(std__string__string expr);
void renderer__register_function_prefix(std__string__string full_name);
void renderer__collect_function_prefixes(structs__ASTNode* node);
void renderer__build_function_prefixes(structs__ASTNode* ast);
std__string__string renderer__map_type(std__string__string axe_type);
static std__string__string renderer__canonical_model_c_name(std__string__string name);
std__string__string renderer__map_axe_type_to_c(std__string__string axe_type);
std__string__string renderer__sanitize_list_element_name(std__string__string c_elem);
std__string__string renderer__collapse_duplicate_segments(std__string__string s);
bool renderer__is_pointer_type(std__string__string type_str);
std__string__string renderer__extract_base_model_name(std__string__string type_str);
std__string__string renderer__lookup_field_type(std__string__string model_name, std__string__string field_name);
bool renderer__is_pointer_field(std__string__string model_name, std__string__string field_name);
std__string__string renderer__parse_ident_at(std__string__string expr, int32_t* pos);
void renderer__skip_ws_at(std__string__string expr, int32_t* pos);
std__string__string renderer__rewrite_ref_member_access(std__string__string expr);
std__string__string renderer__sanitize_c_identifier(std__string__string name);
std__string__string renderer__rewrite_generic_calls(std__string__string expr);
std__string__string renderer__rewrite_method_calls(std__string__string expr);
std__string__string renderer__rewrite_function_prefixes(std__string__string expr);
std__string__string renderer__rewrite_sizeof_types(std__string__string expr);
std__string__string renderer__rewrite_casts(std__string__string expr);
std__string__string renderer__rewrite_array_literals(std__string__string expr);
void renderer__add_list_element(std__string__string c_elem);
void renderer__scan_for_list_types(structs__ASTNode* node);
std__string__string renderer__format_model_field_type(std__string__string field_type);
static std__string__string renderer__process_parameter_type(std__string__string param_type);
std__string__string renderer__int_to_ascii(int32_t n);
std__string__string renderer__get_type_format_specifier(std__string__string var_type);
std__string__string renderer__lookup_expression_type(std__string__string expr);
std__string__string renderer__process_interpolated_string(std__string__string interp_content, bool return_struct);
bool renderer__is_token_char(char c);
bool renderer__is_ident_start(char c);
int32_t renderer__c_prefix_end_index(std__string__string s);
std__string__string renderer__collapse_duplicate_segments_once(std__string__string s);
std__string__string renderer__strip_all_c_prefixes(std__string__string s);
std__string__string renderer__rewrite_enum_member_refs(std__string__string s);
std__string__string renderer__rewrite_adr(std__string__string expr);
std__string__string renderer__rewrite_dereference(std__string__string expr);
std__string__string renderer__rewrite_len_calls(std__string__string expr);
std__string__string renderer__rewrite_function_calls(std__string__string expr);
std__string__string renderer__rewrite_global_scope_refs(std__string__string expr);
std__string__string renderer__rewrite_global_var_refs(std__string__string expr);
void renderer__check_variable_declared(std__string__string name);
std__string__string renderer__process_expression(std__string__string expr);
std__string__string renderer__generate_stack_trace_headers();
std__string__string renderer__generate_stack_trace_setup();
std__string__string renderer__generate_function_prototype(structs__ASTNode* ast);
std__string__string renderer__generate_global_decl(structs__ASTNode* ast);
std__string__string renderer__generate_c(structs__ASTNode* ast);
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
char* std__os__dirent_d_name(uintptr_t entry);
int32_t std__os__stat_is_dir(uintptr_t st);
#endif
#ifdef _WIN32
char* std__os__finddata_name(uintptr_t data);
int32_t std__os__finddata_is_dir(uintptr_t data);
#endif
#ifndef _WIN32
int32_t std__os__stat_is_reg(uintptr_t st);
#endif
#ifdef __APPLE__
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
char* std__os__dirent_d_name(uintptr_t entry);
int32_t std__os__stat_is_dir(uintptr_t st);
#endif
#ifdef _WIN32
char* std__os__finddata_name(uintptr_t data);
int32_t std__os__finddata_is_dir(uintptr_t data);
#endif
#ifndef _WIN32
int32_t std__os__stat_is_reg(uintptr_t st);
#endif
#ifdef __APPLE__
#endif

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define gstate__debug_print(x) _Generic((x), \
    std__string__string: gstate__debug_print_str, \
    char*: gstate__debug_print_raw, \
    int32_t: gstate__debug_print_int \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define gstate__debug_print(x) _Generic((x), \
    std__string__string: gstate__debug_print_str, \
    char*: gstate__debug_print_raw, \
    int32_t: gstate__debug_print_int \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define gstate__debug_print(x) _Generic((x), \
    std__string__string: gstate__debug_print_str, \
    char*: gstate__debug_print_raw, \
    int32_t: gstate__debug_print_int \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define std__io__println(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__println_chrptr, \
    int32_t: std__io__println_i32, \
    char: std__io__println_char, \
    float: std__io__println_f32, \
    double: std__io__println_f64, \
    int64_t: std__io__println_i64, \
    bool: std__io__println_bool \
    )(x)

#define std__io__print(x) _Generic((x), \
    std__string__string: std__io__print_str, \
    char*: std__io__print_chrptr, \
    int32_t: std__io__print_i32, \
    char: std__io__print_char, \
    float: std__io__print_f32, \
    double: std__io__print_f64, \
    int64_t: std__io__print_i64, \
    bool: std__io__print_bool \
    )(x)

#define gstate__debug_print(x) _Generic((x), \
    std__string__string: gstate__debug_print_str, \
    char*: gstate__debug_print_raw, \
    int32_t: gstate__debug_print_int \
    )(x)

bool std__algorithms__list_contains__T2_bool__T_BoolList(std__lists__BoolList lst, bool value) {
for (int32_t i = 0; i < lst.len; i ++) {
if (lst.data[ i ]== (bool)( value )) {
return true;
}
}
return false;
}

bool std__algorithms__list_contains__T2_float__T_FloatList(std__lists__FloatList lst, float value) {
for (int32_t i = 0; i < lst.len; i ++) {
if (lst.data[ i ]== (float)( value )) {
return true;
}
}
return false;
}

bool std__algorithms__list_contains__T2_string__T_StringList(std__lists__StringList lst, std__string__string value) {
for (int32_t i = 0; i < lst.len; i ++) {
if (std__string__compare ( lst.data[ i ], (std__string__string)( value ) ) == 0) {
return true;
}
}
return false;
}

bool std__algorithms__list_contains__T2_i32__T_IntList(std__lists__IntList lst, int32_t value) {
for (int32_t i = 0; i < lst.len; i ++) {
if (lst.data[ i ]== (int32_t)( value )) {
return true;
}
}
return false;
}

bool std__algorithms__strlst_contains(std__lists__StringList lst, std__string__string value) {
for (int32_t i = 0; i < lst.len; i ++) {
if (std__string__compare ( lst.data[ i ], value ) == 0) {
return true;
}
}
return false;
}

bool std__algorithms__strlst_contains_c(std__lists__StringList lst, char* value) {
for (int32_t i = 0; i < lst.len; i ++) {
if (std__string__equals_c ( lst.data[ i ], value )) {
return true;
}
}
return false;
}

bool std__algorithms__intlst_contains(std__lists__IntList lst, int32_t vlue) {
for (int32_t i = 0; i < lst.len; i ++) {
if (lst.data[ i ]== vlue) {
return true;
}
}
return false;
}

std__arena__Arena std__arena__Arena__create(uintptr_t size) {
std__arena__Arena arena = {0};
arena.buffer = malloc ( size * 100 );
if (arena.buffer== 0) {
std__errors__panic(std__errors__error__create(                     std__string__concat(std__string__str("Arena: failed to allocate "),                     std__string__i32_to_string((int32_t)(size * 100))).data                 ));
}
arena.capacity = size * 100;
arena.offset = 0;
return arena;
}

void std__arena__Arena__destroy(std__arena__Arena* arena) {
free((void*)(arena->buffer));
arena->buffer = 0;
arena->offset = 0;
arena->capacity = 0;
}

void* std__arena__Arena__alloc(std__arena__Arena* arena, uintptr_t size) {
void* result = nil;
if (( arena->offset+ size > arena->capacity)) {
std__string__string msg = std__string__str( "Arena out of memory! cap=" );
msg = std__string__concat ( msg , std__string__i32_to_string ( arena->capacity) );
msg = std__string__concat_c ( msg , " used=" );
msg = std__string__concat ( msg , std__string__i32_to_string ( arena->offset) );
msg = std__string__concat_c ( msg , " req=" );
msg = std__string__concat ( msg , std__string__i32_to_string ( (int32_t)( size ) ) );
msg = std__string__concat_c ( msg , "\n" );
std__errors__panic(std__errors__error__create(msg.data));
return nil;
}
result = (void*)( arena->buffer+ arena->offset);
arena->offset = arena->offset+ size;
arena->offset = ( arena->offset+ 7 ) & ~ 7;
return result;
}

void* std__arena__Arena__alloc_array(std__arena__Arena* arena, uintptr_t element_size, uintptr_t count) {
const uintptr_t total_size = element_size * count;
return std__arena__Arena__alloc( arena , total_size );
}

void std__arena__Arena__reset(std__arena__Arena* arena) {
arena->offset = 0;
memset((void*)(arena->buffer), 0, arena->capacity);
}

int32_t std__arena__Arena__used(std__arena__Arena* arena) {
int32_t result = 0;
result = arena->offset;
return result;
}

uintptr_t std__arena__Arena__remaining(std__arena__Arena* arena) {
uintptr_t result = 0;
result = ( arena->capacity) - ( arena->offset);
return result;
}

void std__io__print_char(char value) {
printf("%c", value);
}

void std__io__println_char(char value) {
printf("%c\n", value);
}

void std__io__print_chrptr(char* value) {
printf("%s", value);
}

void std__io__println_chrptr(char* value) {
printf("%s\n", value);
}

void std__io__print_str(std__string__string value) {
printf("%s", value.data);
}

void std__io__println_str(std__string__string value) {
printf("%s\n", value.data);
}

void std__io__print_f32(float value) {
printf("%.10f", value);
}

void std__io__println_f32(float value) {
printf("%.10f\n", value);
}

void std__io__println_f64(double value) {
printf("%.10f\n", value);
}

void std__io__print_f64(double value) {
printf("%.10f", value);
}

void std__io__println_i64(int64_t value) {
printf("%ld\n", value);
}

void std__io__print_i64(int64_t value) {
printf("%ld", value);
}

void std__io__print_i32(int32_t value) {
printf("%d", value);
}

void std__io__println_i32(int32_t value) {
printf("%d\n", value);
}

void std__io__print_bool(bool value) {
if (value) {
printf("true");
}
else {
printf("false");
}
}

void std__io__println_bool(bool value) {
if (value) {
printf("true\n");
}
else {
printf("false\n");
}
}

int32_t std__io__read_i32() {
int32_t value = 0;
scanf("%d", &value);
return value;
}

float std__io__read_f32() {
float value = 0.0;
scanf("%f", &value);
return value;
}

std__string__string std__io__read_str(std__arena__Arena arena) {
const uintptr_t buffer_size = 1024;
char* buffer = std__arena__Arena__alloc_array( &arena , sizeof(char) , buffer_size );
scanf("%1023s", buffer);
return std__string__str( buffer );
}

std__string__StringBuilder std__string__StringBuilder__init(uintptr_t initial_capacity) {
std__string__StringBuilder sb = {0};
sb.cap = initial_capacity;
if (sb.cap< 64) {
sb.cap = 64;
}
sb.data = malloc ( sb.cap);
sb.len = 0;
if (sb.data!= nil) {
sb.data[0] = '\0';
}
return sb;
}

void std__string__StringBuilder__ensure_capacity(std__string__StringBuilder* sb, uintptr_t additional) {
const uintptr_t needed = sb->len+ additional + 1;
if (needed <= sb->cap) {
return ;
}
uintptr_t new_cap = sb->cap;
while (1) {
if (new_cap >= needed) {
break;
}
new_cap = new_cap * 2;
}
const char* new_data = realloc ( sb->data, new_cap );
if (new_data != nil) {
sb->data = new_data;
sb->cap = new_cap;
}
}

void std__string__StringBuilder__append(std__string__StringBuilder* sb, std__string__string s) {
if (s.len== 0) {
return ;
}
std__string__StringBuilder__ensure_capacity(sb, s.len);
memcpy(sb->data+ sb->len, s.data, s.len);
sb->len = sb->len+ s.len;
sb->data[sb->len] = '\0';
}

void std__string__StringBuilder__append_c(std__string__StringBuilder* sb, char* s) {
const uintptr_t s_len = strlen ( s );
if (s_len == 0) {
return ;
}
std__string__StringBuilder__ensure_capacity(sb, s_len);
memcpy(sb->data+ sb->len, s, s_len);
sb->len = sb->len+ s_len;
sb->data[sb->len] = '\0';
}

void std__string__StringBuilder__append_char(std__string__StringBuilder* sb, char c) {
const uintptr_t needed = sb->len+ 2;
if (needed > sb->cap) {
uintptr_t new_cap = sb->cap;
while (1) {
if (new_cap >= needed) {
break;
}
new_cap = new_cap * 2;
}
const char* new_data = realloc ( sb->data, new_cap );
if (new_data != nil) {
sb->data = new_data;
sb->cap = new_cap;
}
}
sb->data[sb->len] = c;
sb->len = sb->len+ 1;
sb->data[sb->len] = '\0';
}

std__string__string std__string__StringBuilder__to_string(std__string__StringBuilder* sb) {
std__string__string result = {0};
result.data = malloc ( sb->len+ 1 );
if (result.data!= nil) {
memcpy(result.data, sb->data, sb->len+ 1);
result.len = sb->len;
result.cap = sb->len+ 1;
}
else {
result.data = nil;
result.len = 0;
result.cap = 0;
}
return result;
}

void std__string__StringBuilder__clear(std__string__StringBuilder* sb) {
sb->len = 0;
if (sb->data!= nil) {
sb->data[0] = '\0';
}
}

void std__string__StringBuilder__destroy(std__string__StringBuilder* sb) {
free(sb->data);
sb->data = nil;
sb->len = 0;
sb->cap = 0;
}

std__string__string std__string__string__create(char* data) {
std__string__string result = {0};
result.data = nil;
result.len = 0;
result.cap = 0;
const uintptr_t len = strlen ( data );
result.data = malloc ( len + 1 );
if (result.data!= nil) {
memcpy(result.data, data, len + 1);
result.len = len;
result.cap = len + 1;
}
return result;
}

std__string__string std__string__string__create_with_capacity(std__arena__Arena* arena, int32_t capacity) {
std__string__string result = std__string__str( "" );
result.data = nil;
result.len = 0;
result.cap = 0;
if (capacity > 0) {
result.data = (char*)( std__arena__Arena__alloc( arena , capacity + 1 ) );
if (result.data!= nil) {
result.data[0] = '\0';
result.len = 0;
result.cap = capacity + 1;
}
}
return result;
}

void std__string__string__destroy(std__string__string* s) {
free((void*)s->data);
s->data = nil;
s->len = 0;
s->cap = 0;
}

std__string__string std__string__replace_all(std__string__string s, std__string__string from, std__string__string dest) {
if (std__string__str_len ( from ) == 0) {
return std__string__substring_se( s , 0 , (int32_t)( std__string__str_len ( s ) ) );
}
std__string__StringBuilder sb = std__string__StringBuilder__init( s.len+ 64 );
int32_t i = 0;
const int32_t n = (int32_t)( std__string__str_len ( s ) );
const int32_t from_len = (int32_t)( std__string__str_len ( from ) );
while (1) {
if (i >= n) {
break;
}
int32_t j = 0;
bool match = true;
while (1) {
if (j >= from_len) {
break;
}
if (i + j >= n) {
match = false;
break;
}
const char ch_s = std__string__get_char( s , i + j );
const char ch_f = std__string__get_char( from , j );
if (ch_s != ch_f) {
match = false;
break;
}
j++;
}
if (match) {
std__string__StringBuilder__append(&sb, dest);
i += from_len;
}
else {
std__string__StringBuilder__append_char(&sb, std__string__get_char(s, i));
i++;
}
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string std__string__i32_to_string(int32_t value) {
char* buffer = malloc ( 12 );
sprintf(buffer, "%d", value);
return std__string__string__create( buffer );
}

uintptr_t std__string__str_len(std__string__string s) {
return s.len;
}

std__string__string std__string__to_title_case(std__string__string s) {
std__string__string result = {0};
result.data = nil;
result.len = 0;
result.cap = 0;
const uintptr_t len = s.len;
result.data = malloc ( len + 1 );
if (result.data!= nil) {
uintptr_t i = 0;
while (1) {
if (i >= len) {
break;
}
const int32_t ch = (int32_t)( s.data[ i ]);
if (i == 0 || isalpha( (int32_t)( s.data[ i - 1 ]) ) == 0) {
result.data[i] = (char)( toupper( ch ) );
}
else {
result.data[i] = (char)( tolower( ch ) );
}
i++;
}
result.data[len] = '\0';
result.len = len;
result.cap = len + 1;
}
return result;
}

std__string__string std__string__to_upper(std__string__string s) {
std__string__string result = {0};
result.data = nil;
result.len = 0;
result.cap = 0;
const uintptr_t len = s.len;
result.data = malloc ( len + 1 );
if (result.data!= nil) {
uintptr_t i = 0;
while (1) {
if (i >= len) {
break;
}
const int32_t ch = (int32_t)( s.data[ i ]);
result.data[i] = (char)( toupper( ch ) );
i++;
}
result.data[len] = '\0';
result.len = len;
result.cap = len + 1;
}
return result;
}

std__string__string std__string__to_lower(std__string__string s) {
std__string__string result = {0};
result.data = nil;
result.len = 0;
result.cap = 0;
const uintptr_t len = s.len;
result.data = malloc ( len + 1 );
if (result.data!= nil) {
uintptr_t i = 0;
while (1) {
if (i >= len) {
break;
}
const int32_t ch = (int32_t)( s.data[ i ]);
result.data[i] = (char)( tolower( ch ) );
i++;
}
result.data[len] = '\0';
result.len = len;
result.cap = len + 1;
}
return result;
}

void std__string__str_copy(std__string__string src, std__string__string desta) {
for (int32_t i = 0; i < src.len; i ++) {
desta.data[i] = src.data[ i ];
}
}

std__string__string std__string__concat_chr(std__string__string a, char b) {
uintptr_t new_len = a.len+ 1;
char* new_data = malloc ( new_len + 1 );
if (( new_data != NULL )) {
if (( a.len> 0 )) {
memcpy(new_data, a.data, a.len);
}
new_data[a.len] = b;
new_data[new_len] = '\0';
free(a.data);
a.data = new_data;
a.len = new_len;
a.cap = new_len + 1;
}
return a;
}

std__string__string std__string__substring_se(std__string__string s, int32_t start, int32_t end) {
std__string__string result = {0};
result.data = nil;
result.len = 0;
result.cap = 0;
if (start >= end || start < 0) {
return result;
}
const int32_t s_len = (int32_t)( s.len);
int32_t actual_end = end;
if (actual_end > s_len) {
actual_end = s_len;
}
if (start >= actual_end) {
return result;
}
const uintptr_t len = (uintptr_t)( actual_end - start );
result.data = malloc ( len + 1 );
if (result.data!= nil) {
memcpy(result.data, s.data+ start, len);
result.data[len] = '\0';
result.len = len;
result.cap = len + 1;
}
return result;
}

char* std__string__substring_scse(std__string__string s, int32_t start, int32_t end) {
int32_t len = end - start;
char* result = malloc ( len + 1 );
if (( result != nil )) {
memcpy(result, s.data+ start, len);
result[len] = '\0';
}
return result;
}

char* std__string__substring_cse(char* s, int32_t start, int32_t end) {
int32_t len = end - start;
char* result = malloc ( len + 1 );
if (( result != nil )) {
memcpy(result, s + start, len);
result[len] = '\0';
}
return result;
}

bool std__string__equals_c(std__string__string a, char* b) {
int32_t result = 0;
result = strcmp ( (char*)( a.data) , (char*)( b ) );
return result == 0;
}

int32_t std__string__compare(std__string__string a, std__string__string b) {
uintptr_t len = 0;
if (a.len< b.len) {
len = a.len;
}
else {
len = b.len;
}
for (int32_t i = 0; i < len; i ++) {
if (a.data[ i ]< b.data[ i ]) {
return - 1;
}
if (a.data[ i ]> b.data[ i ]) {
return 1;
}
}
if (a.len< b.len) {
return - 1;
}
if (a.len> b.len) {
return 1;
}
return 0;
}

bool std__string_equals(std__string__string a, std__string__string b) {
return std__string__compare( a , b ) == 0;
}

std__string__string std__string__concat_c(std__string__string original, char* addon) {
std__string__string result = std__string__str( "" );
result.data = nil;
result.len = 0;
result.cap = 0;
const uintptr_t addon_len = strlen ( addon );
const uintptr_t new_len = original.len+ addon_len;
result.data = malloc ( new_len + 1 );
if (result.data!= nil) {
if (original.len> 0) {
memcpy(result.data, original.data, original.len);
}
if (addon_len > 0) {
memcpy(result.data+ original.len, addon, addon_len);
}
result.data[new_len] = '\0';
result.len = new_len;
result.cap = new_len + 1;
}
return result;
}

std__string__string std__string__concat(std__string__string dest, std__string__string src) {
std__string__string result = {0};
result.data = nil;
result.len = 0;
result.cap = 0;
const uintptr_t new_len = dest.len+ src.len;
result.data = malloc ( new_len + 1 );
if (result.data!= nil) {
if (dest.len> 0) {
memcpy(result.data, dest.data, dest.len);
}
if (src.len> 0) {
memcpy(result.data+ dest.len, src.data, src.len);
}
result.data[new_len] = '\0';
result.len = new_len;
result.cap = new_len + 1;
}
return result;
}

char* std__string__first_occurrence(std__string__string s, int32_t c) {
char* result = nil;
result = strchr ( s.data, c );
return result;
}

char* std__string__substring(std__string__string haystack, std__string__string needle) {
char* result = nil;
result = strstr ( haystack.data, needle.data);
return result;
}

bool std__string__str_contains(std__string__string s, std__string__string substr) {
return std__string__substring( s , substr ) != 0;
}

bool std__string__str_contains_c(std__string__string s, char* substr) {
return std__string__substring( s , std__string__str ( substr ) ) != 0;
}

int32_t std__string__str_to_int(std__string__string s) {
int32_t result = 0;
result = atoi ( s.data);
return result;
}

int64_t std__string__str_to_long(char* s) {
int64_t result = 0;
result = atol ( s );
return result;
}

int32_t std__string__is_alpha(int32_t c) {
int32_t result = 0;
result = isalpha ( c );
return result;
}

int32_t std__string__is_digit(int32_t c) {
int32_t result = 0;
result = isdigit ( c );
return result;
}

int32_t std__string__is_alphanum(int32_t c) {
int32_t result = 0;
result = isalnum ( c );
return result;
}

char* std__string__to_upper_chrptr(char* s) {
char* result = nil;
const uintptr_t len = strlen ( s );
result = malloc ( len + 1 );
if (result != nil) {
strcpy(result, s);
uintptr_t i = 0;
while (1) {
if (i >= len) {
break;
}
const int32_t ch = (int32_t)( result [ i ] );
result[i] = (char)( toupper( ch ) );
i++;
}
}
return result;
}

char* std__string__to_lower_chrptr(char* s) {
char* result = nil;
const uintptr_t len = strlen ( s );
result = malloc ( len + 1 );
if (result != nil) {
strcpy(result, s);
uintptr_t i = 0;
while (1) {
if (i >= len) {
break;
}
const int32_t ch = (int32_t)( result [ i ] );
result[i] = (char)( tolower( ch ) );
i++;
}
}
return result;
}

int32_t std__string__to_upper_chr(int32_t c) {
int32_t result = 0;
result = toupper ( c );
return result;
}

int32_t std__string__to_lower_chr(int32_t c) {
int32_t result = 0;
result = tolower ( c );
return result;
}

char* std__string__str_dup(char* s) {
char* result = nil;
const uintptr_t len = strlen ( s );
result = malloc ( len + 1 );
if (result != nil) {
strcpy(result, s);
}
return result;
}

int32_t std__string__str_ncmp(char* s1, char* s2, int32_t n) {
int32_t result = 0;
result = strncmp ( s1 , s2 , (uintptr_t)( n ) );
return result;
}

char* std__string__str_ncopy(char* dest, char* src, int32_t n) {
char* result = nil;
result = strncpy ( dest , src , (uintptr_t)( n ) );
return result;
}

char* std__string__int_to_str(int32_t value, char* buffer) {
sprintf(buffer, "%d", value);
return buffer;
}

char* std__string__long_to_str(int64_t value, char* buffer) {
sprintf(buffer, "%ld", value);
return buffer;
}

char* std__string__float_to_str(float value, char* buffer) {
sprintf(buffer, "%f", value);
return buffer;
}

char* std__string__double_to_str(double value, char* buffer) {
sprintf(buffer, "%lf", value);
return buffer;
}

char std__string__get_char(std__string__string s, int32_t pos) {
return s.data[ pos ];
}

int32_t std__string__find_char_from(std__string__string s, char c, uintptr_t start) {
if (start >= s.len) {
return - 1;
}
uintptr_t i = start;
while (1) {
if (i >= s.len) {
break;
}
if (s.data[ i ]== c) {
return (int32_t)( i );
}
i++;
}
return - 1;
}

int32_t std__string__find_last_char(std__string__string s, char c) {
if (s.len== 0) {
return - 1;
}
uintptr_t i = s.len- 1;
while (1) {
if (s.data[ i ]== c) {
return (int32_t)( i );
}
if (i == 0) {
break;
}
i--;
}
return - 1;
}

int32_t std__string__find_substr(std__string__string s, std__string__string substr) {
if (substr.len== 0) {
return 0;
}
if (substr.len> s.len) {
return - 1;
}
uintptr_t i = 0;
while (1) {
if (i + substr.len> s.len) {
break;
}
uintptr_t j = 0;
bool match_found = true;
while (1) {
if (j >= substr.len) {
break;
}
if (s.data[ i + j ]!= substr.data[ j ]) {
match_found = false;
break;
}
j++;
}
if (match_found) {
return (int32_t)( i );
}
i++;
}
return - 1;
}

std__string__string std__string__substr(std__string__string s, int32_t start, int32_t length) {
std__string__string result = {0};
result.data = nil;
result.len = 0;
result.cap = 0;
if (start >= s.len|| length == 0) {
return result;
}
const uintptr_t max_len = s.len- start;
uintptr_t copy_len = length;
if (copy_len > max_len) {
copy_len = max_len;
}
result.data = malloc ( copy_len + 1 );
if (result.data== nil) {
return result;
}
memcpy(result.data, s.data+ start, copy_len);
result.data[copy_len] = '\0';
result.len = copy_len;
result.cap = copy_len + 1;
return result;
}

bool std__string__has_prefix(std__string__string s, std__string__string prefix) {
if (prefix.len== 0) {
return true;
}
if (prefix.len> s.len) {
return false;
}
uintptr_t i = 0;
while (1) {
if (i >= prefix.len) {
break;
}
if (s.data[ i ]!= prefix.data[ i ]) {
return false;
}
i = i + 1;
}
return true;
}

bool std__string__has_suffix(std__string__string s, std__string__string suffix) {
if (suffix.len== 0) {
return true;
}
if (suffix.len> s.len) {
return false;
}
uintptr_t i = 0;
const uintptr_t start = s.len- suffix.len;
while (1) {
if (i >= suffix.len) {
break;
}
if (s.data[ start + i ]!= suffix.data[ i ]) {
return false;
}
i = i + 1;
}
return true;
}

std__string__string std__string__trim_prefix(std__string__string s, std__string__string prefix) {
if (prefix.len== 0 || prefix.len> s.len) {
return s;
}
uintptr_t i = 0;
while (1) {
if (i >= prefix.len) {
break;
}
if (s.data[ i ]!= prefix.data[ i ]) {
return s;
}
i = i + 1;
}
return std__string__substr( s , prefix.len, s.len- prefix.len);
}

std__string__string std__string__trim_suffix(std__string__string s, std__string__string suffix) {
if (suffix.len== 0 || suffix.len> s.len) {
return s;
}
uintptr_t i = 0;
const uintptr_t start = s.len- suffix.len;
while (1) {
if (i >= suffix.len) {
break;
}
if (s.data[ start + i ]!= suffix.data[ i ]) {
return s;
}
i = i + 1;
}
return std__string__substr( s , 0 , s.len- suffix.len);
}

std__string__string std__string__lstrip(std__string__string s) {
if (s.len== 0) {
return s;
}
uintptr_t start = 0;
while (1) {
if (start >= s.len) {
break;
}
const char ch = s.data[ start ];
if (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n') {
start++;
}
else {
break;
}
}
if (start >= s.len) {
return std__string__string__create( "" );
}
return std__string__substr( s , (int32_t)( start ) , s.len- start );
}

std__string__string std__string__rstrip(std__string__string s) {
if (s.len== 0) {
return s;
}
uintptr_t end = s.len;
while (1) {
if (end == 0) {
break;
}
const char ch = s.data[ end - 1 ];
if (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n') {
end--;
}
else {
break;
}
}
if (end == 0) {
return std__string__string__create( "" );
}
return std__string__substr( s , 0 , (int32_t)( end ) );
}

std__string__string std__string__strip(std__string__string s) {
if (s.len== 0) {
return s;
}
uintptr_t start = 0;
while (1) {
if (start >= s.len) {
break;
}
const char ch = s.data[ start ];
if (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n') {
start++;
}
else {
break;
}
}
if (start >= s.len) {
return std__string__string__create( "" );
}
uintptr_t end = s.len;
while (1) {
if (end == 0) {
break;
}
const char ch = s.data[ end - 1 ];
if (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n') {
end--;
}
else {
break;
}
}
return std__string__substr( s , (int32_t)( start ) , end - start );
}

std__string__string std__string__str(char* data) {
return std__string__string__create( data );
}

bool std__lists__int_eq(int32_t a, int32_t b) {
return a == b;
}

bool std__lists__long_eq(int64_t a, int64_t b) {
return a == b;
}

bool std__lists__float_eq(float a, float b) {
return a == b;
}

bool std__lists__double_eq(double a, double b) {
return a == b;
}

bool std__lists__char_eq(char a, char b) {
return a == b;
}

bool std__lists__bool_eq(bool a, bool b) {
return a == b;
}

std__lists__IntList* std__lists__IntList__create(std__arena__Arena* arena, uintptr_t capacity) {
std__lists__IntList* lst = {0};
lst = std__arena__Arena__alloc( arena , sizeof(std__lists__IntList) );
lst->data = std__arena__Arena__alloc_array( arena , sizeof(int32_t) , capacity );
if (lst == nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list header"));
}
if (lst->data== nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list data"));
}
lst->len = 0;
lst->cap = capacity;
return lst;
}

void std__lists__IntList__push(std__lists__IntList* lst, std__arena__Arena* arena, int32_t value) {
if (lst->len>= lst->cap) {
const uintptr_t new_cap = lst->cap* 2;
int32_t* new_data = {0};
new_data = std__arena__Arena__alloc_array( arena , sizeof(int32_t) , new_cap );
for (int32_t i = 0; i < lst->len; i ++) {
memcpy(&(new_data[i]), &(lst->data[i]), sizeof(int32_t));
}
lst->data = new_data;
lst->cap = new_cap;
}
lst->data[lst->len] = value;
lst->len = lst->len+ 1;
}

int32_t std__lists__IntList__get(std__lists__IntList* lst, uintptr_t index) {
if (index < 0 || index >= lst->len) {
std__errors__panic(std__errors__error__create("Index out of bounds for list."));
return 0;
}
return lst->data[ index ];
}

void std__lists__IntList__clear(std__lists__IntList* lst) {
lst->len = 0;
}

bool std__lists__IntList__contains(std__lists__IntList* lst, int32_t value) {
for (int32_t i = 0; i < lst->len; i ++) {
if (std__lists__int_eq ( lst->data[ i ], value )) {
return true;
}
}
return false;
}

void std__lists__IntList__print_all(std__lists__IntList* lst) {
for (int32_t i = 0; i < lst->len; i ++) {
std__io__print_i32(lst->data[i]);
std__io__print(" ");
}
std__io__println("");
}

std__lists__FloatList* std__lists__FloatList__create(std__arena__Arena* arena, uintptr_t capacity) {
std__lists__FloatList* lst = {0};
lst = std__arena__Arena__alloc( arena , sizeof(std__lists__FloatList) );
lst->data = std__arena__Arena__alloc_array( arena , sizeof(float) , capacity );
if (lst == nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list header"));
}
if (lst->data== nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list data"));
}
lst->len = 0;
lst->cap = capacity;
return lst;
}

void std__lists__FloatList__push(std__lists__FloatList* lst, std__arena__Arena* arena, float value) {
if (lst->len>= lst->cap) {
const uintptr_t new_cap = lst->cap* 2;
float* new_data = {0};
new_data = std__arena__Arena__alloc_array( arena , sizeof(float) , new_cap );
for (int32_t i = 0; i < lst->len; i ++) {
memcpy(&(new_data[i]), &(lst->data[i]), sizeof(float));
}
lst->data = new_data;
lst->cap = new_cap;
}
lst->data[lst->len] = value;
lst->len = lst->len+ 1;
}

float std__lists__FloatList__get(std__lists__FloatList* lst, uintptr_t index) {
if (index < 0 || index >= lst->len) {
std__errors__panic(std__errors__error__create("Index out of bounds for list."));
return 0.0;
}
return lst->data[ index ];
}

void std__lists__FloatList__clear(std__lists__FloatList* lst) {
lst->len = 0;
}

bool std__lists__FloatList__contains(std__lists__FloatList* lst, float value) {
for (int32_t i = 0; i < lst->len; i ++) {
if (std__lists__float_eq ( lst->data[ i ], value )) {
return true;
}
}
return false;
}

void std__lists__FloatList__print_all(std__lists__FloatList* lst) {
for (int32_t i = 0; i < lst->len; i ++) {
std__io__print_i32(lst->data[i]);
std__io__print(" ");
}
std__io__println("");
}

std__lists__CharList* std__lists__CharList__create(std__arena__Arena* arena, uintptr_t capacity) {
std__lists__CharList* lst = {0};
lst = std__arena__Arena__alloc( arena , sizeof(std__lists__CharList) );
lst->data = std__arena__Arena__alloc_array( arena , sizeof(char) , capacity );
if (lst == nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list header"));
}
if (lst->data== nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list data"));
}
lst->len = 0;
lst->cap = capacity;
return lst;
}

void std__lists__CharList__push(std__lists__CharList* lst, std__arena__Arena* arena, char value) {
if (lst->len>= lst->cap) {
const uintptr_t new_cap = lst->cap* 2;
char* new_data = {0};
new_data = std__arena__Arena__alloc_array( arena , sizeof(char) , new_cap );
for (int32_t i = 0; i < lst->len; i ++) {
memcpy(&(new_data[i]), &(lst->data[i]), sizeof(char));
}
lst->data = new_data;
lst->cap = new_cap;
}
lst->data[lst->len] = value;
lst->len = lst->len+ 1;
}

char std__lists__CharList__get(std__lists__CharList* lst, uintptr_t index) {
if (index < 0 || index >= lst->len) {
std__errors__panic(std__errors__error__create("Index out of bounds for list."));
return "";
}
return lst->data[ index ];
}

void std__lists__CharList__clear(std__lists__CharList* lst) {
lst->len = 0;
}

bool std__lists__CharList__contains(std__lists__CharList* lst, char value) {
for (int32_t i = 0; i < lst->len; i ++) {
if (std__lists__char_eq ( lst->data[ i ], value )) {
return true;
}
}
return false;
}

void std__lists__CharList__print_all(std__lists__CharList* lst) {
for (int32_t i = 0; i < lst->len; i ++) {
std__io__print_char(lst->data[i]);
std__io__print(" ");
}
std__io__println("");
}

std__lists__LongList* std__lists__LongList__create(std__arena__Arena* arena, uintptr_t capacity) {
std__lists__LongList* lst = {0};
lst = std__arena__Arena__alloc( arena , sizeof(std__lists__LongList) );
lst->data = std__arena__Arena__alloc_array( arena , sizeof(int64_t) , capacity );
if (lst == nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list header"));
}
if (lst->data== nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list data"));
}
lst->len = 0;
lst->cap = capacity;
return lst;
}

void std__lists__LongList__push(std__lists__LongList* lst, std__arena__Arena* arena, int64_t value) {
if (lst->len>= lst->cap) {
const uintptr_t new_cap = lst->cap* 2;
int64_t* new_data = {0};
new_data = std__arena__Arena__alloc_array( arena , sizeof(int64_t) , new_cap );
for (int32_t i = 0; i < lst->len; i ++) {
memcpy(&(new_data[i]), &(lst->data[i]), sizeof(int64_t));
}
lst->data = new_data;
lst->cap = new_cap;
}
lst->data[lst->len] = value;
lst->len = lst->len+ 1;
}

int64_t std__lists__LongList__get(std__lists__LongList* lst, uintptr_t index) {
if (index < 0 || index >= lst->len) {
std__errors__panic(std__errors__error__create("Index out of bounds for list."));
return 0;
}
return lst->data[ index ];
}

void std__lists__LongList__clear(std__lists__LongList* lst) {
lst->len = 0;
}

bool std__lists__LongList__contains(std__lists__LongList* lst, int64_t value) {
for (int32_t i = 0; i < lst->len; i ++) {
if (std__lists__long_eq ( lst->data[ i ], value )) {
return true;
}
}
return false;
}

void std__lists__LongList__print_all(std__lists__LongList* lst) {
for (int32_t i = 0; i < lst->len; i ++) {
std__io__print_i32(lst->data[i]);
std__io__print(" ");
}
std__io__println("");
}

std__lists__DoubleList* std__lists__DoubleList__create(std__arena__Arena* arena, uintptr_t capacity) {
std__lists__DoubleList* lst = {0};
lst = std__arena__Arena__alloc( arena , sizeof(std__lists__DoubleList) );
lst->data = std__arena__Arena__alloc_array( arena , sizeof(double) , capacity );
if (lst == nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list header"));
}
if (lst->data== nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list data"));
}
lst->len = 0;
lst->cap = capacity;
return lst;
}

void std__lists__DoubleList__push(std__lists__DoubleList* lst, std__arena__Arena* arena, double value) {
if (lst->len>= lst->cap) {
const uintptr_t new_cap = lst->cap* 2;
double* new_data = {0};
new_data = std__arena__Arena__alloc_array( arena , sizeof(double) , new_cap );
for (int32_t i = 0; i < lst->len; i ++) {
memcpy(&(new_data[i]), &(lst->data[i]), sizeof(double));
}
lst->data = new_data;
lst->cap = new_cap;
}
lst->data[lst->len] = value;
lst->len = lst->len+ 1;
}

double std__lists__DoubleList__get(std__lists__DoubleList* lst, uintptr_t index) {
if (index < 0 || index >= lst->len) {
std__errors__panic(std__errors__error__create("Index out of bounds for list."));
return 0.0;
}
return lst->data[ index ];
}

void std__lists__DoubleList__clear(std__lists__DoubleList* lst) {
lst->len = 0;
}

bool std__lists__DoubleList__contains(std__lists__DoubleList* lst, double value) {
for (int32_t i = 0; i < lst->len; i ++) {
if (std__lists__double_eq ( lst->data[ i ], value )) {
return true;
}
}
return false;
}

void std__lists__DoubleList__print_all(std__lists__DoubleList* lst) {
for (int32_t i = 0; i < lst->len; i ++) {
std__io__print_i32(lst->data[i]);
std__io__print(" ");
}
std__io__println("");
}

std__lists__StringList* std__lists__StringList__create(std__arena__Arena* arena, uintptr_t capacity) {
std__lists__StringList* lst = {0};
lst = std__arena__Arena__alloc( arena , sizeof(std__lists__StringList) );
lst->data = std__arena__Arena__alloc_array( arena , sizeof(std__string__string) , capacity );
if (lst == nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list header"));
}
if (lst->data== nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list data"));
}
lst->len = 0;
lst->cap = capacity;
return lst;
}

void std__lists__StringList__push(std__lists__StringList* lst, std__arena__Arena* arena, std__string__string value) {
if (lst->len>= lst->cap) {
const uintptr_t new_cap = lst->cap* 2;
std__string__string* new_data = {0};
new_data = std__arena__Arena__alloc_array( arena , sizeof(std__string__string) , new_cap );
for (int32_t i = 0; i < lst->len; i ++) {
memcpy(&(new_data[i]), &(lst->data[i]), sizeof(std__string__string));
}
lst->data = new_data;
lst->cap = new_cap;
}
lst->data[lst->len] = value;
lst->len = lst->len+ 1;
}

std__string__string std__lists__StringList__get(std__lists__StringList* lst, uintptr_t index) {
if (index < 0 || index >= lst->len) {
std__errors__panic(std__errors__error__create("Index out of bounds for list."));
return std__string__string__create("");
}
return lst->data[ index ];
}

void std__lists__StringList__clear(std__lists__StringList* lst) {
lst->len = 0;
}

bool std__lists__StringList__contains(std__lists__StringList* lst, std__string__string value) {
for (int32_t i = 0; i < lst->len; i ++) {
if (std__string_equals ( lst->data[ i ], value )) {
return true;
}
}
return false;
}

void std__lists__StringList__print_all(std__lists__StringList* lst) {
for (int32_t i = 0; i < lst->len; i ++) {
std__io__print_str(lst->data[i]);
std__io__print(" ");
}
std__io__println("");
}

std__lists__BoolList* std__lists__BoolList__create(std__arena__Arena* arena, uintptr_t capacity) {
std__lists__BoolList* lst = {0};
lst = std__arena__Arena__alloc( arena , sizeof(std__lists__BoolList) );
lst->data = std__arena__Arena__alloc_array( arena , sizeof(bool) , capacity );
if (lst == nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list header"));
}
if (lst->data== nil) {
std__errors__panic(std__errors__error__create("List: failed to allocate list data"));
}
lst->len = 0;
lst->cap = capacity;
return lst;
}

void std__lists__BoolList__push(std__lists__BoolList* lst, std__arena__Arena* arena, bool value) {
if (lst->len>= lst->cap) {
const uintptr_t new_cap = lst->cap* 2;
bool* new_data = {0};
new_data = std__arena__Arena__alloc_array( arena , sizeof(bool) , new_cap );
for (int32_t i = 0; i < lst->len; i ++) {
memcpy(&(new_data[i]), &(lst->data[i]), sizeof(bool));
}
lst->data = new_data;
lst->cap = new_cap;
}
lst->data[lst->len] = value;
lst->len = lst->len+ 1;
}

bool std__lists__BoolList__get(std__lists__BoolList* lst, uintptr_t index) {
if (index < 0 || index >= lst->len) {
std__errors__panic(std__errors__error__create("Index out of bounds for list."));
return false;
}
return lst->data[ index ];
}

void std__lists__BoolList__clear(std__lists__BoolList* lst) {
lst->len = 0;
}

bool std__lists__BoolList__contains(std__lists__BoolList* lst, bool value) {
for (int32_t i = 0; i < lst->len; i ++) {
if (std__lists__bool_eq ( lst->data[ i ], value )) {
return true;
}
}
return false;
}

void std__lists__BoolList__print_all(std__lists__BoolList* lst) {
for (int32_t i = 0; i < lst->len; i ++) {
std__io__print_i32(lst->data[i]);
std__io__print(" ");
}
std__io__println("");
}

std__errors__error std__errors__error__create(char* msg) {
return (std__errors__error){.msg = std__string__string__create( msg )};
}

void std__errors__error__print_self(std__errors__error err) {
std__io__print(err.msg);
}

void std__errors__panic(std__errors__error err) {
std__io__print("\nerror: ");
std__errors__error__print_self(err);
exit(1);
}

void std__errors__enforce(bool condition, std__errors__error err) {
if (! condition) {
std__errors__panic(err);
}
}

void std__errors__enforce_raw(bool condition, char* msg) {
if (! condition) {
std__errors__panic(std__errors__error__create(msg));
}
}

std__errors__error std__errors__test_error() {
return (std__errors__error){.msg = std__string__string__create( "Some bad thing happened" )};
}

int32_t std__os__exec_from_string(std__string__string cmd) {
int32_t result = 0;
result = system ( cmd.data);
return result;
}

int32_t std__os__exec(char* cmd) {
int32_t result = 0;
result = system ( cmd );
return result;
}

#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
std__os__ExecResult std__os__exec_capture(std__string__string cmd) {
std__os__ExecResult result = {0};
result.exit_code = - 1;
result.output = std__string__str ( "" );
char full_cmd[4096] = {0};
snprintf(full_cmd, 4096, "%s 2>&1", cmd.data);
uintptr_t pipe = 0;
#ifdef _WIN32
pipe = _popen ( full_cmd , "r" );
#endif
#ifndef _WIN32
pipe = popen ( full_cmd , "r" );
#endif
if (pipe == 0) {
return result;
}
uintptr_t capacity = 4096;
uintptr_t output_buf = malloc ( capacity );
if (output_buf == 0) {
#ifdef _WIN32
_pclose(pipe);
#endif
#ifndef _WIN32
pclose(pipe);
#endif
return result;
}
uintptr_t total_len = 0;
char buffer[1024] = {0};
while (1) {
const char* read_result = fgets ( buffer , 1024 , pipe );
if (read_result == nil) {
break;
}
const uintptr_t len = strlen ( buffer );
if (total_len + len + 1 > capacity) {
capacity = capacity * 2;
const uintptr_t new_buf = realloc ( output_buf , capacity );
if (new_buf == 0) {
free(output_buf);
#ifdef _WIN32
_pclose(pipe);
#endif
#ifndef _WIN32
pclose(pipe);
#endif
return result;
}
output_buf = new_buf;
}
const char* dest = output_buf + total_len;
strcpy(dest, buffer);
total_len = total_len + len;
}
#ifdef _WIN32
result.exit_code = _pclose ( pipe );
#endif
#ifndef _WIN32
const int32_t status = pclose ( pipe );
result.exit_code = WEXITSTATUS ( status );
#endif
result.output.data = output_buf;
result.output.len = total_len;
return result;
}

void std__os__quit(int32_t code) {
exit(code);
}

bool std__os__file_exists(std__string__string path) {
bool out = false;
const FILE* f = fopen ( path.data, "r" );
if (f != nil) {
fclose(f);
out = true;
}
return out;
}

std__string__string std__os__read_file(std__string__string path) {
FILE* f = fopen ( path.data, "rb" );
if (( ! f )) {
std__errors__panic(std__errors__error__create("Failed to open file"));
}
fseek(f, 0, SEEK_END);
const uintptr_t size = ftell ( f );
fseek(f, 0, SEEK_SET);
char* buf = (char*)( malloc( size + 1 ) );
fread(buf, 1, size, f);
buf[size] = '\0';
fclose(f);
return std__string__string__create( buf );
}

bool std__os__write_file(std__string__string path, std__string__string contents) {
FILE* f = fopen ( path.data, "wb" );
if (! f) {
return false;
}
fwrite(contents.data, 1, contents.len, f);
fclose(f);
return true;
}

bool std__os__is_directory(std__string__string path) {
bool out = false;
#ifndef _WIN32
struct stat sb = {0};
if (stat ( path.data, &sb ) == 0) {
out = S_ISDIR ( sb.st_mode);
}
#endif
#ifdef _WIN32
struct _stat sb = {0};
if (_stat ( path.data, &sb ) == 0) {
out = ( sb.st_mode& _S_IFDIR ) != 0;
}
#endif
return out;
}

bool std__os__is_file(std__string__string path) {
bool out = false;
#ifndef _WIN32
struct stat sb = {0};
if (stat ( path.data, &sb ) == 0) {
out = S_ISREG ( sb.st_mode);
}
#endif
#ifdef _WIN32
struct _stat sb = {0};
if (_stat ( path.data, &sb ) == 0) {
out = ( sb.st_mode& _S_IFREG ) != 0;
}
#endif
return out;
}

bool std__os__is_symbolic_link(std__string__string path) {
bool out = false;
#ifndef _WIN32
struct stat sb = {0};
if (lstat ( path.data, &sb ) == 0) {
out = S_ISLNK ( sb.st_mode);
}
#endif
#ifdef _WIN32
return false;
#endif
return out;
}

bool std__os__delete_file(std__string__string path) {
bool ok = false;
if (remove ( path.data) == 0) {
ok = true;
}
return ok;
}

bool std__os__rm_dir(std__string__string path) {
bool ok = false;
if (rmdir ( path.data) == 0) {
ok = true;
}
return ok;
}

#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
char* std__os__dirent_d_name(uintptr_t entry) {
const dirent* d = entry;
return d->d_name;
}

int32_t std__os__stat_is_dir(uintptr_t st) {
const struct stat* sb = (struct stat*)( st );
return S_ISDIR ( sb->st_mode);
}

#endif
#ifdef _WIN32
char* std__os__finddata_name(uintptr_t data) {
const _finddata_t* info = data;
return info->name;
}

int32_t std__os__finddata_is_dir(uintptr_t data) {
const _finddata_t* info = data;
return ( info->attrib& _A_SUBDIR ) != 0;
}

#endif
bool std__os__rm_dir_recursive(std__string__string path) {
bool ok = true;
#ifndef _WIN32
const uintptr_t d = opendir ( path.data);
const uintptr_t path_len = strlen ( path.data);
int32_t r = 0;
if (d != 0) {
while (1) {
const uintptr_t p = readdir ( d );
if (p == 0) {
break;
}
const char* name = std__os__dirent_d_name( p );
if (strcmp ( name , "." ) == 0) {
continue;
}
if (strcmp ( name , ".." ) == 0) {
continue;
}
const uintptr_t len = path_len + strlen ( name ) + 2;
const uintptr_t buf = malloc ( len );
if (buf == 0) {
r = - 1;
break;
}
snprintf(buf, len, "%s/%s", path.data, name);
const uintptr_t statbuf = malloc ( 256 );
if (stat ( buf , statbuf ) == 0) {
if (std__os__stat_is_dir ( statbuf ) != 0) {
const std__string__string sub_path = std__string__string__create( buf );
if (! std__os__rm_dir_recursive ( sub_path )) {
r = - 1;
}
}
else if (remove ( buf ) != 0) {
r = - 1;
}
}
else {
r = - 1;
}
free(statbuf);
free(buf);
if (r != 0) {
break;
}
}
closedir(d);
}
if (r == 0) {
if (rmdir ( path.data) != 0) {
r = - 1;
}
}
if (r != 0) {
ok = false;
}
#endif
#ifdef _WIN32
int32_t r = 0;
const uintptr_t search_buf = malloc ( 260 );
snprintf(search_buf, 260, "%s\\*", path.data);
const uintptr_t fileinfo = malloc ( 320 );
const intptr_t handle = _findfirst ( search_buf , fileinfo );
free(search_buf);
if (handle != - 1) {
while (1) {
const char* name = std__os__finddata_name( fileinfo );
if (strcmp ( name , "." ) != 0) {
if (strcmp ( name , ".." ) != 0) {
const uintptr_t sub_buf = malloc ( 260 );
snprintf(sub_buf, 260, "%s\\%s", path.data, name);
if (std__os__finddata_is_dir ( fileinfo ) != 0) {
const std__string__string sub_path = std__string__string__create( sub_buf );
if (! std__os__rm_dir_recursive ( sub_path )) {
r = - 1;
}
}
else if (remove ( sub_buf ) != 0) {
r = - 1;
}
free(sub_buf);
}
}
if (r != 0) {
break;
}
if (_findnext ( handle , fileinfo ) != 0) {
break;
}
}
_findclose(handle);
}
free(fileinfo);
if (r == 0) {
if (rmdir ( path.data) != 0) {
r = - 1;
}
}
if (r != 0) {
ok = false;
}
#endif
return ok;
}

#ifndef _WIN32
int32_t std__os__stat_is_reg(uintptr_t st) {
const struct stat* sb = (struct stat*)( st );
return S_ISREG ( sb->st_mode);
}

#endif
void std__os__collect_files_recursive(std__string__string path, std__lists__StringList* result, std__arena__Arena* arena) {
#ifndef _WIN32
const uintptr_t d = opendir ( path.data);
if (d == 0) {
return ;
}
while (1) {
const uintptr_t p = readdir ( d );
if (p == 0) {
break;
}
const char* name = std__os__dirent_d_name( p );
if (strcmp ( name , "." ) == 0) {
continue;
}
if (strcmp ( name , ".." ) == 0) {
continue;
}
const uintptr_t len = strlen ( path.data) + strlen ( name ) + 2;
const uintptr_t buf = malloc ( len );
if (buf == 0) {
continue;
}
snprintf(buf, len, "%s/%s", path.data, name);
const uintptr_t statbuf = malloc ( 256 );
if (stat ( buf , statbuf ) == 0) {
if (std__os__stat_is_dir ( statbuf ) != 0) {
const std__string__string sub_path = std__string__string__create( (char*)( buf ) );
std__os__collect_files_recursive(sub_path, result, arena);
}
else if (std__os__stat_is_reg ( statbuf ) != 0) {
const std__string__string file_path = std__string__string__create( (char*)( buf ) );
std__lists__StringList__push(result, arena, file_path);
}
}
free(statbuf);
free(buf);
}
closedir(d);
#endif
#ifdef _WIN32
const uintptr_t search_buf = malloc ( 260 );
snprintf(search_buf, 260, "%s\\*", path.data);
const uintptr_t fileinfo = malloc ( 320 );
const intptr_t handle = _findfirst ( search_buf , fileinfo );
free(search_buf);
if (handle == - 1) {
free(fileinfo);
return ;
}
while (1) {
const char* name = std__os__finddata_name( fileinfo );
if (strcmp ( name , "." ) != 0) {
if (strcmp ( name , ".." ) != 0) {
const uintptr_t sub_buf = malloc ( 260 );
snprintf(sub_buf, 260, "%s\\%s", path.data, name);
if (std__os__finddata_is_dir ( fileinfo ) != 0) {
const std__string__string sub_path = std__string__string__create( sub_buf );
std__os__collect_files_recursive(sub_path, result, arena);
}
else {
const std__string__string file_path = std__string__string__create( sub_buf );
std__lists__StringList__push(result, arena, file_path);
}
free(sub_buf);
}
}
if (_findnext ( handle , fileinfo ) != 0) {
break;
}
}
_findclose(handle);
free(fileinfo);
#endif
}

std__lists__StringList* std__os__list_files_recursive(std__string__string path, std__arena__Arena* arena) {
std__lists__StringList* result = {0};
result = std__lists__StringList__create( arena , 16 );
std__os__collect_files_recursive(path, result, arena);
return result;
}

std__string__string std__os__get_user_home_dir() {
std__string__string out = std__string__str( "" );
char* value = getenv ( "USERPROFILE" );
if (! value) {
value = getenv ( "HOME" );
}
if (value) {
out.data = value;
}
return out;
}

std__string__string std__os__get_env(std__string__string name) {
std__string__string out = std__string__str( "" );
char* value = getenv ( name.data);
if (value) {
out.data = value;
}
return out;
}

std__lists__StringList* std__os__get_cmdline_args(std__arena__Arena* arena) {
std__lists__StringList* result = {0};
result = std__lists__StringList__create( arena , 10 );
int32_t argc = 0;
char** argv = __axe_argv;
while (1) {
if (argv [ argc ] == nil) {
break;
}
argc++;
}
for (int32_t i = 0; i < argc; i ++) {
const std__string__string arg_str = std__string__string__create( argv [ i ] );
std__lists__StringList__push(result, arena, arg_str);
}
return result;
}

std__string__string std__os__get_cwd() {
std__string__string out = {0};
char buffer[2048] = {0};
#ifndef _WIN32
if (getcwd ( buffer , sizeof(buffer) ) != nil) {
out = std__string__str ( &buffer );
}
else {
std__errors__panic(std__errors__error__create("Failed to get current working directory"));
}
#endif
#ifdef _WIN32
if (_getcwd ( buffer , sizeof(buffer) ) != nil) {
out = std__string__str ( &buffer );
}
else {
std__errors__panic(std__errors__error__create("Failed to get current working directory"));
}
#endif
return out;
}

#ifdef __APPLE__
#endif
std__string__string std__os__get_executable_path() {
std__string__string out = std__string__str( "" );
char buffer[2048] = {0};
#ifdef _WIN32
const uint32_t len = GetModuleFileNameA ( nil , buffer , 2048 );
if (len > 0) {
out = std__string__str ( &buffer );
}
#endif
#ifdef __APPLE__
const uint32_t size = 2048;
const int32_t result = _NSGetExecutablePath ( buffer , & size );
if (result == 0) {
out = std__string__str ( &buffer );
}
#endif
#ifdef __linux__
const intptr_t len = readlink ( "/proc/self/exe" , buffer , 2047 );
if (len > 0) {
buffer[len] = 0;
out = std__string__str ( &buffer );
}
#endif
return out;
}

std__string__string std__os__get_executable_dir() {
const std__string__string exe_path = std__os__get_executable_path( );
if (std__string__str_len ( exe_path ) == 0) {
return std__string__str( "" );
}
int32_t last_sep = - 1;
int32_t i = 0;
const int32_t n = std__string__str_len( exe_path );
while (1) {
if (i >= n) {
break;
}
const char ch = std__string__get_char( exe_path , i );
if (ch == '/' || ch == '\\') {
last_sep = i;
}
i++;
}
if (last_sep < 0) {
return std__string__str( "." );
}
return std__string__substring_se( exe_path , 0 , last_sep );
}

std__string__string std__os__get_short_filename(std__string__string path) {
const int32_t last_slash = std__string__find_last_char( path , '\\' );
const int32_t last_slash_fwd = std__string__find_last_char( path , '/' );
int32_t idx = last_slash;
if (last_slash_fwd > idx) {
idx = last_slash_fwd;
}
if (idx == - 1) {
return path;
}
return std__string__substring_se( path , idx + 1 , (int32_t)( path.len) );
}

bool builds__command_exists(std__string__string cmd) {
std__string__string check_cmd = {0};
#ifdef _WIN32
check_cmd = std__string__concat ( std__string__str ( "where " ) , cmd );
check_cmd = std__string__concat_c ( check_cmd , " >nul 2>&1" );
#endif
#ifndef _WIN32
check_cmd = std__string__concat ( std__string__str ( "command -v " ) , cmd );
check_cmd = std__string__concat_c ( check_cmd , " >/dev/null 2>&1" );
#endif
const std__os__ExecResult result = std__os__exec_capture( check_cmd );
return result.exit_code== 0;
}

void builds__filter_and_print_errors(std__string__string output) {
if (std__string__str_len ( output ) == 0) {
return ;
}
std__io__println(output);
}

bool builds__has_double_underscore(std__string__string name) {
const int32_t nlen = std__string__str_len( name );
int32_t k = 0;
while (1) {
if (k + 1 >= nlen) {
break;
}
const char c1 = std__string__get_char( name , k );
const char c2 = std__string__get_char( name , k + 1 );
if (c1 == '_' && c2 == '_') {
return true;
}
k++;
}
return false;
}

void builds__prefix_root_enums(structs__ASTNode* node, std__string__string mprefix) {
if (node == nil) {
return ;
}
const std__string__string nt = node->node_type;
if (std__string__equals_c ( nt , "Enum" )) {
const std__string__string ename = node->data.enum_node.name;
if (std__string__str_len ( mprefix ) > 0 && ! builds__has_double_underscore ( ename )) {
std__string__string new_name = mprefix;
new_name = std__string__concat_c ( new_name , "__" );
new_name = std__string__concat ( new_name , ename );
node->data.enum_node.name = new_name;
}
}
if (node->children!= nil) {
const __list_structs__ASTNode_t* chs = node->children;
int32_t ci = 0;
while (1) {
if (ci >= len_v((*chs))) {
break;
}
builds__prefix_root_enums(&(chs->data[ci]), mprefix);
ci = ci + 1;
}
}
}

void builds__prefix_root_functions(structs__ASTNode* node, std__string__string mprefix) {
if (node == nil) {
return ;
}
const std__string__string nt = node->node_type;
if (std__string__equals_c ( nt , "Function" )) {
const std__string__string fname = node->data.function.name;
if (! std__string__equals_c ( fname , "main" )) {
if (std__string__str_len ( mprefix ) > 0 && ! builds__has_double_underscore ( fname )) {
std__string__string new_name = mprefix;
new_name = std__string__concat ( new_name , std__string__str ( "__" ) );
new_name = std__string__concat ( new_name , fname );
node->data.function.name = new_name;
renderer__renderer_add_prefix(fname, new_name);
}
}
}
if (node->children!= nil) {
const __list_structs__ASTNode_t* chs = node->children;
int32_t ci = 0;
while (1) {
if (ci >= len_v((*chs))) {
break;
}
builds__prefix_root_functions(&(chs->data[ci]), mprefix);
ci = ci + 1;
}
}
}

void builds__print_ast_node(structs__ASTNode* node, int32_t indent) {
if (node == nil) {
return ;
}
int32_t ii = 0;
while (1) {
if (ii >= indent) {
break;
}
std__io__print("  ");
ii = ii + 1;
}
std__io__println(node->node_type);
if (node->children!= nil) {
const __list_structs__ASTNode_t* chs = node->children;
int32_t ci = 0;
while (1) {
if (ci >= len_v((*chs))) {
break;
}
builds__print_ast_node(&(chs->data[ci]), indent + 1);
ci++;
}
}
}

bool builds__has_entry_tag(__list_std__string_t* tags) {
if (tags == nil) {
return false;
}
int32_t i = 0;
while (1) {
if (i >= len_v((*tags))) {
break;
}
if (std__string__equals_c ( tags->data[ i ], "entry" )) {
return true;
}
i++;
}
return false;
}

void builds__count_entry_points(structs__ASTNode* node, int32_t* main_count, int32_t* custom_entry_count, int32_t* test_count) {
if (node == nil) {
return ;
}
const std__string__string nt = node->node_type;
if (std__string__equals_c ( nt , "Test" )) {
(*test_count) = (*test_count) + 1;
}
if (std__string__equals_c ( nt , "Function" )) {
const std__string__string fname = node->data.function.name;
if (std__string__equals_c ( fname , "main" )) {
(*main_count) = (*main_count) + 1;
}
else if (builds__has_entry_tag ( node->data.function.tags)) {
(*custom_entry_count) = (*custom_entry_count) + 1;
}
}
if (node->children!= nil) {
const __list_structs__ASTNode_t* children = node->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
builds__count_entry_points(&(children->data[i]), main_count, custom_entry_count, test_count);
i++;
}
}
}

bool builds__validate_entry_points(structs__ASTNode* node, std__string__string filename) {
int32_t main_count = 0;
int32_t custom_entry_count = 0;
int32_t test_count = 0;
builds__count_entry_points(node, &main_count, &custom_entry_count, &test_count);
const int32_t total_entries = main_count + custom_entry_count;
if (total_entries > 1) {
std__io__println(std__string__concat(std__string__str("error: multiple entry points defined in compilation unit '"), filename));
std__io__println("Only one function can be the entry point (either 'main' or marked with '[entry]').");
return false;
}
if (total_entries == 0 && test_count == 0) {
std__io__println(std__string__concat(std__string__str("error: no entry point in compilation unit '"), filename));
std__io__println(". add either 'test { }' or 'def main() { }' (or use [entry] tag) to the file.");
return false;
}
if (custom_entry_count > 0) {
const bool is_shared = build_shared_lib;
const bool compile_only = gstate__get_compile_only( );
if (! is_shared && ! compile_only) {
std__io__println(std__string__concat(std__string__str("error: custom entry point in '"), filename));
std__io__println(" requires compiling with -dll (shared library) or -c (compile only) flag.");
return false;
}
}
return true;
}

bool builds__compile_file(std__string__string filename, bool is_axec, std__string__string output_filename) {
if (! quiet_mode) {
std__io__println(std__string__concat(std__string__str("Compiling: "), filename));
std__io__println("\n1 | IO");
}
const std__string__string source = std__os__read_file( filename );
if (std__string__str_len ( source ) == 0) {
std__io__println("Error: Could not read source file");
return false;
}
if (! quiet_mode) {
std__io__println("2 | Lex");
}
const __list_lexer__Token_t tokens = lexer__lex( source );
if (len_v(tokens) == 0) {
std__io__println("Error: No tokens generated");
return false;
}
const bool do_print_tokens = print_tokens;
if (do_print_tokens) {
int32_t ti = 0;
while (1) {
if (ti >= len_v(tokens)) {
break;
}
const lexer__Token* cur_tok = &(tokens.data[ ti ]);
const std__string__string tok_type_str = std__string__i32_to_string( cur_tok->token_type);
const std__string__string tok_val = cur_tok->value;
std__io__print(std__string__concat(std__string__str("["), tok_type_str));
std__io__print("] ");
std__io__println(tok_val);
ti++;
}
}
if (! quiet_mode) {
std__io__println("3 | Parse");
}
parser__initialize_all();
structs__ASTNode ast = parser__parse( &tokens , is_axec , true , std__string__str ( "" ) , filename );
if (len_ptr(ast.children) == 0) {
std__io__println("Error: Failed to parse");
return false;
}
if (! quiet_mode) {
std__io__println("4 | Imports");
}
imports__reset_processed_modules();
std__string__string base_dir = std__string__str( "." );
const int32_t lenf = std__string__str_len( filename );
int32_t idx = lenf - 1;
while (1) {
if (idx < 0) {
break;
}
const char ch = std__string__get_char( filename , idx );
if (ch == '/' || ch == '\\') {
base_dir = std__string__substring_se ( filename , 0 , idx );
break;
}
idx--;
}
const std__string__string module_name = std__string__str( "" );
ast = imports__process_imports ( &ast , base_dir , is_axec , filename , true , module_name );
if (! builds__validate_entry_points ( &ast , filename )) {
return false;
}
const bool syntax_only = syntax_check_only;
if (syntax_only) {
return true;
}
const bool do_print_ast = print_ast;
if (do_print_ast) {
builds__print_ast_node(&ast, 0);
}
if (! quiet_mode) {
std__io__println("5 | Lowering");
}
std__string__string dir_name = std__string__str( "" );
std__string__string file_stem = std__string__str( "" );
const int32_t flen = std__string__str_len( filename );
int32_t last_dot = - 1;
int32_t i_ext = flen - 1;
if (! quiet_mode) {
std__io__println("6 | PFCCG I");
}
while (1) {
if (i_ext < 0) {
break;
}
const char ch_ext = std__string__get_char( filename , i_ext );
if (ch_ext == '.') {
last_dot = i_ext;
break;
}
i_ext--;
}
if (last_dot < 0) {
last_dot = flen;
}
if (! quiet_mode) {
std__io__println("7 | PFCCG II");
}
int32_t last_sep = - 1;
int32_t i_sep = flen - 1;
while (1) {
if (i_sep < 0) {
break;
}
const char ch_sep = std__string__get_char( filename , i_sep );
if (ch_sep == '/' || ch_sep == '\\') {
last_sep = i_sep;
break;
}
i_sep = i_sep - 1;
}
if (last_sep >= 0) {
file_stem = std__string__substring_se ( filename , last_sep + 1 , last_dot );
}
else {
file_stem = std__string__substring_se ( filename , 0 , last_dot );
}
if (! quiet_mode) {
std__io__println("8 | PFCCG III");
}
if (last_sep > 0) {
int32_t dir_sep2 = - 1;
int32_t j = last_sep - 1;
while (1) {
if (j < 0) {
break;
}
const char ch2 = std__string__get_char( filename , j );
if (ch2 == '/' || ch2 == '\\') {
dir_sep2 = j;
break;
}
j--;
}
if (dir_sep2 >= 0) {
dir_name = std__string__substring_se ( filename , dir_sep2 + 1 , last_sep );
}
else {
dir_name = std__string__substring_se ( filename , 0 , last_sep );
}
}
if (std__string__equals_c ( dir_name , "." )) {
dir_name = std__string__str ( "" );
}
if (! quiet_mode) {
std__io__println("9 | PFCCG IV");
}
std__string__string module_prefix = std__string__str( "" );
if (std__string__str_len ( dir_name ) > 0) {
module_prefix = dir_name;
module_prefix = std__string__concat ( module_prefix , std__string__str ( "__" ) );
module_prefix = std__string__concat ( module_prefix , file_stem );
}
else {
module_prefix = file_stem;
}
if (! quiet_mode) {
std__io__println("10| PFCCG V");
}
builds__prefix_root_enums(&ast, module_prefix);
renderer__initialize_renderer();
builds__prefix_root_functions(&ast, module_prefix);
renderer__set_source_file(filename);
if (bootstrap_mode) {
renderer__set_emit_line_directives(false);
}
if (! quiet_mode) {
std__io__println("11| GEN");
}
const std__string__string c_code = renderer__generate_c( &ast );
if (std__string__str_len ( c_code ) == 0) {
std__io__println("Error: Failed to generate C code");
return false;
}
const std__string__string c_filename = builds__replace_extension( filename , std__string__str ( ".c" ) );
std__os__write_file(c_filename, c_code);
if (! quiet_mode) {
std__io__println("12| Last compilation pass");
}
const std__string__string exe_filename = builds__get_output_filename( output_filename , filename );
const bool needs_omp = builds__should_link_openmp( &ast , filename );
std__string__string compiler = std__string__str( "" );
if (builds__command_exists ( std__string__str ( "clang" ) )) {
compiler = std__string__str ( "clang" );
}
else {
if (builds__command_exists ( std__string__str ( "cc" ) )) {
compiler = std__string__str ( "cc" );
if (! quiet_mode) {
std__io__println("\ncc: Linking.");
}
}
if (std__string__str_len ( compiler ) == 0) {
std__io__println("\nYou do not have the LLVM C toolchain installed.");
std__io__println("Install clang from https://releases.llvm.org/ or via your package manager.");
std__io__println("Alternatively, ensure 'cc' is available in your PATH.");
return false;
}
}
std__string__string compile_cmd = std__string__concat( compiler , std__string__str ( " " ) );
const std__string__string target_triple = gstate__get_target_triple( );
if (std__string__str_len ( target_triple ) > 0) {
if (! quiet_mode) {
std__io__println(std__string__concat(std__string__str("Cross-compiling for target: "), target_triple));
const std__string__string sysroot = gstate__get_sysroot_path( );
if (std__string__str_len ( sysroot ) == 0) {
std__io__println("\nWarning: No --sysroot specified. Cross-compilation may fail without target SDK.");
}
}
compile_cmd = std__string__concat_c ( compile_cmd , "--target=" );
compile_cmd = std__string__concat ( compile_cmd , target_triple );
compile_cmd = std__string__concat_c ( compile_cmd , " " );
}
const std__string__string sysroot_path = gstate__get_sysroot_path( );
if (std__string__str_len ( sysroot_path ) > 0) {
compile_cmd = std__string__concat_c ( compile_cmd , "--sysroot=" );
compile_cmd = std__string__concat ( compile_cmd , sysroot_path );
compile_cmd = std__string__concat_c ( compile_cmd , " " );
}
compile_cmd = std__string__concat ( compile_cmd , c_filename );
const bool is_shared = build_shared_lib;
if (is_shared) {
#ifdef _WIN32
compile_cmd = std__string__concat_c ( compile_cmd , " -shared" );
#endif
#ifndef _WIN32
compile_cmd = std__string__concat_c ( compile_cmd , " -shared -fPIC" );
#endif
}
if (needs_omp) {
compile_cmd = std__string__concat ( compile_cmd , std__string__str ( " -fopenmp" ) );
}
const std__lists__StringList* inc_paths = gstate__get_include_paths( );
if (inc_paths != nil) {
int32_t ip_idx = 0;
while (1) {
if (ip_idx >= len_v((*inc_paths))) {
break;
}
compile_cmd = std__string__concat_c ( compile_cmd , " -I" );
compile_cmd = std__string__concat ( compile_cmd , inc_paths->data[ ip_idx ]);
ip_idx++;
}
}
const std__lists__StringList* lib_paths = gstate__get_library_paths( );
if (lib_paths != nil) {
int32_t lp_idx = 0;
while (1) {
if (lp_idx >= len_v((*lib_paths))) {
break;
}
compile_cmd = std__string__concat_c ( compile_cmd , " -L" );
compile_cmd = std__string__concat ( compile_cmd , lib_paths->data[ lp_idx ]);
lp_idx++;
}
}
const std__string__string toolchain_root = std__os__get_executable_dir( );
if (renderer__has_external_header ( std__string__str ( "pcre.h" ) )) {
compile_cmd = std__string__concat_c ( compile_cmd , " -DPCRE_STATIC" );
#ifdef _WIN32
compile_cmd = std__string__concat_c ( compile_cmd , " -I" );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/pcre/include " );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/x64-windows/pcre.lib" );
#endif
#ifdef __linux__
compile_cmd = std__string__concat_c ( compile_cmd , " -I" );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/pcre/include " );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/lib-linux/libpcre.a" );
#endif
#ifdef __APPLE__
compile_cmd = std__string__concat_c ( compile_cmd , " -I" );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/pcre/include " );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/lib-macos/libpcre.a" );
#endif
}
if (imports__has_imported_module ( std__string__str ( "std/net" ) ) || imports__has_imported_module ( std__string__str ( "net.axec" ) ) || std__string__find_substr ( filename , std__string__str ( "net.axec" ) ) >= 0) {
compile_cmd = std__string__concat_c ( compile_cmd , " -DCURL_STATICLIB -I" );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/curl/include" );
#ifdef _WIN32
compile_cmd = std__string__concat_c ( compile_cmd , " " );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/x64-windows/libcurl.lib " );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/x64-windows/zlib.lib" );
compile_cmd = std__string__concat_c ( compile_cmd , " -lws2_32 -lwldap32 -ladvapi32 -lcrypt32" );
compile_cmd = std__string__concat_c ( compile_cmd , " -lnormaliz -liphlpapi -lsecur32 -lbcrypt" );
#endif
#ifndef _WIN32
compile_cmd = std__string__concat_c ( compile_cmd , " -lcurl -lssl -lcrypto -lz" );
#endif
}
if (imports__has_imported_module ( std__string__str ( "std/json" ) ) || imports__has_imported_module ( std__string__str ( "json.axec" ) ) || std__string__find_substr ( filename , std__string__str ( "json.axec" ) ) >= 0) {
compile_cmd = std__string__concat_c ( compile_cmd , " -I" );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/yyjson/include" );
#ifdef _WIN32
compile_cmd = std__string__concat_c ( compile_cmd , " " );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/x64-windows/yyjson.lib" );
#endif
#ifdef __linux__
compile_cmd = std__string__concat_c ( compile_cmd , " " );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/lib-linux/libyyjson.a" );
#endif
#ifdef __APPLE__
compile_cmd = std__string__concat_c ( compile_cmd , " " );
compile_cmd = std__string__concat ( compile_cmd , toolchain_root );
compile_cmd = std__string__concat_c ( compile_cmd , "/external/lib-macos/libyyjson.a" );
#endif
}
const std__lists__StringList* link_libs = gstate__get_link_libraries( );
if (link_libs != nil) {
int32_t ll_idx = 0;
while (1) {
if (ll_idx >= len_v((*link_libs))) {
break;
}
compile_cmd = std__string__concat_c ( compile_cmd , " -l" );
compile_cmd = std__string__concat ( compile_cmd , link_libs->data[ ll_idx ]);
ll_idx++;
}
}
if (! is_release_build) {
#ifdef _WIN32
compile_cmd = std__string__concat_c ( compile_cmd , " -gcodeview -fuse-ld=lld -Xlinker /debug -ldbghelp" );
#endif
#ifndef _WIN32
compile_cmd = std__string__concat_c ( compile_cmd , " -g" );
#endif
}
const bool compile_only = gstate__get_compile_only( );
if (compile_only) {
compile_cmd = std__string__concat ( compile_cmd , std__string__str ( " -Wno-everything -O0 -c -o " ) );
}
else {
compile_cmd = std__string__concat ( compile_cmd , std__string__str ( " -Wno-everything -O0 -o " ) );
}
compile_cmd = std__string__concat ( compile_cmd , exe_filename );
const std__os__ExecResult result = std__os__exec_capture( compile_cmd );
const int32_t exit_code = result.exit_code;
if (exit_code != 0) {
builds__filter_and_print_errors(result.output);
return false;
}
const bool keep_file = keep_emitted_file;
if (keep_file) {
if (! quiet_mode) {
std__io__println("Keeping emitted C.");
}
}
else {
std__os__delete_file(c_filename);
}
if (! quiet_mode) {
std__io__println("Compiled.");
}
const bool do_run = run_after_compile;
if (do_run) {
std__string__string run_cmd = exe_filename;
if (! std__string__str_contains_c ( exe_filename , "/" ) && ! std__string__has_prefix ( exe_filename , std__string__str ( "./" ) )) {
run_cmd = std__string__concat ( std__string__str ( "./" ) , exe_filename );
}
if (! quiet_mode) {
std__io__println(std__string__concat(std__string__str("Running: "), run_cmd));
std__io__println("");
}
const int32_t run_code = std__os__exec( run_cmd.data);
if (! quiet_mode) {
std__io__println(std__string__concat(std__string__str("Exit code: "), std__string__i32_to_string(run_code)));
}
}
return true;
}

std__string__string builds__replace_extension(std__string__string filename, std__string__string new_ext) {
const int32_t len = std__string__str_len( filename );
int32_t i = len - 1;
while (1) {
if (i < 0) {
break;
}
const char ch = std__string__get_char( filename , i );
if (ch == '.') {
const std__string__string base = std__string__substring_se( filename , 0 , i );
return std__string__concat( base , new_ext );
}
i--;
}
return std__string__concat( filename , new_ext );
}

std__string__string builds__get_output_filename(std__string__string specified_output, std__string__string input_filename) {
std__string__string result = std__string__str( "" );
const bool is_shared = build_shared_lib;
const bool compile_only = gstate__get_compile_only( );
if (std__string__str_len ( specified_output ) > 0) {
result = specified_output;
}
else if (compile_only) {
#ifdef _WIN32
result = builds__replace_extension ( input_filename , std__string__str ( ".obj" ) );
#endif
#ifndef _WIN32
result = builds__replace_extension ( input_filename , std__string__str ( ".o" ) );
#endif
}
else if (is_shared) {
#ifdef _WIN32
result = builds__replace_extension ( input_filename , std__string__str ( ".dll" ) );
#endif
#ifndef _WIN32
result = builds__replace_extension ( input_filename , std__string__str ( ".so" ) );
#endif
}
else {
#ifdef _WIN32
result = builds__replace_extension ( input_filename , std__string__str ( ".exe" ) );
#endif
#ifndef _WIN32
result = builds__replace_extension ( input_filename , std__string__str ( "" ) );
#endif
}
#ifdef _WIN32
if (compile_only) {
if (! std__string__has_suffix ( result , std__string__str ( ".obj" ) )) {
result = std__string__concat ( result , std__string__str ( ".obj" ) );
}
}
else if (is_shared) {
if (! std__string__has_suffix ( result , std__string__str ( ".dll" ) )) {
result = std__string__concat ( result , std__string__str ( ".dll" ) );
}
}
else if (! std__string__has_suffix ( result , std__string__str ( ".exe" ) )) {
result = std__string__concat ( result , std__string__str ( ".exe" ) );
}
#endif
#ifndef _WIN32
if (compile_only) {
if (! std__string__has_suffix ( result , std__string__str ( ".o" ) )) {
result = std__string__concat ( result , std__string__str ( ".o" ) );
}
}
else if (is_shared && ! std__string__has_suffix ( result , std__string__str ( ".so" ) )) {
result = std__string__concat ( result , std__string__str ( ".so" ) );
}
#endif
#ifdef _WIN32
result = std__string__replace_all ( result , std__string__str ( "/" ) , std__string__str ( "\\" ) );
#endif
return result;
}

bool builds__should_link_openmp(structs__ASTNode* ast, std__string__string filename) {
if (std__string__has_suffix ( filename , std__string__str ( "parallelism.axec" ) )) {
return true;
}
if (builds__has_parallel_blocks ( ast )) {
return true;
}
if (ast == nil) {
return false;
}
const std__string__string node_type = ast->node_type;
if (std__string__equals_c ( node_type , "Use" )) {
const std__string__string mod_name = ast->data.use_node.module_name;
if (std__string__equals_c ( mod_name , "std.parallelism" )) {
return true;
}
}
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
if (builds__should_link_openmp ( &(children->data[ i ]) , filename )) {
return true;
}
i++;
}
}
return false;
}

bool builds__has_parallel_blocks(structs__ASTNode* ast) {
if (ast == nil) {
return false;
}
const std__string__string node_type = ast->node_type;
if (std__string__equals_c ( node_type , "ParallelFor" )) {
return true;
}
if (std__string__equals_c ( node_type , "Parallel" )) {
return true;
}
if (std__string__equals_c ( node_type , "ParallelLocal" )) {
return true;
}
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
if (builds__has_parallel_blocks ( &(children->data[ i ]) )) {
return true;
}
i++;
}
}
return false;
}

void builds__collect_model_names(structs__ASTNode* ast) {
if (ast == nil) {
return ;
}
const std__string__string node_type = ast->node_type;
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
builds__collect_model_names(&(children->data[i]));
i++;
}
}
}

void builds__collect_declared_functions(structs__ASTNode* ast) {
if (ast == nil) {
return ;
}
const std__string__string node_type = ast->node_type;
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
builds__collect_declared_functions(&(children->data[i]));
i++;
}
}
}

void gstate__set_loud_logger(bool v) {
loud_logger = v;
}

void gstate__set_release_build(bool v) {
is_release_build = v;
}

void gstate__set_keep_emitted_file(bool v) {
keep_emitted_file = v;
}

void gstate__set_run_after_compile(bool v) {
run_after_compile = v;
}

void gstate__set_print_tokens(bool v) {
print_tokens = v;
}

void gstate__set_print_ast(bool v) {
print_ast = v;
}

void gstate__set_build_shared_lib(bool v) {
build_shared_lib = v;
}

void gstate__set_bootstrap_mode(bool v) {
bootstrap_mode = v;
}

void gstate__set_include_paths(std__lists__StringList* paths) {
include_paths = paths;
}

std__lists__StringList* gstate__get_include_paths() {
return include_paths;
}

void gstate__set_quiet_mode(bool v) {
quiet_mode = v;
}

void gstate__set_syntax_check_only(bool v) {
syntax_check_only = v;
}

void gstate__set_target_triple(std__string__string triple) {
target_triple = triple;
}

std__string__string gstate__get_target_triple() {
return target_triple;
}

void gstate__set_sysroot_path(std__string__string path) {
sysroot_path = path;
}

std__string__string gstate__get_sysroot_path() {
return sysroot_path;
}

void gstate__set_compile_only(bool v) {
compile_only = v;
}

bool gstate__get_compile_only() {
return compile_only;
}

void gstate__set_library_paths(std__lists__StringList* paths) {
library_paths = paths;
}

std__lists__StringList* gstate__get_library_paths() {
return library_paths;
}

void gstate__set_link_libraries(std__lists__StringList* libs) {
link_libraries = libs;
}

std__lists__StringList* gstate__get_link_libraries() {
return link_libraries;
}

void gstate__debug_print_i32(int32_t msg) {
if (loud_logger) {
std__io__println(msg);
}
}

void gstate__debug_print_str(std__string__string msg) {
if (loud_logger) {
std__io__println(msg);
}
}

void gstate__debug_print_raw(char* msg) {
if (loud_logger) {
std__io__println(msg);
}
}

std__maps__StringIntMap* std__maps__StringIntMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__StringIntMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__StringIntMap) );
map->keys = std__lists__StringList__create( arena , capacity );
map->values = std__lists__IntList__create( arena , capacity );
return map;
}

void std__maps__StringIntMap__clear(std__maps__StringIntMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__StringIntMap__add(std__maps__StringIntMap* map, std__arena__Arena* arena, std__string__string key, int32_t value) {
std__lists__StringList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

void std__maps__StringIntMap__set(std__maps__StringIntMap* map, std__arena__Arena* arena, std__string__string key, int32_t value) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
std__lists__IntList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
values->data[i] = value;
return ;
}
}
i = i + 1;
}
std__lists__StringList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

int32_t std__maps__StringIntMap__get(std__maps__StringIntMap* map, std__string__string key) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
const std__lists__IntList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
return values->data[ i ];
}
}
i = i + 1;
}
int32_t default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__StringIntMap__contains(std__maps__StringIntMap* map, std__string__string key) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
return true;
}
}
i = i + 1;
}
return false;
}

int32_t std__maps__StringIntMap__size(std__maps__StringIntMap* map) {
const std__lists__StringList* keys = map->keys;
return keys->len;
}

int32_t std__maps__StringIntMap__pop(std__maps__StringIntMap* map, std__string__string key) {
int32_t i = 0;
std__lists__StringList* keys = map->keys;
std__lists__IntList* values = map->values;
int32_t result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
found = true;
}
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
int32_t default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__StringFloatMap* std__maps__StringFloatMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__StringFloatMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__StringFloatMap) );
map->keys = std__lists__StringList__create( arena , capacity );
map->values = std__lists__FloatList__create( arena , capacity );
return map;
}

void std__maps__StringFloatMap__clear(std__maps__StringFloatMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__StringFloatMap__add(std__maps__StringFloatMap* map, std__arena__Arena* arena, std__string__string key, float value) {
std__lists__StringList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

void std__maps__StringFloatMap__set(std__maps__StringFloatMap* map, std__arena__Arena* arena, std__string__string key, float value) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
std__lists__FloatList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
values->data[i] = value;
return ;
}
}
i = i + 1;
}
std__lists__StringList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

float std__maps__StringFloatMap__get(std__maps__StringFloatMap* map, std__string__string key) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
const std__lists__FloatList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
return values->data[ i ];
}
}
i = i + 1;
}
float default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__StringFloatMap__contains(std__maps__StringFloatMap* map, std__string__string key) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
return true;
}
}
i = i + 1;
}
return false;
}

int32_t std__maps__StringFloatMap__size(std__maps__StringFloatMap* map) {
const std__lists__StringList* keys = map->keys;
return keys->len;
}

float std__maps__StringFloatMap__pop(std__maps__StringFloatMap* map, std__string__string key) {
int32_t i = 0;
std__lists__StringList* keys = map->keys;
std__lists__FloatList* values = map->values;
float result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
found = true;
}
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
float default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__StringBoolMap* std__maps__StringBoolMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__StringBoolMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__StringBoolMap) );
map->keys = std__lists__StringList__create( arena , capacity );
map->values = std__lists__BoolList__create( arena , capacity );
return map;
}

void std__maps__StringBoolMap__clear(std__maps__StringBoolMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__StringBoolMap__add(std__maps__StringBoolMap* map, std__arena__Arena* arena, std__string__string key, bool value) {
std__lists__StringList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

void std__maps__StringBoolMap__set(std__maps__StringBoolMap* map, std__arena__Arena* arena, std__string__string key, bool value) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
std__lists__BoolList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
values->data[i] = value;
return ;
}
}
i = i + 1;
}
std__lists__StringList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

bool std__maps__StringBoolMap__get(std__maps__StringBoolMap* map, std__string__string key) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
const std__lists__BoolList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
return values->data[ i ];
}
}
i = i + 1;
}
bool default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__StringBoolMap__contains(std__maps__StringBoolMap* map, std__string__string key) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
return true;
}
}
i = i + 1;
}
return false;
}

int32_t std__maps__StringBoolMap__size(std__maps__StringBoolMap* map) {
const std__lists__StringList* keys = map->keys;
return keys->len;
}

bool std__maps__StringBoolMap__pop(std__maps__StringBoolMap* map, std__string__string key) {
int32_t i = 0;
std__lists__StringList* keys = map->keys;
std__lists__BoolList* values = map->values;
bool result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
found = true;
}
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
bool default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__StringStringMap* std__maps__StringStringMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__StringStringMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__StringStringMap) );
map->keys = std__lists__StringList__create( arena , capacity );
map->values = std__lists__StringList__create( arena , capacity );
return map;
}

void std__maps__StringStringMap__clear(std__maps__StringStringMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__StringStringMap__add(std__maps__StringStringMap* map, std__arena__Arena* arena, std__string__string key, std__string__string value) {
std__lists__StringList__push(map->keys, arena, key);
std__lists__StringList__push(map->values, arena, value);
}

void std__maps__StringStringMap__set(std__maps__StringStringMap* map, std__arena__Arena* arena, std__string__string key, std__string__string value) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
std__lists__StringList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
values->data[i] = value;
return ;
}
}
i = i + 1;
}
std__lists__StringList__push(map->keys, arena, key);
std__lists__StringList__push(map->values, arena, value);
}

std__string__string std__maps__StringStringMap__get(std__maps__StringStringMap* map, std__string__string key) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
const std__lists__StringList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
return values->data[ i ];
}
}
i = i + 1;
}
std__string__string default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__StringStringMap__contains(std__maps__StringStringMap* map, std__string__string key) {
int32_t i = 0;
const std__lists__StringList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
return true;
}
}
i = i + 1;
}
return false;
}

int32_t std__maps__StringStringMap__size(std__maps__StringStringMap* map) {
const std__lists__StringList* keys = map->keys;
return keys->len;
}

std__string__string std__maps__StringStringMap__pop(std__maps__StringStringMap* map, std__string__string key) {
int32_t i = 0;
std__lists__StringList* keys = map->keys;
std__lists__StringList* values = map->values;
std__string__string result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
const std__string__string current_key = keys->data[ i ];
if (current_key.len== key.len) {
if (strncmp ( current_key.data, key.data, key.len) == 0) {
found = true;
}
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
std__string__string default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__IntIntMap* std__maps__IntIntMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__IntIntMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__IntIntMap) );
map->keys = std__lists__IntList__create( arena , capacity );
map->values = std__lists__IntList__create( arena , capacity );
return map;
}

void std__maps__IntIntMap__clear(std__maps__IntIntMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__IntIntMap__append(std__maps__IntIntMap* map, std__arena__Arena* arena, int32_t key, int32_t value) {
std__lists__IntList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

void std__maps__IntIntMap__add(std__maps__IntIntMap* map, std__arena__Arena* arena, int32_t key, int32_t value) {
std__lists__IntList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

void std__maps__IntIntMap__set(std__maps__IntIntMap* map, std__arena__Arena* arena, int32_t key, int32_t value) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
std__lists__IntList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__IntList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

int32_t std__maps__IntIntMap__get(std__maps__IntIntMap* map, int32_t key) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
const std__lists__IntList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
int32_t default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__IntIntMap__contains(std__maps__IntIntMap* map, int32_t key) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__IntIntMap__size(std__maps__IntIntMap* map) {
const std__lists__IntList* keys = map->keys;
return keys->len;
}

int32_t std__maps__IntIntMap__pop(std__maps__IntIntMap* map, int32_t key) {
int32_t i = 0;
std__lists__IntList* keys = map->keys;
std__lists__IntList* values = map->values;
int32_t result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
int32_t default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__FloatIntMap* std__maps__FloatIntMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__FloatIntMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__FloatIntMap) );
map->keys = std__lists__FloatList__create( arena , capacity );
map->values = std__lists__IntList__create( arena , capacity );
return map;
}

void std__maps__FloatIntMap__clear(std__maps__FloatIntMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__FloatIntMap__append(std__maps__FloatIntMap* map, std__arena__Arena* arena, float key, int32_t value) {
std__lists__FloatList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

void std__maps__FloatIntMap__add(std__maps__FloatIntMap* map, std__arena__Arena* arena, float key, int32_t value) {
std__lists__FloatList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

void std__maps__FloatIntMap__set(std__maps__FloatIntMap* map, std__arena__Arena* arena, float key, int32_t value) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
std__lists__IntList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__FloatList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

int32_t std__maps__FloatIntMap__get(std__maps__FloatIntMap* map, float key) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
const std__lists__IntList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
int32_t default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__FloatIntMap__contains(std__maps__FloatIntMap* map, float key) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__FloatIntMap__size(std__maps__FloatIntMap* map) {
const std__lists__FloatList* keys = map->keys;
return keys->len;
}

int32_t std__maps__FloatIntMap__pop(std__maps__FloatIntMap* map, float key) {
int32_t i = 0;
std__lists__FloatList* keys = map->keys;
std__lists__IntList* values = map->values;
int32_t result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
int32_t default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__IntFloatMap* std__maps__IntFloatMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__IntFloatMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__IntFloatMap) );
map->keys = std__lists__IntList__create( arena , capacity );
map->values = std__lists__FloatList__create( arena , capacity );
return map;
}

void std__maps__IntFloatMap__clear(std__maps__IntFloatMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__IntFloatMap__append(std__maps__IntFloatMap* map, std__arena__Arena* arena, int32_t key, float value) {
std__lists__IntList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

void std__maps__IntFloatMap__add(std__maps__IntFloatMap* map, std__arena__Arena* arena, int32_t key, float value) {
std__lists__IntList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

void std__maps__IntFloatMap__set(std__maps__IntFloatMap* map, std__arena__Arena* arena, int32_t key, float value) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
std__lists__FloatList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__IntList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

float std__maps__IntFloatMap__get(std__maps__IntFloatMap* map, int32_t key) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
const std__lists__FloatList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
float default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__IntFloatMap__contains(std__maps__IntFloatMap* map, int32_t key) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__IntFloatMap__size(std__maps__IntFloatMap* map) {
const std__lists__IntList* keys = map->keys;
return keys->len;
}

float std__maps__IntFloatMap__pop(std__maps__IntFloatMap* map, int32_t key) {
int32_t i = 0;
std__lists__IntList* keys = map->keys;
std__lists__FloatList* values = map->values;
float result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
float default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__FloatFloatMap* std__maps__FloatFloatMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__FloatFloatMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__FloatFloatMap) );
map->keys = std__lists__FloatList__create( arena , capacity );
map->values = std__lists__FloatList__create( arena , capacity );
return map;
}

void std__maps__FloatFloatMap__clear(std__maps__FloatFloatMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__FloatFloatMap__append(std__maps__FloatFloatMap* map, std__arena__Arena* arena, float key, float value) {
std__lists__FloatList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

void std__maps__FloatFloatMap__add(std__maps__FloatFloatMap* map, std__arena__Arena* arena, float key, float value) {
std__lists__FloatList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

void std__maps__FloatFloatMap__set(std__maps__FloatFloatMap* map, std__arena__Arena* arena, float key, float value) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
std__lists__FloatList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__FloatList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

float std__maps__FloatFloatMap__get(std__maps__FloatFloatMap* map, float key) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
const std__lists__FloatList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
float default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__FloatFloatMap__contains(std__maps__FloatFloatMap* map, float key) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__FloatFloatMap__size(std__maps__FloatFloatMap* map) {
const std__lists__FloatList* keys = map->keys;
return keys->len;
}

float std__maps__FloatFloatMap__pop(std__maps__FloatFloatMap* map, float key) {
int32_t i = 0;
std__lists__FloatList* keys = map->keys;
std__lists__FloatList* values = map->values;
float result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
float default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__IntBoolMap* std__maps__IntBoolMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__IntBoolMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__IntBoolMap) );
map->keys = std__lists__IntList__create( arena , capacity );
map->values = std__lists__BoolList__create( arena , capacity );
return map;
}

void std__maps__IntBoolMap__clear(std__maps__IntBoolMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__IntBoolMap__append(std__maps__IntBoolMap* map, std__arena__Arena* arena, int32_t key, bool value) {
std__lists__IntList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

void std__maps__IntBoolMap__add(std__maps__IntBoolMap* map, std__arena__Arena* arena, int32_t key, bool value) {
std__lists__IntList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

void std__maps__IntBoolMap__set(std__maps__IntBoolMap* map, std__arena__Arena* arena, int32_t key, bool value) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
std__lists__BoolList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__IntList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

bool std__maps__IntBoolMap__get(std__maps__IntBoolMap* map, int32_t key) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
const std__lists__BoolList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
bool default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__IntBoolMap__contains(std__maps__IntBoolMap* map, int32_t key) {
int32_t i = 0;
const std__lists__IntList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__IntBoolMap__size(std__maps__IntBoolMap* map) {
const std__lists__IntList* keys = map->keys;
return keys->len;
}

bool std__maps__IntBoolMap__pop(std__maps__IntBoolMap* map, int32_t key) {
int32_t i = 0;
std__lists__IntList* keys = map->keys;
std__lists__BoolList* values = map->values;
bool result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
bool default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__BoolIntMap* std__maps__BoolIntMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__BoolIntMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__BoolIntMap) );
map->keys = std__lists__BoolList__create( arena , capacity );
map->values = std__lists__IntList__create( arena , capacity );
return map;
}

void std__maps__BoolIntMap__clear(std__maps__BoolIntMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__BoolIntMap__append(std__maps__BoolIntMap* map, std__arena__Arena* arena, bool key, int32_t value) {
std__lists__BoolList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

void std__maps__BoolIntMap__add(std__maps__BoolIntMap* map, std__arena__Arena* arena, bool key, int32_t value) {
std__lists__BoolList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

void std__maps__BoolIntMap__set(std__maps__BoolIntMap* map, std__arena__Arena* arena, bool key, int32_t value) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
std__lists__IntList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__BoolList__push(map->keys, arena, key);
std__lists__IntList__push(map->values, arena, value);
}

int32_t std__maps__BoolIntMap__get(std__maps__BoolIntMap* map, bool key) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
const std__lists__IntList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
int32_t default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__BoolIntMap__contains(std__maps__BoolIntMap* map, bool key) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__BoolIntMap__size(std__maps__BoolIntMap* map) {
const std__lists__BoolList* keys = map->keys;
return keys->len;
}

int32_t std__maps__BoolIntMap__pop(std__maps__BoolIntMap* map, bool key) {
int32_t i = 0;
std__lists__BoolList* keys = map->keys;
std__lists__IntList* values = map->values;
int32_t result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
int32_t default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__FloatBoolMap* std__maps__FloatBoolMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__FloatBoolMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__FloatBoolMap) );
map->keys = std__lists__FloatList__create( arena , capacity );
map->values = std__lists__BoolList__create( arena , capacity );
return map;
}

void std__maps__FloatBoolMap__clear(std__maps__FloatBoolMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__FloatBoolMap__append(std__maps__FloatBoolMap* map, std__arena__Arena* arena, float key, bool value) {
std__lists__FloatList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

void std__maps__FloatBoolMap__add(std__maps__FloatBoolMap* map, std__arena__Arena* arena, float key, bool value) {
std__lists__FloatList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

void std__maps__FloatBoolMap__set(std__maps__FloatBoolMap* map, std__arena__Arena* arena, float key, bool value) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
std__lists__BoolList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__FloatList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

bool std__maps__FloatBoolMap__get(std__maps__FloatBoolMap* map, float key) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
const std__lists__BoolList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
bool default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__FloatBoolMap__contains(std__maps__FloatBoolMap* map, float key) {
int32_t i = 0;
const std__lists__FloatList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__FloatBoolMap__size(std__maps__FloatBoolMap* map) {
const std__lists__FloatList* keys = map->keys;
return keys->len;
}

bool std__maps__FloatBoolMap__pop(std__maps__FloatBoolMap* map, float key) {
int32_t i = 0;
std__lists__FloatList* keys = map->keys;
std__lists__BoolList* values = map->values;
bool result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
bool default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__BoolFloatMap* std__maps__BoolFloatMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__BoolFloatMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__BoolFloatMap) );
map->keys = std__lists__BoolList__create( arena , capacity );
map->values = std__lists__FloatList__create( arena , capacity );
return map;
}

void std__maps__BoolFloatMap__clear(std__maps__BoolFloatMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__BoolFloatMap__append(std__maps__BoolFloatMap* map, std__arena__Arena* arena, bool key, float value) {
std__lists__BoolList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

void std__maps__BoolFloatMap__add(std__maps__BoolFloatMap* map, std__arena__Arena* arena, bool key, float value) {
std__lists__BoolList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

void std__maps__BoolFloatMap__set(std__maps__BoolFloatMap* map, std__arena__Arena* arena, bool key, float value) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
std__lists__FloatList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__BoolList__push(map->keys, arena, key);
std__lists__FloatList__push(map->values, arena, value);
}

float std__maps__BoolFloatMap__get(std__maps__BoolFloatMap* map, bool key) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
const std__lists__FloatList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
float default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__BoolFloatMap__contains(std__maps__BoolFloatMap* map, bool key) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__BoolFloatMap__size(std__maps__BoolFloatMap* map) {
const std__lists__BoolList* keys = map->keys;
return keys->len;
}

float std__maps__BoolFloatMap__pop(std__maps__BoolFloatMap* map, bool key) {
int32_t i = 0;
std__lists__BoolList* keys = map->keys;
std__lists__FloatList* values = map->values;
float result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
float default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

std__maps__BoolBoolMap* std__maps__BoolBoolMap__create(std__arena__Arena* arena, int32_t capacity) {
std__maps__BoolBoolMap* map = {0};
map = std__arena__Arena__alloc( arena , sizeof(std__maps__BoolBoolMap) );
map->keys = std__lists__BoolList__create( arena , capacity );
map->values = std__lists__BoolList__create( arena , capacity );
return map;
}

void std__maps__BoolBoolMap__clear(std__maps__BoolBoolMap* map) {
map->keys->len = 0;
map->values->len = 0;
}

void std__maps__BoolBoolMap__append(std__maps__BoolBoolMap* map, std__arena__Arena* arena, bool key, bool value) {
std__lists__BoolList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

void std__maps__BoolBoolMap__add(std__maps__BoolBoolMap* map, std__arena__Arena* arena, bool key, bool value) {
std__lists__BoolList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

void std__maps__BoolBoolMap__set(std__maps__BoolBoolMap* map, std__arena__Arena* arena, bool key, bool value) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
std__lists__BoolList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
values->data[i] = value;
return ;
}
i = i + 1;
}
std__lists__BoolList__push(map->keys, arena, key);
std__lists__BoolList__push(map->values, arena, value);
}

bool std__maps__BoolBoolMap__get(std__maps__BoolBoolMap* map, bool key) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
const std__lists__BoolList* values = map->values;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return values->data[ i ];
}
i = i + 1;
}
bool default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

bool std__maps__BoolBoolMap__contains(std__maps__BoolBoolMap* map, bool key) {
int32_t i = 0;
const std__lists__BoolList* keys = map->keys;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
return true;
}
i = i + 1;
}
return false;
}

int32_t std__maps__BoolBoolMap__size(std__maps__BoolBoolMap* map) {
const std__lists__BoolList* keys = map->keys;
return keys->len;
}

bool std__maps__BoolBoolMap__pop(std__maps__BoolBoolMap* map, bool key) {
int32_t i = 0;
std__lists__BoolList* keys = map->keys;
std__lists__BoolList* values = map->values;
bool result = {0};
bool found = false;
while (1) {
if (i >= keys->len) {
break;
}
if (memcmp ( & ( keys->data[ i ]) , & key , sizeof(key) ) == 0) {
found = true;
}
if (found) {
result = values->data[ i ];
for (int32_t j = i; j < keys->len- 1; j ++) {
keys->data[j] = keys->data[ j + 1 ];
values->data[j] = values->data[ j + 1 ];
}
keys->len--;
values->len--;
return result;
}
i = i + 1;
}
bool default_val = {0};
memset(&default_val, 0, sizeof(default_val));
return default_val;
}

lexer__Token lexer__create_token(int32_t token_type, char* value) {
lexer__Token t = {0};
t.token_type = token_type;
t.value = std__string__str ( value );
t.line = g_lexer_current_line;
t.column = 0;
return t;
}

lexer__Token lexer__create_token_with_line(int32_t token_type, char* value, int32_t line) {
lexer__Token t = {0};
t.token_type = token_type;
t.value = std__string__str ( value );
t.line = line;
t.column = 0;
return t;
}

bool lexer__is_hex_digit(char ch) {
return ( ch >= '0' && ch <= '9' ) || ( ch >= 'a' && ch <= 'f' ) || ( ch >= 'A' && ch <= 'F' );
}

bool lexer__is_whitespace(char ch) {
return ch == ' ' || ch == '\t' || ch == '\r';
}

bool lexer__is_ident_char(char ch) {
if (std__string__is_alphanum ( (int32_t)( ch ) ) != 0) {
return true;
}
if (ch == '_') {
return true;
}
return false;
}

bool lexer__check_boundary(std__string__string source, int32_t pos, int32_t source_len) {
if (pos >= source_len) {
return true;
}
const char ch = source.data[ pos ];
return ! lexer__is_ident_char ( ch );
}

bool lexer__str_equals(std__string__string s1, char* s2, int32_t start, int32_t len, int32_t source_len) {
if (start + len > source_len) {
return false;
}
int32_t i = 0;
while (1) {
if (i >= len) {
break;
}
if (std__string__get_char ( s1 , start + i ) != s2 [ i ]) {
return false;
}
i++;
}
return true;
}

__list_lexer__Token_t lexer__lex(std__string__string source) {
__list_lexer__Token_t tokens = {0};
int32_t pos = 0;
const int32_t source_len = source.len;
g_lexer_current_line = 1;
while (1) {
if (pos >= source_len) {
break;
}
const char ch = std__string__get_char( source , pos );
if (ch == '*') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '.') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_STAR_DOT, "*."));
pos = pos + 2;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_STAR, "*"));
pos = pos + 1;
}
}
else if (ch == ' ' || ch == '\t' || ch == '\r') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_WHITESPACE, std__string__substring_scse(source, pos, pos + 1)));
pos = pos + 1;
}
else if (ch == '\n') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_NEWLINE, "\n"));
pos = pos + 1;
g_lexer_current_line = g_lexer_current_line + 1;
}
else if (ch == '{') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_LBRACE, "{"));
pos = pos + 1;
}
else if (ch == '}') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_RBRACE, "}"));
pos = pos + 1;
}
else if (ch == ';') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_SEMICOLON, ";"));
pos = pos + 1;
}
else if (ch == ':') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_COLON, ":"));
pos = pos + 1;
}
else if (ch == '!') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '=') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "!="));
pos = pos + 2;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "!"));
pos = pos + 1;
}
}
else if (ch == '=') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '=') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "=="));
pos = pos + 2;
}
else if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '>') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "=>"));
pos = pos + 2;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "="));
pos = pos + 1;
}
}
else if (ch == '-') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '-') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_DECREMENT, "--"));
pos = pos + 2;
}
else if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '=') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MINUS_ASSIGN, "-="));
pos = pos + 2;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MINUS, "-"));
pos = pos + 1;
}
}
else if (ch == '+') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '+') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_INCREMENT, "++"));
pos = pos + 2;
}
else if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '=') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_PLUS_ASSIGN, "+="));
pos = pos + 2;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_PLUS, "+"));
pos = pos + 1;
}
}
else if (ch == '>') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '=') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, ">="));
pos = pos + 2;
}
else if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '>') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, ">>"));
pos = pos + 2;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, ">"));
pos = pos + 1;
}
}
else if (ch == '<') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '=') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "<="));
pos = pos + 2;
}
else if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '<') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "<<"));
pos = pos + 2;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "<"));
pos = pos + 1;
}
}
else if (ch == '/') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '/') {
const int32_t start = pos;
while (1) {
if (pos >= source_len || std__string__get_char ( source , pos ) == '\n') {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_COMMENT, std__string__substring_scse(source, start, pos)));
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_SLASH, "/"));
pos = pos + 1;
}
}
else if (ch == '&') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "&"));
pos = pos + 1;
}
else if (ch == '|') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "|"));
pos = pos + 1;
}
else if (ch == '^') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "^"));
pos = pos + 1;
}
else if (ch == '~') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "~"));
pos = pos + 1;
}
else if (ch == '%') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPERATOR, "%"));
pos = pos + 1;
}
else if (ch == '$') {
if (pos + 1 < source_len && std__string__get_char ( source , pos + 1 ) == '"') {
pos = pos + 2;
const int32_t str_start = pos;
int32_t ending = pos;
while (1) {
if (ending >= source_len) {
break;
}
if (std__string__get_char ( source , ending ) == '"' && ( ending == 0 || std__string__get_char ( source , ending - 1 ) != '\\' )) {
break;
}
else if (std__string__get_char ( source , ending ) == '\\' && ending + 1 < source_len) {
ending = ending + 2;
}
else {
ending = ending + 1;
}
}
const std__string__string raw_inter = std__string__str( std__string__substring_scse ( source , str_start , ending ) );
std__string__string wrapped = std__string__str( "__INTERPOLATED__" );
wrapped = std__string__concat ( wrapped , raw_inter );
wrapped = std__string__concat ( wrapped , std__string__str ( "__INTERPOLATED__" ) );
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_INTERPOLATED_STR, wrapped.data));
pos = ending + 1;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_DOLLAR, "$"));
pos = pos + 1;
}
}
else if (ch == '"') {
int32_t ending = pos + 1;
while (1) {
if (ending >= source_len) {
break;
}
if (std__string__get_char ( source , ending ) == '"') {
break;
}
else if (std__string__get_char ( source , ending ) == '\\' && ending + 1 < source_len) {
ending = ending + 2;
}
else {
ending = ending + 1;
}
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_STR, std__string__substring_scse(source, pos + 1, ending)));
pos = ending + 1;
}
else if ((int32_t)( ch ) == 96) {
int32_t bt_end = pos + 1;
while (1) {
if (bt_end >= source_len) {
break;
}
if ((int32_t)( std__string__get_char ( source , bt_end ) ) == 96) {
break;
}
bt_end = bt_end + 1;
}
const std__string__string raw_content = std__string__str( std__string__substring_scse ( source , pos + 1 , bt_end ) );
std__string__StringBuilder sb = std__string__StringBuilder__init( (uintptr_t)( ( bt_end - pos ) * 2 ) );
int32_t ri = 0;
while (1) {
if (ri >= std__string__str_len ( raw_content )) {
break;
}
const char rc = std__string__get_char( raw_content , ri );
if (rc == '\n') {
std__string__StringBuilder__append_c(&sb, "\\n");
}
else if (rc == '\r') {
std__string__StringBuilder__append_c(&sb, "\\r");
}
else if (rc == '\t') {
std__string__StringBuilder__append_c(&sb, "\\t");
}
else if (rc == '"') {
std__string__StringBuilder__append_c(&sb, "\\\"");
}
else if (rc == '\\') {
std__string__StringBuilder__append_c(&sb, "\\\\");
}
else {
std__string__StringBuilder__append_char(&sb, rc);
}
ri = ri + 1;
}
const std__string__string escaped_content = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_STR, escaped_content.data));
pos = bt_end + 1;
}
else if ((int32_t)( ch ) == 39) {
int32_t cend = pos + 1;
while (1) {
if (cend >= source_len || (int32_t)( std__string__get_char ( source , cend ) ) == 39) {
break;
}
if ((int32_t)( std__string__get_char ( source , cend ) ) == 92 && cend + 1 < source_len) {
cend = cend + 2;
}
else {
cend = cend + 1;
}
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_CHAR, std__string__substring_scse(source, pos + 1, cend)));
pos = cend + 1;
}
else if (ch == '(') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_LPAREN, "("));
pos = pos + 1;
}
else if (ch == ')') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_RPAREN, ")"));
pos = pos + 1;
}
else if (ch == ',') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_COMMA, ","));
pos = pos + 1;
}
else if (ch == '[') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_LBRACKET, "["));
pos = pos + 1;
}
else if (ch == ']') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_RBRACKET, "]"));
pos = pos + 1;
}
else if (ch == '.') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_DOT, "."));
pos = pos + 1;
}
else if (ch == 'a') {
if (lexer__str_equals ( source , "assert" , pos , 6 , source_len ) && lexer__check_boundary ( source , pos + 6 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_ASSERT, "assert"));
pos = pos + 6;
}
else if (lexer__str_equals ( source , "and" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_AND, "and"));
pos = pos + 3;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'b') {
if (lexer__str_equals ( source , "break" , pos , 5 , source_len ) && lexer__check_boundary ( source , pos + 5 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_BREAK, "break"));
pos = pos + 5;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'c') {
if (lexer__str_equals ( source , "continue" , pos , 8 , source_len ) && lexer__check_boundary ( source , pos + 8 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_CONTINUE, "continue"));
pos = pos + 8;
}
else if (lexer__str_equals ( source , "case" , pos , 4 , source_len ) && lexer__check_boundary ( source , pos + 4 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_CASE, "case"));
pos = pos + 4;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'd') {
if (lexer__str_equals ( source , "default" , pos , 7 , source_len ) && lexer__check_boundary ( source , pos + 7 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_DEFAULT, "default"));
pos = pos + 7;
}
else if (lexer__str_equals ( source , "def" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
int32_t lookAhead = pos + 3;
while (1) {
if (lookAhead >= source_len) {
break;
}
const char ch_look = std__string__get_char( source , lookAhead );
if (ch_look != ' ' && ch_look != '\t') {
break;
}
lookAhead = lookAhead + 1;
}
if (lexer__str_equals ( source , "main" , lookAhead , 4 , source_len ) && lexer__check_boundary ( source , lookAhead + 4 , source_len )) {
lookAhead = lookAhead + 4;
while (1) {
if (lookAhead >= source_len) {
break;
}
const char ch_look = std__string__get_char( source , lookAhead );
if (ch_look != ' ' && ch_look != '\t') {
break;
}
lookAhead = lookAhead + 1;
}
if (lookAhead + 1 < source_len && std__string__get_char ( source , lookAhead ) == '(' && std__string__get_char ( source , lookAhead + 1 ) == ')') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MAIN, "main"));
pos = lookAhead + 2;
}
else if (lookAhead < source_len && std__string__get_char ( source , lookAhead ) == '{') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MAIN, "main"));
pos = lookAhead;
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_DEF, "def"));
pos = pos + 3;
}
}
else {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_DEF, "def"));
pos = pos + 3;
}
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'e') {
if (lexer__str_equals ( source , "external" , pos , 8 , source_len ) && lexer__check_boundary ( source , pos + 8 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_EXTERNAL, "external"));
pos = pos + 8;
}
else if (lexer__str_equals ( source , "extern" , pos , 6 , source_len ) && lexer__check_boundary ( source , pos + 6 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_EXTERN, "extern"));
pos = pos + 6;
}
else if (lexer__str_equals ( source , "enum" , pos , 4 , source_len ) && lexer__check_boundary ( source , pos + 4 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_ENUM, "enum"));
pos = pos + 4;
}
else if (lexer__str_equals ( source , "elif" , pos , 4 , source_len ) && lexer__check_boundary ( source , pos + 4 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_ELIF, "elif"));
pos = pos + 4;
}
else if (lexer__str_equals ( source , "else" , pos , 4 , source_len ) && lexer__check_boundary ( source , pos + 4 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_ELSE, "else"));
pos = pos + 4;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'f') {
if (lexer__str_equals ( source , "foreign" , pos , 7 , source_len ) && lexer__check_boundary ( source , pos + 7 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_FOREIGN, "foreign"));
pos = pos + 7;
}
else if (lexer__str_equals ( source , "for" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_FOR, "for"));
pos = pos + 3;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'i') {
if (lexer__str_equals ( source , "in" , pos , 2 , source_len ) && lexer__check_boundary ( source , pos + 2 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IN, "in"));
pos = pos + 2;
}
else if (lexer__str_equals ( source , "if" , pos , 2 , source_len ) && lexer__check_boundary ( source , pos + 2 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IF, "if"));
pos = pos + 2;
}
else if (lexer__str_equals ( source , "is" , pos , 2 , source_len ) && lexer__check_boundary ( source , pos + 2 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IS, "is"));
pos = pos + 2;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'l') {
if (lexer__str_equals ( source , "loop" , pos , 4 , source_len ) && lexer__check_boundary ( source , pos + 4 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_LOOP, "loop"));
pos = pos + 4;
}
else if (lexer__str_equals ( source , "local" , pos , 5 , source_len ) && lexer__check_boundary ( source , pos + 5 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_LOCAL, "local"));
pos = pos + 5;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'm') {
if (lexer__str_equals ( source , "macro" , pos , 5 , source_len ) && lexer__check_boundary ( source , pos + 5 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MACRO, "macro"));
pos = pos + 5;
}
else if (lexer__str_equals ( source , "model" , pos , 5 , source_len ) && lexer__check_boundary ( source , pos + 5 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MODEL, "model"));
pos = pos + 5;
}
else if (lexer__str_equals ( source , "main" , pos , 4 , source_len ) && lexer__check_boundary ( source , pos + 4 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MAIN, "main"));
pos = pos + 4;
}
else if (lexer__str_equals ( source , "mut" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MUT, "mut"));
pos = pos + 3;
}
else if (lexer__str_equals ( source , "mod" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_MOD, "mod"));
pos = pos + 3;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'n') {
if (lexer__str_equals ( source , "new" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_NEW, "new"));
pos = pos + 3;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'o') {
if (lexer__str_equals ( source , "overload" , pos , 8 , source_len ) && lexer__check_boundary ( source , pos + 8 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OVERLOAD, "overload"));
pos = pos + 8;
}
else if (lexer__str_equals ( source , "opaque" , pos , 6 , source_len ) && lexer__check_boundary ( source , pos + 6 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OPAQUE, "opaque"));
pos = pos + 6;
}
else if (lexer__str_equals ( source , "or" , pos , 2 , source_len ) && lexer__check_boundary ( source , pos + 2 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_OR, "or"));
pos = pos + 2;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'p') {
if (lexer__str_equals ( source , "platform" , pos , 8 , source_len ) && lexer__check_boundary ( source , pos + 8 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_PLATFORM, "platform"));
pos = pos + 8;
}
else if (lexer__str_equals ( source , "parallel" , pos , 8 , source_len ) && lexer__check_boundary ( source , pos + 8 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_PARALLEL, "parallel"));
pos = pos + 8;
}
else if (lexer__str_equals ( source , "pub" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_PUB, "pub"));
pos = pos + 3;
}
else if (lexer__str_equals ( source , "put" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_PRINT, "put"));
pos = pos + 3;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'r') {
if (lexer__str_equals ( source , "return" , pos , 6 , source_len ) && lexer__check_boundary ( source , pos + 6 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_RETURN, "return"));
pos = pos + 6;
}
else if (lexer__str_equals ( source , "reduce" , pos , 6 , source_len ) && lexer__check_boundary ( source , pos + 6 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_REDUCE, "reduce"));
pos = pos + 6;
}
else if (lexer__str_equals ( source , "ref" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_REF, "ref"));
pos = pos + 3;
}
else if (lexer__str_equals ( source , "raw" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_RAW, "raw"));
pos = pos + 3;
while (1) {
if (pos >= source_len || ( ! lexer__is_whitespace ( std__string__get_char ( source , pos ) ) && std__string__get_char ( source , pos ) != '\n' )) {
break;
}
if (std__string__get_char ( source , pos ) == '\n') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_NEWLINE, "\n"));
}
else if (std__string__get_char ( source , pos ) == ' ' || std__string__get_char ( source , pos ) == '\t') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_WHITESPACE, std__string__substring_scse(source, pos, pos + 1)));
}
pos = pos + 1;
}
if (pos < source_len && std__string__get_char ( source , pos ) == '{') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_LBRACE, "{"));
pos = pos + 1;
int32_t brace_depth = 1;
const int32_t content_start = pos;
while (1) {
if (pos >= source_len || brace_depth <= 0) {
break;
}
if (std__string__get_char ( source , pos ) == '{') {
brace_depth = brace_depth + 1;
}
else if (std__string__get_char ( source , pos ) == '}') {
brace_depth = brace_depth - 1;
if (brace_depth == 0) {
break;
}
}
pos = pos + 1;
}
if (pos > content_start) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, content_start, pos)));
}
if (pos < source_len && std__string__get_char ( source , pos ) == '}') {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_RBRACE, "}"));
pos = pos + 1;
}
}
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 's') {
if (lexer__str_equals ( source , "switch" , pos , 6 , source_len ) && lexer__check_boundary ( source , pos + 6 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_SWITCH, "switch"));
pos = pos + 6;
}
else if (lexer__str_equals ( source , "single" , pos , 6 , source_len ) && lexer__check_boundary ( source , pos + 6 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_SINGLE, "single"));
pos = pos + 6;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 't') {
if (lexer__str_equals ( source , "test" , pos , 4 , source_len ) && lexer__check_boundary ( source , pos + 4 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_TEST, "test"));
pos = pos + 4;
}
else if (lexer__str_equals ( source , "to" , pos , 2 , source_len ) && lexer__check_boundary ( source , pos + 2 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_TO, "to"));
pos = pos + 2;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'u') {
if (lexer__str_equals ( source , "unsafe" , pos , 6 , source_len ) && lexer__check_boundary ( source , pos + 6 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_UNSAFE, "unsafe"));
pos = pos + 6;
}
else if (lexer__str_equals ( source , "use" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_USE, "use"));
pos = pos + 3;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'v') {
bool at_word_start = false;
if (pos == 0) {
at_word_start = true;
}
else {
const char prev_ch = std__string__get_char( source , pos - 1 );
if (! lexer__is_ident_char ( prev_ch )) {
at_word_start = true;
}
}
if (at_word_start && lexer__str_equals ( source , "val" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_VAL, "val"));
pos = pos + 3;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'w') {
if (lexer__str_equals ( source , "while" , pos , 5 , source_len ) && lexer__check_boundary ( source , pos + 5 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_WHILE, "while"));
pos = pos + 5;
}
else if (lexer__str_equals ( source , "when" , pos , 4 , source_len ) && lexer__check_boundary ( source , pos + 4 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_WHEN, "when"));
pos = pos + 4;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == 'x') {
if (lexer__str_equals ( source , "xor" , pos , 3 , source_len ) && lexer__check_boundary ( source , pos + 3 , source_len )) {
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_XOR, "xor"));
pos = pos + 3;
}
else {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
}
else if (ch == '0' && pos + 1 < source_len && ( std__string__get_char ( source , pos + 1 ) == 'x' || std__string__get_char ( source , pos + 1 ) == 'X' )) {
const int32_t start = pos;
pos = pos + 2;
while (1) {
if (pos >= source_len || ! lexer__is_hex_digit ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
else if (lexer__is_ident_char ( ch )) {
const int32_t start = pos;
while (1) {
if (pos >= source_len || ! lexer__is_ident_char ( std__string__get_char ( source , pos ) )) {
break;
}
pos = pos + 1;
}
__list_lexer__Token_push(&tokens, lexer__create_token(lexer__TokenType_IDENTIFIER, std__string__substring_scse(source, start, pos)));
}
else {
pos = pos + 1;
}
}
return tokens;
}

void parser__initialize_all() {
std__arena__Arena arena = std__arena__Arena__create( 1024 * 1024 );
g_type_aliases = (*std__maps__StringStringMap__create( &arena , 128 ));
g_imported_modules = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_list_of_types = (*std__maps__StringStringMap__create( &arena , 128 ));
g_var_mutability = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_var_actually_mutated = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_mutable_vars_in_scope.len = 0;
g_all_vars_in_scope.len = 0;
g_var_actually_used = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_var_declaration_lines = (*std__maps__StringIntMap__create( &arena , 128 ));
g_var_declaration_files = (*std__maps__StringStringMap__create( &arena , 128 ));
g_var_scope_depth = (*std__maps__StringIntMap__create( &arena , 128 ));
g_current_scope_depth = 0;
g_check_shadowing = false;
g_macro_names.len = 0;
g_macro_defs.len = 0;
}

void parser__macros_add(std__string__string name, structs__MacroDef defn) {
int32_t i = 0;
while (1) {
if (i >= len_v(g_macro_names)) {
break;
}
if (std__string__compare ( g_macro_names.data[ i ], name ) == 0) {
g_macro_defs.data[i] = defn;
return ;
}
i++;
}
__list_std__string_push(&g_macro_names, name);
__list_structs__MacroDef_push(&g_macro_defs, defn);
}

bool parser__macros_contains(std__string__string name) {
int32_t i = 0;
while (1) {
if (i >= len_v(g_macro_names)) {
break;
}
if (std__string__compare ( g_macro_names.data[ i ], name ) == 0) {
return true;
}
i++;
}
return false;
}

structs__MacroDef parser__macros_get(std__string__string name) {
int32_t i = 0;
while (1) {
if (i >= len_v(g_macro_names)) {
break;
}
if (std__string__compare ( g_macro_names.data[ i ], name ) == 0) {
return g_macro_defs.data[ i ];
}
i++;
}
structs__MacroDef empty = {0};
return empty;
}

bool parser__is_all_digits(std__string__string s) {
if (std__string__str_len ( s ) == 0) {
return false;
}
int32_t i = 0;
while (1) {
if (i >= std__string__str_len ( s )) {
break;
}
const char ch = std__string__get_char( s , i );
if (ch < '0' || ch > '9') {
return false;
}
i++;
}
return true;
}

std__string__string parser__expand_macros_in_expression(std__string__string expr) {
std__string__StringBuilder result = std__string__StringBuilder__init( 512 );
int32_t i = 0;
const int32_t expr_len = std__string__str_len( expr );
while (1) {
if (i >= expr_len) {
break;
}
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch != ' ' && ch != '\t') {
break;
}
std__string__StringBuilder__append_char(&result, ch);
i++;
}
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) || ch == '_') {
const int32_t ident_start = i;
while (1) {
if (i >= expr_len) {
break;
}
const char c = std__string__get_char( expr , i );
if (! ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) || ( c >= '0' && c <= '9' ) || c == '_' )) {
break;
}
i++;
}
const std__string__string ident = std__string__substring_se( expr , ident_start , i );
const int32_t ws_start = i;
while (1) {
if (i >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , i );
if (ws != ' ' && ws != '\t') {
break;
}
i++;
}
const std__string__string ws_after = std__string__substring_se( expr , ws_start , i );
if (i < expr_len && std__string__get_char ( expr , i ) == '(' && parser__macros_contains ( ident )) {
i++;
__list_std__string_t args = {0};
std__string__StringBuilder current_arg = std__string__StringBuilder__init( 128 );
int32_t paren_depth = 0;
while (1) {
if (i >= expr_len) {
break;
}
const char c = std__string__get_char( expr , i );
if (c == '(') {
paren_depth++;
std__string__StringBuilder__append_char(&current_arg, c);
}
else if (c == ')') {
if (paren_depth == 0) {
const std__string__string arg_str = std__string__strip( std__string__StringBuilder__to_string( &current_arg ) );
if (std__string__str_len ( arg_str ) > 0) {
__list_std__string_push(&args, arg_str);
}
std__string__StringBuilder__destroy(&current_arg);
i++;
break;
}
else {
paren_depth--;
std__string__StringBuilder__append_char(&current_arg, c);
}
}
else if (c == ',' && paren_depth == 0) {
const std__string__string arg_str = std__string__strip( std__string__StringBuilder__to_string( &current_arg ) );
if (std__string__str_len ( arg_str ) > 0) {
__list_std__string_push(&args, arg_str);
}
std__string__StringBuilder__destroy(&current_arg);
current_arg = std__string__StringBuilder__init( 128 );
}
else {
std__string__StringBuilder__append_char(&current_arg, c);
}
i++;
}
const structs__MacroDef defn = parser__macros_get( ident );
std__string__StringBuilder expanded = std__string__StringBuilder__init( 256 );
int32_t tok_idx = 0;
while (1) {
if (tok_idx >= len_ptr(defn.body)) {
break;
}
const lexer__Token tok = defn.body->data[ tok_idx ];
if (tok.token_type== lexer__TokenType_IDENTIFIER) {
bool found_param = false;
int32_t param_idx = 0;
while (1) {
if (param_idx >= len_ptr(defn.params) || param_idx >= len_v(args)) {
break;
}
if (std__string__compare ( tok.value, defn.params->data[ param_idx ]) == 0) {
const std__string__string arg_expanded = parser__expand_macros_in_expression( args.data[ param_idx ]);
std__string__StringBuilder__append(&expanded, arg_expanded);
found_param = true;
break;
}
param_idx++;
}
if (! found_param) {
std__string__StringBuilder__append(&expanded, tok.value);
}
}
else if (tok.token_type== lexer__TokenType_STR) {
std__string__StringBuilder__append_char(&expanded, '"');
std__string__StringBuilder__append(&expanded, tok.value);
std__string__StringBuilder__append_char(&expanded, '"');
}
else if (tok.token_type== lexer__TokenType_CHAR) {
std__string__StringBuilder__append_char(&expanded, '\'');
std__string__StringBuilder__append(&expanded, tok.value);
std__string__StringBuilder__append_char(&expanded, '\'');
}
else if (tok.token_type!= lexer__TokenType_WHITESPACE&& tok.token_type!= lexer__TokenType_NEWLINE) {
std__string__StringBuilder__append(&expanded, tok.value);
}
else {
std__string__StringBuilder__append_char(&expanded, ' ');
}
tok_idx++;
}
const std__string__string expanded_text = std__string__StringBuilder__to_string( &expanded );
std__string__StringBuilder__destroy(&expanded);
const std__string__string fully_expanded = parser__expand_macros_in_expression( expanded_text );
std__string__StringBuilder__append(&result, fully_expanded);
}
else {
std__string__StringBuilder__append(&result, ident);
std__string__StringBuilder__append(&result, ws_after);
}
}
else {
std__string__StringBuilder__append_char(&result, ch);
i++;
}
}
const std__string__string final_result = std__string__StringBuilder__to_string( &result );
std__string__StringBuilder__destroy(&result);
return final_result;
}

void parser__register_variable(std__string__string var_name, bool is_mutable, int32_t line_num, std__string__string source_file) {
std__arena__Arena arena = std__arena__Arena__create( 1024 );
gstate__debug_print_raw("\n[DEBUG] register_variable:");
gstate__debug_print_raw("\n[DEBUG]   name:");
gstate__debug_print_str(var_name);
gstate__debug_print_raw("\n[DEBUG]   is_mutable:");
if (is_mutable) {
gstate__debug_print_raw("true");
}
else {
gstate__debug_print_raw("false");
}
if (std__maps__StringBoolMap__contains( &g_var_mutability , var_name )) {
if (std__maps__StringIntMap__contains( &g_var_scope_depth , var_name )) {
const int32_t prev_depth = std__maps__StringIntMap__get( &g_var_scope_depth , var_name );
if (prev_depth < g_current_scope_depth) {
const int32_t prev_line = std__maps__StringIntMap__get( &g_var_declaration_lines , var_name );
const std__string__string prev_file = std__maps__StringStringMap__get( &g_var_declaration_files , var_name );
std__io__print(source_file);
std__io__print(":");
std__io__print(std__string__i32_to_string(line_num));
std__io__print(": error: variable '");
std__io__print(var_name);
std__io__print("' shadows previously declared variable at ");
std__io__print(prev_file);
std__io__print(":");
std__io__print(std__string__i32_to_string(prev_line));
std__io__println("");
std__os__quit(1);
}
}
}
if (g_check_shadowing && imports__is_symbol_imported ( var_name )) {
std__io__print(source_file);
std__io__print(":");
std__io__print(std__string__i32_to_string(line_num));
std__io__print(": error: variable '");
std__io__print(var_name);
std__io__print("' shadows imported symbol '");
std__io__print(var_name);
std__io__println("'");
std__os__quit(1);
}
std__maps__StringBoolMap__set(&g_var_mutability, &arena, var_name, is_mutable);
std__maps__StringIntMap__set(&g_var_declaration_lines, &arena, var_name, line_num);
std__maps__StringStringMap__set(&g_var_declaration_files, &arena, var_name, source_file);
std__maps__StringIntMap__set(&g_var_scope_depth, &arena, var_name, g_current_scope_depth);
parser__register_for_usage_tracking(var_name);
}

void parser__register_for_mutation_tracking(std__string__string var_name) {
__list_std__string_push(&g_mutable_vars_in_scope, var_name);
}

void parser__register_for_usage_tracking(std__string__string var_name) {
__list_std__string_push(&g_all_vars_in_scope, var_name);
}

void parser__push_scope() {
g_current_scope_depth = g_current_scope_depth + 1;
}

void parser__pop_scope() {
if (g_current_scope_depth <= 0) {
return ;
}
int32_t i = 0;
while (1) {
if (i >= len_v(g_all_vars_in_scope)) {
break;
}
const std__string__string var_name = g_all_vars_in_scope.data[ i ];
if (std__maps__StringIntMap__contains( &g_var_scope_depth , var_name )) {
const int32_t var_depth = std__maps__StringIntMap__get( &g_var_scope_depth , var_name );
if (var_depth == g_current_scope_depth) {
std__maps__StringBoolMap__pop(&g_var_mutability, var_name);
std__maps__StringIntMap__pop(&g_var_declaration_lines, var_name);
std__maps__StringStringMap__pop(&g_var_declaration_files, var_name);
std__maps__StringIntMap__pop(&g_var_scope_depth, var_name);
}
}
i++;
}
g_current_scope_depth = g_current_scope_depth - 1;
}

void parser__clear_local_variables() {
__list_std__string_t new_all_vars = {0};
__list_std__string_t new_mut_vars = {0};
int32_t i = 0;
while (1) {
if (i >= len_v(g_all_vars_in_scope)) {
break;
}
const std__string__string var_name = g_all_vars_in_scope.data[ i ];
if (std__maps__StringIntMap__contains( &g_var_scope_depth , var_name )) {
const int32_t var_depth = std__maps__StringIntMap__get( &g_var_scope_depth , var_name );
if (var_depth == 0) {
__list_std__string_push(&new_all_vars, var_name);
}
else {
std__maps__StringBoolMap__pop(&g_var_mutability, var_name);
std__maps__StringBoolMap__pop(&g_var_actually_mutated, var_name);
std__maps__StringBoolMap__pop(&g_var_actually_used, var_name);
std__maps__StringIntMap__pop(&g_var_declaration_lines, var_name);
std__maps__StringStringMap__pop(&g_var_declaration_files, var_name);
std__maps__StringIntMap__pop(&g_var_scope_depth, var_name);
}
}
i++;
}
int32_t j = 0;
while (1) {
if (j >= len_v(new_all_vars)) {
break;
}
const std__string__string var_name = new_all_vars.data[ j ];
if (std__maps__StringBoolMap__contains( &g_var_mutability , var_name )) {
if (std__maps__StringBoolMap__get( &g_var_mutability , var_name )) {
__list_std__string_push(&new_mut_vars, var_name);
}
}
j++;
}
g_all_vars_in_scope = new_all_vars;
g_mutable_vars_in_scope = new_mut_vars;
}

bool parser__is_variable_declared(std__string__string var_name) {
const bool declared = std__maps__StringBoolMap__contains( &g_var_mutability , var_name );
gstate__debug_print_raw("\n[DEBUG] is_variable_declared:");
gstate__debug_print_str(var_name);
if (declared) {
gstate__debug_print_raw("\n[DEBUG]   declared: true");
}
else {
gstate__debug_print_raw("\n[DEBUG]   declared: false");
}
return declared;
}

bool parser__is_variable_mutable(std__string__string var_name) {
if (! parser__is_variable_declared ( var_name )) {
gstate__debug_print_raw("\n[DEBUG] is_variable_mutable: not declared, treating as mutable:");
gstate__debug_print_str(var_name);
return true;
}
const bool mut_val = std__maps__StringBoolMap__get( &g_var_mutability , var_name );
gstate__debug_print_raw("\n[DEBUG] is_variable_mutable:");
gstate__debug_print_str(var_name);
if (mut_val) {
gstate__debug_print_raw("\n[DEBUG]   mutable: true");
}
else {
gstate__debug_print_raw("\n[DEBUG]   mutable: false");
}
return mut_val;
}

void parser__mark_variable_mutated(std__string__string var_name) {
std__arena__Arena arena = std__arena__Arena__create( 512 );
std__maps__StringBoolMap__set(&g_var_actually_mutated, &arena, var_name, true);
}

void parser__mark_variable_used(std__string__string var_name) {
std__arena__Arena arena = std__arena__Arena__create( 512 );
std__maps__StringBoolMap__set(&g_var_actually_used, &arena, var_name, true);
}

void parser__scan_expression_for_usage(std__string__string expr) {
int32_t pos = 0;
while (1) {
if (pos >= std__string__str_len ( expr )) {
break;
}
const char ch = std__string__get_char( expr , pos );
if (( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) || ch == '_') {
const int32_t id_start = pos;
int32_t id_end = pos;
while (1) {
if (id_end >= std__string__str_len ( expr )) {
break;
}
const char ich = std__string__get_char( expr , id_end );
if (( ich >= 'a' && ich <= 'z' ) || ( ich >= 'A' && ich <= 'Z' ) || ( ich >= '0' && ich <= '9' ) || ich == '_') {
id_end = id_end + 1;
}
else {
break;
}
}
const std__string__string var_name = std__string__substring_se( expr , id_start , id_end );
if (std__string__str_len ( var_name ) > 0 && parser__is_variable_declared ( var_name )) {
parser__mark_variable_used(var_name);
}
pos = id_end;
}
else {
pos++;
}
}
}

bool parser__contains_c_call(std__string__string s) {
if (s.len< 2) {
return false;
}
uintptr_t i = 0;
while (1) {
if (i >= s.len) {
break;
}
if (s . data [ i ] == 'C') {
uintptr_t j = i + 1;
while (1) {
if (j >= s.len) {
break;
}
const char ch = s.data[ j ];
if (ch == ' ' || ch == '\t') {
j++;
continue;
}
if (ch == '.') {
return true;
}
break;
}
}
i++;
}
return false;
}

void parser__scan_expression_for_addr(std__string__string expr) {
int32_t pos = 0;
while (1) {
if (pos >= std__string__str_len ( expr )) {
break;
}
if (pos + 4 <= std__string__str_len ( expr )) {
const std__string__string substr = std__string__substring_se( expr , pos , pos + 4 );
if (std__string__equals_c ( substr , "addr" )) {
int32_t scan_pos = pos + 4;
while (1) {
if (scan_pos >= std__string__str_len ( expr )) {
break;
}
const char ch = std__string__get_char( expr , scan_pos );
if (ch != ' ' && ch != '\t') {
break;
}
scan_pos++;
}
if (scan_pos < std__string__str_len ( expr ) && std__string__get_char ( expr , scan_pos ) == '(') {
scan_pos++;
const int32_t arg_start = scan_pos;
int32_t arg_end = scan_pos;
int32_t paren_depth = 1;
while (1) {
if (arg_end >= std__string__str_len ( expr )) {
break;
}
const char ach = std__string__get_char( expr , arg_end );
if (ach == '(') {
paren_depth = paren_depth + 1;
}
else if (ach == ')') {
paren_depth = paren_depth - 1;
if (paren_depth == 0) {
break;
}
}
arg_end++;
}
if (arg_end > arg_start) {
const std__string__string arg = std__string__strip( std__string__substring_se ( expr , arg_start , arg_end ) );
std__string__string var_name = arg;
const int32_t dot_pos = std__string__find_char_from( var_name , '.' , (uintptr_t)( 0 ) );
const int32_t star_pos = std__string__find_char_from( var_name , '*' , (uintptr_t)( 0 ) );
if (dot_pos > 0) {
var_name = std__string__strip ( std__string__substring_se ( var_name , 0 , dot_pos ) );
}
else if (star_pos > 0) {
var_name = std__string__strip ( std__string__substring_se ( var_name , 0 , star_pos ) );
}
if (std__string__str_len ( var_name ) > 0) {
parser__mark_variable_mutated(var_name);
}
}
}
}
}
pos++;
}
}

void parser__scan_expression_for_c_calls(std__string__string expr) {
if (! parser__contains_c_call ( expr )) {
return ;
}
int32_t pos = 0;
while (1) {
if (pos >= std__string__str_len ( expr )) {
break;
}
const char ch = std__string__get_char( expr , pos );
if (( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) || ch == '_') {
const int32_t id_start = pos;
int32_t id_end = pos;
while (1) {
if (id_end >= std__string__str_len ( expr )) {
break;
}
const char ich = std__string__get_char( expr , id_end );
if (( ich >= 'a' && ich <= 'z' ) || ( ich >= 'A' && ich <= 'Z' ) || ( ich >= '0' && ich <= '9' ) || ich == '_') {
id_end = id_end + 1;
}
else {
break;
}
}
const std__string__string var_name = std__string__substring_se( expr , id_start , id_end );
if (std__string__str_len ( var_name ) > 0 && parser__is_variable_declared ( var_name )) {
parser__mark_variable_used(var_name);
if (parser__is_variable_mutable ( var_name )) {
parser__mark_variable_mutated(var_name);
}
}
pos = id_end;
}
else {
pos = pos + 1;
}
}
}

void parser__scan_function_args_for_ref_params(std__string__string args_str) {
__list_std__string_t args = {0};
std__string__StringBuilder current_arg = std__string__StringBuilder__init( 128 );
int32_t depth = 0;
int32_t i = 0;
while (1) {
if (i >= std__string__str_len ( args_str )) {
break;
}
const char ch = std__string__get_char( args_str , i );
if (ch == '(' || ch == '[') {
depth = depth + 1;
std__string__StringBuilder__append_char(&current_arg, ch);
}
else if (ch == ')' || ch == ']') {
depth = depth - 1;
std__string__StringBuilder__append_char(&current_arg, ch);
}
else if (ch == ',' && depth == 0) {
const std__string__string arg = std__string__strip( std__string__StringBuilder__to_string( &current_arg ) );
if (std__string__str_len ( arg ) > 0) {
__list_std__string_push(&args, arg);
}
std__string__StringBuilder__destroy(&current_arg);
current_arg = std__string__StringBuilder__init( 128 );
}
else {
std__string__StringBuilder__append_char(&current_arg, ch);
}
i = i + 1;
}
const std__string__string last_arg = std__string__strip( std__string__StringBuilder__to_string( &current_arg ) );
if (std__string__str_len ( last_arg ) > 0) {
__list_std__string_push(&args, last_arg);
}
std__string__StringBuilder__destroy(&current_arg);
int32_t arg_idx = 0;
while (1) {
if (arg_idx >= len_v(args)) {
break;
}
const std__string__string arg = args.data[ arg_idx ];
bool is_simple_var = true;
int32_t j = 0;
while (1) {
if (j >= std__string__str_len ( arg )) {
break;
}
const char c = std__string__get_char( arg , j );
if (c == '(' || c == ')' || c == '.' || c == '+' || c == '-' || c == '*' || c == '/' || c == '[' || c == ']') {
is_simple_var = false;
break;
}
j = j + 1;
}
if (is_simple_var && std__string__str_len ( arg ) > 0) {
const char first_ch = std__string__get_char( arg , 0 );
if (( first_ch >= 'a' && first_ch <= 'z' ) || ( first_ch >= 'A' && first_ch <= 'Z' ) || first_ch == '_') {
parser__mark_variable_used(arg);
parser__mark_variable_mutated(arg);
}
}
arg_idx = arg_idx + 1;
}
}

void parser__check_null_usage(structs__ParserContext* ctx, std__string__string ident) {
if (std__string__equals_c ( ident , "NULL" )) {
std__io__print(ctx->filename);
std__io__print(":");
std__io__print(std__string__i32_to_string(parser__current_line(ctx)));
std__io__println(": error: usage of raw NULL is prohibited, use 'nil' instead.");
exit(1);
}
}

bool parser__has_function_call_in_expression(std__string__string expr) {
int32_t i = 0;
const int32_t expr_len = std__string__str_len( expr );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) || ch == '_') {
const int32_t id_start = i;
int32_t id_end = i;
while (1) {
if (id_end >= expr_len) {
break;
}
const char ich = std__string__get_char( expr , id_end );
if (( ich >= 'a' && ich <= 'z' ) || ( ich >= 'A' && ich <= 'Z' ) || ( ich >= '0' && ich <= '9' ) || ich == '_') {
id_end++;
}
else {
break;
}
}
const std__string__string ident = std__string__substring_se( expr , id_start , id_end );
int32_t j = id_end;
while (1) {
if (j >= expr_len) {
break;
}
const char wch = std__string__get_char( expr , j );
if (wch == ' ' || wch == '\t' || wch == '\n') {
j++;
}
else {
break;
}
}
if (j < expr_len && std__string__get_char ( expr , j ) == '(') {
if (! std__string__equals_c ( ident , "new" ) && ! std__string__equals_c ( ident , "cast" )) {
return true;
}
}
i = id_end;
}
else {
i++;
}
}
return false;
}

std__string__string parser__extract_function_name(std__string__string expr) {
int32_t i = 0;
const int32_t expr_len = std__string__str_len( expr );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) || ch == '_') {
const int32_t id_start = i;
int32_t id_end = i;
while (1) {
if (id_end >= expr_len) {
break;
}
const char ich = std__string__get_char( expr , id_end );
if (( ich >= 'a' && ich <= 'z' ) || ( ich >= 'A' && ich <= 'Z' ) || ( ich >= '0' && ich <= '9' ) || ich == '_') {
id_end = id_end + 1;
}
else {
break;
}
}
const std__string__string ident = std__string__substring_se( expr , id_start , id_end );
int32_t j = id_end;
while (1) {
if (j >= expr_len) {
break;
}
const char wch = std__string__get_char( expr , j );
if (wch == ' ' || wch == '\t' || wch == '\n') {
j = j + 1;
}
else {
break;
}
}
if (j < expr_len && std__string__get_char ( expr , j ) == '(') {
if (! std__string__equals_c ( ident , "new" ) && ! std__string__equals_c ( ident , "cast" )) {
return std__string__concat( ident , std__string__str ( "()" ) );
}
}
i = id_end;
}
else {
i++;
}
}
return std__string__str( "<unknown function>" );
}

bool parser__has_pointer_syntax(std__string__string type_str) {
const int32_t len = std__string__str_len( type_str );
if (len == 0) {
return false;
}
int32_t i = 0;
while (1) {
if (i >= len) {
break;
}
const char ch = std__string__get_char( type_str , i );
if (ch == '*') {
if (i > 0) {
const char prev_ch = std__string__get_char( type_str , i - 1 );
if (( prev_ch >= 'a' && prev_ch <= 'z' ) || ( prev_ch >= 'A' && prev_ch <= 'Z' ) || ( prev_ch >= '0' && prev_ch <= '9' ) || prev_ch == '_') {
return true;
}
}
}
i++;
}
return false;
}

void parser__add_child_to_ast(structs__ASTNode* ast, structs__ASTNode child) {
if (ast->children== nil) {
__list_structs__ASTNode_t new_list = {0};
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &new_list, list_size);
ast->children = heap_list;
}
}
if (ast->children!= nil) {
__list_structs__ASTNode_t temp_list = {0};
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
memcpy(&temp_list, ast->children, list_size);
__list_structs__ASTNode_push(&temp_list, child);
memcpy(ast->children, &temp_list, list_size);
}
}

structs__ASTNode parser__parse(__list_lexer__Token_t* tokens, bool is_axec, bool check_entry_point, std__string__string current_module, std__string__string filename) {
structs__ParserContext ctx = {0};
ctx.tokens = tokens;
ctx.pos = 0;
ctx.is_axec = is_axec;
ctx.check_entry_point = check_entry_point;
ctx.current_module = current_module;
ctx.filename = filename;
g_check_shadowing = check_entry_point;
gstate__debug_print_raw("=== DEBUG TOKENS ===");
int32_t i = 0;
while (1) {
if (i >= len_ptr(ctx.tokens)) {
break;
}
const lexer__Token t = ctx.tokens->data[ i ];
gstate__debug_print_i32(i);
gstate__debug_print_i32(t.token_type);
gstate__debug_print_str(t.value);
i = i + 1;
}
gstate__debug_print_raw("=== END TOKENS ===");
structs__ASTNode ast = {0};
ast.node_type = std__string__str ( "Program" );
ast.line = 1;
std__maps__StringStringMap__clear(&g_type_aliases);
std__maps__StringBoolMap__clear(&g_imported_modules);
std__maps__StringStringMap__clear(&g_list_of_types);
std__maps__StringBoolMap__clear(&g_var_mutability);
if (std__string__str_len ( current_module ) > 0) {
gstate__debug_print_raw("Auto-imported current module: ");
gstate__debug_print_str(current_module);
}
while (1) {
if (ctx.pos>= len_ptr(ctx.tokens)) {
break;
}
parser__skip_whitespace(&ctx);
if (ctx.pos>= len_ptr(ctx.tokens)) {
break;
}
parser__parse_top_level(&ctx, &ast);
}
return ast;
}

void parser__parse_top_level(structs__ParserContext* ctx, structs__ASTNode* ast) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
return ;
}
const  token_type = ctx->tokens->data[ ctx->pos].token_type;
if (token_type == lexer__TokenType_COMMENT) {
ctx->pos++;
return ;
}
if (token_type == lexer__TokenType_USE) {
structs__ASTNode node = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( node.node_type) > 0) {
parser__add_child_to_ast(ast, node);
}
return ;
}
if (token_type == lexer__TokenType_IDENTIFIER) {
const lexer__Token ident_tok = ctx->tokens->data[ ctx->pos];
const std__string__string ident_name = ident_tok.value;
parser__check_null_usage(ctx, ident_name);
if (parser__macros_contains ( ident_name )) {
ctx->pos = ctx->pos+ 1;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__string__string err = std__string__str( "Expected '(' after macro name" );
err = std__string__concat ( err , std__string__str ( " instead got " ) );
err = std__string__concat ( err , ctx->tokens->data[ ctx->pos].value);
std__errors__enforce(false, std__errors__error__create(err.data));
return ;
}
parser__consume(ctx);
__list_std__string_t args = {0};
std__string__string current_arg = std__string__str( "" );
int32_t paren_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_RPAREN&& paren_depth == 0) {
const std__string__string trimmed = std__string__strip( current_arg );
if (std__string__str_len ( trimmed ) > 0) {
__list_std__string_push(&args, trimmed);
}
parser__consume(ctx);
break;
}
if (t.token_type== lexer__TokenType_LPAREN) {
paren_depth = paren_depth + 1;
current_arg = std__string__concat ( current_arg , t.value);
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_RPAREN) {
paren_depth = paren_depth - 1;
current_arg = std__string__concat ( current_arg , t.value);
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_COMMA&& paren_depth == 0) {
const std__string__string trimmed_arg = std__string__strip( current_arg );
if (std__string__str_len ( trimmed_arg ) > 0) {
__list_std__string_push(&args, trimmed_arg);
}
current_arg = std__string__str ( "" );
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_STR) {
current_arg = std__string__concat ( current_arg , std__string__str ( "\"" ) );
current_arg = std__string__concat ( current_arg , t.value);
current_arg = std__string__concat ( current_arg , std__string__str ( "\"" ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
current_arg = std__string__concat ( current_arg , std__string__str ( "'" ) );
current_arg = std__string__concat ( current_arg , t.value);
current_arg = std__string__concat ( current_arg , std__string__str ( "'" ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
current_arg = std__string__concat ( current_arg , std__string__str ( " " ) );
}
else {
current_arg = std__string__concat ( current_arg , t.value);
}
parser__consume(ctx);
}
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after macro invocation" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
const structs__MacroDef defn = parser__macros_get( ident_name );
__list_lexer__Token_t expanded_tokens = {0};
int32_t i_tok = 0;
while (1) {
if (i_tok >= len_ptr(defn.body)) {
break;
}
__list_lexer__Token_push(&expanded_tokens, defn.body->data[i_tok]);
i_tok = i_tok + 1;
}
int32_t i_param = 0;
while (1) {
if (i_param >= len_ptr(defn.params) || i_param >= len_v(args)) {
break;
}
const std__string__string param_name = defn.params->data[ i_param ];
const std__string__string arg_expr = args.data[ i_param ];
int32_t j_tok = 0;
while (1) {
if (j_tok >= len_v(expanded_tokens)) {
break;
}
if (expanded_tokens.data[ j_tok ].token_type== lexer__TokenType_IDENTIFIER) {
lexer__Token* exp_token = &(expanded_tokens.data[ j_tok ]);
if (std__string__compare ( exp_token->value, param_name ) == 0) {
exp_token->value = arg_expr;
if (parser__is_all_digits ( arg_expr )) {
exp_token->token_type = lexer__TokenType_NUMBER;
}
}
}
j_tok = j_tok + 1;
}
i_param = i_param + 1;
}
const __list_lexer__Token_t* expanded_ref = &expanded_tokens;
const structs__ASTNode expanded_ast = parser__parse( expanded_ref , ctx->is_axec, false , ctx->current_module, ctx->filename);
if (expanded_ast.children!= nil) {
int32_t k = 0;
while (1) {
if (k >= (*expanded_ast.children) . len) {
break;
}
parser__add_child_to_ast(ast, expanded_ast.children->data[k]);
k = k + 1;
}
}
return ;
}
}
if (token_type == lexer__TokenType_MAIN) {
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_LBRACE) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after 'def main()'" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
ctx->pos++;
parser__clear_local_variables();
g_function_has_raw_block = false;
g_current_scope_depth = 1;
structs__ASTNode main_node = {0};
main_node.node_type = std__string__str ( "Function" );
main_node.data.function.name = std__string__str ( "main" );
main_node.data.function.return_type = std__string__str ( "" );
main_node.data.function.is_public = false;
__list_std__string_t empty_params = {0};
const uintptr_t params_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_params = (__list_std__string_t*)( malloc( params_size ) );
if (heap_params != nil) {
memcpy(heap_params, &empty_params, params_size);
main_node.data.function.params = heap_params;
}
__list_structs__ASTNode_t children = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
ctx->pos++;
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&children, stmt);
}
}
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &children, list_size);
main_node.children = heap_list;
}
if (! g_function_has_raw_block) {
int32_t i_mut = 0;
while (1) {
if (i_mut >= len_v(g_mutable_vars_in_scope)) {
break;
}
const std__string__string var_name = g_mutable_vars_in_scope.data[ i_mut ];
if (std__maps__StringIntMap__contains( &g_var_scope_depth , var_name )) {
const int32_t var_depth = std__maps__StringIntMap__get( &g_var_scope_depth , var_name );
if (var_depth == 0) {
i_mut++;
continue;
}
}
if (! std__maps__StringBoolMap__contains( &g_var_actually_mutated , var_name )) {
std__io__print(ctx->filename);
std__io__print(":");
std__io__print(std__string__i32_to_string(1));
std__io__print(": error: variable '");
std__io__print(var_name);
std__io__println("' is declared 'mut' but is never mutated. Use 'val' instead.");
std__os__quit(1);
}
i_mut++;
}
}
if (! g_function_has_raw_block) {
int32_t i_unused = 0;
while (1) {
if (i_unused >= len_v(g_all_vars_in_scope)) {
break;
}
const std__string__string var_name = g_all_vars_in_scope.data[ i_unused ];
if (std__maps__StringIntMap__contains( &g_var_scope_depth , var_name )) {
const int32_t var_depth = std__maps__StringIntMap__get( &g_var_scope_depth , var_name );
if (var_depth == 0) {
i_unused++;
continue;
}
}
if (! std__maps__StringBoolMap__contains( &g_var_actually_used , var_name )) {
int32_t decl_line = 1;
std__string__string decl_file = ctx->filename;
if (std__maps__StringIntMap__contains( &g_var_declaration_lines , var_name )) {
decl_line = std__maps__StringIntMap__get( &g_var_declaration_lines , var_name );
}
if (std__maps__StringStringMap__contains( &g_var_declaration_files , var_name )) {
decl_file = std__maps__StringStringMap__get( &g_var_declaration_files , var_name );
}
std__io__print(decl_file);
std__io__print(":");
std__io__print(std__string__i32_to_string(decl_line));
std__io__print(": error: variable '");
std__io__print(var_name);
std__io__println("' is declared but never used.");
std__os__quit(1);
}
i_unused++;
}
}
parser__clear_local_variables();
g_current_scope_depth = 0;
parser__add_child_to_ast(ast, main_node);
return ;
}
if (token_type == lexer__TokenType_LBRACKET) {
__list_std__string_t tags = {0};
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_IDENTIFIER) {
const std__string__string tag_name = ctx->tokens->data[ ctx->pos].value;
if (! std__string__equals_c ( tag_name , "inline" ) && ! std__string__equals_c ( tag_name , "noinline" ) && ! std__string__equals_c ( tag_name , "cold" ) && ! std__string__equals_c ( tag_name , "hot" ) && ! std__string__equals_c ( tag_name , "entry" )) {
std__io__print(ctx->filename);
std__io__print(":");
std__io__print(std__string__i32_to_string(parser__current_line(ctx)));
std__io__print(": error: unrecognized function tag '");
std__io__print(tag_name);
std__io__println("'. Supported tags: [inline], [noinline], [cold], [hot], [entry].");
std__os__quit(1);
}
__list_std__string_push(&tags, tag_name);
ctx->pos++;
parser__skip_whitespace(ctx);
}
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACKET) {
ctx->pos++;
parser__skip_whitespace(ctx);
}
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_DEF) {
ctx->pos++;
structs__ASTNode func_node = parser__parse_function( ctx );
if (std__string__str_len ( func_node.node_type) > 0) {
const uintptr_t tags_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_tags = (__list_std__string_t*)( malloc( tags_size ) );
if (heap_tags != nil) {
memcpy(heap_tags, &tags, tags_size);
func_node.data.function.tags = heap_tags;
}
parser__add_child_to_ast(ast, func_node);
}
}
return ;
}
if (token_type == lexer__TokenType_DEF) {
ctx->pos++;
structs__ASTNode func_node = parser__parse_function( ctx );
if (std__string__str_len ( func_node.node_type) > 0) {
parser__add_child_to_ast(ast, func_node);
}
return ;
}
if (token_type == lexer__TokenType_EXTERN) {
const structs__ASTNode extern_node = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( extern_node.node_type) > 0) {
parser__add_child_to_ast(ast, extern_node);
}
return ;
}
if (token_type == lexer__TokenType_MODEL) {
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
std__string__string err = std__string__str( "Expected model name after 'model'" );
std__errors__enforce(false, std__errors__error__create(err.data));
return ;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_LBRACE) {
ctx->pos++;
int32_t depth_model = 1;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t_br = ctx->tokens->data[ ctx->pos];
if (t_br.token_type== lexer__TokenType_LBRACE) {
depth_model = depth_model + 1;
}
else if (t_br.token_type== lexer__TokenType_RBRACE) {
depth_model = depth_model - 1;
if (depth_model == 0) {
ctx->pos++;
break;
}
}
ctx->pos++;
}
return ;
}
if (ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = std__string__str( "Expected model name after 'model', instead got: " );
err = std__string__concat ( err , ctx->tokens->data[ ctx->pos].value);
std__errors__enforce(false, std__errors__error__create(err.data));
return ;
}
structs__ASTNode model_node = {0};
model_node.node_type = std__string__str ( "Model" );
const std__string__string model_name = ctx->tokens->data[ ctx->pos].value;
model_node.data.model_node.name = model_name;
model_node.data.model_node.is_public = false;
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_LBRACE) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after model name" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
ctx->pos++;
__list_std__string_t field_names = {0};
__list_std__string_t field_types = {0};
__list_std__string_t union_member_parents = {0};
__list_std__string_t union_member_names = {0};
__list_std__string_t union_member_types = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
ctx->pos++;
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_PUB) {
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_DEF) {
ctx->pos++;
structs__ASTNode method_node = parser__parse_function( ctx );
if (std__string__str_len ( method_node.node_type) > 0) {
method_node.data.function.is_public = true;
const std__string__string orig_name = method_node.data.function.name;
std__string__string full_name = model_name;
full_name = std__string__concat ( full_name , std__string__str ( "__" ) );
full_name = std__string__concat ( full_name , orig_name );
method_node.data.function.name = full_name;
parser__add_child_to_ast(ast, method_node);
}
continue;
}
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_DEF) {
ctx->pos++;
structs__ASTNode method_node2 = parser__parse_function( ctx );
if (std__string__str_len ( method_node2.node_type) > 0) {
const std__string__string orig_name2 = method_node2.data.function.name;
std__string__string full_name2 = model_name;
full_name2 = std__string__concat ( full_name2 , std__string__str ( "__" ) );
full_name2 = std__string__concat ( full_name2 , orig_name2 );
method_node2.data.function.name = full_name2;
parser__add_child_to_ast(ast, method_node2);
}
continue;
}
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_IDENTIFIER) {
const std__string__string field_name = ctx->tokens->data[ ctx->pos].value;
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_COLON) {
ctx->pos++;
parser__skip_whitespace(ctx);
std__string__string field_type = parser__parse_type( ctx );
if (std__string__str_len ( field_type ) == 5 && std__string__compare ( field_type , std__string__str ( "union" ) ) == 0 && ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_LBRACE) {
__list_std__string_push(&field_names, field_name);
__list_std__string_push(&field_types, field_type);
ctx->pos++;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t_inner = ctx->tokens->data[ ctx->pos];
if (t_inner.token_type== lexer__TokenType_RBRACE) {
ctx->pos++;
break;
}
if (t_inner.token_type== lexer__TokenType_SEMICOLON|| t_inner.token_type== lexer__TokenType_NEWLINE) {
ctx->pos++;
continue;
}
if (t_inner.token_type!= lexer__TokenType_IDENTIFIER) {
ctx->pos++;
continue;
}
const std__string__string member_name = t_inner.value;
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_COLON) {
continue;
}
ctx->pos++;
parser__skip_whitespace(ctx);
const std__string__string member_base_type = parser__parse_type( ctx );
parser__skip_whitespace(ctx);
if (std__string__str_len ( member_base_type ) == 5 && std__string__compare ( member_base_type , std__string__str ( "model" ) ) == 0 && ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_LBRACE) {
__list_std__string_push(&union_member_parents, field_name);
__list_std__string_push(&union_member_names, member_name);
__list_std__string_push(&union_member_types, member_base_type);
ctx->pos++;
int32_t brace_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t_nested = ctx->tokens->data[ ctx->pos];
if (t_nested.token_type== lexer__TokenType_WHITESPACE|| t_nested.token_type== lexer__TokenType_NEWLINE|| t_nested.token_type== lexer__TokenType_SEMICOLON|| t_nested.token_type== lexer__TokenType_COMMENT) {
ctx->pos++;
continue;
}
if (t_nested.token_type== lexer__TokenType_RBRACE) {
if (brace_depth == 0) {
ctx->pos++;
break;
}
brace_depth = brace_depth - 1;
ctx->pos++;
continue;
}
if (t_nested.token_type== lexer__TokenType_LBRACE) {
brace_depth = brace_depth + 1;
ctx->pos++;
continue;
}
if (t_nested.token_type!= lexer__TokenType_IDENTIFIER) {
ctx->pos++;
continue;
}
const std__string__string nested_name = t_nested.value;
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_COLON) {
continue;
}
ctx->pos++;
parser__skip_whitespace(ctx);
const std__string__string nested_type = parser__parse_type( ctx );
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_SEMICOLON) {
ctx->pos++;
}
__list_std__string_push(&union_member_parents, member_name);
__list_std__string_push(&union_member_names, nested_name);
__list_std__string_push(&union_member_types, nested_type);
}
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_SEMICOLON) {
ctx->pos++;
}
}
else {
const std__string__string member_type = member_base_type;
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_SEMICOLON) {
ctx->pos++;
}
__list_std__string_push(&union_member_parents, field_name);
__list_std__string_push(&union_member_names, member_name);
__list_std__string_push(&union_member_types, member_type);
}
}
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_SEMICOLON) {
ctx->pos++;
}
}
else {
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_DOT) {
field_type = std__string__concat ( field_type , std__string__str ( "." ) );
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_IDENTIFIER) {
field_type = std__string__concat ( field_type , ctx->tokens->data[ ctx->pos].value);
ctx->pos++;
}
else {
break;
}
}
else if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_SLASH) {
field_type = std__string__concat ( field_type , std__string__str ( "/" ) );
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_IDENTIFIER) {
field_type = std__string__concat ( field_type , ctx->tokens->data[ ctx->pos].value);
ctx->pos++;
}
else {
break;
}
}
else {
break;
}
}
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_SEMICOLON) {
ctx->pos++;
}
__list_std__string_push(&field_names, field_name);
__list_std__string_push(&field_types, field_type);
}
}
else {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = ctx->tokens->data[ ctx->pos];
if (t.token_type== lexer__TokenType_SEMICOLON) {
ctx->pos++;
break;
}
ctx->pos++;
}
}
}
else {
ctx->pos++;
}
}
const uintptr_t list_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_names = (__list_std__string_t*)( malloc( list_size ) );
if (heap_names != nil) {
memcpy(heap_names, &field_names, list_size);
model_node.data.model_node.field_names = heap_names;
}
const __list_std__string_t* heap_types = (__list_std__string_t*)( malloc( list_size ) );
if (heap_types != nil) {
memcpy(heap_types, &field_types, list_size);
model_node.data.model_node.field_types = heap_types;
}
const uintptr_t union_list_size = sizeof(__list_std__string_t);
if (len_v(union_member_parents) > 0) {
const __list_std__string_t* heap_union_parents = (__list_std__string_t*)( malloc( union_list_size ) );
if (heap_union_parents != nil) {
memcpy(heap_union_parents, &union_member_parents, union_list_size);
model_node.data.model_node.union_member_parents = heap_union_parents;
}
const __list_std__string_t* heap_union_names = (__list_std__string_t*)( malloc( union_list_size ) );
if (heap_union_names != nil) {
memcpy(heap_union_names, &union_member_names, union_list_size);
model_node.data.model_node.union_member_names = heap_union_names;
}
const __list_std__string_t* heap_union_types = (__list_std__string_t*)( malloc( union_list_size ) );
if (heap_union_types != nil) {
memcpy(heap_union_types, &union_member_types, union_list_size);
model_node.data.model_node.union_member_types = heap_union_types;
}
}
parser__add_child_to_ast(ast, model_node);
return ;
}
if (token_type == lexer__TokenType_ENUM) {
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected enum name after 'enum'" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token name_tok = ctx->tokens->data[ ctx->pos];
ctx->pos++;
const std__string__string enum_name = name_tok.value;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_LBRACE) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after enum name" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
ctx->pos++;
__list_std__string_t values = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = ctx->tokens->data[ ctx->pos];
if (t.token_type== lexer__TokenType_RBRACE) {
ctx->pos++;
break;
}
if (t.token_type== lexer__TokenType_IDENTIFIER) {
__list_std__string_push(&values, t.value);
ctx->pos++;
continue;
}
if (t.token_type== lexer__TokenType_COMMA|| t.token_type== lexer__TokenType_SEMICOLON|| t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
ctx->pos++;
continue;
}
ctx->pos++;
}
structs__ASTNode enum_node = {0};
enum_node.node_type = std__string__str ( "Enum" );
enum_node.data.enum_node.name = enum_name;
const uintptr_t list_size = sizeof(__list_std__string_t);
__list_std__string_t* heap_list = (__list_std__string_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &values, list_size);
enum_node.data.enum_node.values = heap_list;
}
parser__add_child_to_ast(ast, enum_node);
return ;
}
if (token_type == lexer__TokenType_MUT|| token_type == lexer__TokenType_VAL) {
const structs__ASTNode decl_node = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( decl_node.node_type) > 0) {
if (std__string__equals_c ( decl_node.node_type, "Declaration" )) {
const std__string__string init_expr = decl_node.data.declaration.initializer;
if (parser__has_function_call_in_expression ( init_expr )) {
const std__string__string func_name = parser__extract_function_name( init_expr );
std__io__print(ctx->filename);
std__io__print(":");
std__io__print(std__string__i32_to_string(parser__current_line(ctx)));
std__io__print(": error: The result of ");
std__io__print(func_name);
std__io__println(" cannot be resolved at compile time.");
std__os__quit(1);
}
}
parser__add_child_to_ast(ast, decl_node);
}
return ;
}
if (token_type == lexer__TokenType_TEST) {
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_LBRACE) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after 'test'" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
ctx->pos++;
parser__clear_local_variables();
g_current_scope_depth = 1;
ctx->in_test_block = true;
structs__ASTNode test_node = {0};
test_node.node_type = std__string__str ( "Test" );
__list_structs__ASTNode_t children = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
ctx->pos++;
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&children, stmt);
}
}
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &children, list_size);
test_node.children = heap_list;
}
parser__clear_local_variables();
g_current_scope_depth = 0;
ctx->in_test_block = false;
parser__add_child_to_ast(ast, test_node);
return ;
}
if (token_type == lexer__TokenType_OVERLOAD) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected overload name after 'overload'" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token overload_name = parser__consume( ctx );
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '(' after overload name" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected parameter name in overload" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token param_name_token = parser__consume( ctx );
const std__string__string param_name = param_name_token.value;
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_COLON)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
}
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after overload parameter" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after overload header" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
__list_std__string_t type_names = {0};
__list_std__string_t target_funcs = {0};
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (parser__expect ( ctx , lexer__TokenType_RBRACE)) {
break;
}
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type name in overload mapping" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token type_token = parser__consume( ctx );
__list_std__string_push(&type_names, type_token.value);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_STAR)) {
parser__consume(ctx);
const int32_t last_idx = len_v(type_names) - 1;
type_names.data[last_idx] = std__string__concat ( type_names.data[ last_idx ], std__string__str ( "*" ) );
parser__skip_whitespace(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '=>' in overload mapping" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token op_token = parser__consume( ctx );
if (! std__string__equals_c ( op_token.value, "=>" )) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '=>' in overload mapping" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected target function name in overload mapping" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token first_target_token = parser__consume( ctx );
std__string__string target_name = first_target_token.value;
parser__skip_whitespace(ctx);
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
break;
}
const lexer__Token extra_tok = parser__consume( ctx );
target_name = std__string__concat ( target_name , std__string__str ( "_" ) );
target_name = std__string__concat ( target_name , extra_tok.value);
parser__skip_whitespace(ctx);
}
__list_std__string_push(&target_funcs, target_name);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = std__string__str( "Expected ';' after overload mapping, instead got " );
if (ctx->pos< len_ptr(ctx->tokens)) {
err = std__string__concat ( err , ctx->tokens->data[ ctx->pos].value);
}
else {
err = std__string__concat ( err , std__string__str ( "<eof>" ) );
}
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '}' after overload mappings" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '(' with call expression after overload block" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
std__string__string call_expr = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (parser__expect ( ctx , lexer__TokenType_RPAREN)) {
break;
}
const lexer__Token t = parser__consume( ctx );
if (t.token_type== lexer__TokenType_STR) {
call_expr = std__string__concat ( call_expr , std__string__str ( "\"" ) );
call_expr = std__string__concat ( call_expr , t.value);
call_expr = std__string__concat ( call_expr , std__string__str ( "\"" ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
call_expr = std__string__concat ( call_expr , std__string__str ( "'" ) );
call_expr = std__string__concat ( call_expr , t.value);
call_expr = std__string__concat ( call_expr , std__string__str ( "'" ) );
}
else {
call_expr = std__string__concat ( call_expr , t.value);
}
}
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after overload call expression" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after overload definition" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
structs__ASTNode overload_node = {0};
overload_node.node_type = std__string__str ( "Overload" );
overload_node.data.overload_node.name = overload_name.value;
overload_node.data.overload_node.param_name = param_name;
overload_node.data.overload_node.call_expr = call_expr;
const uintptr_t type_list_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_type_list = (__list_std__string_t*)( malloc( type_list_size ) );
if (heap_type_list != nil) {
memcpy(heap_type_list, &type_names, type_list_size);
overload_node.data.overload_node.type_names = heap_type_list;
}
const uintptr_t func_list_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_func_list = (__list_std__string_t*)( malloc( func_list_size ) );
if (heap_func_list != nil) {
memcpy(heap_func_list, &target_funcs, func_list_size);
overload_node.data.overload_node.target_functions = heap_func_list;
}
parser__add_child_to_ast(ast, overload_node);
return ;
}
if (token_type == lexer__TokenType_PUB) {
ctx->pos++;
parser__skip_whitespace(ctx);
parser__parse_top_level(ctx, ast);
return ;
}
if (token_type == lexer__TokenType_MACRO) {
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected macro name after 'macro'" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token name_tok = ctx->tokens->data[ ctx->pos];
const std__string__string macro_name = name_tok.value;
ctx->pos++;
parser__skip_whitespace(ctx);
__list_std__string_t params = {0};
__list_std__string_t param_types = {0};
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__string__string err = std__string__str( "Expected '(' after macro name" );
err = std__string__concat ( err , std__string__str ( " instead got " ) );
err = std__string__concat ( err , ctx->tokens->data[ ctx->pos].value);
std__errors__enforce(false, std__errors__error__create(err.data));
return ;
}
parser__consume(ctx);
while (1) {
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_RPAREN)) {
parser__consume(ctx);
break;
}
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected parameter name in macro definition" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token param_tok = parser__consume( ctx );
const std__string__string param_name = param_tok.value;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_COLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ':' after macro parameter name" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type after ':' in macro parameter" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
const lexer__Token type_tok = parser__consume( ctx );
const std__string__string param_type = type_tok.value;
__list_std__string_push(&params, param_name);
__list_std__string_push(&param_types, param_type);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_COMMA)) {
parser__consume(ctx);
continue;
}
}
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after macro header" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
parser__consume(ctx);
__list_lexer__Token_t body_tokens = {0};
int32_t brace_depth = 1;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = ctx->tokens->data[ ctx->pos];
if (t.token_type== lexer__TokenType_LBRACE) {
brace_depth = brace_depth + 1;
__list_lexer__Token_push(&body_tokens, t);
ctx->pos++;
continue;
}
if (t.token_type== lexer__TokenType_RBRACE) {
brace_depth = brace_depth - 1;
if (brace_depth == 0) {
ctx->pos++;
break;
}
__list_lexer__Token_push(&body_tokens, t);
ctx->pos++;
continue;
}
__list_lexer__Token_push(&body_tokens, t);
ctx->pos++;
}
if (brace_depth != 0) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '}' after macro body" ) );
std__errors__enforce_raw(false, err.data);
return ;
}
__list_std__string_t* heap_params = nil;
__list_lexer__Token_t* heap_body = nil;
const uintptr_t params_size = sizeof(__list_std__string_t);
heap_params = (__list_std__string_t*)( malloc( params_size ) );
if (heap_params != nil) {
memcpy(heap_params, &params, params_size);
}
const uintptr_t body_size = sizeof(__list_lexer__Token_t);
heap_body = (__list_lexer__Token_t*)( malloc( body_size ) );
if (heap_body != nil) {
memcpy(heap_body, &body_tokens, body_size);
}
structs__ASTNode macro_node = {0};
macro_node.node_type = std__string__str ( "Macro" );
macro_node.data.macro_node.name = macro_name;
macro_node.data.macro_node.params = heap_params;
macro_node.data.macro_node.param_types = &param_types;
macro_node.data.macro_node.body_tokens = heap_body;
parser__add_child_to_ast(ast, macro_node);
structs__MacroDef defn = {0};
defn.params = heap_params;
defn.body = heap_body;
parser__macros_add(macro_name, defn);
return ;
}
if (token_type == lexer__TokenType_OPAQUE) {
ctx->pos++;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_SEMICOLON) {
ctx->pos++;
break;
}
ctx->pos++;
}
return ;
}
if (token_type == lexer__TokenType_FOREIGN) {
structs__ASTNode node = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( node.node_type) > 0) {
parser__add_child_to_ast(ast, node);
}
return ;
}
if (token_type == lexer__TokenType_PLATFORM) {
structs__ASTNode node = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( node.node_type) > 0) {
parser__add_child_to_ast(ast, node);
}
return ;
}
std__string__string err = parser__format_error( ctx , std__string__str ( "Unexpected token at top level. Expected def, model, enum, val, mut, use, platform, macro, opaque, foreign, extern, or pub." ) );
std__io__println(err);
std__os__quit(1);
}

void parser__skip_whitespace(structs__ParserContext* ctx) {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const  token_type = ctx->tokens->data[ ctx->pos].token_type;
if (token_type == lexer__TokenType_WHITESPACE|| token_type == lexer__TokenType_NEWLINE) {
ctx->pos++;
}
else {
break;
}
}
}

lexer__Token parser__peek(structs__ParserContext* ctx) {
if (ctx->pos< len_ptr(ctx->tokens)) {
return ctx->tokens->data[ ctx->pos];
}
lexer__Token empty = {0};
empty.token_type = lexer__TokenType_IDENTIFIER;
empty.value = std__string__str ( "" );
empty.line = 0;
empty.column = 0;
return empty;
}

int32_t parser__current_line(structs__ParserContext* ctx) {
const lexer__Token token = parser__peek( ctx );
return token.line;
}

std__string__string parser__format_error(structs__ParserContext* ctx, std__string__string message) {
std__string__string result = std__string__str( "" );
if (std__string__str_len ( ctx->filename) > 0) {
result = std__string__concat ( result , ctx->filename);
result = std__string__concat ( result , std__string__str ( ":" ) );
}
int32_t line_num = 1;
int32_t col_num = 1;
if (ctx->pos< len_ptr(ctx->tokens)) {
const lexer__Token token = ctx->tokens->data[ ctx->pos];
line_num = token.line;
col_num = token.column;
}
else if (ctx->pos> 0 && len_ptr(ctx->tokens) > 0) {
const lexer__Token last_token = ctx->tokens->data[ len_ptr(ctx->tokens) - 1 ];
line_num = last_token.line;
col_num = last_token.column;
}
if (line_num <= 0) {
line_num = 1;
}
if (col_num <= 0) {
col_num = 1;
}
result = std__string__concat ( result , std__string__i32_to_string ( line_num ) );
result = std__string__concat ( result , std__string__str ( ":" ) );
result = std__string__concat ( result , std__string__i32_to_string ( col_num ) );
result = std__string__concat ( result , std__string__str ( ": " ) );
result = std__string__concat ( result , message );
return result;
}

lexer__Token parser__consume(structs__ParserContext* ctx) {
const lexer__Token token = parser__peek( ctx );
ctx->pos = ctx->pos+ 1;
return token;
}

bool parser__expect(structs__ParserContext* ctx, int32_t expected_type) {
parser__skip_whitespace(ctx);
const lexer__Token token = parser__peek( ctx );
return token.token_type== expected_type;
}

std__string__string parser__parse_type(structs__ParserContext* ctx) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
const std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type but reached end of tokens" ) );
std__errors__enforce_raw(false, err.data);
return std__string__str( "" );
}
std__string__string ref_prefix = std__string__str( "" );
while (1) {
const lexer__Token token = parser__peek( ctx );
if (token.token_type== lexer__TokenType_REF) {
ref_prefix = std__string__concat_c ( ref_prefix , "ref " );
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
else {
break;
}
}
parser__skip_whitespace(ctx);
std__string__string type_name = std__string__str( "" );
const lexer__Token current_token = parser__peek( ctx );
if (current_token.token_type== lexer__TokenType_MODEL) {
parser__consume(ctx);
return std__string__concat_c( ref_prefix , "model" );
}
if (current_token.token_type== lexer__TokenType_DOLLAR) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
const std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '(' after '$'" ) );
std__errors__enforce_raw(false, err.data);
return std__string__str( "" );
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
const std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type name inside '$()'" ) );
std__errors__enforce_raw(false, err.data);
return std__string__str( "" );
}
const std__string__string struct_name = parser__consume( ctx ) . value;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
const std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after type name" ) );
std__errors__enforce_raw(false, err.data);
return std__string__str( "" );
}
parser__consume(ctx);
type_name = std__string__concat ( std__string__str ( "struct " ) , struct_name );
}
else if (current_token.token_type== lexer__TokenType_IDENTIFIER) {
type_name = current_token.value;
parser__check_null_usage(ctx, type_name);
parser__consume(ctx);
if (std__string__equals_c ( type_name , "list" )) {
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
const std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '(' after 'list'" ) );
std__errors__enforce_raw(false, err.data);
return std__string__str( "" );
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
const lexer__Token elem_token = parser__consume( ctx );
const std__string__string element_type = elem_token.value;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
const std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after list element type" ) );
std__errors__enforce_raw(false, err.data);
return std__string__str( "" );
}
parser__consume(ctx);
type_name = std__string__concat ( element_type , std__string__str ( "[999]" ) );
}
}
else {
const std__string__string err = parser__format_error( ctx , std__string__str ( "Invalid type specification" ) );
std__errors__enforce_raw(false, err.data);
return std__string__str( "" );
}
while (1) {
if (parser__expect ( ctx , lexer__TokenType_LBRACKET)) {
parser__consume(ctx);
type_name = std__string__concat ( type_name , std__string__str ( "[" ) );
while (1) {
const lexer__Token tok = parser__peek( ctx );
if (tok.token_type== lexer__TokenType_RBRACKET) {
break;
}
type_name = std__string__concat ( type_name , tok.value);
parser__consume(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_RBRACKET)) {
parser__consume(ctx);
type_name = std__string__concat ( type_name , std__string__str ( "]" ) );
}
}
else {
break;
}
}
while (1) {
const lexer__Token tok = parser__peek( ctx );
if (( tok.token_type== lexer__TokenType_OPERATOR&& std__string__equals_c ( tok.value, "*" ) ) || ( tok.token_type== lexer__TokenType_STAR)) {
const std__string__string err = parser__format_error( ctx , std__string__str ( "C-style pointer syntax is not allowed. Use 'ref T' instead." ) );
std__io__println(err);
std__os__quit(1);
parser__consume(ctx);
type_name = std__string__concat ( type_name , std__string__str ( "*" ) );
}
else {
break;
}
}
if (std__maps__StringStringMap__contains( &g_type_aliases , type_name )) {
type_name = std__maps__StringStringMap__get( &g_type_aliases , type_name );
}
return std__string__concat( ref_prefix , type_name );
}

int32_t parser__parse_ref_depth(structs__ParserContext* ctx) {
int32_t depth = 0;
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token token = parser__peek( ctx );
if (token.token_type== lexer__TokenType_REF) {
depth = depth + 1;
parser__consume(ctx);
}
else {
break;
}
}
return depth;
}

structs__ASTNode parser__parse_function(structs__ParserContext* ctx) {
structs__ASTNode func = {0};
func.node_type = std__string__str ( "Function" );
func.line = parser__current_line ( ctx );
parser__clear_local_variables();
g_current_scope_depth = 1;
g_function_has_raw_block = false;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected function name after 'def'" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
std__string__string func_name = ctx->tokens->data[ ctx->pos].value;
if (ctx->check_entry_point&& imports__is_symbol_imported ( func_name )) {
std__io__print(ctx->filename);
std__io__print(":");
std__io__print(std__string__i32_to_string(parser__current_line(ctx)));
std__io__print(": error: function '");
std__io__print(func_name);
std__io__print("' shadows imported symbol '");
std__io__print(func_name);
std__io__println("'");
std__os__quit(1);
}
func.data.function.name = func_name;
func.data.function.return_type = std__string__str ( "" );
func.data.function.is_public = false;
func.data.function.is_generic = false;
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_LBRACKET) {
ctx->pos++;
func.data.function.is_generic = true;
__list_std__string_t type_params = {0};
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACKET) {
ctx->pos++;
break;
}
if (ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type parameter name in generic function declaration" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
const std__string__string type_param = ctx->tokens->data[ ctx->pos].value;
__list_std__string_push(&type_params, type_param);
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_COMMA) {
ctx->pos++;
continue;
}
}
if (len_v(type_params) > 0) {
const uintptr_t params_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_type_params = (__list_std__string_t*)( malloc( params_size ) );
if (heap_type_params != nil) {
memcpy(heap_type_params, &type_params, params_size);
func.data.function.type_params = heap_type_params;
}
}
}
parser__skip_whitespace(ctx);
if (ctx->pos+ 1 < len_ptr(ctx->tokens)) {
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_IDENTIFIER&& std__string__equals_c ( ctx->tokens->data[ ctx->pos+ 1 ].value, "(" )) {
std__string__string merged = func_name;
const std__string__string next_ident = ctx->tokens->data[ ctx->pos].value;
if (std__string__str_len ( next_ident ) > 0 && std__string__get_char ( next_ident , 0 ) != '_') {
merged = std__string__concat ( merged , std__string__str ( "_" ) );
}
merged = std__string__concat ( merged , next_ident );
func_name = merged;
func.data.function.name = merged;
ctx->pos++;
parser__skip_whitespace(ctx);
}
}
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__io__println("DEBUG parse_function: missing '(' after function name");
std__string__string dbg = std__string__str( "  func_name = " );
dbg = std__string__concat ( dbg , func_name );
gstate__debug_print_str(dbg);
const char buffer[64] = { };
dbg = std__string__str ( "  ctx.pos = " );
dbg = std__string__concat_c ( dbg , std__string__int_to_str ( ctx->pos, (char*)( buffer ) ) );
dbg = std__string__concat ( dbg , std__string__str ( " / " ) );
dbg = std__string__concat_c ( dbg , std__string__int_to_str ( len_ptr(ctx->tokens) , (char*)( buffer ) ) );
gstate__debug_print_str(dbg);
if (ctx->pos< len_ptr(ctx->tokens)) {
dbg = std__string__str ( "  current token type = " );
dbg = std__string__concat_c ( dbg , std__string__int_to_str ( ctx->tokens->data[ ctx->pos].token_type, (char*)( buffer ) ) );
dbg = std__string__concat ( dbg , std__string__str ( ", value = '" ) );
dbg = std__string__concat ( dbg , ctx->tokens->data[ ctx->pos].value);
dbg = std__string__concat ( dbg , std__string__str ( "'" ) );
gstate__debug_print_str(dbg);
}
else {
gstate__debug_print_raw("  current token = <eof>");
}
int32_t start_dbg = ctx->pos- 5;
if (start_dbg < 0) {
start_dbg = 0;
}
int32_t end_dbg = ctx->pos+ 5;
const int32_t total_tokens = len_ptr(ctx->tokens);
if (end_dbg > total_tokens) {
end_dbg = total_tokens;
}
std__io__println("  Surrounding tokens:");
int32_t i_dbg = start_dbg;
while (1) {
if (i_dbg >= end_dbg) {
break;
}
const lexer__Token tok_dbg = ctx->tokens->data[ i_dbg ];
const char buffer2[64] = { };
dbg = std__string__str ( "    [" );
dbg = std__string__concat_c ( dbg , std__string__int_to_str ( i_dbg , (char*)( buffer2 ) ) );
dbg = std__string__concat ( dbg , std__string__str ( "] type=" ) );
dbg = std__string__concat_c ( dbg , std__string__int_to_str ( tok_dbg.token_type, (char*)( buffer2 ) ) );
dbg = std__string__concat ( dbg , std__string__str ( ", value='" ) );
dbg = std__string__concat ( dbg , tok_dbg.value);
dbg = std__string__concat ( dbg , std__string__str ( "'" ) );
gstate__debug_print_str(dbg);
i_dbg = i_dbg + 1;
}
std__string__string err = std__string__str( "Expected '(' after function name" );
if (ctx->pos< len_ptr(ctx->tokens)) {
err = std__string__concat ( err , std__string__str ( " instead got " ) );
err = std__string__concat ( err , ctx->tokens->data[ ctx->pos].value);
}
else {
err = std__string__concat ( err , std__string__str ( " instead got <eof>" ) );
}
err = std__string__concat ( err , std__string__str ( " in function " ) );
err = std__string__concat ( err , func_name );
std__errors__enforce_raw(false, err.data);
return func;
}
parser__consume(ctx);
__list_std__string_t params = {0};
std__string__string current_param = std__string__str( "" );
int32_t paren_depth_params = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = ctx->tokens->data[ ctx->pos];
if (t.token_type== lexer__TokenType_RPAREN&& paren_depth_params == 0) {
const std__string__string trimmed = std__string__strip( current_param );
if (std__string__str_len ( trimmed ) > 0) {
__list_std__string_push(&params, trimmed);
}
ctx->pos++;
break;
}
if (t.token_type== lexer__TokenType_LPAREN) {
paren_depth_params = paren_depth_params + 1;
current_param = std__string__concat ( current_param , t.value);
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_RPAREN) {
paren_depth_params = paren_depth_params - 1;
current_param = std__string__concat ( current_param , t.value);
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_COMMA&& paren_depth_params == 0) {
const std__string__string trimmed_param = std__string__strip( current_param );
if (std__string__str_len ( trimmed_param ) > 0) {
__list_std__string_push(&params, trimmed_param);
}
current_param = std__string__str ( "" );
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_REF) {
current_param = std__string__concat ( current_param , std__string__str ( "ref " ) );
}
else if (t.token_type== lexer__TokenType_MUT) {
current_param = std__string__concat ( current_param , std__string__str ( "mut " ) );
}
else {
current_param = std__string__concat ( current_param , t.value);
}
parser__consume(ctx);
}
if (! ctx->is_axec&& len_v(params) > 0) {
int32_t param_idx = 0;
while (1) {
if (param_idx >= len_v(params)) {
break;
}
const std__string__string param = params.data[ param_idx ];
if (parser__has_pointer_syntax ( param )) {
std__io__print(ctx->filename);
std__io__print(":");
std__io__print(std__string__i32_to_string(parser__current_line(ctx)));
std__io__print(": error: raw pointer syntax is not allowed.");
std__io__println(" Use 'ref' instead (e.g., 'ref char').");
std__io__print("(in parameter: ");
std__io__print(param);
std__io__println(")");
std__os__quit(1);
}
param_idx++;
}
}
if (len_v(params) > 0) {
const uintptr_t params_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_params = (__list_std__string_t*)( malloc( params_size ) );
if (heap_params != nil) {
memcpy(heap_params, &params, params_size);
func.data.function.params = heap_params;
}
}
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_COLON)) {
parser__consume(ctx);
const std__string__string return_type = parser__parse_type( ctx );
func.data.function.return_type = return_type;
if (! ctx->is_axec&& parser__has_pointer_syntax ( return_type )) {
std__io__print(ctx->filename);
std__io__print(":");
std__io__print(std__string__i32_to_string(parser__current_line(ctx)));
std__io__print(": error: raw pointer syntax is not allowed. ");
std__io__println("Use 'ref' instead (e.g., 'ref char').");
std__io__print("(in return type: ");
std__io__print(return_type);
std__io__println(")");
std__os__quit(1);
}
}
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string msg = std__string__str( "Expected '{' after function declaration, instead got: " );
msg = std__string__concat ( msg , ctx->tokens->data[ ctx->pos].value);
msg = std__string__concat ( msg , std__string__str ( " in function " ) );
msg = std__string__concat ( msg , func_name );
std__errors__enforce_raw(false, msg.data);
return func;
}
parser__consume(ctx);
__list_structs__ASTNode_t children = {0};
__list_std__string_t when_branch_types = {0};
__list_int32_t_t when_branch_counts = {0};
__list_int32_t_t when_branch_starts = {0};
if (func.data.function.is_generic) {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
ctx->pos++;
break;
}
if (ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_WHEN) {
const structs__ASTNode common_stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( common_stmt.node_type) > 0) {
__list_structs__ASTNode_push(&children, common_stmt);
}
continue;
}
__list_int32_t_push(&when_branch_starts, len_v(children));
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type parameter after 'when'" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
const std__string__string first_type_param = ctx->tokens->data[ ctx->pos].value;
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IS) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected 'is' after type parameter in when clause" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
ctx->pos++;
parser__skip_whitespace(ctx);
std__string__string constraint_str = std__string__concat( first_type_param , std__string__str ( ":" ) );
std__string__string first_concrete_type = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = ctx->tokens->data[ ctx->pos];
if (t.token_type== lexer__TokenType_AND|| t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type== lexer__TokenType_REF) {
first_concrete_type = std__string__concat ( first_concrete_type , std__string__str ( "ref " ) );
}
else if (t.token_type== lexer__TokenType_MUT) {
first_concrete_type = std__string__concat ( first_concrete_type , std__string__str ( "mut " ) );
}
else {
first_concrete_type = std__string__concat ( first_concrete_type , t.value);
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (std__string__str_len ( first_concrete_type ) == 0) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected concrete type after 'is' in when clause" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
constraint_str = std__string__concat ( constraint_str , first_concrete_type );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token next_tok = ctx->tokens->data[ ctx->pos];
if (next_tok.token_type!= lexer__TokenType_AND) {
break;
}
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type parameter after 'and'" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
const std__string__string next_type_param = ctx->tokens->data[ ctx->pos].value;
ctx->pos++;
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IS) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected 'is' after type parameter in 'and' clause" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
ctx->pos++;
parser__skip_whitespace(ctx);
std__string__string next_concrete_type = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = ctx->tokens->data[ ctx->pos];
if (t.token_type== lexer__TokenType_AND|| t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type== lexer__TokenType_REF) {
next_concrete_type = std__string__concat ( next_concrete_type , std__string__str ( "ref " ) );
}
else if (t.token_type== lexer__TokenType_MUT) {
next_concrete_type = std__string__concat ( next_concrete_type , std__string__str ( "mut " ) );
}
else {
next_concrete_type = std__string__concat ( next_concrete_type , t.value);
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (std__string__str_len ( next_concrete_type ) == 0) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected concrete type after 'is' in 'and' clause" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
constraint_str = std__string__concat ( constraint_str , std__string__str ( "," ) );
constraint_str = std__string__concat ( constraint_str , next_type_param );
constraint_str = std__string__concat ( constraint_str , std__string__str ( ":" ) );
constraint_str = std__string__concat ( constraint_str , next_concrete_type );
}
__list_std__string_push(&when_branch_types, constraint_str);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_LBRACE) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after type in when clause" ) );
std__errors__enforce_raw(false, err.data);
return func;
}
ctx->pos++;
int32_t branch_child_count = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
ctx->pos++;
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&children, stmt);
branch_child_count++;
}
}
__list_int32_t_push(&when_branch_counts, branch_child_count);
parser__skip_whitespace(ctx);
}
const uintptr_t types_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_types = (__list_std__string_t*)( malloc( types_size ) );
if (heap_types != nil) {
memcpy(heap_types, &when_branch_types, types_size);
func.data.function.when_branch_types = heap_types;
}
const uintptr_t counts_size = sizeof(__list_int32_t_t);
const __list_int32_t_t* heap_counts = (__list_int32_t_t*)( malloc( counts_size ) );
if (heap_counts != nil) {
memcpy(heap_counts, &when_branch_counts, counts_size);
func.data.function.when_branch_counts = heap_counts;
}
const uintptr_t starts_size = sizeof(__list_int32_t_t);
const __list_int32_t_t* heap_starts = (__list_int32_t_t*)( malloc( starts_size ) );
if (heap_starts != nil) {
memcpy(heap_starts, &when_branch_starts, starts_size);
func.data.function.when_branch_starts = heap_starts;
}
}
else {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
ctx->pos++;
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&children, stmt);
}
}
}
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &children, list_size);
func.children = heap_list;
}
if (! g_function_has_raw_block) {
int32_t i_mut = 0;
while (1) {
if (i_mut >= len_v(g_mutable_vars_in_scope)) {
break;
}
const std__string__string var_name = g_mutable_vars_in_scope.data[ i_mut ];
if (std__maps__StringIntMap__contains( &g_var_scope_depth , var_name )) {
const int32_t var_depth = std__maps__StringIntMap__get( &g_var_scope_depth , var_name );
if (var_depth == 0) {
i_mut++;
continue;
}
}
if (! std__maps__StringBoolMap__contains( &g_var_actually_mutated , var_name )) {
std__io__print(ctx->filename);
std__io__print(":");
std__io__print(std__string__i32_to_string(func.line));
std__io__print(": error: variable '");
std__io__print(var_name);
std__io__println("' is declared 'mut' but is never mutated. Use 'val' instead.");
std__os__quit(1);
}
i_mut++;
}
}
if (! g_function_has_raw_block) {
int32_t i_unused = 0;
while (1) {
if (i_unused >= len_v(g_all_vars_in_scope)) {
break;
}
const std__string__string var_name = g_all_vars_in_scope.data[ i_unused ];
if (std__maps__StringIntMap__contains( &g_var_scope_depth , var_name )) {
const int32_t var_depth = std__maps__StringIntMap__get( &g_var_scope_depth , var_name );
if (var_depth == 0) {
i_unused++;
continue;
}
}
if (! std__maps__StringBoolMap__contains( &g_var_actually_used , var_name )) {
int32_t decl_line = func.line;
std__string__string decl_file = ctx->filename;
if (std__maps__StringIntMap__contains( &g_var_declaration_lines , var_name )) {
decl_line = std__maps__StringIntMap__get( &g_var_declaration_lines , var_name );
}
if (std__maps__StringStringMap__contains( &g_var_declaration_files , var_name )) {
decl_file = std__maps__StringStringMap__get( &g_var_declaration_files , var_name );
}
std__io__print(decl_file);
std__io__print(":");
std__io__print(std__string__i32_to_string(decl_line));
std__io__print(": error: variable '");
std__io__print(var_name);
std__io__println("' is declared but never used.");
std__os__quit(1);
}
i_unused++;
}
}
parser__clear_local_variables();
g_current_scope_depth = 0;
return func;
}

structs__ASTNode parser__parse_statement_helper(structs__ParserContext* ctx, structs__Scope* scope) {
structs__ASTNode node = {0};
node.node_type = std__string__str ( "Empty" );
node.line = parser__current_line ( ctx );
node.source_file = ctx->filename;
if (ctx->pos>= len_ptr(ctx->tokens)) {
return node;
}
const lexer__Token token = parser__peek( ctx );
const int32_t token_type = token.token_type;
if (token_type == lexer__TokenType_WHITESPACE|| token_type == lexer__TokenType_NEWLINE) {
parser__consume(ctx);
return node;
}
if (token_type == lexer__TokenType_BREAK) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after break" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "Break" );
node.line = token.line;
node.source_file = ctx->filename;
return node;
}
if (token_type == lexer__TokenType_CONTINUE) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after continue" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "Continue" );
node.line = token.line;
node.source_file = ctx->filename;
return node;
}
if (token_type == lexer__TokenType_WHEN) {
const int32_t when_line = token.line;
parser__consume(ctx);
parser__skip_whitespace(ctx);
__list_std__string_t type_params = {0};
__list_std__string_t concrete_types = {0};
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type parameter after 'when'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const std__string__string first_type_param = ctx->tokens->data[ ctx->pos].value;
__list_std__string_push(&type_params, first_type_param);
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IS) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected 'is' after type parameter in when clause" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string first_concrete_type = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = ctx->tokens->data[ ctx->pos];
if (t.token_type== lexer__TokenType_AND|| t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type== lexer__TokenType_REF) {
first_concrete_type = std__string__concat ( first_concrete_type , std__string__str ( "ref " ) );
}
else if (t.token_type== lexer__TokenType_MUT) {
first_concrete_type = std__string__concat ( first_concrete_type , std__string__str ( "mut " ) );
}
else {
first_concrete_type = std__string__concat ( first_concrete_type , t.value);
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (std__string__str_len ( first_concrete_type ) == 0) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected concrete type after 'is' in when clause" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
__list_std__string_push(&concrete_types, first_concrete_type);
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token next_tok = ctx->tokens->data[ ctx->pos];
if (next_tok.token_type!= lexer__TokenType_AND) {
break;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IDENTIFIER) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected type parameter after 'and'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const std__string__string next_type_param = ctx->tokens->data[ ctx->pos].value;
__list_std__string_push(&type_params, next_type_param);
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_IS) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected 'is' after type parameter in 'and' clause" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string next_concrete_type = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = ctx->tokens->data[ ctx->pos];
if (t.token_type== lexer__TokenType_AND|| t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type== lexer__TokenType_REF) {
next_concrete_type = std__string__concat ( next_concrete_type , std__string__str ( "ref " ) );
}
else if (t.token_type== lexer__TokenType_MUT) {
next_concrete_type = std__string__concat ( next_concrete_type , std__string__str ( "mut " ) );
}
else {
next_concrete_type = std__string__concat ( next_concrete_type , t.value);
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (std__string__str_len ( next_concrete_type ) == 0) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected concrete type after 'is' in 'and' clause" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
__list_std__string_push(&concrete_types, next_concrete_type);
}
if (ctx->pos>= len_ptr(ctx->tokens) || ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_LBRACE) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after type in when clause" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__push_scope();
__list_structs__ASTNode_t when_children = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , scope );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&when_children, stmt);
}
}
parser__pop_scope();
node.node_type = std__string__str ( "WhenBranch" );
node.line = when_line;
node.source_file = ctx->filename;
const uintptr_t tp_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_type_params = (__list_std__string_t*)( malloc( tp_size ) );
if (heap_type_params != nil) {
memcpy(heap_type_params, &type_params, tp_size);
node.data.when_branch.type_params = heap_type_params;
}
const uintptr_t ct_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_concrete_types = (__list_std__string_t*)( malloc( ct_size ) );
if (heap_concrete_types != nil) {
memcpy(heap_concrete_types, &concrete_types, ct_size);
node.data.when_branch.concrete_types = heap_concrete_types;
}
const uintptr_t children_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_children = (__list_structs__ASTNode_t*)( malloc( children_size ) );
if (heap_children != nil) {
memcpy(heap_children, &when_children, children_size);
node.children = heap_children;
}
return node;
}
if (token_type == lexer__TokenType_ASSERT) {
if (! ctx->in_test_block) {
std__string__string err = parser__format_error( ctx , std__string__str ( "assert statements are only allowed inside test { } blocks" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const int32_t assert_line = token.line;
parser__consume(ctx);
parser__skip_whitespace(ctx);
bool has_parens = false;
if (parser__expect ( ctx , lexer__TokenType_LPAREN)) {
has_parens = true;
parser__consume(ctx);
}
std__string__string condition = std__string__str( "" );
int32_t paren_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LPAREN) {
paren_depth = paren_depth + 1;
condition = std__string__concat ( condition , t.value);
condition = std__string__concat ( condition , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_RPAREN) {
if (paren_depth == 0 && has_parens) {
break;
}
paren_depth = paren_depth - 1;
condition = std__string__concat ( condition , t.value);
condition = std__string__concat ( condition , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_COMMA&& paren_depth == 0) {
break;
}
else if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
if (t.token_type== lexer__TokenType_STR) {
condition = std__string__concat ( condition , std__string__str ( "\"" ) );
condition = std__string__concat ( condition , t.value);
condition = std__string__concat ( condition , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
condition = std__string__concat ( condition , std__string__str ( "'" ) );
condition = std__string__concat ( condition , t.value);
condition = std__string__concat ( condition , std__string__str ( "' " ) );
}
else {
condition = std__string__concat ( condition , t.value);
condition = std__string__concat ( condition , std__string__str ( " " ) );
}
}
parser__consume(ctx);
}
condition = parser__expand_macros_in_expression ( condition );
if (! parser__expect ( ctx , lexer__TokenType_COMMA)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ',' after assert condition" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_STR)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected string message after comma in assert" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token message_token = parser__consume( ctx );
const std__string__string message = message_token.value;
parser__skip_whitespace(ctx);
if (has_parens) {
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after assert message" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after assert statement" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "Assert" );
node.line = assert_line;
node.source_file = ctx->filename;
node.data.assert_node.condition = condition;
node.data.assert_node.message = message;
gstate__debug_print_raw("\n[DEBUG] ASSERT condition:");
gstate__debug_print_str(condition);
gstate__debug_print_raw("\n[DEBUG] ASSERT message:");
gstate__debug_print_str(message);
return node;
}
if (token_type == lexer__TokenType_RETURN) {
const int32_t return_line = token.line;
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string expr = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
break;
}
if (t.token_type== lexer__TokenType_STR) {
expr = std__string__concat ( expr , std__string__str ( "\"" ) );
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
expr = std__string__concat ( expr , std__string__str ( "'" ) );
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else if (( t.token_type== lexer__TokenType_IDENTIFIER&& std__string__compare ( t.value, std__string__str ( "and" ) ) == 0 ) || t.token_type== lexer__TokenType_AND) {
expr = std__string__concat ( expr , std__string__str ( "&&" ) );
expr = std__string__concat ( expr , std__string__str ( " " ) );
}
else if (( t.token_type== lexer__TokenType_IDENTIFIER&& std__string__compare ( t.value, std__string__str ( "or" ) ) == 0 ) || t.token_type== lexer__TokenType_OR) {
expr = std__string__concat ( expr , std__string__str ( "||" ) );
expr = std__string__concat ( expr , std__string__str ( " " ) );
}
else {
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after return" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
expr = parser__expand_macros_in_expression ( expr );
node.node_type = std__string__str ( "Return" );
node.line = return_line;
node.source_file = ctx->filename;
gstate__debug_print_raw("\n[DEBUG] RETURN expr:");
gstate__debug_print_str(expr);
node.data.return_node.expression = expr;
parser__scan_expression_for_usage(expr);
return node;
}
if (token_type == lexer__TokenType_LOOP) {
const int32_t loop_line = token.line;
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after loop" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__push_scope();
structs__ASTNode lnode = {0};
lnode.node_type = std__string__str ( "Loop" );
lnode.line = loop_line;
lnode.source_file = ctx->filename;
__list_structs__ASTNode_t body = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&body, stmt);
}
}
parser__pop_scope();
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &body, list_size);
lnode.children = heap_list;
}
return lnode;
}
if (token_type == lexer__TokenType_SWITCH) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string switch_expr = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
switch_expr = std__string__concat ( switch_expr , t.value);
switch_expr = std__string__concat ( switch_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
parser__scan_expression_for_usage(switch_expr);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after switch expression" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
int32_t depth = 1;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE) {
depth = depth + 1;
}
else if (t.token_type== lexer__TokenType_RBRACE) {
depth = depth - 1;
if (depth == 0) {
parser__consume(ctx);
break;
}
}
parser__consume(ctx);
}
node.node_type = std__string__str ( "Switch" );
return node;
}
if (token_type == lexer__TokenType_IF) {
const int32_t if_line = token.line;
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string condition = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
if (t.token_type== lexer__TokenType_VAL&& ctx->pos+ 1 < len_ptr(ctx->tokens)) {
const lexer__Token next_tok = ctx->tokens->data[ ctx->pos+ 1 ];
if (next_tok.token_type== lexer__TokenType_IDENTIFIER) {
std__string__string merged = t.value;
merged = std__string__concat ( merged , next_tok.value);
condition = std__string__concat ( condition , merged );
condition = std__string__concat ( condition , std__string__str ( " " ) );
parser__consume(ctx);
parser__consume(ctx);
continue;
}
}
if (( t.token_type== lexer__TokenType_IDENTIFIER&& std__string__compare ( t.value, std__string__str ( "and" ) ) == 0 ) || t.token_type== lexer__TokenType_AND) {
condition = std__string__concat ( condition , std__string__str ( "&&" ) );
condition = std__string__concat ( condition , std__string__str ( " " ) );
}
else if (( t.token_type== lexer__TokenType_IDENTIFIER&& std__string__compare ( t.value, std__string__str ( "or" ) ) == 0 ) || t.token_type== lexer__TokenType_OR) {
condition = std__string__concat ( condition , std__string__str ( "||" ) );
condition = std__string__concat ( condition , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_STR) {
condition = std__string__concat ( condition , std__string__str ( "\"" ) );
condition = std__string__concat ( condition , t.value);
condition = std__string__concat ( condition , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
condition = std__string__concat ( condition , std__string__str ( "'" ) );
condition = std__string__concat ( condition , t.value);
condition = std__string__concat ( condition , std__string__str ( "' " ) );
}
else {
condition = std__string__concat ( condition , t.value);
condition = std__string__concat ( condition , std__string__str ( " " ) );
}
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after if condition" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__push_scope();
__list_structs__ASTNode_t if_children = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t_body = parser__peek( ctx );
if (t_body.token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&if_children, stmt);
}
}
parser__pop_scope();
__list_structs__ASTNode_t elif_nodes = {0};
__list_structs__ASTNode_t final_else_children = {0};
parser__skip_whitespace(ctx);
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type!= lexer__TokenType_ELIF) {
break;
}
ctx->pos = ctx->pos+ 1;
parser__skip_whitespace(ctx);
std__string__string elif_condition = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t_el = parser__peek( ctx );
if (t_el.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t_el.token_type!= lexer__TokenType_WHITESPACE&& t_el.token_type!= lexer__TokenType_NEWLINE) {
if (t_el.token_type== lexer__TokenType_VAL&& ctx->pos+ 1 < len_ptr(ctx->tokens)) {
const lexer__Token next_tok_el = ctx->tokens->data[ ctx->pos+ 1 ];
if (next_tok_el.token_type== lexer__TokenType_IDENTIFIER) {
std__string__string merged_el = t_el.value;
merged_el = std__string__concat ( merged_el , next_tok_el.value);
elif_condition = std__string__concat ( elif_condition , merged_el );
elif_condition = std__string__concat ( elif_condition , std__string__str ( " " ) );
parser__consume(ctx);
parser__consume(ctx);
continue;
}
}
if (( t_el.token_type== lexer__TokenType_IDENTIFIER&& std__string__compare ( t_el.value, std__string__str ( "and" ) ) == 0 ) || t_el.token_type== lexer__TokenType_AND) {
elif_condition = std__string__concat ( elif_condition , std__string__str ( "&&" ) );
elif_condition = std__string__concat ( elif_condition , std__string__str ( " " ) );
}
else if (( t_el.token_type== lexer__TokenType_IDENTIFIER&& std__string__compare ( t_el.value, std__string__str ( "or" ) ) == 0 ) || t_el.token_type== lexer__TokenType_OR) {
elif_condition = std__string__concat ( elif_condition , std__string__str ( "||" ) );
elif_condition = std__string__concat ( elif_condition , std__string__str ( " " ) );
}
else if (t_el.token_type== lexer__TokenType_STR) {
elif_condition = std__string__concat ( elif_condition , std__string__str ( "\"" ) );
elif_condition = std__string__concat ( elif_condition , t_el.value);
elif_condition = std__string__concat ( elif_condition , std__string__str ( "\" " ) );
}
else if (t_el.token_type== lexer__TokenType_CHAR) {
elif_condition = std__string__concat ( elif_condition , std__string__str ( "'" ) );
elif_condition = std__string__concat ( elif_condition , t_el.value);
elif_condition = std__string__concat ( elif_condition , std__string__str ( "' " ) );
}
else {
elif_condition = std__string__concat ( elif_condition , t_el.value);
elif_condition = std__string__concat ( elif_condition , std__string__str ( " " ) );
}
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__errors__enforce_raw(false, "Expected '{' after elif condition");
return node;
}
parser__consume(ctx);
parser__push_scope();
__list_structs__ASTNode_t elif_children = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t_eb = parser__peek( ctx );
if (t_eb.token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt_eb = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt_eb.node_type) > 0) {
__list_structs__ASTNode_push(&elif_children, stmt_eb);
}
}
parser__pop_scope();
structs__ASTNode elif_node = {0};
elif_node.node_type = std__string__str ( "If" );
elif_node.data.if_node.condition = elif_condition;
parser__scan_expression_for_usage(elif_condition);
__list_structs__ASTNode_t body_list_el = {0};
int32_t i_el = 0;
while (1) {
if (i_el >= len_v(elif_children)) {
break;
}
__list_structs__ASTNode_push(&body_list_el, elif_children.data[i_el]);
i_el = i_el + 1;
}
const uintptr_t sz_el = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_el = (__list_structs__ASTNode_t*)( malloc( sz_el ) );
if (heap_el != nil) {
memcpy(heap_el, &body_list_el, sz_el);
elif_node.children = heap_el;
}
__list_structs__ASTNode_push(&elif_nodes, elif_node);
parser__skip_whitespace(ctx);
}
parser__skip_whitespace(ctx);
if (ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_ELSE) {
ctx->pos = ctx->pos+ 1;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after else" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__push_scope();
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t_else2 = parser__peek( ctx );
if (t_else2.token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt2 = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt2.node_type) > 0) {
__list_structs__ASTNode_push(&final_else_children, stmt2);
}
}
parser__pop_scope();
}
int32_t i_chain = len_v(elif_nodes) - 1;
while (1) {
if (i_chain < 0) {
break;
}
__list_structs__ASTNode_t else_body_for_this = {0};
if (i_chain == len_v(elif_nodes) - 1) {
if (len_v(final_else_children) > 0) {
int32_t k_final = 0;
while (1) {
if (k_final >= len_v(final_else_children)) {
break;
}
__list_structs__ASTNode_push(&else_body_for_this, final_else_children.data[k_final]);
k_final = k_final + 1;
}
}
}
else {
__list_structs__ASTNode_push(&else_body_for_this, elif_nodes.data[i_chain + 1]);
}
if (len_v(else_body_for_this) > 0) {
__list_structs__ASTNode_t new_children = {0};
structs__ASTNode* curr_elif_ptr = &(elif_nodes.data[ i_chain ]);
if (curr_elif_ptr->children!= nil) {
int32_t j_copy = 0;
const __list_structs__ASTNode_t* curr_children = curr_elif_ptr->children;
while (1) {
if (j_copy >= len_v((*curr_children))) {
break;
}
__list_structs__ASTNode_push(&new_children, curr_children->data[j_copy]);
j_copy = j_copy + 1;
}
}
structs__ASTNode marker = {0};
marker.node_type = std__string__str ( "ElseMarker" );
__list_structs__ASTNode_push(&new_children, marker);
int32_t k_else = 0;
while (1) {
if (k_else >= len_v(else_body_for_this)) {
break;
}
__list_structs__ASTNode_push(&new_children, else_body_for_this.data[k_else]);
k_else = k_else + 1;
}
const uintptr_t sz_new = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_new = (__list_structs__ASTNode_t*)( malloc( sz_new ) );
if (heap_new != nil) {
memcpy(heap_new, &new_children, sz_new);
curr_elif_ptr->children = heap_new;
}
}
i_chain = i_chain - 1;
}
__list_structs__ASTNode_t else_children = {0};
if (len_v(elif_nodes) > 0) {
__list_structs__ASTNode_push(&else_children, elif_nodes.data[0]);
}
else {
int32_t k_else_final = 0;
while (1) {
if (k_else_final >= len_v(final_else_children)) {
break;
}
__list_structs__ASTNode_push(&else_children, final_else_children.data[k_else_final]);
k_else_final = k_else_final + 1;
}
}
node.node_type = std__string__str ( "If" );
node.line = if_line;
node.source_file = ctx->filename;
node.data.if_node.condition = condition;
parser__scan_expression_for_usage(condition);
__list_structs__ASTNode_t body_list = {0};
int32_t i_body = 0;
while (1) {
if (i_body >= len_v(if_children)) {
break;
}
__list_structs__ASTNode_push(&body_list, if_children.data[i_body]);
i_body = i_body + 1;
}
if (len_v(else_children) > 0) {
structs__ASTNode marker = {0};
marker.node_type = std__string__str ( "ElseMarker" );
__list_structs__ASTNode_push(&body_list, marker);
int32_t i_else = 0;
while (1) {
if (i_else >= len_v(else_children)) {
break;
}
__list_structs__ASTNode_push(&body_list, else_children.data[i_else]);
i_else = i_else + 1;
}
}
const uintptr_t list_size_if = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list_if = (__list_structs__ASTNode_t*)( malloc( list_size_if ) );
if (heap_list_if != nil) {
memcpy(heap_list_if, &body_list, list_size_if);
node.children = heap_list_if;
}
return node;
}
if (token_type == lexer__TokenType_FOR) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
bool is_for_in = false;
int32_t temp_pos = ctx->pos;
while (1) {
if (temp_pos >= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ temp_pos ].token_type!= lexer__TokenType_WHITESPACE&& ctx->tokens->data[ temp_pos ].token_type!= lexer__TokenType_NEWLINE) {
break;
}
temp_pos = temp_pos + 1;
}
if (temp_pos < len_ptr(ctx->tokens) && ctx->tokens->data[ temp_pos ].token_type== lexer__TokenType_IDENTIFIER) {
temp_pos = temp_pos + 1;
while (1) {
if (temp_pos >= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ temp_pos ].token_type!= lexer__TokenType_WHITESPACE&& ctx->tokens->data[ temp_pos ].token_type!= lexer__TokenType_NEWLINE) {
break;
}
temp_pos = temp_pos + 1;
}
if (temp_pos < len_ptr(ctx->tokens) && ctx->tokens->data[ temp_pos ].token_type== lexer__TokenType_IN) {
is_for_in = true;
}
}
if (is_for_in) {
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected variable name in for-in loop" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token item_var_token = parser__consume( ctx );
const std__string__string item_var = item_var_token.value;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected 'in' in for-in loop" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string collection = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token ct = parser__peek( ctx );
if (ct.token_type== lexer__TokenType_LBRACE) {
break;
}
if (ct.token_type== lexer__TokenType_WHITESPACE|| ct.token_type== lexer__TokenType_NEWLINE) {
parser__consume(ctx);
continue;
}
collection = std__string__concat ( collection , ct.value);
parser__consume(ctx);
}
collection = std__string__strip ( collection );
parser__scan_expression_for_usage(collection);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after for-in header" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__push_scope();
structs__ASTNode for_in_node = {0};
for_in_node.node_type = std__string__str ( "ForIn" );
for_in_node.data.for_in.var_name = item_var;
for_in_node.data.for_in.array_name = collection;
__list_structs__ASTNode_t body = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&body, stmt);
}
}
parser__pop_scope();
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &body, list_size);
for_in_node.children = heap_list;
}
return for_in_node;
}
std__string__string header = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
header = std__string__concat ( header , t.value);
header = std__string__concat ( header , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after for header" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
std__string__string init = std__string__str( "" );
std__string__string cond = std__string__str( "" );
std__string__string incr = std__string__str( "" );
int32_t part_idx = 0;
std__string__string current = std__string__str( "" );
int32_t i_hdr = 0;
while (1) {
if (i_hdr >= std__string__str_len ( header )) {
break;
}
const char ch_hdr = std__string__get_char( header , i_hdr );
if (ch_hdr == ';') {
const std__string__string trimmed = std__string__strip( current );
if (std__string__str_len ( trimmed ) > 0) {
if (part_idx == 0) {
init = trimmed;
}
else if (part_idx == 1) {
cond = trimmed;
}
else {
incr = trimmed;
}
}
part_idx = part_idx + 1;
current = std__string__str ( "" );
}
else {
current = std__string__concat_chr ( current , ch_hdr );
}
i_hdr = i_hdr + 1;
}
const std__string__string last_trimmed = std__string__strip( current );
if (std__string__str_len ( last_trimmed ) > 0) {
if (part_idx == 0) {
init = last_trimmed;
}
else if (part_idx == 1) {
cond = last_trimmed;
}
else {
incr = last_trimmed;
}
}
if (part_idx == 0 && std__string__str_len ( init ) > 0 && std__string__str_len ( cond ) == 0) {
const int32_t to_pos = std__string__find_substr( init , std__string__str ( " to " ) );
if (to_pos >= 0) {
const std__string__string var_part = std__string__strip( std__string__substring_se ( init , 0 , to_pos ) );
const std__string__string end_part = std__string__strip( std__string__substring_se ( init , to_pos + 4 , (uintptr_t)( std__string__str_len ( init ) ) ) );
std__string__string var_name = std__string__str( "i" );
const int32_t eq_pos = std__string__find_char_from( var_part , '=' , (uintptr_t)( 0 ) );
if (eq_pos > 0) {
const std__string__string before_eq = std__string__strip( std__string__substring_se ( var_part , 0 , eq_pos ) );
std__string__string name_part = before_eq;
if (std__string__has_prefix ( name_part , std__string__str ( "mut " ) )) {
name_part = std__string__strip ( std__string__substring_se ( name_part , 4 , (uintptr_t)( std__string__str_len ( name_part ) ) ) );
}
if (std__string__str_len ( name_part ) > 0) {
var_name = name_part;
}
}
init = var_part;
cond = std__string__concat ( std__string__concat ( var_name , std__string__str ( " < " ) ) , end_part );
incr = std__string__concat ( var_name , std__string__str ( "++" ) );
}
}
structs__ASTNode fnode = {0};
fnode.node_type = std__string__str ( "For" );
fnode.data.for_loop.initialization = init;
fnode.data.for_loop.condition = cond;
fnode.data.for_loop.increment = incr;
parser__scan_expression_for_usage(init);
parser__scan_expression_for_usage(cond);
parser__scan_expression_for_usage(incr);
parser__push_scope();
__list_structs__ASTNode_t body = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&body, stmt);
}
}
parser__pop_scope();
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &body, list_size);
fnode.children = heap_list;
}
return fnode;
}
if (token_type == lexer__TokenType_PRINT) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_STR)) {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t_skip = parser__peek( ctx );
if (t_skip.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
return node;
}
const lexer__Token str_token = parser__consume( ctx );
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
parser__consume(ctx);
}
__list_std__string_t messages = {0};
__list_bool_t flags = {0};
__list_std__string_push(&messages, str_token.value);
__list_bool_push(&flags, false);
node.node_type = std__string__str ( "Print" );
const uintptr_t list_size_str = sizeof(__list_std__string_t);
__list_std__string_t* heap_messages = (__list_std__string_t*)( malloc( list_size_str ) );
if (heap_messages != nil) {
memcpy(heap_messages, &messages, list_size_str);
node.data.print.messages = heap_messages;
}
const uintptr_t list_size_bool = sizeof(__list_bool_t);
__list_bool_t* heap_flags = (__list_bool_t*)( malloc( list_size_bool ) );
if (heap_flags != nil) {
memcpy(heap_flags, &flags, list_size_bool);
node.data.print.is_expressions = heap_flags;
}
return node;
}
if (token_type == lexer__TokenType_VAL) {
const int32_t decl_line = token.line;
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected identifier after 'val'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token var_name = parser__consume( ctx );
parser__skip_whitespace(ctx);
std__string__string type_name = std__string__str( "" );
std__string__string initializer = std__string__str( "" );
bool has_explicit_type = false;
if (parser__expect ( ctx , lexer__TokenType_COLON)) {
parser__consume(ctx);
type_name = parser__parse_type ( ctx );
has_explicit_type = true;
parser__skip_whitespace(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
const lexer__Token op_token = parser__peek( ctx );
if (std__string__equals_c ( op_token.value, "=" )) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
lexer__Token first_non_ws_token = {0};
int32_t non_ws_count = 0;
bool found_semicolon = false;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
found_semicolon = true;
break;
}
if (t.token_type== lexer__TokenType_VAL|| t.token_type== lexer__TokenType_MUT) {
break;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
if (non_ws_count == 0) {
first_non_ws_token = t;
}
non_ws_count = non_ws_count + 1;
}
if (t.token_type== lexer__TokenType_STR) {
initializer = std__string__concat ( initializer , std__string__str ( "\"" ) );
initializer = std__string__concat ( initializer , t.value);
initializer = std__string__concat ( initializer , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
initializer = std__string__concat ( initializer , std__string__str ( "'" ) );
initializer = std__string__concat ( initializer , t.value);
initializer = std__string__concat ( initializer , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else {
if (t.token_type== lexer__TokenType_IDENTIFIER) {
parser__check_null_usage(ctx, t.value);
}
initializer = std__string__concat ( initializer , t.value);
initializer = std__string__concat ( initializer , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! found_semicolon) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after val declaration" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
initializer = parser__expand_macros_in_expression ( initializer );
if (! has_explicit_type) {
if (non_ws_count == 1) {
if (first_non_ws_token.token_type== lexer__TokenType_NUMBER|| ( first_non_ws_token.token_type== lexer__TokenType_IDENTIFIER&& parser__is_all_digits ( first_non_ws_token.value) )) {
type_name = std__string__str ( "int32_t" );
}
else if (first_non_ws_token.token_type== lexer__TokenType_CHAR) {
type_name = std__string__str ( "char" );
}
else if (first_non_ws_token.token_type== lexer__TokenType_STR) {
type_name = std__string__str ( "char*" );
}
}
const std__string__string trimmed_init_val = std__string__strip( initializer );
if (std__string__str_len ( type_name ) == 0) {
const int32_t brace_pos_val = std__string__find_char_from( trimmed_init_val , '{' , (uintptr_t)( 0 ) );
if (brace_pos_val > 0) {
const std__string__string inferred_name_brace = std__string__strip( std__string__substring_se ( trimmed_init_val , 0 , (uintptr_t)( brace_pos_val ) ) );
if (std__string__str_len ( inferred_name_brace ) > 0) {
type_name = inferred_name_brace;
}
}
}
}
}
else {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
}
}
else {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
}
node.node_type = std__string__str ( "Declaration" );
node.line = decl_line;
node.source_file = ctx->filename;
node.data.declaration.name = var_name.value;
node.data.declaration.is_mutable = false;
node.data.declaration.initializer = initializer;
node.data.declaration.type_name = type_name;
node.data.declaration.ref_depth = 0;
parser__register_variable(var_name.value, false, decl_line, ctx->filename);
parser__scan_expression_for_addr(initializer);
parser__scan_expression_for_c_calls(initializer);
parser__scan_expression_for_usage(initializer);
gstate__debug_print_raw("\n[DEBUG] VAL declaration details:");
gstate__debug_print_raw("\n[DEBUG]   name:");
gstate__debug_print_str(var_name.value);
gstate__debug_print_raw("\n[DEBUG]   type_name:");
gstate__debug_print_str(type_name);
gstate__debug_print_raw("\n[DEBUG]   initializer:");
gstate__debug_print_str(initializer);
gstate__debug_print_raw("\n[DEBUG] VAL declaration finished for:");
gstate__debug_print_str(var_name.value);
return node;
}
if (token_type == lexer__TokenType_MUT) {
const int32_t mut_line = token.line;
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_VAL)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected identifier after 'mut'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token var_name = parser__consume( ctx );
parser__skip_whitespace(ctx);
std__string__string type_name = std__string__str( "" );
std__string__string initializer = std__string__str( "" );
bool has_explicit_type_mut = false;
if (parser__expect ( ctx , lexer__TokenType_COLON)) {
parser__consume(ctx);
type_name = parser__parse_type ( ctx );
has_explicit_type_mut = true;
parser__skip_whitespace(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
const lexer__Token op_token = parser__peek( ctx );
if (std__string__equals_c ( op_token.value, "=" )) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
lexer__Token first_non_ws_token_mut = {0};
int32_t non_ws_count_mut = 0;
bool found_semicolon_mut = false;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
found_semicolon_mut = true;
break;
}
if (t.token_type== lexer__TokenType_VAL|| t.token_type== lexer__TokenType_MUT) {
break;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
if (non_ws_count_mut == 0) {
first_non_ws_token_mut = t;
}
non_ws_count_mut = non_ws_count_mut + 1;
}
if (t.token_type== lexer__TokenType_STR) {
initializer = std__string__concat ( initializer , std__string__str ( "\"" ) );
initializer = std__string__concat ( initializer , t.value);
initializer = std__string__concat ( initializer , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
initializer = std__string__concat ( initializer , std__string__str ( "'" ) );
initializer = std__string__concat ( initializer , t.value);
initializer = std__string__concat ( initializer , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else {
if (t.token_type== lexer__TokenType_IDENTIFIER) {
parser__check_null_usage(ctx, t.value);
}
initializer = std__string__concat ( initializer , t.value);
initializer = std__string__concat ( initializer , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! found_semicolon_mut) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after mut declaration" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
initializer = parser__expand_macros_in_expression ( initializer );
if (! has_explicit_type_mut) {
if (non_ws_count_mut == 1) {
if (first_non_ws_token_mut.token_type== lexer__TokenType_NUMBER|| ( first_non_ws_token_mut.token_type== lexer__TokenType_IDENTIFIER&& parser__is_all_digits ( first_non_ws_token_mut.value) )) {
type_name = std__string__str ( "int32_t" );
}
else if (first_non_ws_token_mut.token_type== lexer__TokenType_CHAR) {
type_name = std__string__str ( "char" );
}
else if (first_non_ws_token_mut.token_type== lexer__TokenType_STR) {
type_name = std__string__str ( "char*" );
}
}
std__string__string trimmed_init_mut = std__string__strip( initializer );
if (std__string__str_len ( type_name ) == 0 && std__string__has_prefix ( trimmed_init_mut , std__string__str ( "new " ) )) {
trimmed_init_mut = std__string__substring_se ( trimmed_init_mut , 4 , (uintptr_t)( std__string__str_len ( trimmed_init_mut ) ) );
trimmed_init_mut = std__string__strip ( trimmed_init_mut );
int32_t end_pos_mut = - 1;
int32_t i_mut = 0;
while (1) {
if (i_mut >= std__string__str_len ( trimmed_init_mut )) {
break;
}
const char ch_mut = std__string__get_char( trimmed_init_mut , i_mut );
if (ch_mut == '(' || ch_mut == ' ' || ch_mut == '\t') {
end_pos_mut = i_mut;
break;
}
i_mut = i_mut + 1;
}
if (end_pos_mut < 0) {
end_pos_mut = std__string__str_len ( trimmed_init_mut );
}
const std__string__string inferred_name_mut = std__string__strip( std__string__substring_se ( trimmed_init_mut , 0 , end_pos_mut ) );
if (std__string__str_len ( inferred_name_mut ) > 0) {
type_name = inferred_name_mut;
}
}
}
}
else {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
}
}
else {
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
}
node.node_type = std__string__str ( "Declaration" );
node.line = mut_line;
node.source_file = ctx->filename;
node.data.declaration.name = var_name.value;
node.data.declaration.is_mutable = true;
node.data.declaration.initializer = initializer;
node.data.declaration.type_name = type_name;
node.data.declaration.ref_depth = 0;
parser__register_variable(var_name.value, true, mut_line, ctx->filename);
if (std__string__str_len ( initializer ) > 0) {
const bool has_dot = std__string__find_char_from( initializer , '.' , (uintptr_t)( 0 ) ) >= 0;
const bool has_paren = std__string__find_char_from( initializer , '(' , (uintptr_t)( 0 ) ) >= 0;
const bool is_constructor = has_dot && has_paren;
if (! is_constructor) {
parser__register_for_mutation_tracking(var_name.value);
}
parser__scan_expression_for_addr(initializer);
parser__scan_expression_for_c_calls(initializer);
parser__scan_expression_for_usage(initializer);
if (parser__contains_c_call ( initializer )) {
parser__mark_variable_mutated(var_name.value);
}
}
gstate__debug_print_raw("\n[DEBUG] MUT declaration finished for:");
gstate__debug_print_str(var_name.value);
return node;
}
if (token_type == lexer__TokenType_IDENTIFIER) {
const lexer__Token ident_token = parser__consume( ctx );
std__string__string ident_name = ident_token.value;
parser__skip_whitespace(ctx);
if (parser__macros_contains ( ident_name ) && ctx->pos< len_ptr(ctx->tokens) && ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_LPAREN) {
parser__consume(ctx);
__list_std__string_t args = {0};
std__string__string current_arg = std__string__str( "" );
int32_t paren_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_RPAREN&& paren_depth == 0) {
const std__string__string trimmed = std__string__strip( current_arg );
if (std__string__str_len ( trimmed ) > 0) {
__list_std__string_push(&args, trimmed);
}
parser__consume(ctx);
break;
}
if (t.token_type== lexer__TokenType_LPAREN) {
paren_depth = paren_depth + 1;
current_arg = std__string__concat ( current_arg , t.value);
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_RPAREN) {
paren_depth = paren_depth - 1;
current_arg = std__string__concat ( current_arg , t.value);
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_COMMA&& paren_depth == 0) {
const std__string__string trimmed_arg = std__string__strip( current_arg );
if (std__string__str_len ( trimmed_arg ) > 0) {
__list_std__string_push(&args, trimmed_arg);
}
current_arg = std__string__str ( "" );
parser__consume(ctx);
continue;
}
if (t.token_type== lexer__TokenType_STR) {
current_arg = std__string__concat ( current_arg , std__string__str ( "\"" ) );
current_arg = std__string__concat ( current_arg , t.value);
current_arg = std__string__concat ( current_arg , std__string__str ( "\"" ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
current_arg = std__string__concat ( current_arg , std__string__str ( "'" ) );
current_arg = std__string__concat ( current_arg , t.value);
current_arg = std__string__concat ( current_arg , std__string__str ( "'" ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
current_arg = std__string__concat ( current_arg , std__string__str ( " " ) );
}
else {
current_arg = std__string__concat ( current_arg , t.value);
}
parser__consume(ctx);
}
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after macro invocation" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
const structs__MacroDef defn = parser__macros_get( ident_name );
__list_lexer__Token_t expanded_tokens = {0};
int32_t i_tok = 0;
while (1) {
if (i_tok >= len_ptr(defn.body)) {
break;
}
__list_lexer__Token_push(&expanded_tokens, defn.body->data[i_tok]);
i_tok = i_tok + 1;
}
int32_t i_param = 0;
while (1) {
if (i_param >= len_ptr(defn.params) || i_param >= len_v(args)) {
break;
}
const std__string__string param_name = defn.params->data[ i_param ];
const std__string__string arg_expr = args.data[ i_param ];
int32_t j_tok = 0;
while (1) {
if (j_tok >= len_v(expanded_tokens)) {
break;
}
if (expanded_tokens.data[ j_tok ].token_type== lexer__TokenType_IDENTIFIER) {
lexer__Token* exp_token = &(expanded_tokens.data[ j_tok ]);
if (std__string__compare ( exp_token->value, param_name ) == 0) {
exp_token->value = arg_expr;
if (parser__is_all_digits ( arg_expr )) {
exp_token->token_type = lexer__TokenType_NUMBER;
}
}
}
j_tok++;
}
i_param++;
}
structs__ParserContext temp_ctx = {0};
temp_ctx.tokens = &expanded_tokens;
temp_ctx.pos = 0;
temp_ctx.is_axec = ctx->is_axec;
temp_ctx.check_entry_point = false;
temp_ctx.current_module = ctx->current_module;
temp_ctx.filename = ctx->filename;
temp_ctx.current_scope = ctx->current_scope;
__list_structs__ASTNode_t expanded_nodes = {0};
while (1) {
if (temp_ctx.pos>= len_v((*temp_ctx.tokens))) {
break;
}
while (1) {
if (temp_ctx.pos>= len_v((*temp_ctx.tokens))) {
break;
}
const lexer__Token t = temp_ctx.tokens->data[ temp_ctx.pos];
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
break;
}
temp_ctx.pos++;
}
if (temp_ctx.pos>= len_v((*temp_ctx.tokens))) {
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( &temp_ctx , &(temp_ctx.current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&expanded_nodes, stmt);
}
}
if (len_v(expanded_nodes) == 0) {
return node;
}
else if (len_v(expanded_nodes) == 1) {
return expanded_nodes.data[ 0 ];
}
else {
structs__ASTNode compound = {0};
compound.node_type = std__string__str ( "MacroExpansion" );
compound.line = node.line;
compound.source_file = ctx->filename;
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &expanded_nodes, list_size);
compound.children = heap_list;
}
return compound;
}
}
if (ctx->pos+ 1 < len_ptr(ctx->tokens)) {
const lexer__Token look1 = ctx->tokens->data[ ctx->pos];
const lexer__Token look2 = ctx->tokens->data[ ctx->pos+ 1 ];
if (look1.token_type== lexer__TokenType_IDENTIFIER&& std__string__equals_c ( look2.value, "(" )) {
std__string__string merged_call = ident_name;
const std__string__string next_ident_call = look1.value;
if (std__string__str_len ( next_ident_call ) > 0 && std__string__get_char ( next_ident_call , 0 ) != '_') {
merged_call = std__string__concat ( merged_call , std__string__str ( "_" ) );
}
merged_call = std__string__concat ( merged_call , next_ident_call );
ident_name = merged_call;
ctx->pos = ctx->pos+ 1;
parser__skip_whitespace(ctx);
}
}
if (ctx->pos>= len_ptr(ctx->tokens)) {
return node;
}
const lexer__Token next_token = parser__peek( ctx );
if (next_token.token_type== lexer__TokenType_LPAREN) {
parser__consume(ctx);
int32_t paren_depth = 1;
std__string__string args_str = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LPAREN) {
paren_depth = paren_depth + 1;
args_str = std__string__concat ( args_str , std__string__str ( "(" ) );
}
else if (t.token_type== lexer__TokenType_RPAREN) {
paren_depth = paren_depth - 1;
if (paren_depth == 0) {
parser__consume(ctx);
break;
}
args_str = std__string__concat ( args_str , std__string__str ( ")" ) );
}
else if (t.token_type== lexer__TokenType_STR) {
args_str = std__string__concat ( args_str , std__string__str ( "\"" ) );
args_str = std__string__concat ( args_str , t.value);
args_str = std__string__concat ( args_str , std__string__str ( "\"" ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
args_str = std__string__concat ( args_str , std__string__str ( "'" ) );
args_str = std__string__concat ( args_str , t.value);
args_str = std__string__concat ( args_str , std__string__str ( "'" ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
args_str = std__string__concat ( args_str , std__string__str ( " " ) );
}
else {
if (t.token_type== lexer__TokenType_IDENTIFIER) {
parser__check_null_usage(ctx, t.value);
}
args_str = std__string__concat ( args_str , t.value);
}
parser__consume(ctx);
}
parser__skip_whitespace(ctx);
parser__scan_expression_for_addr(args_str);
parser__scan_expression_for_c_calls(args_str);
parser__scan_expression_for_usage(args_str);
parser__scan_function_args_for_ref_params(args_str);
bool is_assignment = false;
if (ctx->pos< len_ptr(ctx->tokens)) {
const lexer__Token look_tok = parser__peek( ctx );
if (look_tok.token_type== lexer__TokenType_OPERATOR&& std__string__equals_c ( look_tok.value, "=" )) {
is_assignment = true;
}
}
if (is_assignment) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string value_str = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token vt = parser__peek( ctx );
if (vt.token_type== lexer__TokenType_SEMICOLON) {
break;
}
if (vt.token_type== lexer__TokenType_STR) {
value_str = std__string__concat ( value_str , std__string__str ( "\"" ) );
value_str = std__string__concat ( value_str , vt.value);
value_str = std__string__concat ( value_str , std__string__str ( "\"" ) );
}
else if (vt.token_type== lexer__TokenType_CHAR) {
value_str = std__string__concat ( value_str , std__string__str ( "'" ) );
value_str = std__string__concat ( value_str , vt.value);
value_str = std__string__concat ( value_str , std__string__str ( "'" ) );
}
else if (vt.token_type== lexer__TokenType_WHITESPACE|| vt.token_type== lexer__TokenType_NEWLINE) {
value_str = std__string__concat ( value_str , std__string__str ( " " ) );
}
else {
if (vt.token_type== lexer__TokenType_IDENTIFIER) {
parser__check_null_usage(ctx, vt.value);
}
value_str = std__string__concat ( value_str , vt.value);
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after function call assignment" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
value_str = parser__expand_macros_in_expression ( value_str );
std__string__string left_side = std__string__concat( ident_name , std__string__str ( "(" ) );
left_side = std__string__concat ( left_side , std__string__strip ( args_str ) );
left_side = std__string__concat ( left_side , std__string__str ( ")" ) );
node.node_type = std__string__str ( "Assignment" );
node.data.assignment.variable = left_side;
node.data.assignment.expression = std__string__strip ( value_str );
node.data.assignment.operator = std__string__str ( "=" );
return node;
}
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after function call" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "FunctionCall" );
node.data.func_call.function_name = ident_name;
__list_std__string_t args_list = {0};
const std__string__string trimmed_args = std__string__strip( args_str );
if (std__string__str_len ( trimmed_args ) > 0) {
__list_std__string_push(&args_list, trimmed_args);
}
const uintptr_t list_size = sizeof(__list_std__string_t);
__list_std__string_t* heap_list = (__list_std__string_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &args_list, list_size);
node.data.func_call.args = heap_list;
}
return node;
}
if (next_token.token_type== lexer__TokenType_LBRACKET) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string index_expr = std__string__str( "" );
int32_t bracket_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACKET) {
bracket_depth = bracket_depth + 1;
index_expr = std__string__concat ( index_expr , t.value);
index_expr = std__string__concat ( index_expr , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_RBRACKET) {
if (bracket_depth == 0) {
break;
}
bracket_depth = bracket_depth - 1;
index_expr = std__string__concat ( index_expr , t.value);
index_expr = std__string__concat ( index_expr , std__string__str ( " " ) );
}
else if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
index_expr = std__string__concat ( index_expr , t.value);
index_expr = std__string__concat ( index_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RBRACKET)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ']' after array index" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_LPAREN)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string args_str = std__string__str( "" );
int32_t paren_depth_args = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_RPAREN&& paren_depth_args == 0) {
break;
}
if (t.token_type== lexer__TokenType_LPAREN) {
paren_depth_args = paren_depth_args + 1;
}
if (t.token_type== lexer__TokenType_RPAREN) {
paren_depth_args = paren_depth_args - 1;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
args_str = std__string__concat ( args_str , t.value);
args_str = std__string__concat ( args_str , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after generic function call arguments" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after generic function call" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
const std__string__string type_arg = std__string__strip( index_expr );
std__string__string mangled_name = std__string__concat( ident_name , std__string__str ( "__T_" ) );
mangled_name = std__string__concat ( mangled_name , type_arg );
node.node_type = std__string__str ( "FunctionCall" );
node.data.func_call.function_name = mangled_name;
__list_std__string_t args_list = {0};
const std__string__string trimmed_args = std__string__strip( args_str );
if (std__string__str_len ( trimmed_args ) > 0) {
__list_std__string_push(&args_list, trimmed_args);
}
const uintptr_t list_size = sizeof(__list_std__string_t);
__list_std__string_t* heap_list = (__list_std__string_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &args_list, list_size);
node.data.func_call.args = heap_list;
}
return node;
}
std__string__string index2_expr = std__string__str( "" );
if (parser__expect ( ctx , lexer__TokenType_LBRACKET)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
bracket_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACKET) {
bracket_depth = bracket_depth + 1;
index2_expr = std__string__concat ( index2_expr , t.value);
index2_expr = std__string__concat ( index2_expr , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_RBRACKET) {
if (bracket_depth == 0) {
break;
}
bracket_depth = bracket_depth - 1;
index2_expr = std__string__concat ( index2_expr , t.value);
index2_expr = std__string__concat ( index2_expr , std__string__str ( " " ) );
}
else if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
index2_expr = std__string__concat ( index2_expr , t.value);
index2_expr = std__string__concat ( index2_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RBRACKET)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ']' after second array index" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
const lexer__Token op_token = parser__peek( ctx );
if (std__string__equals_c ( op_token.value, "=" )) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string value_expr = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
if (t.token_type== lexer__TokenType_STR) {
value_expr = std__string__concat ( value_expr , std__string__str ( "\"" ) );
value_expr = std__string__concat ( value_expr , t.value);
value_expr = std__string__concat ( value_expr , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
value_expr = std__string__concat ( value_expr , std__string__str ( "'" ) );
value_expr = std__string__concat ( value_expr , t.value);
value_expr = std__string__concat ( value_expr , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else {
value_expr = std__string__concat ( value_expr , t.value);
value_expr = std__string__concat ( value_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
node.node_type = std__string__str ( "ArrayAssign" );
node.data.array_assign.array_name = ident_name;
node.data.array_assign.index = index_expr;
node.data.array_assign.index2 = index2_expr;
node.data.array_assign.value = value_expr;
parser__scan_expression_for_usage(index_expr);
parser__scan_expression_for_usage(index2_expr);
parser__scan_expression_for_usage(value_expr);
parser__mark_variable_mutated(ident_name);
return node;
}
}
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
node.node_type = std__string__str ( "ArrayAccess" );
node.data.array_access.array_name = ident_name;
node.data.array_access.index = index_expr;
node.data.array_access.index2 = index2_expr;
return node;
}
if (next_token.token_type== lexer__TokenType_DOT) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected member name after '.'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token member_token = parser__consume( ctx );
std__string__string member_name = member_token.value;
parser__skip_whitespace(ctx);
while (1) {
if (! parser__expect ( ctx , lexer__TokenType_DOT)) {
break;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
break;
}
const lexer__Token next_member_token = parser__consume( ctx );
member_name = std__string__concat ( member_name , std__string__str ( "." ) );
member_name = std__string__concat ( member_name , next_member_token.value);
parser__skip_whitespace(ctx);
}
if (ctx->pos+ 1 < len_ptr(ctx->tokens)) {
const lexer__Token look_member = ctx->tokens->data[ ctx->pos];
const lexer__Token look_after = ctx->tokens->data[ ctx->pos+ 1 ];
if (look_member.token_type== lexer__TokenType_IDENTIFIER&& look_after.token_type== lexer__TokenType_LPAREN) {
std__string__string merged_member = member_name;
const std__string__string next_ident_member = look_member.value;
if (std__string__str_len ( next_ident_member ) > 0 && std__string__get_char ( next_ident_member , 0 ) != '_') {
merged_member = std__string__concat ( merged_member , std__string__str ( "_" ) );
}
merged_member = std__string__concat ( merged_member , next_ident_member );
member_name = merged_member;
ctx->pos = ctx->pos+ 1;
parser__skip_whitespace(ctx);
}
}
if (parser__expect ( ctx , lexer__TokenType_LPAREN)) {
parser__consume(ctx);
int32_t paren_depth2 = 1;
std__string__string args_str2 = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t2 = parser__peek( ctx );
if (t2.token_type== lexer__TokenType_LPAREN) {
paren_depth2 = paren_depth2 + 1;
args_str2 = std__string__concat ( args_str2 , std__string__str ( "(" ) );
}
else if (t2.token_type== lexer__TokenType_RPAREN) {
paren_depth2 = paren_depth2 - 1;
if (paren_depth2 == 0) {
parser__consume(ctx);
break;
}
args_str2 = std__string__concat ( args_str2 , std__string__str ( ")" ) );
}
else if (t2.token_type== lexer__TokenType_STR) {
args_str2 = std__string__concat ( args_str2 , std__string__str ( "\"" ) );
args_str2 = std__string__concat ( args_str2 , t2.value);
args_str2 = std__string__concat ( args_str2 , std__string__str ( "\"" ) );
}
else if (t2.token_type== lexer__TokenType_CHAR) {
args_str2 = std__string__concat ( args_str2 , std__string__str ( "'" ) );
args_str2 = std__string__concat ( args_str2 , t2.value);
args_str2 = std__string__concat ( args_str2 , std__string__str ( "'" ) );
}
else if (t2.token_type== lexer__TokenType_WHITESPACE|| t2.token_type== lexer__TokenType_NEWLINE) {
args_str2 = std__string__concat ( args_str2 , std__string__str ( " " ) );
}
else {
args_str2 = std__string__concat ( args_str2 , t2.value);
}
parser__consume(ctx);
}
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
parser__consume(ctx);
}
parser__scan_expression_for_addr(args_str2);
parser__scan_expression_for_c_calls(args_str2);
parser__scan_expression_for_usage(args_str2);
parser__scan_function_args_for_ref_params(args_str2);
node.node_type = std__string__str ( "FunctionCall" );
std__string__string full_name = ident_name;
if (std__string__equals_c ( ident_name , "C" )) {
full_name = std__string__concat ( std__string__str ( "C." ) , member_name );
}
else {
full_name = std__string__concat ( full_name , std__string__str ( "__" ) );
full_name = std__string__concat ( full_name , member_name );
}
node.data.func_call.function_name = full_name;
__list_std__string_t args_list2 = {0};
const std__string__string trimmed2 = std__string__strip( args_str2 );
if (std__string__str_len ( trimmed2 ) > 0) {
__list_std__string_push(&args_list2, trimmed2);
}
const uintptr_t list_size2 = sizeof(__list_std__string_t);
__list_std__string_t* heap_list2 = (__list_std__string_t*)( malloc( list_size2 ) );
if (heap_list2 != nil) {
memcpy(heap_list2, &args_list2, list_size2);
node.data.func_call.args = heap_list2;
}
return node;
}
if (parser__expect ( ctx , lexer__TokenType_LBRACKET)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string member_index_expr = std__string__str( "" );
int32_t member_bracket_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACKET) {
member_bracket_depth = member_bracket_depth + 1;
member_index_expr = std__string__concat ( member_index_expr , t.value);
member_index_expr = std__string__concat ( member_index_expr , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_RBRACKET) {
if (member_bracket_depth == 0) {
break;
}
member_bracket_depth = member_bracket_depth - 1;
member_index_expr = std__string__concat ( member_index_expr , t.value);
member_index_expr = std__string__concat ( member_index_expr , std__string__str ( " " ) );
}
else if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
member_index_expr = std__string__concat ( member_index_expr , t.value);
member_index_expr = std__string__concat ( member_index_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RBRACKET)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ']' after member array index" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string member_index2_expr = std__string__str( "" );
if (parser__expect ( ctx , lexer__TokenType_LBRACKET)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
member_bracket_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACKET) {
member_bracket_depth = member_bracket_depth + 1;
member_index2_expr = std__string__concat ( member_index2_expr , t.value);
member_index2_expr = std__string__concat ( member_index2_expr , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_RBRACKET) {
if (member_bracket_depth == 0) {
break;
}
member_bracket_depth = member_bracket_depth - 1;
member_index2_expr = std__string__concat ( member_index2_expr , t.value);
member_index2_expr = std__string__concat ( member_index2_expr , std__string__str ( " " ) );
}
else if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
member_index2_expr = std__string__concat ( member_index2_expr , t.value);
member_index2_expr = std__string__concat ( member_index2_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RBRACKET)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ']' after second member array index" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
const lexer__Token member_op_token = parser__peek( ctx );
if (std__string__equals_c ( member_op_token.value, "=" )) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string member_array_value_expr = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
if (t.token_type== lexer__TokenType_STR) {
member_array_value_expr = std__string__concat ( member_array_value_expr , std__string__str ( "\"" ) );
member_array_value_expr = std__string__concat ( member_array_value_expr , t.value);
member_array_value_expr = std__string__concat ( member_array_value_expr , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
member_array_value_expr = std__string__concat ( member_array_value_expr , std__string__str ( "'" ) );
member_array_value_expr = std__string__concat ( member_array_value_expr , t.value);
member_array_value_expr = std__string__concat ( member_array_value_expr , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else {
member_array_value_expr = std__string__concat ( member_array_value_expr , t.value);
member_array_value_expr = std__string__concat ( member_array_value_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
std__string__string full_array_name = ident_name;
full_array_name = std__string__concat ( full_array_name , std__string__str ( "." ) );
full_array_name = std__string__concat ( full_array_name , member_name );
node.node_type = std__string__str ( "ArrayAssign" );
node.data.array_assign.array_name = full_array_name;
node.data.array_assign.index = member_index_expr;
node.data.array_assign.index2 = member_index2_expr;
node.data.array_assign.value = member_array_value_expr;
parser__scan_expression_for_usage(member_index_expr);
parser__scan_expression_for_usage(member_index2_expr);
parser__scan_expression_for_usage(member_array_value_expr);
parser__mark_variable_mutated(ident_name);
return node;
}
}
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
std__string__string access_array_name = ident_name;
access_array_name = std__string__concat ( access_array_name , std__string__str ( "." ) );
access_array_name = std__string__concat ( access_array_name , member_name );
node.node_type = std__string__str ( "ArrayAccess" );
node.data.array_access.array_name = access_array_name;
node.data.array_access.index = member_index_expr;
node.data.array_access.index2 = member_index2_expr;
return node;
}
if (parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
const lexer__Token op_token = parser__peek( ctx );
if (std__string__equals_c ( op_token.value, "=" )) {
gstate__debug_print_raw("\n[DEBUG] MemberAccess assignment check:");
gstate__debug_print_raw("\n[DEBUG]   object ident_name:");
gstate__debug_print_str(ident_name);
gstate__debug_print_raw("\n[DEBUG]   member_name:");
gstate__debug_print_str(member_name);
if (! parser__is_variable_mutable ( ident_name )) {
std__string__string err = std__string__str( "Cannot assign to member '" );
err = std__string__concat ( err , member_name );
err = std__string__concat ( err , std__string__str ( "' of immutable variable '" ) );
err = std__string__concat ( err , ident_name );
err = std__string__concat ( err , std__string__str ( "'" ) );
std__errors__enforce_raw(false, parser__format_error(ctx, err).data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string value_expr = std__string__str( "" );
bool found_semicolon_member = false;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
found_semicolon_member = true;
break;
}
if (t.token_type== lexer__TokenType_VAL|| t.token_type== lexer__TokenType_MUT) {
break;
}
if (t.token_type== lexer__TokenType_STR) {
value_expr = std__string__concat ( value_expr , std__string__str ( "\"" ) );
value_expr = std__string__concat ( value_expr , t.value);
value_expr = std__string__concat ( value_expr , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
value_expr = std__string__concat ( value_expr , std__string__str ( "'" ) );
value_expr = std__string__concat ( value_expr , t.value);
value_expr = std__string__concat ( value_expr , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else {
value_expr = std__string__concat ( value_expr , t.value);
value_expr = std__string__concat ( value_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! found_semicolon_member) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after member assignment" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
node.node_type = std__string__str ( "MemberAccess" );
node.data.member_access.object_name = ident_name;
node.data.member_access.member_name = member_name;
node.data.member_access.value = value_expr;
parser__scan_expression_for_usage(value_expr);
parser__mark_variable_mutated(ident_name);
return node;
}
}
if (parser__expect ( ctx , lexer__TokenType_INCREMENT) || parser__expect ( ctx , lexer__TokenType_DECREMENT)) {
const lexer__Token inc_dec_token = parser__peek( ctx );
const bool is_inc = inc_dec_token.token_type== lexer__TokenType_INCREMENT;
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after member increment/decrement" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "MemberIncDec" );
node.data.member_inc_dec.object_name = ident_name;
node.data.member_inc_dec.member_name = member_name;
node.data.member_inc_dec.is_increment = is_inc;
return node;
}
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
node.node_type = std__string__str ( "MemberAccess" );
node.data.member_access.object_name = ident_name;
node.data.member_access.member_name = member_name;
node.data.member_access.value = std__string__str ( "" );
return node;
}
if (next_token.token_type== lexer__TokenType_STAR_DOT) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected member name after '*.' " ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token ptr_member_token = parser__consume( ctx );
const std__string__string ptr_member_name = ptr_member_token.value;
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_LBRACKET)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string ptr_member_index_expr = std__string__str( "" );
int32_t ptr_member_bracket_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACKET) {
ptr_member_bracket_depth = ptr_member_bracket_depth + 1;
ptr_member_index_expr = std__string__concat ( ptr_member_index_expr , t.value);
ptr_member_index_expr = std__string__concat ( ptr_member_index_expr , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_RBRACKET) {
if (ptr_member_bracket_depth == 0) {
break;
}
ptr_member_bracket_depth = ptr_member_bracket_depth - 1;
ptr_member_index_expr = std__string__concat ( ptr_member_index_expr , t.value);
ptr_member_index_expr = std__string__concat ( ptr_member_index_expr , std__string__str ( " " ) );
}
else if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
ptr_member_index_expr = std__string__concat ( ptr_member_index_expr , t.value);
ptr_member_index_expr = std__string__concat ( ptr_member_index_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RBRACKET)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ']' after pointer member array index" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string ptr_member_index2_expr = std__string__str( "" );
if (parser__expect ( ctx , lexer__TokenType_LBRACKET)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
ptr_member_bracket_depth = 0;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACKET) {
ptr_member_bracket_depth = ptr_member_bracket_depth + 1;
ptr_member_index2_expr = std__string__concat ( ptr_member_index2_expr , t.value);
ptr_member_index2_expr = std__string__concat ( ptr_member_index2_expr , std__string__str ( " " ) );
}
else if (t.token_type== lexer__TokenType_RBRACKET) {
if (ptr_member_bracket_depth == 0) {
break;
}
ptr_member_bracket_depth = ptr_member_bracket_depth - 1;
ptr_member_index2_expr = std__string__concat ( ptr_member_index2_expr , t.value);
ptr_member_index2_expr = std__string__concat ( ptr_member_index2_expr , std__string__str ( " " ) );
}
else if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
ptr_member_index2_expr = std__string__concat ( ptr_member_index2_expr , t.value);
ptr_member_index2_expr = std__string__concat ( ptr_member_index2_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RBRACKET)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ']' after second pointer member array index" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
const lexer__Token ptr_member_op_token = parser__peek( ctx );
if (std__string__equals_c ( ptr_member_op_token.value, "=" )) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string ptr_member_array_value_expr = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
if (t.token_type== lexer__TokenType_STR) {
ptr_member_array_value_expr = std__string__concat ( ptr_member_array_value_expr , std__string__str ( "\"" ) );
ptr_member_array_value_expr = std__string__concat ( ptr_member_array_value_expr , t.value);
ptr_member_array_value_expr = std__string__concat ( ptr_member_array_value_expr , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
ptr_member_array_value_expr = std__string__concat ( ptr_member_array_value_expr , std__string__str ( "'" ) );
ptr_member_array_value_expr = std__string__concat ( ptr_member_array_value_expr , t.value);
ptr_member_array_value_expr = std__string__concat ( ptr_member_array_value_expr , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else {
ptr_member_array_value_expr = std__string__concat ( ptr_member_array_value_expr , t.value);
ptr_member_array_value_expr = std__string__concat ( ptr_member_array_value_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
std__string__string full_ptr_array_name = ident_name;
full_ptr_array_name = std__string__concat ( full_ptr_array_name , std__string__str ( "*." ) );
full_ptr_array_name = std__string__concat ( full_ptr_array_name , ptr_member_name );
node.node_type = std__string__str ( "ArrayAssign" );
node.data.array_assign.array_name = full_ptr_array_name;
node.data.array_assign.index = ptr_member_index_expr;
node.data.array_assign.index2 = ptr_member_index2_expr;
node.data.array_assign.value = ptr_member_array_value_expr;
parser__scan_expression_for_usage(ptr_member_index_expr);
parser__scan_expression_for_usage(ptr_member_index2_expr);
parser__scan_expression_for_usage(ptr_member_array_value_expr);
parser__mark_variable_mutated(ident_name);
return node;
}
}
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
std__string__string access_ptr_array_name = ident_name;
access_ptr_array_name = std__string__concat ( access_ptr_array_name , std__string__str ( "*." ) );
access_ptr_array_name = std__string__concat ( access_ptr_array_name , ptr_member_name );
node.node_type = std__string__str ( "ArrayAccess" );
node.data.array_access.array_name = access_ptr_array_name;
node.data.array_access.index = ptr_member_index_expr;
node.data.array_access.index2 = ptr_member_index2_expr;
return node;
}
if (parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
const lexer__Token op_token = parser__peek( ctx );
if (std__string__equals_c ( op_token.value, "=" )) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string ptr_value_expr = std__string__str( "" );
bool found_semicolon_ptr = false;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
found_semicolon_ptr = true;
break;
}
if (t.token_type== lexer__TokenType_VAL|| t.token_type== lexer__TokenType_MUT) {
break;
}
if (t.token_type== lexer__TokenType_STR) {
ptr_value_expr = std__string__concat ( ptr_value_expr , std__string__str ( "\"" ) );
ptr_value_expr = std__string__concat ( ptr_value_expr , t.value);
ptr_value_expr = std__string__concat ( ptr_value_expr , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
ptr_value_expr = std__string__concat ( ptr_value_expr , std__string__str ( "'" ) );
ptr_value_expr = std__string__concat ( ptr_value_expr , t.value);
ptr_value_expr = std__string__concat ( ptr_value_expr , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else {
ptr_value_expr = std__string__concat ( ptr_value_expr , t.value);
ptr_value_expr = std__string__concat ( ptr_value_expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! found_semicolon_ptr) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after pointer member assignment" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
node.node_type = std__string__str ( "PtrMemberAccess" );
node.data.member_access.object_name = ident_name;
node.data.member_access.member_name = ptr_member_name;
node.data.member_access.value = ptr_value_expr;
parser__scan_expression_for_usage(ptr_value_expr);
parser__mark_variable_mutated(ident_name);
return node;
}
}
if (parser__expect ( ctx , lexer__TokenType_INCREMENT) || parser__expect ( ctx , lexer__TokenType_DECREMENT)) {
const lexer__Token ptr_inc_dec_token = parser__peek( ctx );
const bool ptr_is_inc = ptr_inc_dec_token.token_type== lexer__TokenType_INCREMENT;
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after pointer member increment/decrement" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "PtrMemberIncDec" );
node.data.member_inc_dec.object_name = ident_name;
node.data.member_inc_dec.member_name = ptr_member_name;
node.data.member_inc_dec.is_increment = ptr_is_inc;
return node;
}
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
break;
}
parser__consume(ctx);
}
node.node_type = std__string__str ( "PtrMemberAccess" );
node.data.member_access.object_name = ident_name;
node.data.member_access.member_name = ptr_member_name;
node.data.member_access.value = std__string__str ( "" );
return node;
}
if (next_token.token_type== lexer__TokenType_PLUS_ASSIGN|| next_token.token_type== lexer__TokenType_MINUS_ASSIGN) {
const std__string__string compound_op = next_token.value;
gstate__debug_print_raw("\n[DEBUG] parse_statement_helper: entering compound Assignment branch");
gstate__debug_print_raw("\n[DEBUG]   ident_name:");
gstate__debug_print_str(ident_name);
gstate__debug_print_raw("\n[DEBUG]   operator:");
gstate__debug_print_str(compound_op);
if (! parser__is_variable_declared ( ident_name )) {
if (! ctx->is_axec) {
std__string__string err = std__string__str( "Undeclared variable: " );
err = std__string__concat ( err , ident_name );
std__errors__enforce_raw(false, err.data);
return node;
}
}
if (! parser__is_variable_mutable ( ident_name )) {
std__string__string err = std__string__str( "Cannot assign to immutable variable: " );
err = std__string__concat ( err , ident_name );
std__errors__enforce_raw(false, parser__format_error(ctx, err).data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string expr = std__string__str( "" );
bool found_semicolon_compound = false;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
found_semicolon_compound = true;
break;
}
if (t.token_type== lexer__TokenType_VAL|| t.token_type== lexer__TokenType_MUT) {
break;
}
if (t.token_type== lexer__TokenType_STR) {
expr = std__string__concat ( expr , std__string__str ( "\"" ) );
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
expr = std__string__concat ( expr , std__string__str ( "'" ) );
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else {
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! found_semicolon_compound) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after compound assignment" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
expr = parser__expand_macros_in_expression ( expr );
parser__scan_expression_for_addr(expr);
parser__scan_expression_for_c_calls(expr);
parser__scan_expression_for_usage(expr);
node.node_type = std__string__str ( "Assignment" );
node.data.assignment.variable = ident_name;
node.data.assignment.expression = std__string__strip ( expr );
node.data.assignment.operator = compound_op;
parser__mark_variable_mutated(ident_name);
return node;
}
if (next_token.token_type== lexer__TokenType_OPERATOR&& std__string__equals_c ( next_token.value, "=" )) {
gstate__debug_print_raw("\n[DEBUG] parse_statement_helper: entering Assignment branch");
gstate__debug_print_raw("\n[DEBUG]   ident_name:");
gstate__debug_print_str(ident_name);
if (! parser__is_variable_declared ( ident_name )) {
if (! ctx->is_axec) {
std__string__string err = std__string__str( "Undeclared variable: " );
err = std__string__concat ( err , ident_name );
std__errors__enforce_raw(false, parser__format_error(ctx, err).data);
return node;
}
}
if (! parser__is_variable_mutable ( ident_name )) {
std__string__string err = std__string__str( "Cannot assign to immutable variable: " );
err = std__string__concat ( err , ident_name );
std__errors__enforce_raw(false, parser__format_error(ctx, err).data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string expr = std__string__str( "" );
bool found_semicolon_assign = false;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
gstate__debug_print_raw("\n[DEBUG]   reached end of tokens while collecting RHS");
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
gstate__debug_print_raw("\n[DEBUG]   encountered ';' terminating RHS");
parser__consume(ctx);
found_semicolon_assign = true;
break;
}
if (t.token_type== lexer__TokenType_VAL|| t.token_type== lexer__TokenType_MUT) {
gstate__debug_print_raw("\n[DEBUG]   encountered new declaration, stopping RHS collection");
break;
}
gstate__debug_print_raw("\n[DEBUG]   RHS token type:");
gstate__debug_print_i32(t.token_type);
gstate__debug_print_raw("\n[DEBUG]   RHS token value:");
gstate__debug_print_str(t.value);
if (t.token_type== lexer__TokenType_STR) {
expr = std__string__concat ( expr , std__string__str ( "\"" ) );
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( "\" " ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
expr = std__string__concat ( expr , std__string__str ( "'" ) );
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( "' " ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
}
else if (( t.token_type== lexer__TokenType_IDENTIFIER&& std__string__compare ( t.value, std__string__str ( "and" ) ) == 0 ) || t.token_type== lexer__TokenType_AND) {
expr = std__string__concat ( expr , std__string__str ( "&&" ) );
expr = std__string__concat ( expr , std__string__str ( " " ) );
}
else if (( t.token_type== lexer__TokenType_IDENTIFIER&& std__string__compare ( t.value, std__string__str ( "or" ) ) == 0 ) || t.token_type== lexer__TokenType_OR) {
expr = std__string__concat ( expr , std__string__str ( "||" ) );
expr = std__string__concat ( expr , std__string__str ( " " ) );
}
else {
expr = std__string__concat ( expr , t.value);
expr = std__string__concat ( expr , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! found_semicolon_assign) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after assignment" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
gstate__debug_print_raw("\n[DEBUG]   final RHS expr:");
gstate__debug_print_str(expr);
expr = parser__expand_macros_in_expression ( expr );
std__string__string trimmed_assign = std__string__strip( expr );
const std__string__string prefix_fix = std__string__str( "_state = " );
if (std__string__compare ( ident_name , std__string__str ( "fixed" ) ) == 0 && std__string__has_prefix ( trimmed_assign , prefix_fix )) {
ident_name = std__string__str ( "fixed_state" );
trimmed_assign = std__string__substring_se ( trimmed_assign , (uintptr_t)( std__string__str_len ( prefix_fix ) ) , (uintptr_t)( std__string__str_len ( trimmed_assign ) ) );
expr = trimmed_assign;
}
parser__scan_expression_for_addr(expr);
parser__scan_expression_for_c_calls(expr);
parser__scan_expression_for_usage(expr);
node.node_type = std__string__str ( "Assignment" );
node.data.assignment.variable = ident_name;
node.data.assignment.expression = expr;
node.data.assignment.operator = std__string__str ( "=" );
parser__mark_variable_mutated(ident_name);
return node;
}
if (next_token.token_type== lexer__TokenType_INCREMENT|| next_token.token_type== lexer__TokenType_DECREMENT) {
parser__mark_variable_mutated(ident_name);
const bool is_inc = next_token.token_type== lexer__TokenType_INCREMENT;
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__is_variable_declared ( ident_name )) {
if (! ctx->is_axec) {
std__string__string err = std__string__str( "Undeclared variable: " );
err = std__string__concat ( err , ident_name );
std__errors__enforce_raw(false, parser__format_error(ctx, err).data);
return node;
}
}
if (! parser__is_variable_mutable ( ident_name )) {
gstate__debug_print_raw("\n[DEBUG] Variable is not mutable:");
gstate__debug_print_str(ident_name);
std__string__string err = std__string__str( "Cannot increment/decrement immutable variable: " );
err = std__string__concat ( err , ident_name );
std__errors__enforce_raw(false, parser__format_error(ctx, err).data);
return node;
}
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after increment/decrement" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "IncDec" );
node.data.inc_dec.variable = ident_name;
node.data.inc_dec.is_increment = is_inc;
return node;
}
std__string__string args_str_sugar = std__string__str( "" );
bool found_semicolon_sugar = false;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_SEMICOLON) {
parser__consume(ctx);
found_semicolon_sugar = true;
break;
}
if (t.token_type== lexer__TokenType_VAL|| t.token_type== lexer__TokenType_MUT) {
break;
}
if (t.token_type== lexer__TokenType_STR) {
args_str_sugar = std__string__concat ( args_str_sugar , std__string__str ( "\"" ) );
args_str_sugar = std__string__concat ( args_str_sugar , t.value);
args_str_sugar = std__string__concat ( args_str_sugar , std__string__str ( "\"" ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
args_str_sugar = std__string__concat ( args_str_sugar , std__string__str ( "'" ) );
args_str_sugar = std__string__concat ( args_str_sugar , t.value);
args_str_sugar = std__string__concat ( args_str_sugar , std__string__str ( "'" ) );
}
else if (t.token_type== lexer__TokenType_WHITESPACE|| t.token_type== lexer__TokenType_NEWLINE) {
args_str_sugar = std__string__concat ( args_str_sugar , std__string__str ( " " ) );
}
else {
args_str_sugar = std__string__concat ( args_str_sugar , t.value);
}
parser__consume(ctx);
}
if (! found_semicolon_sugar) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after function call" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
node.node_type = std__string__str ( "FunctionCall" );
node.data.func_call.function_name = ident_name;
__list_std__string_t sugar_args_list = {0};
const std__string__string trimmed_sugar = std__string__strip( args_str_sugar );
if (std__string__str_len ( trimmed_sugar ) > 0) {
__list_std__string_push(&sugar_args_list, trimmed_sugar);
}
parser__scan_expression_for_usage(trimmed_sugar);
const uintptr_t list_size_s = sizeof(__list_std__string_t);
__list_std__string_t* heap_list_s = (__list_std__string_t*)( malloc( list_size_s ) );
if (heap_list_s != nil) {
memcpy(heap_list_s, &sugar_args_list, list_size_s);
node.data.func_call.args = heap_list_s;
}
return node;
}
if (token_type == lexer__TokenType_PLATFORM) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected platform name after 'platform'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token platform_token = parser__consume( ctx );
const std__string__string platform_name = platform_token.value;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after platform name" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__push_scope();
node.node_type = std__string__str ( "Platform" );
node.data.platform_node.platform_name = platform_name;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
parser__add_child_to_ast(&node, stmt);
}
}
parser__pop_scope();
return node;
}
if (token_type == lexer__TokenType_PARALLEL) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_FOR)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string var_name = std__string__str( "" );
std__string__string var_type = std__string__str( "int" );
bool is_mutable = false;
std__string__string init_value = std__string__str( "" );
std__string__string to_value = std__string__str( "" );
std__string__string condition = std__string__str( "" );
std__string__string increment = std__string__str( "" );
__list_std__string_t reduction_clauses = {0};
if (parser__expect ( ctx , lexer__TokenType_MUT)) {
is_mutable = true;
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
else if (parser__expect ( ctx , lexer__TokenType_VAL)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
const lexer__Token var_tok = parser__consume( ctx );
var_name = var_tok.value;
parser__skip_whitespace(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_COLON)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
const lexer__Token type_tok = parser__consume( ctx );
var_type = type_tok.value;
parser__skip_whitespace(ctx);
}
}
if (parser__expect ( ctx , lexer__TokenType_OPERATOR)) {
const lexer__Token op_tok = parser__peek( ctx );
if (std__string__equals_c ( op_tok.value, "=" )) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_TO|| t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
init_value = std__string__concat ( init_value , t.value);
}
parser__consume(ctx);
}
}
}
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_TO)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE|| t.token_type== lexer__TokenType_REDUCE) {
break;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
to_value = std__string__concat ( to_value , t.value);
}
parser__consume(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_REDUCE)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_LPAREN)) {
parser__consume(ctx);
std__string__string clause = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_RPAREN) {
if (std__string__str_len ( std__string__strip ( clause ) ) > 0) {
__list_std__string_push(&reduction_clauses, std__string__strip(clause));
}
parser__consume(ctx);
break;
}
if (t.token_type== lexer__TokenType_COMMA) {
if (std__string__str_len ( std__string__strip ( clause ) ) > 0) {
__list_std__string_push(&reduction_clauses, std__string__strip(clause));
}
clause = std__string__str ( "" );
parser__consume(ctx);
}
else {
if (t.token_type!= lexer__TokenType_WHITESPACE) {
clause = std__string__concat ( clause , t.value);
}
parser__consume(ctx);
}
}
}
}
parser__skip_whitespace(ctx);
condition = std__string__concat ( var_name , std__string__str ( "<" ) );
condition = std__string__concat ( condition , to_value );
increment = std__string__concat ( var_name , std__string__str ( "++" ) );
}
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after parallel for header" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__push_scope();
if (std__string__str_len ( var_name ) > 0) {
parser__register_variable(var_name, is_mutable, 0, ctx->filename);
parser__mark_variable_used(var_name);
}
std__string__string init_str = std__string__str( "" );
if (std__string__str_len ( var_name ) > 0) {
if (std__string__equals_c ( var_type , "int" ) || std__string__equals_c ( var_type , "i32" )) {
init_str = std__string__str ( "int32_t " );
}
else {
init_str = std__string__concat ( var_type , std__string__str ( " " ) );
}
init_str = std__string__concat ( init_str , var_name );
if (std__string__str_len ( init_value ) > 0) {
init_str = std__string__concat_c ( init_str , " = " );
init_str = std__string__concat ( init_str , init_value );
}
}
__list_structs__ASTNode_t body = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&body, stmt);
}
}
parser__pop_scope();
node.node_type = std__string__str ( "ParallelFor" );
node.data.parallel_for.initialization = init_str;
node.data.parallel_for.condition = condition;
node.data.parallel_for.increment = increment;
parser__scan_expression_for_usage(init_str);
parser__scan_expression_for_usage(condition);
parser__scan_expression_for_usage(increment);
int32_t r_idx = 0;
while (1) {
if (r_idx >= len_v(reduction_clauses)) {
break;
}
const std__string__string r_clause = reduction_clauses.data[ r_idx ];
parser__scan_expression_for_usage(r_clause);
const int32_t colon_pos = std__string__find_char_from( r_clause , ':' , (uintptr_t)( 0 ) );
if (colon_pos > 0) {
const std__string__string r_var = std__string__strip( std__string__substring_se ( r_clause , colon_pos + 1 , (uintptr_t)( std__string__str_len ( r_clause ) ) ) );
if (std__string__str_len ( r_var ) > 0) {
parser__mark_variable_mutated(r_var);
}
}
r_idx = r_idx + 1;
}
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &body, list_size);
node.children = heap_list;
}
const uintptr_t list_size_str = sizeof(__list_std__string_t);
const __list_std__string_t* heap_clauses = (__list_std__string_t*)( malloc( list_size_str ) );
if (heap_clauses != nil) {
memcpy(heap_clauses, &reduction_clauses, list_size_str);
node.data.parallel_for.reduction_clauses = heap_clauses;
}
return node;
}
if (parser__expect ( ctx , lexer__TokenType_LOCAL)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '(' after 'parallel local'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_std__string_t private_vars = {0};
__list_std__string_t private_types = {0};
__list_bool_t is_mutable = {0};
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (parser__expect ( ctx , lexer__TokenType_RPAREN)) {
parser__consume(ctx);
break;
}
bool is_mut = false;
if (parser__expect ( ctx , lexer__TokenType_MUT)) {
is_mut = true;
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
else if (parser__expect ( ctx , lexer__TokenType_VAL)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected variable name in parallel local" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token var_tok = parser__consume( ctx );
const std__string__string var_name = var_tok.value;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_COLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ':' after variable name in parallel local" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string type_name = std__string__str( "" );
int32_t ref_depth = 0;
while (1) {
if (! parser__expect ( ctx , lexer__TokenType_REF)) {
break;
}
ref_depth = ref_depth + 1;
parser__consume(ctx);
parser__skip_whitespace(ctx);
}
if (parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
const lexer__Token type_tok = parser__consume( ctx );
type_name = type_tok.value;
parser__skip_whitespace(ctx);
}
if (ref_depth > 0) {
type_name = std__string__concat ( std__string__str ( "ref " ) , type_name );
}
__list_std__string_push(&private_vars, var_name);
__list_std__string_push(&private_types, type_name);
__list_bool_push(&is_mutable, is_mut);
parser__register_variable(var_name, is_mut, parser__current_line(ctx), ctx->filename);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_COMMA)) {
parser__consume(ctx);
}
}
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after parallel local declaration" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_structs__ASTNode_t body = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&body, stmt);
}
}
node.node_type = std__string__str ( "ParallelLocal" );
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &body, list_size);
node.children = heap_list;
}
const uintptr_t list_size_str = sizeof(__list_std__string_t);
const __list_std__string_t* heap_vars = (__list_std__string_t*)( malloc( list_size_str ) );
if (heap_vars != nil) {
memcpy(heap_vars, &private_vars, list_size_str);
node.data.parallel_local.private_vars = heap_vars;
}
const __list_std__string_t* heap_types = (__list_std__string_t*)( malloc( list_size_str ) );
if (heap_types != nil) {
memcpy(heap_types, &private_types, list_size_str);
node.data.parallel_local.private_types = heap_types;
}
const uintptr_t list_size_bool = sizeof(__list_bool_t);
const __list_bool_t* heap_mutable = (__list_bool_t*)( malloc( list_size_bool ) );
if (heap_mutable != nil) {
memcpy(heap_mutable, &is_mutable, list_size_bool);
node.data.parallel_local.is_mutable = heap_mutable;
}
return node;
}
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after 'parallel'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_structs__ASTNode_t body = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&body, stmt);
}
}
node.node_type = std__string__str ( "Parallel" );
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &body, list_size);
node.children = heap_list;
}
return node;
}
if (token_type == lexer__TokenType_SINGLE) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after 'single'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_structs__ASTNode_t body = {0};
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&body, stmt);
}
}
node.node_type = std__string__str ( "Single" );
const uintptr_t list_size = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_list = (__list_structs__ASTNode_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &body, list_size);
node.children = heap_list;
}
return node;
}
if (token_type == lexer__TokenType_UNSAFE) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after 'unsafe'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_structs__ASTNode_t body = {0};
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
if (ctx->tokens->data[ ctx->pos].token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
const structs__ASTNode stmt = parser__parse_statement_helper( ctx , &(ctx->current_scope) );
if (std__string__str_len ( stmt.node_type) > 0) {
__list_structs__ASTNode_push(&body, stmt);
}
}
node.node_type = std__string__str ( "Unsafe" );
const uintptr_t list_size_ast = sizeof(__list_structs__ASTNode_t);
__list_structs__ASTNode_t* heap_body = (__list_structs__ASTNode_t*)( malloc( list_size_ast ) );
if (heap_body != nil) {
memcpy(heap_body, &body, list_size_ast);
node.data.unsafe_node.body = heap_body;
}
return node;
}
if (token_type == lexer__TokenType_RAW) {
if (! ctx->is_axec) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Raw C blocks are only allowed in .axec files" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
g_function_has_raw_block = true;
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after 'raw'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
std__string__string raw_code = std__string__str( "" );
int32_t depth = 1;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Unexpected end of tokens in raw block" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE) {
raw_code = std__string__concat ( raw_code , std__string__str ( "{" ) );
depth = depth + 1;
parser__consume(ctx);
continue;
}
else if (t.token_type== lexer__TokenType_RBRACE) {
depth = depth - 1;
if (depth == 0) {
break;
}
else {
raw_code = std__string__concat ( raw_code , std__string__str ( "}" ) );
parser__consume(ctx);
continue;
}
}
if (t.token_type== lexer__TokenType_NEWLINE) {
raw_code = std__string__concat ( raw_code , std__string__str ( "\n" ) );
}
else if (t.token_type== lexer__TokenType_STR) {
raw_code = std__string__concat ( raw_code , std__string__str ( "\"" ) );
raw_code = std__string__concat ( raw_code , t.value);
raw_code = std__string__concat ( raw_code , std__string__str ( "\"" ) );
}
else if (t.token_type== lexer__TokenType_CHAR) {
raw_code = std__string__concat ( raw_code , std__string__str ( "'" ) );
raw_code = std__string__concat ( raw_code , t.value);
raw_code = std__string__concat ( raw_code , std__string__str ( "'" ) );
}
else {
raw_code = std__string__concat ( raw_code , t.value);
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_RBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '}' after raw block body" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "RawC" );
node.data.raw_c.code = raw_code;
return node;
}
if (token_type == lexer__TokenType_OPAQUE) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after 'opaque'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_std__string_t type_names = {0};
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
if (t.token_type== lexer__TokenType_IDENTIFIER) {
__list_std__string_push(&type_names, t.value);
parser__consume(ctx);
}
else if (t.token_type== lexer__TokenType_SEMICOLON|| t.token_type== lexer__TokenType_COMMA) {
parser__consume(ctx);
}
else {
parser__consume(ctx);
}
}
parser__skip_whitespace(ctx);
node.node_type = std__string__str ( "Opaque" );
const uintptr_t list_size = sizeof(__list_std__string_t);
__list_std__string_t* heap_list = (__list_std__string_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &type_names, list_size);
node.data.opaque_node.type_names = heap_list;
}
return node;
}
if (token_type == lexer__TokenType_FOREIGN) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '{' after 'foreign'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_std__string_t type_names = {0};
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_RBRACE) {
parser__consume(ctx);
break;
}
if (t.token_type== lexer__TokenType_IDENTIFIER) {
__list_std__string_push(&type_names, t.value);
parser__consume(ctx);
}
else if (t.token_type== lexer__TokenType_SEMICOLON|| t.token_type== lexer__TokenType_COMMA) {
parser__consume(ctx);
}
else {
parser__consume(ctx);
}
}
parser__skip_whitespace(ctx);
node.node_type = std__string__str ( "Foreign" );
const uintptr_t list_size = sizeof(__list_std__string_t);
__list_std__string_t* heap_list = (__list_std__string_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &type_names, list_size);
node.data.foreign_node.type_names = heap_list;
}
return node;
}
if (token_type == lexer__TokenType_DEF) {
parser__consume(ctx);
const structs__ASTNode func_node = parser__parse_function( ctx );
return func_node;
}
if (token_type == lexer__TokenType_EXTERN) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_DEF)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected 'def' after 'extern'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected function name after 'extern def'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token func_name_token = parser__consume( ctx );
const std__string__string func_name = func_name_token.value;
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '(' after extern function name" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_std__string_t extern_params = {0};
while (1) {
parser__skip_whitespace(ctx);
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_RPAREN) {
break;
}
std__string__string param_str = std__string__str( "" );
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token pt = parser__peek( ctx );
if (pt.token_type== lexer__TokenType_COMMA|| pt.token_type== lexer__TokenType_RPAREN) {
break;
}
if (pt.token_type!= lexer__TokenType_WHITESPACE&& pt.token_type!= lexer__TokenType_NEWLINE) {
param_str = std__string__concat ( param_str , pt.value);
}
else {
param_str = std__string__concat ( param_str , std__string__str ( " " ) );
}
parser__consume(ctx);
}
const std__string__string trimmed_param = std__string__strip( param_str );
if (std__string__str_len ( trimmed_param ) > 0) {
__list_std__string_push(&extern_params, trimmed_param);
}
if (ctx->pos< len_ptr(ctx->tokens) && parser__peek ( ctx ) . token_type == lexer__TokenType_COMMA) {
parser__consume(ctx);
}
}
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after extern parameters" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
std__string__string extern_return_type = std__string__str( "" );
if (ctx->pos< len_ptr(ctx->tokens) && parser__peek ( ctx ) . token_type == lexer__TokenType_COLON) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token rt = parser__peek( ctx );
if (rt.token_type== lexer__TokenType_SEMICOLON) {
break;
}
if (rt.token_type!= lexer__TokenType_WHITESPACE&& rt.token_type!= lexer__TokenType_NEWLINE) {
extern_return_type = std__string__concat ( extern_return_type , rt.value);
}
else if (std__string__str_len ( extern_return_type ) > 0) {
extern_return_type = std__string__concat ( extern_return_type , std__string__str ( " " ) );
}
parser__consume(ctx);
}
extern_return_type = std__string__strip ( extern_return_type );
}
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after extern declaration" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "Extern" );
node.data.extern_node.function_name = func_name;
if (len_v(extern_params) > 0) {
const uintptr_t params_size = sizeof(__list_std__string_t);
const __list_std__string_t* heap_params = (__list_std__string_t*)( malloc( params_size ) );
if (heap_params != nil) {
memcpy(heap_params, &extern_params, params_size);
node.data.extern_node.params = heap_params;
}
}
node.data.extern_node.return_type = extern_return_type;
return node;
}
if (token_type == lexer__TokenType_USE) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_EXTERNAL)) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '(' after 'use external'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
if (! parser__expect ( ctx , lexer__TokenType_STR)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected string literal for header file" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token header_token = parser__consume( ctx );
const std__string__string header_file = header_token.value;
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after header file" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ';' after external import" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "ExternalImport" );
node.data.external_import.header_file = header_file;
return node;
}
std__string__string module_name = std__string__str( "" );
while (1) {
if (parser__expect ( ctx , lexer__TokenType_DOT)) {
parser__consume(ctx);
if (parser__expect ( ctx , lexer__TokenType_DOT)) {
parser__consume(ctx);
if (parser__expect ( ctx , lexer__TokenType_SLASH)) {
parser__consume(ctx);
module_name = std__string__concat ( module_name , std__string__str ( "../" ) );
continue;
}
}
else if (parser__expect ( ctx , lexer__TokenType_SLASH)) {
parser__consume(ctx);
module_name = std__string__concat ( module_name , std__string__str ( "./" ) );
continue;
}
}
break;
}
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected module name after 'use'" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token first_ident = parser__consume( ctx );
module_name = std__string__concat ( module_name , first_ident.value);
while (1) {
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_DOT)) {
parser__consume(ctx);
module_name = std__string__concat ( module_name , std__string__str ( "." ) );
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected identifier after '.' in module path" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token ident = parser__consume( ctx );
module_name = std__string__concat ( module_name , ident.value);
}
else if (parser__expect ( ctx , lexer__TokenType_SLASH)) {
parser__consume(ctx);
module_name = std__string__concat ( module_name , std__string__str ( "/" ) );
if (! parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected identifier after '/' in module path" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
const lexer__Token ident = parser__consume( ctx );
module_name = std__string__concat ( module_name , ident.value);
}
else if (parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
const lexer__Token ident2 = parser__peek( ctx );
if (std__string__str_len ( ident2 . value ) > 0 && std__string__get_char ( ident2 . value , 0 ) == '_') {
parser__consume(ctx);
module_name = std__string__concat ( module_name , ident2.value);
}
else {
break;
}
}
else {
break;
}
}
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
parser__consume(ctx);
node.node_type = std__string__str ( "Use" );
node.data.use_node.module_name = module_name;
node.data.use_node.import_all = true;
return node;
}
if (! parser__expect ( ctx , lexer__TokenType_LPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected '(' or ';' after module name" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
__list_std__string_t imports = {0};
while (1) {
parser__skip_whitespace(ctx);
if (parser__expect ( ctx , lexer__TokenType_RPAREN)) {
break;
}
if (parser__expect ( ctx , lexer__TokenType_IDENTIFIER)) {
const lexer__Token import_token = parser__consume( ctx );
__list_std__string_push(&imports, import_token.value);
}
else if (parser__expect ( ctx , lexer__TokenType_COMMA)) {
parser__consume(ctx);
}
else {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected identifier or ',' in use statement" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
}
if (! parser__expect ( ctx , lexer__TokenType_RPAREN)) {
std__string__string err = parser__format_error( ctx , std__string__str ( "Expected ')' after imports" ) );
std__errors__enforce_raw(false, err.data);
return node;
}
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_SEMICOLON)) {
std__errors__enforce_raw(false, "Expected ';' after use statement");
return node;
}
parser__consume(ctx);
node.node_type = std__string__str ( "Use" );
node.data.use_node.module_name = module_name;
const uintptr_t list_size = sizeof(__list_std__string_t);
__list_std__string_t* heap_list = (__list_std__string_t*)( malloc( list_size ) );
if (heap_list != nil) {
memcpy(heap_list, &imports, list_size);
node.data.use_node.imports = heap_list;
}
node.data.use_node.import_all = false;
return node;
}
if (token_type == lexer__TokenType_CASE) {
gstate__debug_print_raw("\n[DEBUG] Parsing CASE statement");
parser__consume(ctx);
gstate__debug_print_raw("\n[DEBUG] Consumed 'case' token");
parser__skip_whitespace(ctx);
gstate__debug_print_raw("\n[DEBUG] Skipped whitespace after 'case'");
std__string__string case_value = std__string__str( "" );
gstate__debug_print_raw("\n[DEBUG] Starting to collect case value");
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE) {
break;
}
if (t.token_type!= lexer__TokenType_WHITESPACE&& t.token_type!= lexer__TokenType_NEWLINE) {
case_value = std__string__concat ( case_value , t.value);
case_value = std__string__concat ( case_value , std__string__str ( " " ) );
}
parser__consume(ctx);
}
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__errors__enforce_raw(false, "Expected '{' after case value");
return node;
}
parser__consume(ctx);
int32_t depth = 1;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE) {
depth = depth + 1;
}
else if (t.token_type== lexer__TokenType_RBRACE) {
depth = depth - 1;
if (depth == 0) {
parser__consume(ctx);
break;
}
}
parser__consume(ctx);
}
node.node_type = std__string__str ( "Case" );
node.data.case_node.value = case_value;
node.data.case_node.is_default = false;
return node;
}
if (token_type == lexer__TokenType_DEFAULT) {
parser__consume(ctx);
parser__skip_whitespace(ctx);
if (! parser__expect ( ctx , lexer__TokenType_LBRACE)) {
std__errors__enforce_raw(false, "Expected '{' after default");
return node;
}
parser__consume(ctx);
int32_t depth = 1;
while (1) {
if (ctx->pos>= len_ptr(ctx->tokens)) {
break;
}
const lexer__Token t = parser__peek( ctx );
if (t.token_type== lexer__TokenType_LBRACE) {
depth = depth + 1;
}
else if (t.token_type== lexer__TokenType_RBRACE) {
depth = depth - 1;
if (depth == 0) {
parser__consume(ctx);
break;
}
}
parser__consume(ctx);
}
node.node_type = std__string__str ( "Case" );
node.data.case_node.value = std__string__str ( "" );
node.data.case_node.is_default = true;
return node;
}
parser__consume(ctx);
return node;
}

void imports__reset_processed_modules() {
std__arena__Arena arena = std__arena__Arena__create( 1024 * 16 );
g_processed_modules = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_model_names_arena = std__arena__Arena__create( 1024 * 16 );
g_import_model_names = (*std__maps__StringStringMap__create( &g_model_names_arena , 128 ));
g_imported_symbols_arena = std__arena__Arena__create( 1024 * 16 );
g_imported_symbols = (*std__maps__StringBoolMap__create( &g_imported_symbols_arena , 128 ));
}

void imports__register_model_name(std__string__string short_name, std__string__string prefixed_name) {
std__maps__StringStringMap__set(&g_import_model_names, &g_model_names_arena, short_name, prefixed_name);
}

std__string__string imports__lookup_model_name(std__string__string short_name) {
if (std__maps__StringStringMap__contains( &g_import_model_names , short_name )) {
return std__maps__StringStringMap__get( &g_import_model_names , short_name );
}
return std__string__str( "" );
}

void imports__register_imported_symbol(std__string__string symbol_name) {
std__maps__StringBoolMap__set(&g_imported_symbols, &g_imported_symbols_arena, symbol_name, true);
}

bool imports__is_symbol_imported(std__string__string symbol_name) {
if (g_imported_symbols.keys== nil) {
return false;
}
return std__maps__StringBoolMap__contains( &g_imported_symbols , symbol_name );
}

bool imports__has_imported_module(std__string__string name) {
if (std__maps__StringBoolMap__contains( &g_processed_modules , name )) {
return true;
}
return false;
}

void imports__add_processed_module(std__string__string path) {
std__arena__Arena arena = std__arena__Arena__create( 1024 );
std__maps__StringBoolMap__set(&g_processed_modules, &arena, path, true);
}

bool imports__is_module_processed(std__string__string path) {
return std__maps__StringBoolMap__contains( &g_processed_modules , path );
}

std__string__string imports__get_module_prefix(std__string__string module_name) {
std__string__string result = std__string__str( "" );
int32_t i = 0;
const int32_t n = std__string__str_len( module_name );
while (1) {
if (i >= n) {
break;
}
const char ch = std__string__get_char( module_name , i );
if (ch == '.') {
result = std__string__concat ( result , std__string__str ( "__" ) );
}
else if (ch == '-') {
result = std__string__concat ( result , std__string__str ( "_" ) );
}
else {
const std__string__string tmp = std__string__substring_se( module_name , i , i + 1 );
result = std__string__concat ( result , tmp );
}
i++;
}
return result;
}

std__string__string imports__get_dir_from_path(std__string__string path) {
const int32_t lenp = std__string__str_len( path );
int32_t i = lenp - 1;
while (1) {
if (i < 0) {
return std__string__str( "." );
}
const char ch = std__string__get_char( path , i );
if (ch == '/' || ch == '\\') {
return std__string__substring_se( path , 0 , i );
}
i = i - 1;
}
}

std__string__string imports__join_path(std__string__string base_dir, std__string__string rel) {
if (std__string__str_len ( base_dir ) == 0 || std__string__equals_c ( base_dir , "." )) {
return rel;
}
const char last = std__string__get_char( base_dir , std__string__str_len ( base_dir ) - 1 );
if (last == '/' || last == '\\') {
return std__string__concat( base_dir , rel );
}
return std__string__concat( std__string__concat ( base_dir , std__string__str ( "/" ) ) , rel );
}

std__string__string imports__make_module_path(std__string__string base_dir, std__string__string use_module) {
if (std__string__has_prefix ( use_module , std__string__str ( "std." ) )) {
const std__string__string rest = std__string__substring_se( use_module , 4 , (int32_t)( std__string__str_len ( use_module ) ) );
std__string__string path_rest = std__string__str( "" );
int32_t i = 0;
const int32_t n = std__string__str_len( rest );
while (1) {
if (i >= n) {
break;
}
const char ch = std__string__get_char( rest , i );
if (ch == '.') {
path_rest = std__string__concat ( path_rest , std__string__str ( "/" ) );
}
else {
const std__string__string tmp = std__string__substring_se( rest , i , i + 1 );
path_rest = std__string__concat ( path_rest , tmp );
}
i++;
}
const std__string__string rel = std__string__concat( path_rest , std__string__str ( ".axec" ) );
const std__string__string axe_home = std__os__get_env( std__string__str ( "AXE_HOME" ) );
if (std__string__str_len ( axe_home ) > 0) {
const std__string__string axe_home_std = imports__join_path( axe_home , std__string__str ( "std" ) );
const std__string__string axe_home_path = imports__join_path( axe_home_std , rel );
if (std__os__file_exists ( axe_home_path )) {
return axe_home_path;
}
}
const std__string__string std_base = imports__join_path( base_dir , std__string__str ( "std" ) );
const std__string__string local_path = imports__join_path( std_base , rel );
if (std__os__file_exists ( local_path )) {
return local_path;
}
const std__string__string cwd = std__os__get_cwd( );
const std__string__string cwd_parent = imports__get_dir_from_path( cwd );
const std__string__string proj_std = imports__join_path( cwd_parent , std__string__str ( "std" ) );
const std__string__string proj_path = imports__join_path( proj_std , rel );
if (std__os__file_exists ( proj_path )) {
return proj_path;
}
const std__string__string exe_dir = std__os__get_executable_dir( );
if (std__string__str_len ( exe_dir ) > 0) {
const std__string__string exe_std = imports__join_path( exe_dir , std__string__str ( "std" ) );
const std__string__string exe_path = imports__join_path( exe_std , rel );
if (std__os__file_exists ( exe_path )) {
return exe_path;
}
}
const std__string__string home = std__os__get_user_home_dir( );
if (std__string__str_len ( home ) > 0) {
const std__string__string home_axe = imports__join_path( home , std__string__str ( ".axe" ) );
const std__string__string home_std = imports__join_path( home_axe , std__string__str ( "std" ) );
const std__string__string home_path = imports__join_path( home_std , rel );
if (std__os__file_exists ( home_path )) {
return home_path;
}
}
return local_path;
}
if (std__string__has_prefix ( use_module , std__string__str ( "./" ) ) || std__string__has_prefix ( use_module , std__string__str ( "../" ) )) {
const std__string__string rel2 = std__string__concat( use_module , std__string__str ( ".axe" ) );
return imports__join_path( base_dir , rel2 );
}
std__string__string path_mod = std__string__str( "" );
int32_t j = 0;
const int32_t mlen = std__string__str_len( use_module );
while (1) {
if (j >= mlen) {
break;
}
const char ch2 = std__string__get_char( use_module , j );
if (ch2 == '.') {
path_mod = std__string__concat ( path_mod , std__string__str ( "/" ) );
}
else {
const std__string__string tmp2 = std__string__substring_se( use_module , j , j + 1 );
path_mod = std__string__concat ( path_mod , tmp2 );
}
j++;
}
const std__string__string rel3 = std__string__concat( path_mod , std__string__str ( ".axe" ) );
return imports__join_path( base_dir , rel3 );
}

void imports__append_child(structs__ASTNode* program, structs__ASTNode child) {
if (program->children== nil) {
__list_structs__ASTNode_t lst = {0};
const uintptr_t sz = sizeof(__list_structs__ASTNode_t);
const __list_structs__ASTNode_t* heap_lst = (__list_structs__ASTNode_t*)( malloc( sz ) );
if (heap_lst != nil) {
memcpy(heap_lst, &lst, sz);
program->children = heap_lst;
}
}
if (program->children!= nil) {
__list_structs__ASTNode_t tmp = {0};
const uintptr_t sz2 = sizeof(__list_structs__ASTNode_t);
memcpy(&tmp, program->children, sz2);
__list_structs__ASTNode_push(&tmp, child);
memcpy(program->children, &tmp, sz2);
}
}

void imports__prefix_function_node(structs__ASTNode* node, std__string__string module_prefix, std__maps__StringBoolMap* exported) {
const std__string__string name = node->data.function.name;
if (std__string__find_char_from ( name , '_' , (uintptr_t)( 0 ) ) >= 0) {
const int32_t len_name = std__string__str_len( name );
bool has_double_underscore = false;
int32_t first_underscore_idx = - 1;
int32_t i = 0;
while (1) {
if (i + 1 >= len_name) {
break;
}
const char c1 = std__string__get_char( name , i );
const char c2 = std__string__get_char( name , i + 1 );
if (c1 == '_' && c2 == '_') {
has_double_underscore = true;
first_underscore_idx = i;
break;
}
i++;
}
if (has_double_underscore) {
const std__string__string potential_model = std__string__substring_se( name , 0 , first_underscore_idx );
if (! std__maps__StringBoolMap__contains( exported , potential_model )) {
return ;
}
}
}
const std__string__string pref = std__string__concat( std__string__concat ( module_prefix , std__string__str ( "__" ) ) , name );
node->data.function.name = pref;
}

void imports__prefix_model_node(structs__ASTNode* node, std__string__string module_prefix) {
const std__string__string name = node->data.model_node.name;
if (std__string__find_char_from ( name , '_' , (uintptr_t)( 0 ) ) >= 0) {
const int32_t len_name = std__string__str_len( name );
bool has_double_underscore = false;
int32_t i = 0;
while (1) {
if (i + 1 >= len_name) {
break;
}
const char c1 = std__string__get_char( name , i );
const char c2 = std__string__get_char( name , i + 1 );
if (c1 == '_' && c2 == '_') {
has_double_underscore = true;
break;
}
i++;
}
if (has_double_underscore) {
return ;
}
}
const std__string__string pref = std__string__concat( std__string__concat ( module_prefix , std__string__str ( "__" ) ) , name );
node->data.model_node.name = pref;
}

void imports__prefix_enum_node(structs__ASTNode* node, std__string__string module_prefix) {
const std__string__string name = node->data.enum_node.name;
if (std__string__find_char_from ( name , '_' , (uintptr_t)( 0 ) ) >= 0) {
const int32_t len_name = std__string__str_len( name );
bool has_double_underscore = false;
int32_t i = 0;
while (1) {
if (i + 1 >= len_name) {
break;
}
const char c1 = std__string__get_char( name , i );
const char c2 = std__string__get_char( name , i + 1 );
if (c1 == '_' && c2 == '_') {
has_double_underscore = true;
break;
}
i++;
}
if (has_double_underscore) {
return ;
}
}
const std__string__string pref = std__string__concat( std__string__concat ( module_prefix , std__string__str ( "__" ) ) , name );
node->data.enum_node.name = pref;
}

std__maps__StringBoolMap imports__build_exported_name_map(structs__ASTNode* imported) {
std__arena__Arena arena = std__arena__Arena__create( 1024 );
std__maps__StringBoolMap m = (*std__maps__StringBoolMap__create( &arena , 128 ));
if (imported->children== nil) {
return m;
}
const __list_structs__ASTNode_t* children = imported->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
const structs__ASTNode child = children->data[ i ];
if (std__string__equals_c ( child.node_type, "Function" )) {
std__maps__StringBoolMap__set(&m, &arena, child.data.function.name, true);
}
else if (std__string__equals_c ( child.node_type, "Model" )) {
std__maps__StringBoolMap__set(&m, &arena, child.data.model_node.name, true);
}
else if (std__string__equals_c ( child.node_type, "Enum" )) {
std__maps__StringBoolMap__set(&m, &arena, child.data.enum_node.name, true);
}
i++;
}
return m;
}

std__string__string imports__prefix_type_name(std__string__string type_name, std__string__string module_prefix, std__maps__StringBoolMap* exported) {
if (std__string__str_len ( type_name ) == 0) {
return type_name;
}
const std__string__string t = type_name;
if (std__string__has_prefix ( t , std__string__str ( "ref " ) )) {
const std__string__string rest = std__string__strip( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
return std__string__concat( std__string__str ( "ref " ) , imports__prefix_type_name ( rest , module_prefix , exported ) );
}
if (std__string__has_prefix ( t , std__string__str ( "mut " ) )) {
const std__string__string rest = std__string__strip( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
return std__string__concat( std__string__str ( "mut " ) , imports__prefix_type_name ( rest , module_prefix , exported ) );
}
if (std__string__has_suffix ( t , std__string__str ( "*" ) )) {
const std__string__string base = std__string__strip( std__string__substring_se ( t , 0 , std__string__str_len ( t ) - 1 ) );
return std__string__concat( imports__prefix_type_name ( base , module_prefix , exported ) , std__string__str ( "*" ) );
}
if (std__string__has_suffix ( t , std__string__str ( "[999]" ) )) {
const std__string__string base = std__string__strip( std__string__substring_se ( t , 0 , std__string__str_len ( t ) - 5 ) );
return std__string__concat( imports__prefix_type_name ( base , module_prefix , exported ) , std__string__str ( "[999]" ) );
}
if (std__string__find_char_from ( t , '_' , (uintptr_t)( 0 ) ) >= 0) {
const uintptr_t len_t = std__string__str_len( t );
bool has_double_underscore = false;
uintptr_t i = 0;
while (1) {
if (i + 1 >= len_t) {
break;
}
const char c1 = std__string__get_char( t , (int32_t)( i ) );
const char c2 = std__string__get_char( t , (int32_t)( i + 1 ) );
if (c1 == '_' && c2 == '_') {
has_double_underscore = true;
break;
}
i++;
}
if (has_double_underscore) {
return t;
}
}
if (std__maps__StringBoolMap__contains( exported , t )) {
if (! std__string__has_prefix ( t , std__string__concat ( module_prefix , std__string__str ( "__" ) ) )) {
return std__string__concat( std__string__concat ( module_prefix , std__string__str ( "__" ) ) , t );
}
}
const std__string__string known_prefixed = imports__lookup_model_name( t );
if (std__string__str_len ( known_prefixed ) > 0) {
return known_prefixed;
}
return type_name;
}

void imports__prefix_types_in_node(structs__ASTNode* node, std__string__string module_prefix, std__maps__StringBoolMap* exported) {
if (node == nil) {
return ;
}
const std__string__string nt = node->node_type;
if (std__string__equals_c ( nt , "Function" )) {
node->data.function.return_type = imports__prefix_type_name ( node->data.function.return_type, module_prefix , exported );
__list_std__string_t* params = node->data.function.params;
if (params != nil) {
int32_t i = 0;
while (1) {
if (i >= len_v((*params))) {
break;
}
const std__string__string p = params->data[ i ];
const int32_t colon_pos = std__string__find_char_from( p , ':' , (uintptr_t)( 0 ) );
if (colon_pos >= 0) {
const std__string__string pname = std__string__strip( std__string__substring_se ( p , 0 , colon_pos ) );
const std__string__string ptype = std__string__strip( std__string__substr ( p , colon_pos + 1 , std__string__str_len ( p ) - colon_pos - 1 ) );
const std__string__string new_ptype = imports__prefix_type_name( ptype , module_prefix , exported );
std__string__string newp = std__string__concat( pname , std__string__str ( ":" ) );
if (std__string__str_len ( new_ptype ) > 0) {
newp = std__string__concat ( std__string__concat ( newp , std__string__str ( " " ) ) , new_ptype );
}
params->data[i] = newp;
}
i++;
}
}
}
else if (std__string__equals_c ( nt , "Declaration" )) {
node->data.declaration.type_name = imports__prefix_type_name ( node->data.declaration.type_name, module_prefix , exported );
}
else if (std__string__equals_c ( nt , "ArrayDecl" )) {
node->data.array_decl.element_type = imports__prefix_type_name ( node->data.array_decl.element_type, module_prefix , exported );
}
else if (std__string__equals_c ( nt , "ArrayLiteral" )) {
node->data.array_literal.element_type = imports__prefix_type_name ( node->data.array_literal.element_type, module_prefix , exported );
}
else if (std__string__equals_c ( nt , "Macro" )) {
__list_std__string_t* ptypes = node->data.macro_node.param_types;
if (ptypes != nil) {
int32_t j = 0;
while (1) {
if (j >= len_v((*ptypes))) {
break;
}
ptypes->data[j] = imports__prefix_type_name ( ptypes->data[ j ], module_prefix , exported );
j = j + 1;
}
}
}
else if (std__string__equals_c ( nt , "For" )) {
node->data.for_loop.var_type = imports__prefix_type_name ( node->data.for_loop.var_type, module_prefix , exported );
}
else if (std__string__equals_c ( nt , "Model" )) {
__list_std__string_t* ftypes = node->data.model_node.field_types;
if (ftypes != nil) {
int32_t k = 0;
while (1) {
if (k >= len_v((*ftypes))) {
break;
}
ftypes->data[k] = imports__prefix_type_name ( ftypes->data[ k ], module_prefix , exported );
k = k + 1;
}
}
__list_std__string_t* umtypes = node->data.model_node.union_member_types;
if (umtypes != nil) {
int32_t x = 0;
while (1) {
if (x >= len_v((*umtypes))) {
break;
}
umtypes->data[x] = imports__prefix_type_name ( umtypes->data[ x ], module_prefix , exported );
x = x + 1;
}
}
}
else if (std__string__equals_c ( nt , "Overload" )) {
const std__string__string ovl_name = node->data.overload_node.name;
const bool ovl_already_prefixed = std__string__str_contains_c( ovl_name , "__" );
if (! ovl_already_prefixed) {
node->data.overload_node.name = std__string__concat ( std__string__concat ( module_prefix , std__string__str ( "__" ) ) , ovl_name );
}
__list_std__string_t* type_names_ref = node->data.overload_node.type_names;
if (type_names_ref != nil) {
int32_t iov = 0;
while (1) {
if (iov >= len_v((*type_names_ref))) {
break;
}
type_names_ref->data[iov] = imports__prefix_type_name ( type_names_ref->data[ iov ], module_prefix , exported );
iov = iov + 1;
}
}
__list_std__string_t* target_funcs_ref = node->data.overload_node.target_functions;
if (target_funcs_ref != nil) {
int32_t itf = 0;
while (1) {
if (itf >= len_v((*target_funcs_ref))) {
break;
}
const std__string__string target_name = target_funcs_ref->data[ itf ];
const bool already_prefixed = std__string__str_contains_c( target_name , "__" );
if (! already_prefixed) {
target_funcs_ref->data[itf] = std__string__concat ( std__string__concat ( module_prefix , std__string__str ( "__" ) ) , target_name );
}
itf++;
}
}
}
else if (std__string__equals_c ( nt , "Opaque" )) {
__list_std__string_t* tnames = node->data.opaque_node.type_names;
if (tnames != nil) {
int32_t iy = 0;
while (1) {
if (iy >= len_v((*tnames))) {
break;
}
tnames->data[iy] = imports__prefix_type_name ( tnames->data[ iy ], module_prefix , exported );
iy = iy + 1;
}
}
}
else if (std__string__equals_c ( nt , "Extern" )) {
__list_std__string_t* eparams = node->data.extern_node.params;
if (eparams != nil) {
int32_t ep = 0;
while (1) {
if (ep >= len_v((*eparams))) {
break;
}
eparams->data[ep] = imports__prefix_type_name ( eparams->data[ ep ], module_prefix , exported );
ep = ep + 1;
}
}
node->data.extern_node.return_type = imports__prefix_type_name ( node->data.extern_node.return_type, module_prefix , exported );
}
if (node->children!= nil) {
__list_structs__ASTNode_t* children = node->children;
int32_t ii = 0;
while (1) {
if (ii >= len_v((*children))) {
break;
}
imports__prefix_types_in_node(&(children->data[ii]), module_prefix, exported);
ii = ii + 1;
}
}
}

bool imports__check_symbol_exists_in_program(structs__ASTNode* program, std__string__string symbol_name) {
if (program->children== nil) {
return false;
}
const __list_structs__ASTNode_t* children = program->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
const structs__ASTNode child = children->data[ i ];
if (std__string__equals_c ( child.node_type, "Function" )) {
const std__string__string func_name = child.data.function.name;
if (std__string__find_char_from ( func_name , '_' , (uintptr_t)( 0 ) ) >= 0) {
if (std__string__str_contains_c ( func_name , "__" )) {
i++;
continue;
}
}
if (std__string__compare ( func_name , symbol_name ) == 0) {
return true;
}
}
else if (std__string__equals_c ( child.node_type, "Declaration" )) {
if (std__string__compare ( child.data.declaration.name, symbol_name ) == 0) {
return true;
}
}
else if (std__string__equals_c ( child.node_type, "Model" )) {
const std__string__string model_name = child.data.model_node.name;
if (std__string__str_contains_c ( model_name , "__" )) {
i++;
continue;
}
if (std__string__compare ( model_name , symbol_name ) == 0) {
return true;
}
}
else if (std__string__equals_c ( child.node_type, "Enum" )) {
const std__string__string enum_name = child.data.enum_node.name;
if (std__string__str_contains_c ( enum_name , "__" )) {
i++;
continue;
}
if (std__string__compare ( enum_name , symbol_name ) == 0) {
return true;
}
}
i++;
}
return false;
}

void imports__merge_imported_module(structs__ASTNode* program, structs__ASTNode* imported, std__string__string use_module) {
const std__string__string module_prefix = imports__get_module_prefix( use_module );
if (imported->children== nil) {
return ;
}
const __list_structs__ASTNode_t* children = imported->children;
std__maps__StringBoolMap exported = imports__build_exported_name_map( imported );
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
const structs__ASTNode child = children->data[ i ];
if (std__string__equals_c ( child.node_type, "Use" )) {
i++;
continue;
}
if (std__string__equals_c ( child.node_type, "Test" )) {
i++;
continue;
}
if (std__string__equals_c ( child.node_type, "Function" )) {
if (std__string__equals_c ( child.data.function.name, "main" )) {
i++;
continue;
}
const std__string__string func_name = child.data.function.name;
if (imports__check_symbol_exists_in_program ( program , func_name )) {
std__io__print("error: imported symbol '");
std__io__print(func_name);
std__io__print("' from module '");
std__io__print(use_module);
std__io__println("' shadows a local declaration");
exit(1);
}
imports__register_imported_symbol(func_name);
imports__prefix_function_node(&child, module_prefix, &exported);
imports__prefix_types_in_node(&child, module_prefix, &exported);
}
else if (std__string__equals_c ( child.node_type, "Model" )) {
const std__string__string original_name = child.data.model_node.name;
if (imports__check_symbol_exists_in_program ( program , original_name )) {
std__io__print("error: imported symbol '");
std__io__print(original_name);
std__io__print("' from module '");
std__io__print(use_module);
std__io__println("' shadows a local declaration");
exit(1);
}
imports__register_imported_symbol(original_name);
imports__prefix_model_node(&child, module_prefix);
const std__string__string prefixed_name = child.data.model_node.name;
imports__register_model_name(original_name, prefixed_name);
imports__prefix_types_in_node(&child, module_prefix, &exported);
}
else if (std__string__equals_c ( child.node_type, "Enum" )) {
const std__string__string enum_name = child.data.enum_node.name;
if (imports__check_symbol_exists_in_program ( program , enum_name )) {
std__io__print("error: imported symbol '");
std__io__print(enum_name);
std__io__print("' from module '");
std__io__print(use_module);
std__io__println("' shadows a local declaration");
exit(1);
}
imports__register_imported_symbol(enum_name);
imports__prefix_enum_node(&child, module_prefix);
}
else if (std__string__equals_c ( child.node_type, "Declaration" )) {
const std__string__string var_name = child.data.declaration.name;
imports__register_imported_symbol(var_name);
}
else if (std__string__equals_c ( child.node_type, "Extern" )) {
const std__string__string func_name = child.data.extern_node.function_name;
imports__register_imported_symbol(func_name);
}
else if (std__string__equals_c ( child.node_type, "Platform" )) {
if (child.children!= nil) {
const __list_structs__ASTNode_t* plat_children = child.children;
int32_t j = 0;
while (1) {
if (j >= len_v((*plat_children))) {
break;
}
structs__ASTNode pchild = plat_children->data[ j ];
if (std__string__equals_c ( pchild.node_type, "Function" )) {
const std__string__string func_name = pchild.data.function.name;
imports__register_imported_symbol(func_name);
imports__prefix_function_node(&pchild, module_prefix, &exported);
imports__prefix_types_in_node(&pchild, module_prefix, &exported);
plat_children->data[j] = pchild;
}
else if (std__string__equals_c ( pchild.node_type, "Extern" )) {
const std__string__string func_name = pchild.data.extern_node.function_name;
imports__register_imported_symbol(func_name);
}
else if (std__string__equals_c ( pchild.node_type, "Declaration" )) {
const std__string__string var_name = pchild.data.declaration.name;
imports__register_imported_symbol(var_name);
}
j++;
}
}
}
else if (std__string__equals_c ( child.node_type, "Overload" )) {
imports__prefix_types_in_node(&child, module_prefix, &exported);
}
imports__append_child(program, child);
i++;
}
}

structs__ASTNode imports__process_imports(structs__ASTNode* ast, std__string__string base_dir, bool is_axec, std__string__string current_file, bool is_top_level, std__string__string module_name) {
if (! std__string__equals_c ( ast->node_type, "Program" )) {
return * ast;
}
if (std__string__str_len ( current_file ) > 0) {
if (imports__is_module_processed ( current_file )) {
return * ast;
}
imports__add_processed_module(current_file);
}
std__string__string effective_base = base_dir;
if (std__string__str_len ( effective_base ) == 0) {
if (std__string__str_len ( current_file ) > 0) {
effective_base = imports__get_dir_from_path ( current_file );
}
else {
effective_base = std__string__str ( "." );
}
}
if (ast->children== nil) {
return * ast;
}
const __list_structs__ASTNode_t* program_children = ast->children;
int32_t idx = 0;
while (1) {
if (idx >= len_v((*program_children))) {
break;
}
structs__ASTNode child = program_children->data[ idx ];
if (std__string__equals_c ( child.node_type, "Use" )) {
const std__string__string use_mod = child.data.use_node.module_name;
const std__string__string module_path = imports__make_module_path( effective_base , use_mod );
const std__string__string src = std__os__read_file( module_path );
if (std__string__str_len ( src ) == 0) {
idx = idx + 1;
continue;
}
const __list_lexer__Token_t toks = lexer__lex( src );
bool import_is_axec = false;
if (std__string__str_len ( module_path ) >= 5) {
const std__string__string ext = std__string__substring_se( module_path , (int32_t)( std__string__str_len ( module_path ) - 5 ) , (int32_t)( std__string__str_len ( module_path ) ) );
if (std__string__equals_c ( ext , ".axec" )) {
import_is_axec = true;
}
}
structs__ASTNode import_ast = parser__parse( &toks , import_is_axec , false , use_mod , module_path );
const std__string__string import_base = imports__get_dir_from_path( module_path );
import_ast = imports__process_imports ( &import_ast , import_base , import_is_axec , module_path , false , use_mod );
imports__merge_imported_module(ast, &import_ast, use_mod);
}
idx++;
}
return * ast;
}

#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef __APPLE__
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef __APPLE__
#endif
void renderer__set_source_file(std__string__string filename) {
g_current_source_file = filename;
}

void renderer__set_emit_line_directives(bool v) {
g_emit_line_directives = v;
}

void renderer__renderer_add_prefix(std__string__string original, std__string__string prefixed) {
std__arena__Arena arena = std__arena__Arena__create( 1024 );
std__maps__StringStringMap__set(&g_function_prefixes, &arena, original, prefixed);
}

bool renderer__has_external_header(std__string__string header_name) {
return std__lists__StringList__contains( g_global_external_headers , header_name ) || std__lists__StringList__contains( g_windows_external_headers , header_name ) || std__lists__StringList__contains( g_posix_external_headers , header_name ) || std__lists__StringList__contains( g_linux_external_headers , header_name ) || std__lists__StringList__contains( g_macos_external_headers , header_name ) || std__lists__StringList__contains( g_freebsd_external_headers , header_name ) || std__lists__StringList__contains( g_openbsd_external_headers , header_name ) || std__lists__StringList__contains( g_netbsd_external_headers , header_name ) || std__lists__StringList__contains( g_dragonflybsd_external_headers , header_name );
}

std__string__string renderer__platform_macro_start(std__string__string platform_name) {
if (std__string__equals_c ( platform_name , "windows" )) {
return std__string__str( "#ifdef _WIN32\n" );
}
else if (std__string__equals_c ( platform_name , "posix" )) {
return std__string__str( "#ifndef _WIN32\n" );
}
else if (std__string__equals_c ( platform_name , "linux" )) {
return std__string__str( "#ifdef __linux__\n" );
}
else if (std__string__equals_c ( platform_name , "macos" )) {
return std__string__str( "#ifdef __APPLE__\n" );
}
else if (std__string__equals_c ( platform_name , "freebsd" )) {
return std__string__str( "#ifdef __FreeBSD__\n" );
}
else if (std__string__equals_c ( platform_name , "openbsd" )) {
return std__string__str( "#ifdef __OpenBSD__\n" );
}
else if (std__string__equals_c ( platform_name , "netbsd" )) {
return std__string__str( "#ifdef __NetBSD__\n" );
}
else if (std__string__equals_c ( platform_name , "dragonflybsd" )) {
return std__string__str( "#ifdef __DragonFly__\n" );
}
return std__string__str( "" );
}

static inline std__string__string renderer__emit_line_directive(int32_t line) {
if (! g_emit_line_directives || line <= 0) {
return std__string__str( "" );
}
std__string__StringBuilder sb = std__string__StringBuilder__init( 64 );
std__string__StringBuilder__append_c(&sb, "#line ");
std__string__StringBuilder__append(&sb, std__string__i32_to_string(line));
if (g_current_source_file.data!= nil && std__string__str_len ( g_current_source_file ) > 0) {
std__string__string path_to_emit = g_current_source_file;
path_to_emit = std__string__replace_all ( path_to_emit , std__string__str ( "\\" ) , std__string__str ( "/" ) );
std__string__StringBuilder__append_c(&sb, " \"");
std__string__StringBuilder__append(&sb, path_to_emit);
std__string__StringBuilder__append_c(&sb, "\"");
}
std__string__StringBuilder__append_c(&sb, "\n");
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

void renderer__initialize_renderer() {
std__arena__Arena arena = std__arena__Arena__create( 1024 * 100 );
g_type_mappings = (*std__maps__StringStringMap__create( &arena , 128 ));
g_function_return_types = (*std__maps__StringStringMap__create( &arena , 1024 ));
g_ref_depths = (*std__maps__StringIntMap__create( &arena , 128 ));
g_is_mutable = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_function_prefixes = (*std__maps__StringStringMap__create( &arena , 128 ));
g_model_names = (*std__maps__StringStringMap__create( &arena , 128 ));
g_enum_names = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_opaque_types = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_foreign_types = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_generated_typedefs = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_generated_functions = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_field_types = (*std__maps__StringStringMap__create( &arena , 128 ));
g_pointer_fields = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_var_types = (*std__maps__StringStringMap__create( &arena , 128 ));
g_list_of_types = (*std__maps__StringStringMap__create( &arena , 128 ));
g_list_element_types = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_list_elements = std__lists__StringList__create( &arena , 32 );
g_global_external_headers = std__lists__StringList__create( &arena , 32 );
g_windows_external_headers = std__lists__StringList__create( &arena , 32 );
g_posix_external_headers = std__lists__StringList__create( &arena , 32 );
g_linux_external_headers = std__lists__StringList__create( &arena , 32 );
g_macos_external_headers = std__lists__StringList__create( &arena , 32 );
g_freebsd_external_headers = std__lists__StringList__create( &arena , 32 );
g_openbsd_external_headers = std__lists__StringList__create( &arena , 32 );
g_netbsd_external_headers = std__lists__StringList__create( &arena , 32 );
g_dragonflybsd_external_headers = std__lists__StringList__create( &arena , 32 );
g_emitted_globals = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_global_var_prefixes = (*std__maps__StringStringMap__create( &arena , 128 ));
g_generic_functions = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_function_param_types = (*std__maps__StringStringMap__create( &arena , 256 ));
g_extern_functions = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_overloads = (*std__maps__StringBoolMap__create( &arena , 128 ));
g_emitted_prototypes = (*std__maps__StringBoolMap__create( &arena , 1024 ));
g_emit_line_directives = false;
g_current_source_file = std__string__str ( "" );
g_current_line = 0;
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("i8"), std__string__str("int8_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("u8"), std__string__str("uint8_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("i16"), std__string__str("int16_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("u16"), std__string__str("uint16_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("i32"), std__string__str("int32_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("u32"), std__string__str("uint32_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("i64"), std__string__str("int64_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("u64"), std__string__str("uint64_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("isize"), std__string__str("intptr_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("usize"), std__string__str("uintptr_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("f32"), std__string__str("float"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("f64"), std__string__str("double"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("bool"), std__string__str("bool"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("char"), std__string__str("char"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("rchar"), std__string__str("char*"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("byte"), std__string__str("uint8_t"));
std__maps__StringStringMap__set(&g_type_mappings, &arena, std__string__str("ptrdiff"), std__string__str("isize"));
}

static inline bool renderer__is_builtin_type(std__string__string type_name) {
return std__string__equals_c( type_name , "i8" ) || std__string__equals_c ( type_name , "u8" ) || std__string__equals_c ( type_name , "i16" ) || std__string__equals_c ( type_name , "u16" ) || std__string__equals_c ( type_name , "i32" ) || std__string__equals_c ( type_name , "u32" ) || std__string__equals_c ( type_name , "i64" ) || std__string__equals_c ( type_name , "u64" ) || std__string__equals_c ( type_name , "isize" ) || std__string__equals_c ( type_name , "usize" ) || std__string__equals_c ( type_name , "f32" ) || std__string__equals_c ( type_name , "f64" ) || std__string__equals_c ( type_name , "bool" ) || std__string__equals_c ( type_name , "char" ) || std__string__equals_c ( type_name , "void" ) || std__string__equals_c ( type_name , "byte" ) || std__string__equals_c ( type_name , "rchar" ) || std__string__equals_c ( type_name , "ptrdiff" );
}

std__string__string renderer__extract_base_type(std__string__string type_name) {
std__string__string result = std__string__strip( type_name );
while (1) {
bool changed = false;
if (std__string__has_prefix ( result , std__string__str ( "mut " ) )) {
result = std__string__strip ( std__string__substr ( result , 4 , std__string__str_len ( result ) - 4 ) );
changed = true;
}
if (std__string__has_prefix ( result , std__string__str ( "ref " ) )) {
result = std__string__strip ( std__string__substr ( result , 4 , std__string__str_len ( result ) - 4 ) );
changed = true;
}
if (! changed) {
break;
}
}
if (std__string__has_prefix ( result , std__string__str ( "list(" ) )) {
const int32_t close_paren = std__string__find_char_from( result , (char)( 41 ) , (uintptr_t)( 0 ) );
if (close_paren > 5) {
result = std__string__strip ( std__string__substring_se ( result , 5 , (uintptr_t)( close_paren ) ) );
return renderer__extract_base_type( result );
}
}
const int32_t br_idx = std__string__find_char_from( result , '[' , (uintptr_t)( 0 ) );
if (br_idx > 0) {
result = std__string__strip ( std__string__substring_se ( result , 0 , br_idx ) );
}
while (1) {
if (std__string__has_suffix ( result , std__string__str ( "*" ) )) {
result = std__string__strip ( std__string__substring_se ( result , 0 , std__string__str_len ( result ) - 1 ) );
}
else {
break;
}
}
return result;
}

static inline bool renderer__is_language_keyword(std__string__string name) {
if (std__string__equals_c ( name , "union" ) || std__string__equals_c ( name , "generic" )) {
return true;
}
if (std__string__equals_c ( name , "untyped" )) {
return true;
}
return false;
}

bool renderer__is_all_upper_or_underscore(std__string__string name) {
if (std__string__str_len ( name ) == 0) {
return false;
}
int32_t i = 0;
const int32_t n = std__string__str_len( name );
while (1) {
if (i >= n) {
break;
}
const char ch = std__string__get_char( name , i );
if (! ( ( ch >= 'A' && ch <= 'Z' ) || ( ch >= '0' && ch <= '9' ) || ch == '_' )) {
return false;
}
i++;
}
return true;
}

static inline bool renderer__is_c_constant(std__string__string name) {
return std__string__equals_c( name , "NULL" ) || std__string__equals_c ( name , "TRUE" ) || std__string__equals_c ( name , "FALSE" ) || std__string__equals_c ( name , "EOF" ) || std__string__equals_c ( name , "SEEK_SET" ) || std__string__equals_c ( name , "SEEK_CUR" ) || std__string__equals_c ( name , "SEEK_END" ) || std__string__has_prefix ( name , std__string__str ( "STDIN" ) ) || std__string__has_prefix ( name , std__string__str ( "STDOUT" ) ) || std__string__has_prefix ( name , std__string__str ( "STDERR" ) ) || std__string__has_prefix ( name , std__string__str ( "INT_" ) ) || std__string__has_prefix ( name , std__string__str ( "UINT_" ) ) || std__string__has_prefix ( name , std__string__str ( "SIZE_" ) ) || std__string__has_prefix ( name , std__string__str ( "PATH_" ) ) || std__string__has_prefix ( name , std__string__str ( "NAME_" ) ) || std__string__has_prefix ( name , std__string__str ( "S_IS" ) ) || std__string__has_prefix ( name , std__string__str ( "_S_IF" ) ) || std__string__has_prefix ( name , std__string__str ( "_A_" ) ) || std__string__has_prefix ( name , std__string__str ( "WEXITSTATUS" ) ) || std__string__equals_c ( name , "RAND_MAX" );
}

static inline bool renderer__is_builtin_function(std__string__string name) {
return std__string__equals_c( name , "append" ) || std__string__equals_c ( name , "len" ) || std__string__equals_c ( name , "assert" ) || std__string__equals_c ( name , "cast" ) || std__string__equals_c ( name , "deref" ) || std__string__equals_c ( name , "addr" ) || std__string__equals_c ( name , "sizeof" ) || std__string__equals_c ( name , "malloc" ) || std__string__equals_c ( name , "free" ) || std__string__equals_c ( name , "memcpy" ) || std__string__equals_c ( name , "memset" ) || std__string__equals_c ( name , "memmove" ) || std__string__equals_c ( name , "strlen" ) || std__string__equals_c ( name , "strcmp" ) || std__string__equals_c ( name , "strcpy" ) || std__string__equals_c ( name , "printf" ) || std__string__equals_c ( name , "sprintf" ) || std__string__equals_c ( name , "fprintf" ) || std__string__equals_c ( name , "fopen" ) || std__string__equals_c ( name , "fclose" ) || std__string__equals_c ( name , "fread" ) || std__string__equals_c ( name , "fwrite" ) || std__string__equals_c ( name , "exit" ) || std__string__equals_c ( name , "abort" ) || std__string__equals_c ( name , "atexit" ) || ( name . len >= 2 && name . data [ 0 ] == 'C' && ( name . data [ 1 ] == '.' || ( name . data [ 1 ] == ' ' && std__string__find_char_from ( name , '.' , (uintptr_t)( 1 ) ) > 0 ) ) );
}

bool renderer__is_valid_symbol(std__string__string symbol_name) {
return std__string__str_len( symbol_name ) == 0 || renderer__is_builtin_type ( symbol_name ) || renderer__is_language_keyword ( symbol_name ) || std__maps__StringBoolMap__contains( &g_opaque_types , symbol_name ) || std__maps__StringBoolMap__contains( &g_foreign_types , symbol_name ) || imports__is_symbol_imported ( symbol_name ) || std__maps__StringStringMap__contains( &g_model_names , symbol_name ) || std__maps__StringBoolMap__contains( &g_enum_names , symbol_name ) || std__string__has_prefix ( symbol_name , std__string__str ( "struct " ) );
}

void renderer__validate_type_imported(std__string__string type_name) {
if (std__string__str_len ( type_name ) == 0) {
return ;
}
const std__string__string base_type = renderer__extract_base_type( type_name );
if (std__string__str_len ( base_type ) == 0) {
return ;
}
if (renderer__is_builtin_type ( base_type )) {
return ;
}
if (std__string__find_char_from ( base_type , '_' , (uintptr_t)( 0 ) ) >= 0) {
return ;
}
if (! renderer__is_valid_symbol ( base_type )) {
if (g_current_source_file.data!= nil) {
std__io__print(std__os__get_short_filename(g_current_source_file));
}
else {
std__io__print("(null)");
}
std__io__print(":");
std__io__print(std__string__i32_to_string(g_current_line));
std__io__print(": error: undefined symbol: ");
std__io__print(base_type);
std__io__println(", perhaps missing 'use' statement?");
exit(1);
}
}

void renderer__register_function_signature(std__string__string func_name, __list_std__string_t* params, std__string__string ret_type, std__arena__Arena* arena) {
if (std__string__str_len ( ret_type ) > 0) {
std__maps__StringStringMap__set(&g_function_return_types, arena, func_name, ret_type);
}
else {
std__maps__StringStringMap__set(&g_function_return_types, arena, func_name, std__string__str("void"));
}
if (params == nil) {
std__maps__StringStringMap__set(&g_function_param_types, arena, func_name, std__string__str(""));
return ;
}
std__string__StringBuilder sb_types = std__string__StringBuilder__init( 256 );
int32_t i = 0;
while (1) {
if (i >= len_v((*params))) {
break;
}
const std__string__string param = params->data[ i ];
if (std__string__equals_c ( param , "..." )) {
if (i > 0) {
std__string__StringBuilder__append_c(&sb_types, ",");
}
std__string__StringBuilder__append_c(&sb_types, "...");
}
else {
const int32_t colon_pos = std__string__find_char_from( param , ':' , (uintptr_t)( 0 ) );
if (colon_pos >= 0) {
const std__string__string param_type = std__string__strip( std__string__substr ( param , colon_pos + 1 , std__string__str_len ( param ) - colon_pos - 1 ) );
if (i > 0) {
std__string__StringBuilder__append_c(&sb_types, ",");
}
std__string__StringBuilder__append(&sb_types, param_type);
}
}
i++;
}
const std__string__string types_str = std__string__StringBuilder__to_string( &sb_types );
std__string__StringBuilder__destroy(&sb_types);
std__maps__StringStringMap__set(&g_function_param_types, arena, func_name, types_str);
}

std__string__string renderer__infer_expression_type(std__string__string expr) {
const std__string__string trimmed = std__string__strip( expr );
if (std__string__str_len ( trimmed ) == 0) {
return std__string__str( "void" );
}
if (std__string__has_prefix ( trimmed , std__string__str ( "\"" ) ) && std__string__has_suffix ( trimmed , std__string__str ( "\"" ) )) {
return std__string__str( "ref char" );
}
if (std__string__has_prefix ( trimmed , std__string__str ( "'" ) ) && std__string__has_suffix ( trimmed , std__string__str ( "'" ) )) {
return std__string__str( "char" );
}
const char first_char = std__string__get_char( trimmed , 0 );
bool is_numeric = false;
if (( first_char >= '0' && first_char <= '9' )) {
is_numeric = true;
}
else if (first_char == '-') {
if (std__string__str_len ( trimmed ) > 1) {
const char second_char = std__string__get_char( trimmed , 1 );
if (( second_char >= '0' && second_char <= '9' ) || second_char == '.') {
is_numeric = true;
}
}
}
if (is_numeric) {
if (std__string__find_char_from ( trimmed , '.' , (uintptr_t)( 0 ) ) >= 0) {
return std__string__str( "f64" );
}
return std__string__str( "i32" );
}
if (std__string__equals_c ( trimmed , "true" ) || std__string__equals_c ( trimmed , "false" )) {
return std__string__str( "bool" );
}
if (std__string__equals_c ( trimmed , "nil" )) {
return std__string__str( "ref void" );
}
if (std__maps__StringStringMap__contains( &g_var_types , trimmed )) {
return std__maps__StringStringMap__get( &g_var_types , trimmed );
}
if (std__string__has_prefix ( trimmed , std__string__str ( "&" ) )) {
std__string__string inner = std__string__strip( std__string__substr ( trimmed , 1 , std__string__str_len ( trimmed ) - 1 ) );
if (std__string__str_len ( inner ) > 0) {
if (std__string__has_prefix ( inner , std__string__str ( "(" ) ) && std__string__has_suffix ( inner , std__string__str ( ")" ) )) {
inner = std__string__strip ( std__string__substr ( inner , 1 , std__string__str_len ( inner ) - 1 ) );
}
std__string__string inner_type = std__string__str( "" );
if (std__maps__StringStringMap__contains( &g_var_types , inner )) {
inner_type = std__maps__StringStringMap__get( &g_var_types , inner );
}
else {
inner_type = renderer__infer_expression_type ( inner );
}
if (std__string__str_len ( inner_type ) > 0) {
return std__string__concat( std__string__str ( "ref " ) , inner_type );
}
}
}
if (std__string__has_prefix ( trimmed , std__string__str ( "addr" ) ) && std__string__str_len ( trimmed ) > 4) {
const int32_t after_addr = 4;
int32_t k = after_addr;
while (1) {
if (k >= std__string__str_len ( trimmed )) {
break;
}
const char ws = std__string__get_char( trimmed , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k++;
}
if (k < std__string__str_len ( trimmed ) && std__string__get_char ( trimmed , k ) == '(') {
const int32_t paren_start = k + 1;
int32_t paren_end = paren_start;
int32_t depth = 1;
bool in_arg_str = false;
bool in_arg_char = false;
while (1) {
if (paren_end >= std__string__str_len ( trimmed ) || depth == 0) {
break;
}
const char pc = std__string__get_char( trimmed , paren_end );
if (pc == '"' && ! in_arg_char) {
in_arg_str = ! in_arg_str;
}
else if (pc == '\'' && ! in_arg_str) {
in_arg_char = ! in_arg_char;
}
else if (! in_arg_str && ! in_arg_char) {
if (pc == '(') {
depth++;
}
else if (pc == ')') {
depth--;
}
}
if (depth > 0) {
paren_end++;
}
}
if (depth == 0 && paren_end == std__string__str_len ( trimmed ) - 1) {
const std__string__string inner_expr = std__string__strip( std__string__substring_se ( trimmed , paren_start , paren_end ) );
const std__string__string inner_type = renderer__infer_expression_type( inner_expr );
if (std__string__str_len ( inner_type ) > 0) {
return std__string__concat( std__string__str ( "ref " ) , inner_type );
}
}
}
}
const int32_t paren_idx = std__string__find_char_from( trimmed , '(' , (uintptr_t)( 0 ) );
if (paren_idx > 0 && std__string__has_suffix ( trimmed , std__string__str ( ")" ) )) {
const std__string__string func_name = std__string__strip( std__string__substring_se ( trimmed , 0 , paren_idx ) );
const int32_t args_start = paren_idx + 1;
const int32_t args_end = std__string__str_len( trimmed ) - 1;
if (args_end > args_start) {
const std__string__string args_str = std__string__strip( std__string__substring_se ( trimmed , args_start , args_end ) );
renderer__validate_function_call(func_name, args_str, 0);
}
else {
renderer__validate_function_call(func_name, std__string__str(""), 0);
}
std__string__string lookup_name = func_name;
if (std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
lookup_name = std__maps__StringStringMap__get( &g_function_prefixes , func_name );
}
if (std__maps__StringStringMap__contains( &g_function_return_types , lookup_name )) {
return std__maps__StringStringMap__get( &g_function_return_types , lookup_name );
}
if (std__string__equals_c ( func_name , "len" )) {
return std__string__str( "i32" );
}
if (std__string__equals_c ( func_name , "sizeof" )) {
return std__string__str( "usize" );
}
}
return std__string__str( "" );
}

void renderer__validate_function_call(std__string__string func_name, std__string__string args_str, int32_t depth) {
if (depth > 10) {
return ;
}
if (renderer__is_builtin_function ( func_name )) {
return ;
}
__list_std__string_t arg_list = {0};
std__string__StringBuilder sb_arg = std__string__StringBuilder__init( 256 );
int32_t paren_depth = 0;
bool in_string = false;
bool in_char_literal = false;
int32_t i = 0;
const int32_t args_len = (int32_t)( std__string__str_len ( args_str ) );
while (1) {
if (i >= args_len) {
break;
}
const char ch = std__string__get_char( args_str , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( args_str , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb_arg, ch);
}
else if (ch == '\"' && ! in_char_literal && ! renderer__is_escaped_quote ( args_str , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb_arg, ch);
}
else if (! in_string && ! in_char_literal) {
if (ch == '(') {
paren_depth = paren_depth + 1;
std__string__StringBuilder__append_char(&sb_arg, ch);
}
else if (ch == ')') {
paren_depth = paren_depth - 1;
std__string__StringBuilder__append_char(&sb_arg, ch);
}
else if (ch == ',' && paren_depth == 0) {
const std__string__string built_arg = std__string__StringBuilder__to_string( &sb_arg );
__list_std__string_push(&arg_list, std__string__strip(built_arg));
sb_arg = std__string__StringBuilder__init( 256 );
}
else {
std__string__StringBuilder__append_char(&sb_arg, ch);
}
}
else {
std__string__StringBuilder__append_char(&sb_arg, ch);
}
i++;
}
const std__string__string final_arg = std__string__StringBuilder__to_string( &sb_arg );
if (std__string__str_len ( std__string__strip ( final_arg ) ) > 0) {
__list_std__string_push(&arg_list, std__string__strip(final_arg));
}
int32_t arg_idx_nested = 0;
while (1) {
if (arg_idx_nested >= len_v(arg_list)) {
break;
}
const std__string__string arg_expr = arg_list.data[ arg_idx_nested ];
const bool is_string_lit = std__string__has_prefix( arg_expr , std__string__str ( "\"" ) ) || std__string__has_prefix ( arg_expr , std__string__str ( "'" ) );
const int32_t arg_paren = std__string__find_char_from( arg_expr , '(' , (uintptr_t)( 0 ) );
if (! is_string_lit && arg_paren > 0) {
const std__string__string nested_func = std__string__strip( std__string__substring_se ( arg_expr , 0 , arg_paren ) );
const int32_t nested_args_start = arg_paren + 1;
const int32_t nested_args_end = std__string__str_len( arg_expr ) - 1;
if (nested_args_end > nested_args_start) {
const std__string__string nested_args = std__string__strip( std__string__substring_se ( arg_expr , nested_args_start , nested_args_end ) );
renderer__validate_function_call(nested_func, nested_args, depth + 1);
}
}
arg_idx_nested++;
}
std__string__string lookup_name = func_name;
if (std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
lookup_name = std__maps__StringStringMap__get( &g_function_prefixes , func_name );
}
if (std__string__has_prefix ( func_name , std__string__str ( "cast" ) )) {
return ;
}
const int32_t dot_pos = std__string__find_char_from( func_name , '.' , (uintptr_t)( 0 ) );
if (dot_pos > 0) {
const std__string__string base_name = std__string__strip( std__string__substring_se ( func_name , 0 , dot_pos ) );
if (imports__is_symbol_imported ( base_name ) || std__maps__StringStringMap__contains( &g_model_names , base_name )) {
return ;
}
}
const int32_t t_pos_lookup = std__string__find_substr( lookup_name , std__string__str ( "__T_" ) );
if (t_pos_lookup > 0) {
const std__string__string base_gen = std__string__substring_se( lookup_name , 0 , t_pos_lookup );
if (std__maps__StringBoolMap__contains( &g_generic_functions , base_gen )) {
lookup_name = base_gen;
}
else if (std__maps__StringStringMap__contains( &g_function_prefixes , base_gen )) {
const std__string__string pref_base = std__maps__StringStringMap__get( &g_function_prefixes , base_gen );
if (std__maps__StringBoolMap__contains( &g_generic_functions , pref_base )) {
lookup_name = pref_base;
}
}
}
const int32_t dot_pos_lookup = std__string__find_char_from( func_name , '.' , (uintptr_t)( 0 ) );
if (dot_pos_lookup > 0) {
const std__string__string base_name_lookup = std__string__strip( std__string__substring_se ( func_name , 0 , dot_pos_lookup ) );
if (std__string__equals_c ( base_name_lookup , "C" )) {
return ;
}
}
if (std__string__has_prefix ( func_name , std__string__str ( "C." ) ) || std__string__has_prefix ( func_name , std__string__str ( "C ." ) ) || std__string__has_prefix ( lookup_name , std__string__str ( "C__" ) )) {
return ;
}
if (! std__maps__StringStringMap__contains( &g_function_param_types , lookup_name )) {
if (std__maps__StringBoolMap__contains( &g_overloads , lookup_name ) || std__maps__StringBoolMap__contains( &g_extern_functions , lookup_name ) || std__maps__StringBoolMap__contains( &g_generic_functions , lookup_name ) || std__maps__StringBoolMap__contains( &g_emitted_prototypes , lookup_name ) || std__maps__StringBoolMap__contains( &g_function_prefixes , lookup_name ) || std__string__equals_c ( lookup_name , "len_v" )) {
return ;
}
}
const std__string__string expected_types_str = std__maps__StringStringMap__get( &g_function_param_types , lookup_name );
if (std__string__str_len ( expected_types_str ) == 0) {
if (len_v(arg_list) > 0) {
if (! std__string__has_prefix ( func_name , std__string__str ( "__INTERPOLATED__" ) )) {
std__io__print(std__os__get_short_filename(g_current_source_file));
std__io__print(":");
std__io__print(std__string__i32_to_string(g_current_line));
std__io__print(": error: function '");
std__io__print(func_name);
std__io__print("' expects 0 argument(s), but ");
std__io__print(std__string__i32_to_string(len_v(arg_list)));
std__io__println(" were provided");
exit(1);
}
}
return ;
}
__list_std__string_t expected_types = {0};
std__string__StringBuilder sb_type = std__string__StringBuilder__init( 128 );
uintptr_t j = 0;
while (1) {
if (j >= std__string__str_len ( expected_types_str )) {
break;
}
const char ch2 = std__string__get_char( expected_types_str , (int32_t)( j ) );
if (ch2 == ',') {
const std__string__string built_type = std__string__StringBuilder__to_string( &sb_type );
if (std__string__str_len ( std__string__strip ( built_type ) ) > 0) {
__list_std__string_push(&expected_types, std__string__strip(built_type));
}
sb_type = std__string__StringBuilder__init( 128 );
}
else {
std__string__StringBuilder__append_char(&sb_type, ch2);
}
j++;
}
const std__string__string final_type = std__string__StringBuilder__to_string( &sb_type );
if (std__string__str_len ( std__string__strip ( final_type ) ) > 0) {
__list_std__string_push(&expected_types, std__string__strip(final_type));
}
bool is_variadic = false;
if (len_v(expected_types) > 0) {
const std__string__string last_type = expected_types.data[ len_v(expected_types) - 1 ];
if (std__string__equals_c ( last_type , "..." )) {
is_variadic = true;
}
}
bool arg_count_ok = false;
if (is_variadic) {
if (len_v(arg_list) >= len_v(expected_types) - 1) {
arg_count_ok = true;
}
}
else if (len_v(arg_list) == len_v(expected_types)) {
arg_count_ok = true;
}
if (! arg_count_ok) {
std__io__print(std__os__get_short_filename(g_current_source_file));
std__io__print(":");
std__io__print(std__string__i32_to_string(g_current_line));
std__io__print(": error: function '");
std__io__print(func_name);
if (is_variadic) {
std__io__print("' expects at least ");
std__io__print(std__string__i32_to_string(len_v(expected_types) - 1));
}
else {
std__io__print("' expects ");
std__io__print(std__string__i32_to_string(len_v(expected_types)));
}
std__io__print(" argument(s), but ");
std__io__print(std__string__i32_to_string(len_v(arg_list)));
std__io__println(" were provided");
exit(1);
}
int32_t arg_idx = 0;
while (1) {
if (arg_idx >= len_v(arg_list)) {
break;
}
if (is_variadic && arg_idx >= len_v(expected_types) - 1) {
arg_idx = arg_idx + 1;
continue;
}
const std__string__string arg_expr = arg_list.data[ arg_idx ];
const std__string__string inferred_type = renderer__infer_expression_type( arg_expr );
const std__string__string expected_type = expected_types.data[ arg_idx ];
if (std__string__equals_c ( expected_type , "..." )) {
arg_idx++;
continue;
}
const std__string__string mapped_inferred = renderer__map_axe_type_to_c( inferred_type );
const std__string__string mapped_expected = renderer__map_axe_type_to_c( expected_type );
bool is_generic_func = std__maps__StringBoolMap__contains( &g_generic_functions , func_name );
if (! is_generic_func && std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
const std__string__string prefixed_func = std__maps__StringStringMap__get( &g_function_prefixes , func_name );
if (std__maps__StringBoolMap__contains( &g_generic_functions , prefixed_func )) {
is_generic_func = true;
}
}
if (std__string__str_len ( inferred_type ) > 0 && std__string__has_prefix ( inferred_type , std__string__str ( "ref " ) ) && ! std__string__has_prefix ( expected_type , std__string__str ( "ref " ) )) {
std__io__print(std__os__get_short_filename(g_current_source_file));
std__io__print(":");
std__io__print(std__string__i32_to_string(g_current_line));
std__io__print(": error: cannot pass address to non-ref parameter in call to '");
std__io__print(std__string__replace_all(func_name, std__string__str("__"), std__string__str(".")));
std__io__print("': argument ");
std__io__print(std__string__i32_to_string(arg_idx + 1));
std__io__print(" expects type '");
std__io__print(expected_type);
std__io__print("' but got '");
std__io__print(inferred_type);
exit(1);
}
if (! std__maps__StringBoolMap__contains( &g_extern_functions , func_name ) && ! is_generic_func) {
if (std__string__str_len ( inferred_type ) > 0 && ! std__string__equals_c ( inferred_type , "auto" ) && std__string__compare ( mapped_inferred , mapped_expected ) != 0) {
if (std__string__has_prefix ( inferred_type , expected_type )) {
arg_idx++;
continue;
}
std__io__print(std__os__get_short_filename(g_current_source_file));
std__io__print(":");
std__io__print(std__string__i32_to_string(g_current_line));
std__io__print(": error: type mismatch in call to '");
std__io__print(std__string__replace_all(func_name, std__string__str("__"), std__string__str(".")));
std__io__print("': argument ");
std__io__print(std__string__i32_to_string(arg_idx + 1));
std__io__print(" expects type '");
std__io__print(expected_type);
std__io__print("' but got '");
std__io__print(inferred_type);
std__io__println("'");
exit(1);
}
}
arg_idx++;
}
}

void renderer__collect_function_signatures(structs__ASTNode* node, std__arena__Arena* arena, std__string__string prefix) {
if (node == nil) {
return ;
}
if (std__string__equals_c ( node->node_type, "Function" )) {
const std__string__string func_name = node->data.function.name;
const __list_std__string_t* params = node->data.function.params;
const std__string__string ret_type = node->data.function.return_type;
std__string__string reg_name = func_name;
if (std__string__str_len ( prefix ) > 0) {
reg_name = std__string__concat ( prefix , func_name );
}
if (std__string__equals_c ( func_name , "create" )) {
std__io__print("DEBUG: Registering function '");
std__io__print(reg_name);
std__io__print("'\n");
}
renderer__register_function_signature(reg_name, params, ret_type, arena);
if (node->data.function.is_generic) {
std__maps__StringBoolMap__set(&g_generic_functions, arena, reg_name, true);
if (std__maps__StringStringMap__contains( &g_function_prefixes , reg_name )) {
const std__string__string prefixed_name = std__maps__StringStringMap__get( &g_function_prefixes , reg_name );
std__maps__StringBoolMap__set(&g_generic_functions, arena, prefixed_name, true);
}
}
}
if (std__string__equals_c ( node->node_type, "Extern" )) {
const std__string__string func_name = node->data.extern_node.function_name;
const __list_std__string_t* params = node->data.extern_node.params;
const std__string__string ret_type = node->data.extern_node.return_type;
renderer__register_function_signature(func_name, params, ret_type, arena);
std__maps__StringBoolMap__set(&g_extern_functions, arena, func_name, true);
}
if (std__string__equals_c ( node->node_type, "Overload" )) {
const std__string__string func_name = node->data.overload_node.name;
std__maps__StringBoolMap__set(&g_overloads, arena, func_name, true);
}
if (std__string__equals_c ( node->node_type, "Model" )) {
const std__string__string model_name = node->data.model_node.name;
if (node->children!= nil) {
const __list_structs__ASTNode_t* children = node->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
std__string__string model_prefix = std__string__concat( model_name , std__string__str ( "." ) );
renderer__collect_function_signatures(&(children->data[i]), arena, model_prefix);
i++;
}
}
return ;
}
if (node->children!= nil) {
const __list_structs__ASTNode_t* children = node->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
renderer__collect_function_signatures(&(children->data[i]), arena, prefix);
i++;
}
}
}

void renderer__collect_foreign_types(structs__ASTNode* node) {
if (node == nil) {
return ;
}
if (std__string__equals_c ( node->node_type, "Foreign" )) {
const __list_std__string_t* fnames = node->data.foreign_node.type_names;
if (fnames != nil) {
std__arena__Arena arena_foreign = std__arena__Arena__create( 2560 );
int32_t fi = 0;
while (1) {
if (fi >= len_v((*fnames))) {
break;
}
const std__string__string type_name = fnames->data[ fi ];
std__maps__StringBoolMap__set(&g_foreign_types, &arena_foreign, type_name, true);
fi++;
}
}
}
if (node->children!= nil) {
const __list_structs__ASTNode_t* children = node->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
renderer__collect_foreign_types(&(children->data[i]));
i++;
}
}
}

void renderer__build_function_signatures(structs__ASTNode* ast) {
std__arena__Arena arena = std__arena__Arena__create( 1024 * 1024 );
renderer__collect_function_signatures(ast, &arena, std__string__str(""));
}

void renderer__collect_external_imports(structs__ASTNode* node, std__string__string current_platform, std__arena__Arena* arena) {
if (node == nil) {
return ;
}
if (std__string__equals_c ( node->node_type, "ExternalImport" )) {
const std__string__string header = node->data.external_import.header_file;
if (std__string__equals_c ( current_platform , "" )) {
if (! std__lists__StringList__contains( g_global_external_headers , header )) {
std__lists__StringList__push(g_global_external_headers, arena, header);
}
}
else if (std__string__equals_c ( current_platform , "windows" )) {
if (! std__lists__StringList__contains( g_windows_external_headers , header )) {
std__lists__StringList__push(g_windows_external_headers, arena, header);
}
}
else if (std__string__equals_c ( current_platform , "posix" )) {
if (! std__lists__StringList__contains( g_posix_external_headers , header )) {
std__lists__StringList__push(g_posix_external_headers, arena, header);
}
}
else if (std__string__equals_c ( current_platform , "linux" )) {
if (! std__lists__StringList__contains( g_linux_external_headers , header )) {
std__lists__StringList__push(g_linux_external_headers, arena, header);
}
}
else if (std__string__equals_c ( current_platform , "macos" )) {
if (! std__lists__StringList__contains( g_macos_external_headers , header )) {
std__lists__StringList__push(g_macos_external_headers, arena, header);
}
}
else if (std__string__equals_c ( current_platform , "freebsd" )) {
if (! std__lists__StringList__contains( g_freebsd_external_headers , header )) {
std__lists__StringList__push(g_freebsd_external_headers, arena, header);
}
}
else if (std__string__equals_c ( current_platform , "openbsd" )) {
if (! std__lists__StringList__contains( g_openbsd_external_headers , header )) {
std__lists__StringList__push(g_openbsd_external_headers, arena, header);
}
}
else if (std__string__equals_c ( current_platform , "netbsd" )) {
if (! std__lists__StringList__contains( g_netbsd_external_headers , header )) {
std__lists__StringList__push(g_netbsd_external_headers, arena, header);
}
}
else if (std__string__equals_c ( current_platform , "dragonflybsd" )) {
if (! std__lists__StringList__contains( g_dragonflybsd_external_headers , header )) {
std__lists__StringList__push(g_dragonflybsd_external_headers, arena, header);
}
}
return ;
}
if (std__string__equals_c ( node->node_type, "Platform" )) {
const std__string__string platform_name = node->data.platform_node.platform_name;
if (node->children!= nil) {
const __list_structs__ASTNode_t* children = node->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
renderer__collect_external_imports(&(children->data[i]), platform_name, arena);
i++;
}
}
return ;
}
if (node->children!= nil) {
const __list_structs__ASTNode_t* children = node->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
renderer__collect_external_imports(&(children->data[i]), current_platform, arena);
i++;
}
}
}

std__string__string renderer__get_base_type_from_field(std__string__string field_type) {
std__string__string t = std__string__strip( field_type );
if (std__string__has_prefix ( t , std__string__str ( "mut " ) )) {
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
while (1) {
if (! std__string__has_prefix ( t , std__string__str ( "ref " ) )) {
break;
}
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
while (1) {
if (! std__string__has_prefix ( t , std__string__str ( "& " ) )) {
break;
}
t = std__string__strip ( std__string__substr ( t , 2 , std__string__str_len ( t ) - 2 ) );
}
if (std__string__has_prefix ( t , std__string__str ( "list(" ) )) {
int32_t paren_pos = 5;
int32_t depth = 1;
while (1) {
if (paren_pos >= std__string__str_len ( t )) {
break;
}
const char ch = std__string__get_char( t , paren_pos );
if (ch == '(') {
depth = depth + 1;
}
else if (ch == ')') {
depth = depth - 1;
if (depth == 0) {
break;
}
}
paren_pos = paren_pos + 1;
}
t = std__string__strip ( std__string__substr ( t , 5 , paren_pos - 5 ) );
}
const int32_t bracket_pos = std__string__find_substr( t , std__string__str ( "[" ) );
if (bracket_pos >= 0) {
t = std__string__strip ( std__string__substr ( t , 0 , bracket_pos ) );
}
while (1) {
if (std__string__str_len ( t ) == 0) {
break;
}
if (std__string__get_char ( t , std__string__str_len ( t ) - 1 ) != '*') {
break;
}
t = std__string__strip ( std__string__substr ( t , 0 , std__string__str_len ( t ) - 1 ) );
}
return t;
}

std__string__string renderer__normalize_numeric_dots(std__string__string s) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( s ) + 16 );
const int32_t n = (int32_t)( std__string__str_len ( s ) );
int32_t i = 0;
while (1) {
if (i >= n) {
break;
}
const char ch = std__string__get_char( s , i );
if (ch >= '0' && ch <= '9' && i + 1 < n && std__string__get_char ( s , i + 1 ) == '.') {
std__string__StringBuilder__append_char(&sb, ch);
std__string__StringBuilder__append_char(&sb, '.');
int32_t j = i + 2;
while (1) {
if (j >= n) {
break;
}
const char cj = std__string__get_char( s , j );
if (cj != ' ' && cj != '\t' && cj != '\n') {
break;
}
j++;
}
if (j < n && std__string__get_char ( s , j ) >= '0' && std__string__get_char ( s , j ) <= '9') {
std__string__StringBuilder__append_char(&sb, std__string__get_char(s, j));
i = j + 1;
continue;
}
else {
i = j;
continue;
}
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

bool renderer__is_escaped_quote(std__string__string expr, int32_t pos) {
int32_t backslash_count = 0;
int32_t j = pos - 1;
while (1) {
if (j < 0) {
break;
}
if (std__string__get_char ( expr , j ) != '\\') {
break;
}
backslash_count = backslash_count + 1;
j = j - 1;
}
return ( backslash_count % 2 ) == 1;
}

std__string__string renderer__replace_keyword_outside_strings(std__string__string expr, std__string__string keyword, std__string__string replacement) {
const int32_t expr_len = std__string__str_len( expr );
const int32_t kw_len = std__string__str_len( keyword );
if (expr_len == 0 || kw_len == 0) {
return expr;
}
std__string__StringBuilder sb = std__string__StringBuilder__init( (uintptr_t)( expr_len + 32 ) );
bool in_string = false;
bool in_char_literal = false;
int32_t i = 0;
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (in_string || in_char_literal) {
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
bool matches = true;
if (i + kw_len > expr_len) {
matches = false;
}
else {
int32_t ki = 0;
while (1) {
if (ki >= kw_len) {
break;
}
if (std__string__get_char ( expr , i + ki ) != std__string__get_char ( keyword , ki )) {
matches = false;
break;
}
ki = ki + 1;
}
}
if (matches) {
bool is_word = true;
if (i > 0) {
const char prev = std__string__get_char( expr , i - 1 );
const bool prev_is_alpha_lower = prev >= 'a' && prev <= 'z';
const bool prev_is_alpha_upper = prev >= 'A' && prev <= 'Z';
const bool prev_is_digit = prev >= '0' && prev <= '9';
const bool prev_is_underscore = prev == '_';
if (prev_is_alpha_lower || prev_is_alpha_upper || prev_is_digit || prev_is_underscore) {
is_word = false;
}
}
if (is_word && i + kw_len < expr_len) {
const char next = std__string__get_char( expr , i + kw_len );
const bool next_is_alpha_lower = next >= 'a' && next <= 'z';
const bool next_is_alpha_upper = next >= 'A' && next <= 'Z';
const bool next_is_digit = next >= '0' && next <= '9';
const bool next_is_underscore = next == '_';
if (next_is_alpha_lower || next_is_alpha_upper || next_is_digit || next_is_underscore) {
is_word = false;
}
}
if (is_word) {
if (i > 0) {
const char prev_ch = std__string__get_char( expr , i - 1 );
if (prev_ch != ' ') {
std__string__StringBuilder__append_char(&sb, ' ');
}
}
std__string__StringBuilder__append(&sb, replacement);
if (i + kw_len < expr_len) {
const char next_ch = std__string__get_char( expr , i + kw_len );
if (next_ch != ' ') {
std__string__StringBuilder__append_char(&sb, ' ');
}
}
i = i + kw_len;
continue;
}
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__replace_substr_outside_strings(std__string__string expr, std__string__string old_sub, std__string__string replacement) {
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
const int32_t old_len = (int32_t)( std__string__str_len ( old_sub ) );
if (expr_len == 0 || old_len == 0) {
return expr;
}
std__string__StringBuilder sb = std__string__StringBuilder__init( (uintptr_t)( expr_len + 32 ) );
bool in_string = false;
bool in_char_literal = false;
int32_t i = 0;
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (in_string || in_char_literal) {
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (i + old_len <= expr_len) {
const std__string__string candidate = std__string__substring_se( expr , i , i + old_len );
if (std__string__compare ( candidate , old_sub ) == 0) {
std__string__StringBuilder__append(&sb, replacement);
i = i + old_len;
continue;
}
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_pointer_member_accesses(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 64 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (! in_string && ! in_char_literal && renderer__is_ident_start ( ch )) {
const int32_t base_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j++;
}
const std__string__string base = std__string__substring_se( expr , base_start , j );
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k++;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '.') {
const int32_t start_slice = i;
int32_t p = k + 1;
while (1) {
if (p >= expr_len) {
break;
}
const char ws2 = std__string__get_char( expr , p );
if (ws2 != ' ' && ws2 != '\t' && ws2 != '\n') {
break;
}
p++;
}
const int32_t member_start = p;
int32_t m = p;
if (m < expr_len && renderer__is_ident_start ( std__string__get_char ( expr , m ) )) {
while (1) {
if (m >= expr_len) {
break;
}
const char cm = std__string__get_char( expr , m );
if (! renderer__is_token_char ( cm )) {
break;
}
m++;
}
}
const std__string__string member = std__string__substring_se( expr , member_start , m );
if (std__string__str_len ( member ) > 0) {
const std__string__string trimmed_base = std__string__strip( base );
bool is_pointer = false;
if (std__maps__StringStringMap__contains( &g_var_types , trimmed_base )) {
const std__string__string raw_type = std__maps__StringStringMap__get( &g_var_types , trimmed_base );
std__string__string t = std__string__strip( raw_type );
if (std__string__has_prefix ( t , std__string__str ( "mut " ) )) {
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
if (std__string__has_prefix ( t , std__string__str ( "ref " ) ) || std__string__has_suffix ( t , std__string__str ( "*" ) )) {
is_pointer = true;
}
}
if (is_pointer) {
std__string__StringBuilder__append(&sb, trimmed_base);
std__string__StringBuilder__append_c(&sb, "->");
std__string__StringBuilder__append(&sb, member);
i = m;
continue;
}
const std__string__string original = std__string__substring_se( expr , start_slice , m );
std__string__StringBuilder__append(&sb, original);
i = m;
continue;
}
}
std__string__StringBuilder__append(&sb, base);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

void renderer__register_function_prefix(std__string__string full_name) {
int32_t last_sep = - 1;
int32_t j = 0;
const int32_t n = std__string__str_len( full_name );
while (1) {
if (j + 1 >= n) {
break;
}
const char c1 = std__string__get_char( full_name , j );
const char c2 = std__string__get_char( full_name , j + 1 );
if (c1 == '_' && c2 == '_') {
last_sep = j;
}
j++;
}
if (last_sep >= 0 && last_sep + 2 < n) {
const std__string__string short_name = std__string__substring_se( full_name , last_sep + 2 , n );
if (std__string__str_len ( short_name ) > 0) {
if (! std__maps__StringStringMap__contains( &g_function_prefixes , short_name )) {
std__arena__Arena arena = std__arena__Arena__create( 1256 );
std__maps__StringStringMap__set(&g_function_prefixes, &arena, short_name, full_name);
}
}
int32_t second_last_sep = - 1;
int32_t k = 0;
while (1) {
if (k >= last_sep) {
break;
}
const char c1b = std__string__get_char( full_name , k );
const char c2b = std__string__get_char( full_name , k + 1 );
if (c1b == '_' && c2b == '_') {
second_last_sep = k;
}
k++;
}
if (second_last_sep >= 0 && second_last_sep + 2 < n) {
const std__string__string partial_name = std__string__substring_se( full_name , second_last_sep + 2 , n );
if (std__string__str_len ( partial_name ) > 0) {
if (! std__maps__StringStringMap__contains( &g_function_prefixes , partial_name )) {
std__arena__Arena arena2 = std__arena__Arena__create( 1256 );
std__maps__StringStringMap__set(&g_function_prefixes, &arena2, partial_name, full_name);
}
}
}
}
}

void renderer__collect_function_prefixes(structs__ASTNode* node) {
if (node == nil) {
return ;
}
if (std__string__equals_c ( node->node_type, "Function" )) {
renderer__register_function_prefix(node->data.function.name);
}
if (std__string__equals_c ( node->node_type, "Overload" )) {
renderer__register_function_prefix(node->data.overload_node.name);
}
if (node->children!= nil) {
const __list_structs__ASTNode_t* children = node->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
renderer__collect_function_prefixes(&(children->data[i]));
i++;
}
}
}

void renderer__build_function_prefixes(structs__ASTNode* ast) {
std__maps__StringStringMap__clear(&g_function_prefixes);
renderer__collect_function_prefixes(ast);
}

std__string__string renderer__map_type(std__string__string axe_type) {
if (std__maps__StringStringMap__contains( &g_type_mappings , axe_type )) {
return std__maps__StringStringMap__get( &g_type_mappings , axe_type );
}
return axe_type;
}

static inline std__string__string renderer__canonical_model_c_name(std__string__string name) {
if (std__maps__StringStringMap__contains( &g_model_names , name )) {
return std__maps__StringStringMap__get( &g_model_names , name );
}
return std__string__str( "" );
}

std__string__string renderer__map_axe_type_to_c(std__string__string axe_type) {
std__string__string result = axe_type;
if (std__string__has_prefix ( result , std__string__str ( "mut " ) )) {
result = std__string__strip ( std__string__substr ( result , 4 , std__string__str_len ( result ) - 4 ) );
return renderer__map_axe_type_to_c( result );
}
if (std__string__has_prefix ( result , std__string__str ( "list(" ) )) {
const int32_t close_paren = std__string__find_char_from( result , (char)( 41 ) , (uintptr_t)( 0 ) );
if (close_paren > 5) {
const std__string__string inner_type = std__string__strip( std__string__substring_se ( result , 5 , close_paren ) );
const std__string__string converted = std__string__concat( inner_type , std__string__str ( "[999]" ) );
return renderer__map_axe_type_to_c( converted );
}
}
if (std__string__has_suffix ( result , std__string__str ( "[999]" ) )) {
const std__string__string element_type = std__string__strip( std__string__substring_se ( result , 0 , std__string__str_len ( result ) - 5 ) );
if (std__string__has_prefix ( element_type , std__string__str ( "ref " ) )) {
const std__string__string base_elem = std__string__strip( std__string__substr ( element_type , 4 , std__string__str_len ( element_type ) - 4 ) );
const std__string__string mapped_elem = renderer__map_axe_type_to_c( base_elem );
renderer__add_list_element(mapped_elem);
std__string__StringBuilder sb_struct = std__string__StringBuilder__init( std__string__str_len ( mapped_elem ) + 10 );
std__string__StringBuilder__append_c(&sb_struct, "__list_");
std__string__StringBuilder__append(&sb_struct, mapped_elem);
std__string__StringBuilder__append_c(&sb_struct, "_t*");
const std__string__string struct_name = std__string__StringBuilder__to_string( &sb_struct );
std__string__StringBuilder__destroy(&sb_struct);
return struct_name;
}
else {
const std__string__string mapped_elem = renderer__map_axe_type_to_c( element_type );
renderer__add_list_element(mapped_elem);
std__string__StringBuilder sb_struct = std__string__StringBuilder__init( std__string__str_len ( mapped_elem ) + 10 );
std__string__StringBuilder__append_c(&sb_struct, "__list_");
std__string__StringBuilder__append(&sb_struct, mapped_elem);
std__string__StringBuilder__append_c(&sb_struct, "_t");
const std__string__string struct_name = std__string__StringBuilder__to_string( &sb_struct );
std__string__StringBuilder__destroy(&sb_struct);
return struct_name;
}
}
if (std__string__has_prefix ( result , std__string__str ( "ref " ) )) {
const std__string__string base_type = std__string__strip( std__string__substr ( result , 4 , std__string__str_len ( result ) - 4 ) );
const std__string__string mapped_base = renderer__map_axe_type_to_c( base_type );
return std__string__concat( mapped_base , std__string__str ( "*" ) );
}
if (std__string__has_suffix ( result , std__string__str ( "*" ) )) {
const std__string__string base_type = std__string__strip( std__string__substring_se ( result , 0 , std__string__str_len ( result ) - 1 ) );
const std__string__string mapped_base = renderer__map_axe_type_to_c( base_type );
return std__string__concat( mapped_base , std__string__str ( "*" ) );
}
const int32_t br_idx = std__string__find_char_from( result , '[' , (uintptr_t)( 0 ) );
if (br_idx >= 0 && std__string__find_char_from ( result , ']' , (uintptr_t)( br_idx ) ) >= 0) {
const std__string__string base_raw = std__string__strip( std__string__substring_se ( result , 0 , br_idx ) );
const std__string__string suffix = std__string__substring_se( result , br_idx , (int32_t)( std__string__str_len ( result ) ) );
if (std__string__str_len ( base_raw ) > 0) {
const std__string__string mapped_base2 = renderer__map_axe_type_to_c( base_raw );
return std__string__concat( mapped_base2 , suffix );
}
}
if (std__maps__StringStringMap__contains( &g_type_mappings , result )) {
return std__maps__StringStringMap__get( &g_type_mappings , result );
}
if (std__maps__StringStringMap__contains( &g_model_names , result )) {
return std__maps__StringStringMap__get( &g_model_names , result );
}
return result;
}

std__string__string renderer__sanitize_list_element_name(std__string__string c_elem) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( c_elem ) + 32 );
int32_t i = 0;
const int32_t n_len = (int32_t)( std__string__str_len ( c_elem ) );
while (1) {
if (i >= n_len) {
break;
}
const char ch = std__string__get_char( c_elem , i );
if (ch == '*') {
std__string__StringBuilder__append_c(&sb, "_ptr");
}
else if (ch == ' ') {
std__string__StringBuilder__append_c(&sb, "_");
}
else {
std__string__StringBuilder__append_char(&sb, ch);
}
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__collapse_duplicate_segments(std__string__string s) {
std__string__string current = s;
while (1) {
const std__string__string next = renderer__collapse_duplicate_segments_once( current );
if (std__string__compare ( next , current ) == 0) {
return current;
}
current = next;
}
}

bool renderer__is_pointer_type(std__string__string type_str) {
std__string__string t = std__string__strip( type_str );
if (std__string__has_prefix ( t , std__string__str ( "mut " ) )) {
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
if (std__string__has_prefix ( t , std__string__str ( "ref " ) ) || std__string__has_suffix ( t , std__string__str ( "*" ) )) {
return true;
}
return false;
}

std__string__string renderer__extract_base_model_name(std__string__string type_str) {
std__string__string t = std__string__strip( type_str );
if (std__string__has_prefix ( t , std__string__str ( "mut " ) )) {
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
if (std__string__has_prefix ( t , std__string__str ( "ref " ) )) {
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
while (1) {
if (std__string__str_len ( t ) == 0) {
break;
}
if (std__string__get_char ( t , std__string__str_len ( t ) - 1 ) != '*') {
break;
}
t = std__string__strip ( std__string__substr ( t , 0 , std__string__str_len ( t ) - 1 ) );
}
return t;
}

std__string__string renderer__lookup_field_type(std__string__string model_name, std__string__string field_name) {
std__string__StringBuilder sb_key = std__string__StringBuilder__init( std__string__str_len ( model_name ) + std__string__str_len ( field_name ) + 1 );
std__string__StringBuilder__append(&sb_key, model_name);
std__string__StringBuilder__append_c(&sb_key, ".");
std__string__StringBuilder__append(&sb_key, field_name);
const std__string__string field_key = std__string__StringBuilder__to_string( &sb_key );
std__string__StringBuilder__destroy(&sb_key);
if (std__maps__StringStringMap__contains( &g_field_types , field_key )) {
return std__maps__StringStringMap__get( &g_field_types , field_key );
}
if (std__maps__StringStringMap__contains( &g_model_names , model_name )) {
const std__string__string canonical_name = std__maps__StringStringMap__get( &g_model_names , model_name );
std__string__StringBuilder sb_canon = std__string__StringBuilder__init( std__string__str_len ( canonical_name ) + std__string__str_len ( field_name ) + 1 );
std__string__StringBuilder__append(&sb_canon, canonical_name);
std__string__StringBuilder__append_c(&sb_canon, ".");
std__string__StringBuilder__append(&sb_canon, field_name);
const std__string__string canon_key = std__string__StringBuilder__to_string( &sb_canon );
std__string__StringBuilder__destroy(&sb_canon);
if (std__maps__StringStringMap__contains( &g_field_types , canon_key )) {
return std__maps__StringStringMap__get( &g_field_types , canon_key );
}
}
if (std__string__has_prefix ( model_name , std__string__str ( "list(" ) ) || std__string__has_prefix ( model_name , std__string__str ( "__list_" ) )) {
if (std__string__equals_c ( field_name , "data" )) {
return std__string__str( "ref void" );
}
}
return std__string__str( "" );
}

bool renderer__is_pointer_field(std__string__string model_name, std__string__string field_name) {
std__string__StringBuilder sb_fkey = std__string__StringBuilder__init( std__string__str_len ( model_name ) + std__string__str_len ( field_name ) + 1 );
std__string__StringBuilder__append(&sb_fkey, model_name);
std__string__StringBuilder__append_c(&sb_fkey, ".");
std__string__StringBuilder__append(&sb_fkey, field_name);
const std__string__string field_key = std__string__StringBuilder__to_string( &sb_fkey );
std__string__StringBuilder__destroy(&sb_fkey);
if (std__maps__StringBoolMap__contains( &g_pointer_fields , field_key )) {
return true;
}
if (std__maps__StringStringMap__contains( &g_model_names , model_name )) {
const std__string__string canonical_name = std__maps__StringStringMap__get( &g_model_names , model_name );
std__string__StringBuilder sb_ckey = std__string__StringBuilder__init( std__string__str_len ( canonical_name ) + std__string__str_len ( field_name ) + 1 );
std__string__StringBuilder__append(&sb_ckey, canonical_name);
std__string__StringBuilder__append_c(&sb_ckey, ".");
std__string__StringBuilder__append(&sb_ckey, field_name);
const std__string__string canon_key = std__string__StringBuilder__to_string( &sb_ckey );
std__string__StringBuilder__destroy(&sb_ckey);
if (std__maps__StringBoolMap__contains( &g_pointer_fields , canon_key )) {
return true;
}
}
if (std__string__has_prefix ( model_name , std__string__str ( "list(" ) ) || std__string__has_prefix ( model_name , std__string__str ( "__list_" ) )) {
if (std__string__equals_c ( field_name , "data" )) {
return true;
}
}
return false;
}

std__string__string renderer__parse_ident_at(std__string__string expr, int32_t* pos) {
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
if ((*pos) >= expr_len) {
return std__string__str( "" );
}
const char ch = std__string__get_char( expr , (*pos) );
if (! renderer__is_ident_start ( ch )) {
return std__string__str( "" );
}
const int32_t start = (*pos);
while (1) {
if ((*pos) >= expr_len) {
break;
}
const char c = std__string__get_char( expr , (*pos) );
if (! renderer__is_token_char ( c )) {
break;
}
(*pos) = (*pos) + 1;
}
return std__string__substring_se( expr , start , (*pos) );
}

void renderer__skip_ws_at(std__string__string expr, int32_t* pos) {
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if ((*pos) >= expr_len) {
break;
}
const char c = std__string__get_char( expr , (*pos) );
if (c != ' ' && c != '\t' && c != '\n') {
break;
}
(*pos) = (*pos) + 1;
}
}

std__string__string renderer__rewrite_ref_member_access(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 64 );
int32_t pos = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (pos >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , pos );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , pos )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
pos = pos + 1;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , pos )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
pos = pos + 1;
continue;
}
if (in_string || in_char_literal) {
std__string__StringBuilder__append_char(&sb, ch);
pos = pos + 1;
continue;
}
if (renderer__is_ident_start ( ch )) {
const std__string__string ident = renderer__parse_ident_at( expr , &pos );
int32_t lookahead = pos;
renderer__skip_ws_at(expr, &lookahead);
bool is_member_chain = false;
if (lookahead < expr_len && std__string__get_char ( expr , lookahead ) == '.') {
if (lookahead + 1 < expr_len && std__string__get_char ( expr , lookahead + 1 ) != '>') {
is_member_chain = true;
}
}
else if (lookahead + 1 < expr_len && std__string__get_char ( expr , lookahead ) == '-' && std__string__get_char ( expr , lookahead + 1 ) == '>') {
is_member_chain = true;
}
if (is_member_chain) {
std__string__string chain = ident;
bool is_pointer = false;
std__string__string current_type = std__string__str( "" );
if (std__maps__StringStringMap__contains( &g_var_types , ident )) {
current_type = std__maps__StringStringMap__get( &g_var_types , ident );
if (renderer__is_pointer_type ( current_type )) {
is_pointer = true;
}
}
std__string__string base_model_name = renderer__extract_base_model_name( current_type );
pos = lookahead;
while (1) {
if (pos >= expr_len) {
break;
}
renderer__skip_ws_at(expr, &pos);
if (pos >= expr_len) {
break;
}
bool has_dot = false;
bool has_arrow = false;
if (std__string__get_char ( expr , pos ) == '.') {
if (pos + 1 < expr_len && std__string__get_char ( expr , pos + 1 ) == '>') {
break;
}
has_dot = true;
}
else if (pos + 1 < expr_len && std__string__get_char ( expr , pos ) == '-' && std__string__get_char ( expr , pos + 1 ) == '>') {
has_arrow = true;
}
if (! has_dot && ! has_arrow) {
break;
}
if (has_arrow) {
pos = pos + 2;
}
else {
pos = pos + 1;
}
renderer__skip_ws_at(expr, &pos);
const std__string__string field_name = renderer__parse_ident_at( expr , &pos );
if (std__string__str_len ( field_name ) == 0) {
if (has_arrow) {
chain = std__string__concat ( chain , std__string__str ( "->" ) );
}
else if (is_pointer) {
chain = std__string__concat ( chain , std__string__str ( "->" ) );
}
else {
chain = std__string__concat ( chain , std__string__str ( "." ) );
}
break;
}
std__string__string array_suffix = std__string__str( "" );
renderer__skip_ws_at(expr, &pos);
if (pos < expr_len && std__string__get_char ( expr , pos ) == '[') {
const int32_t bracket_start = pos;
pos = pos + 1;
int32_t depth = 1;
while (1) {
if (pos >= expr_len || depth == 0) {
break;
}
const char bc = std__string__get_char( expr , pos );
if (bc == '[') {
depth = depth + 1;
}
else if (bc == ']') {
depth = depth - 1;
}
pos = pos + 1;
}
const std__string__string bracket_content = std__string__substring_se( expr , bracket_start + 1 , pos - 1 );
const std__string__string processed_bracket = renderer__rewrite_ref_member_access( bracket_content );
array_suffix = std__string__concat ( std__string__str ( "[" ) , processed_bracket );
array_suffix = std__string__concat ( array_suffix , std__string__str ( "]" ) );
}
std__string__string op = std__string__str( "." );
if (has_arrow) {
op = std__string__str ( "->" );
}
else if (is_pointer) {
op = std__string__str ( "->" );
}
chain = std__string__concat ( chain , op );
chain = std__string__concat ( chain , field_name );
chain = std__string__concat ( chain , array_suffix );
const bool had_array_access = std__string__str_len( array_suffix ) > 0;
if (had_array_access) {
is_pointer = false;
}
if (std__string__str_len ( base_model_name ) > 0) {
const std__string__string field_type = renderer__lookup_field_type( base_model_name , field_name );
if (std__string__str_len ( field_type ) > 0) {
if (renderer__is_pointer_type ( field_type )) {
if (! had_array_access) {
is_pointer = true;
}
}
else {
is_pointer = false;
}
base_model_name = renderer__extract_base_model_name ( field_type );
}
else if (renderer__is_pointer_field ( base_model_name , field_name )) {
if (! had_array_access) {
is_pointer = true;
}
base_model_name = std__string__str ( "" );
}
else {
if (! had_array_access) {
if (std__string__equals_c ( field_name , "keys" ) || std__string__equals_c ( field_name , "values" ) || std__string__equals_c ( field_name , "data" ) || std__string__equals_c ( field_name , "items" ) || std__string__equals_c ( field_name , "elements" ) || std__string__equals_c ( field_name , "children" ) || std__string__equals_c ( field_name , "params" ) || std__string__equals_c ( field_name , "body" )) {
is_pointer = true;
}
else {
is_pointer = false;
}
}
base_model_name = std__string__str ( "" );
}
}
else if (! had_array_access) {
if (std__string__equals_c ( field_name , "keys" ) || std__string__equals_c ( field_name , "values" ) || std__string__equals_c ( field_name , "data" ) || std__string__equals_c ( field_name , "items" ) || std__string__equals_c ( field_name , "elements" ) || std__string__equals_c ( field_name , "children" ) || std__string__equals_c ( field_name , "params" ) || std__string__equals_c ( field_name , "body" )) {
is_pointer = true;
}
else {
is_pointer = false;
}
}
}
std__string__StringBuilder__append(&sb, chain);
continue;
}
std__string__StringBuilder__append(&sb, ident);
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
pos = pos + 1;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__sanitize_c_identifier(std__string__string name) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( name ) + 16 );
int32_t i = 0;
const int32_t len = std__string__str_len( name );
while (1) {
if (i >= len) {
break;
}
const char ch = std__string__get_char( name , i );
if (( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) || ( ch >= '0' && ch <= '9' ) || ch == '_') {
std__string__StringBuilder__append_char(&sb, ch);
}
else {
std__string__StringBuilder__append_char(&sb, '_');
}
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_generic_calls(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 128 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (in_string || in_char_literal) {
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (renderer__is_ident_start ( ch )) {
const int32_t ident_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j = j + 1;
}
const std__string__string ident = std__string__substring_se( expr , ident_start , j );
if (std__string__equals_c ( ident , "cast" )) {
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k = k + 1;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '[') {
k = k + 1;
const int32_t type_start = k;
int32_t bracket_depth = 1;
while (1) {
if (k >= expr_len || bracket_depth == 0) {
break;
}
const char tc = std__string__get_char( expr , k );
if (tc == '[') {
bracket_depth = bracket_depth + 1;
}
else if (tc == ']') {
bracket_depth = bracket_depth - 1;
}
if (bracket_depth > 0) {
k = k + 1;
}
}
const int32_t type_end = k;
const std__string__string type_arg = std__string__strip( std__string__substring_se ( expr , type_start , type_end ) );
if (k < expr_len && std__string__get_char ( expr , k ) == ']') {
k = k + 1;
while (1) {
if (k >= expr_len) {
break;
}
const char ws2 = std__string__get_char( expr , k );
if (ws2 != ' ' && ws2 != '\t' && ws2 != '\n') {
break;
}
k = k + 1;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '(') {
std__string__string base_ident = ident;
if (std__maps__StringStringMap__contains( &g_function_prefixes , ident )) {
base_ident = std__maps__StringStringMap__get( &g_function_prefixes , ident );
}
std__string__StringBuilder__append(&sb, base_ident);
std__string__StringBuilder__append_c(&sb, "__T_");
std__string__StringBuilder__append(&sb, renderer__sanitize_c_identifier(type_arg));
i = k;
continue;
}
}
}
if (k < expr_len && std__string__get_char ( expr , k ) == '.') {
int32_t m = k + 1;
while (1) {
if (m >= expr_len) {
break;
}
const char wc = std__string__get_char( expr , m );
if (wc != ' ' && wc != '\t' && wc != '\n') {
break;
}
m++;
}
if (m < expr_len && renderer__is_ident_start ( std__string__get_char ( expr , m ) )) {
const int32_t method_start = m;
while (1) {
if (m >= expr_len) {
break;
}
const char mc = std__string__get_char( expr , m );
if (! renderer__is_token_char ( mc )) {
break;
}
m++;
}
const std__string__string method_name = std__string__substring_se( expr , method_start , m );
while (1) {
if (m >= expr_len) {
break;
}
const char wc2 = std__string__get_char( expr , m );
if (wc2 != ' ' && wc2 != '\t' && wc2 != '\n') {
break;
}
m++;
}
if (m < expr_len && std__string__get_char ( expr , m ) == '[') {
m++;
const int32_t type_start2 = m;
int32_t bd2 = 1;
while (1) {
if (m >= expr_len || bd2 == 0) {
break;
}
const char tc2 = std__string__get_char( expr , m );
if (tc2 == '[') {
bd2++;
}
else if (tc2 == ']') {
bd2--;
}
if (bd2 > 0) {
m++;
}
}
const std__string__string type_arg2 = std__string__strip( std__string__substring_se ( expr , type_start2 , m ) );
if (m < expr_len && std__string__get_char ( expr , m ) == ']') {
m++;
while (1) {
if (m >= expr_len) {
break;
}
const char wc3 = std__string__get_char( expr , m );
if (wc3 != ' ' && wc3 != '\t' && wc3 != '\n') {
break;
}
m++;
}
if (m < expr_len && std__string__get_char ( expr , m ) == '(') {
std__string__StringBuilder__append(&sb, ident);
std__string__StringBuilder__append_c(&sb, "__");
std__string__StringBuilder__append(&sb, method_name);
std__string__StringBuilder__append_c(&sb, "__T_");
std__string__StringBuilder__append(&sb, renderer__sanitize_c_identifier(type_arg2));
i = m;
continue;
}
}
}
else if (m < expr_len && std__string__get_char ( expr , m ) == '(') {
std__string__StringBuilder sb_full_name = std__string__StringBuilder__init( std__string__str_len ( ident ) + std__string__str_len ( method_name ) + 2 );
std__string__StringBuilder__append(&sb_full_name, ident);
std__string__StringBuilder__append_c(&sb_full_name, "__");
std__string__StringBuilder__append(&sb_full_name, method_name);
const std__string__string full_name = std__string__StringBuilder__to_string( &sb_full_name );
std__string__StringBuilder__destroy(&sb_full_name);
if (std__maps__StringBoolMap__contains( &g_generic_functions , full_name )) {
int32_t arg_start2 = m + 1;
while (1) {
if (arg_start2 >= expr_len) {
break;
}
const char wc4 = std__string__get_char( expr , arg_start2 );
if (wc4 != ' ' && wc4 != '\t' && wc4 != '\n') {
break;
}
arg_start2++;
}
std__string__string inferred_type2 = std__string__str( "" );
if (arg_start2 < expr_len) {
const char first_ch2 = std__string__get_char( expr , arg_start2 );
if (first_ch2 == '"') {
inferred_type2 = std__string__str ( "ref char" );
}
else if (first_ch2 == '-' || ( first_ch2 >= '0' && first_ch2 <= '9' )) {
bool has_decimal2 = false;
int32_t scan_pos2 = arg_start2;
while (1) {
if (scan_pos2 >= expr_len) {
break;
}
const char sc2 = std__string__get_char( expr , scan_pos2 );
if (sc2 == '.') {
has_decimal2 = true;
break;
}
if (sc2 == ',' || sc2 == ')' || sc2 == ' ' || sc2 == '\t') {
break;
}
scan_pos2++;
}
if (has_decimal2) {
inferred_type2 = std__string__str ( "f32" );
}
else {
inferred_type2 = std__string__str ( "i32" );
}
}
else if (renderer__is_ident_start ( first_ch2 )) {
int32_t var_end2 = arg_start2;
while (1) {
if (var_end2 >= expr_len) {
break;
}
const char vc2 = std__string__get_char( expr , var_end2 );
if (! renderer__is_token_char ( vc2 )) {
break;
}
var_end2++;
}
const std__string__string arg_var_name2 = std__string__substring_se( expr , arg_start2 , var_end2 );
if (std__maps__StringStringMap__contains( &g_var_types , arg_var_name2 )) {
inferred_type2 = std__maps__StringStringMap__get( &g_var_types , arg_var_name2 );
}
}
}
if (std__string__str_len ( inferred_type2 ) > 0) {
std__string__StringBuilder__append(&sb, full_name);
std__string__StringBuilder__append_c(&sb, "__T_");
std__string__StringBuilder__append(&sb, renderer__sanitize_c_identifier(inferred_type2));
i = m;
continue;
}
}
}
if (m < expr_len && std__string__get_char ( expr , m ) == '(') {
if (std__maps__StringStringMap__contains( &g_model_names , ident ) || imports__is_symbol_imported ( ident )) {
std__string__StringBuilder sb_check = std__string__StringBuilder__init( std__string__str_len ( ident ) + std__string__str_len ( method_name ) + 2 );
std__string__StringBuilder__append(&sb_check, ident);
std__string__StringBuilder__append_c(&sb_check, ".");
std__string__StringBuilder__append(&sb_check, method_name);
const std__string__string check_name = std__string__StringBuilder__to_string( &sb_check );
std__string__StringBuilder__destroy(&sb_check);
if (std__maps__StringStringMap__contains( &g_function_param_types , check_name )) {
const int32_t vm_start = m;
int32_t vm_paren_depth = 0;
bool vm_in_str = false;
bool vm_in_char = false;
int32_t vm_end = - 1;
int32_t vmi = vm_start;
while (1) {
if (vmi >= expr_len) {
break;
}
const char vc = std__string__get_char( expr , vmi );
if (vc == '"' && ! vm_in_char && ! renderer__is_escaped_quote ( expr , vmi )) {
vm_in_str = ! vm_in_str;
}
else if (vc == '\'' && ! vm_in_str && ! renderer__is_escaped_quote ( expr , vmi )) {
vm_in_char = ! vm_in_char;
}
else if (! vm_in_str && ! vm_in_char) {
if (vc == '(') {
vm_paren_depth = vm_paren_depth + 1;
}
else if (vc == ')') {
vm_paren_depth = vm_paren_depth - 1;
if (vm_paren_depth == 0) {
vm_end = vmi;
break;
}
}
}
vmi++;
}
if (vm_end > vm_start + 1) {
const std__string__string vm_args = std__string__strip( std__string__substring_se ( expr , vm_start + 1 , vm_end ) );
renderer__validate_function_call(check_name, vm_args, 0);
}
else if (vm_end > vm_start) {
renderer__validate_function_call(check_name, std__string__str(""), 0);
}
}
}
}
}
}
if (k < expr_len && std__string__get_char ( expr , k ) == '(') {
bool is_generic_match = std__maps__StringBoolMap__contains( &g_generic_functions , ident );
if (! is_generic_match) {
int32_t last_sep = - 1;
int32_t ji = 0;
const int32_t ilen = std__string__str_len( ident );
while (1) {
if (ji + 1 >= ilen) {
break;
}
const char c1 = std__string__get_char( ident , ji );
const char c2 = std__string__get_char( ident , ji + 1 );
if (c1 == '_' && c2 == '_') {
last_sep = ji;
}
ji++;
}
if (last_sep > 0) {
const std__string__string suffix = std__string__substring_se( ident , last_sep + 2 , ilen );
if (std__maps__StringBoolMap__contains( &g_generic_functions , suffix )) {
is_generic_match = true;
}
}
if (! is_generic_match) {
bool is_method_part = false;
int32_t back_scan = ident_start - 1;
while (1) {
if (back_scan < 0) {
break;
}
const char bc = std__string__get_char( expr , back_scan );
if (bc != ' ' && bc != '\t' && bc != '\n') {
if (bc == '.' || ( bc == '>' && back_scan > 0 && std__string__get_char ( expr , back_scan - 1 ) == '-' )) {
is_method_part = true;
}
break;
}
back_scan--;
}
if (! is_method_part && ( std__maps__StringStringMap__contains( &g_function_param_types , ident ) || std__maps__StringStringMap__contains( &g_function_prefixes , ident ) )) {
const int32_t v_start = k;
int32_t v_paren_depth = 0;
bool v_in_str = false;
bool v_in_char = false;
int32_t v_end = - 1;
int32_t vi = v_start;
while (1) {
if (vi >= expr_len) {
break;
}
const char vc = std__string__get_char( expr , vi );
if (vc == '"' && ! v_in_char && ! renderer__is_escaped_quote ( expr , vi )) {
v_in_str = ! v_in_str;
}
else if (vc == '\'' && ! v_in_str && ! renderer__is_escaped_quote ( expr , vi )) {
v_in_char = ! v_in_char;
}
else if (! v_in_str && ! v_in_char) {
if (vc == '(') {
v_paren_depth = v_paren_depth + 1;
}
else if (vc == ')') {
v_paren_depth = v_paren_depth - 1;
if (v_paren_depth == 0) {
v_end = vi;
break;
}
}
}
vi = vi + 1;
}
if (v_end > v_start + 1) {
const std__string__string v_args = std__string__strip( std__string__substring_se ( expr , v_start + 1 , v_end ) );
renderer__validate_function_call(ident, v_args, 0);
}
else if (v_end > v_start) {
renderer__validate_function_call(ident, std__string__str(""), 0);
}
}
}
}
if (is_generic_match) {
int32_t arg_start = k + 1;
while (1) {
if (arg_start >= expr_len) {
break;
}
const char wc = std__string__get_char( expr , arg_start );
if (wc != ' ' && wc != '\t' && wc != '\n') {
break;
}
arg_start++;
}
std__string__string inferred_type = std__string__str( "" );
if (arg_start < expr_len) {
const char first_ch = std__string__get_char( expr , arg_start );
if (first_ch == '"') {
inferred_type = std__string__str ( "ref char" );
}
else if (first_ch == '-' || ( first_ch >= '0' && first_ch <= '9' )) {
bool has_decimal = false;
int32_t scan_pos = arg_start;
while (1) {
if (scan_pos >= expr_len) {
break;
}
const char sc = std__string__get_char( expr , scan_pos );
if (sc == '.') {
has_decimal = true;
break;
}
if (sc == ',' || sc == ')' || sc == ' ' || sc == '\t') {
break;
}
scan_pos++;
}
if (has_decimal) {
inferred_type = std__string__str ( "f32" );
}
else {
inferred_type = std__string__str ( "i32" );
}
}
else if (renderer__is_ident_start ( first_ch )) {
int32_t var_end = arg_start;
while (1) {
if (var_end >= expr_len) {
break;
}
const char vc = std__string__get_char( expr , var_end );
if (! renderer__is_token_char ( vc )) {
break;
}
var_end++;
}
const std__string__string arg_var_name = std__string__substring_se( expr , arg_start , var_end );
if (std__maps__StringStringMap__contains( &g_var_types , arg_var_name )) {
inferred_type = std__maps__StringStringMap__get( &g_var_types , arg_var_name );
}
}
}
if (std__string__str_len ( inferred_type ) > 0) {
std__string__string base_ident2 = ident;
if (std__maps__StringStringMap__contains( &g_function_prefixes , ident )) {
base_ident2 = std__maps__StringStringMap__get( &g_function_prefixes , ident );
}
std__string__StringBuilder__append(&sb, base_ident2);
std__string__StringBuilder__append_c(&sb, "__T_");
std__string__StringBuilder__append(&sb, renderer__sanitize_c_identifier(inferred_type));
i = k;
continue;
}
}
}
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_method_calls(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 128 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (! in_string && ! in_char_literal && renderer__is_ident_start ( ch )) {
const int32_t base_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j = j + 1;
}
const std__string__string base = std__string__substring_se( expr , base_start , j );
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k = k + 1;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '.') {
k = k + 1;
while (1) {
if (k >= expr_len) {
break;
}
const char ws2 = std__string__get_char( expr , k );
if (ws2 != ' ' && ws2 != '\t' && ws2 != '\n') {
break;
}
k = k + 1;
}
const int32_t method_start = k;
int32_t m = k;
if (m < expr_len && renderer__is_ident_start ( std__string__get_char ( expr , m ) )) {
while (1) {
if (m >= expr_len) {
break;
}
const char cm = std__string__get_char( expr , m );
if (! renderer__is_token_char ( cm )) {
break;
}
m = m + 1;
}
}
const std__string__string method = std__string__substring_se( expr , method_start , m );
int32_t p = m;
while (1) {
if (p >= expr_len) {
break;
}
const char ws3 = std__string__get_char( expr , p );
if (ws3 != ' ' && ws3 != '\t' && ws3 != '\n') {
break;
}
p = p + 1;
}
if (std__string__str_len ( method ) > 0 && p < expr_len && std__string__get_char ( expr , p ) == '(') {
std__string__string fixed_method = method;
int32_t inner_sep = - 1;
int32_t mi = 0;
const int32_t mlen = (int32_t)( std__string__str_len ( method ) );
while (1) {
if (mi + 1 >= mlen) {
break;
}
const char mc1 = std__string__get_char( method , mi );
const char mc2 = std__string__get_char( method , mi + 1 );
if (mc1 == '_' && mc2 == '_') {
inner_sep = mi;
break;
}
mi++;
}
if (inner_sep > 0) {
const std__string__string inner_model = std__string__substring_se( method , 0 , inner_sep );
std__string__string base_tail = base;
int32_t bsep = - 1;
int32_t bi = 0;
const int32_t blen = (int32_t)( std__string__str_len ( base ) );
while (1) {
if (bi + 1 >= blen) {
break;
}
const char bc1 = std__string__get_char( base , bi );
const char bc2 = std__string__get_char( base , bi + 1 );
if (bc1 == '_' && bc2 == '_') {
bsep = bi;
}
bi = bi + 1;
}
if (bsep >= 0 && bsep + 2 < blen) {
base_tail = std__string__substring_se ( base , bsep + 2 , blen );
}
if (std__string__compare ( inner_model , base ) == 0 || std__string__compare ( inner_model , base_tail ) == 0) {
fixed_method = std__string__substring_se ( method , inner_sep + 2 , mlen );
}
}
const std__string__string canon = renderer__canonical_model_c_name( base );
std__string__string full_name = std__string__str( "" );
if (std__string__str_len ( canon ) > 0) {
full_name = canon;
}
else {
full_name = base;
}
full_name = std__string__concat ( full_name , std__string__str ( "__" ) );
full_name = std__string__concat ( full_name , fixed_method );
std__string__StringBuilder__append(&sb, full_name);
i = m;
continue;
}
}
std__string__StringBuilder__append(&sb, base);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_function_prefixes(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 128 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
const bool is_start = renderer__is_ident_start( ch );
if (! in_string && ! in_char_literal && is_start) {
const int32_t func_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j++;
}
const std__string__string func_name = std__string__substring_se( expr , func_start , j );
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k++;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '(') {
const bool has_double_underscore = std__string__find_substr( func_name , std__string__str ( "__" ) ) >= 0;
if (has_double_underscore) {
std__string__StringBuilder__append(&sb, func_name);
i = j;
continue;
}
if (std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
const std__string__string full_name = std__maps__StringStringMap__get( &g_function_prefixes , func_name );
std__string__StringBuilder__append(&sb, full_name);
i = j;
continue;
}
}
std__string__StringBuilder__append(&sb, func_name);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_sizeof_types(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 64 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (! in_string && ! in_char_literal && renderer__is_ident_start ( ch )) {
const int32_t ident_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j++;
}
const std__string__string ident = std__string__substring_se( expr , ident_start , j );
bool is_sizeof = false;
if (std__string__str_len ( ident ) == 6 && std__string__get_char ( ident , 0 ) == 's' && std__string__get_char ( ident , 1 ) == 'i' && std__string__get_char ( ident , 2 ) == 'z' && std__string__get_char ( ident , 3 ) == 'e' && std__string__get_char ( ident , 4 ) == 'o' && std__string__get_char ( ident , 5 ) == 'f') {
is_sizeof = true;
}
else if (std__string__str_len ( ident ) == 9 && std__string__get_char ( ident , 0 ) == 'C' && std__string__get_char ( ident , 1 ) == '_' && std__string__get_char ( ident , 2 ) == '_' && std__string__get_char ( ident , 3 ) == 's' && std__string__get_char ( ident , 4 ) == 'i' && std__string__get_char ( ident , 5 ) == 'z' && std__string__get_char ( ident , 6 ) == 'e' && std__string__get_char ( ident , 7 ) == 'o' && std__string__get_char ( ident , 8 ) == 'f') {
is_sizeof = true;
}
if (is_sizeof) {
std__string__StringBuilder__append_c(&sb, "sizeof");
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k++;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '(') {
std__string__StringBuilder__append_char(&sb, '(');
k++;
int32_t start_type = k;
while (1) {
if (start_type >= expr_len) {
break;
}
const char ws2 = std__string__get_char( expr , start_type );
if (ws2 != ' ' && ws2 != '\t' && ws2 != '\n') {
break;
}
start_type = start_type + 1;
}
int32_t end_type = start_type;
int32_t paren_depth = 0;
while (1) {
if (end_type >= expr_len) {
break;
}
const char ct = std__string__get_char( expr , end_type );
if (ct == '(') {
paren_depth = paren_depth + 1;
}
else if (ct == (char)( 41 )) {
if (paren_depth == 0) {
break;
}
paren_depth--;
}
end_type++;
}
if (end_type <= expr_len) {
const std__string__string raw_type = std__string__strip( std__string__substring_se ( expr , start_type , end_type ) );
if (std__string__str_len ( raw_type ) > 0) {
std__string__string normalized_type = std__string__replace_all( raw_type , std__string__str ( "( " ) , std__string__str ( "(" ) );
normalized_type = std__string__replace_all ( normalized_type , std__string__str ( " )" ) , std__string__str ( ")" ) );
normalized_type = std__string__replace_all ( normalized_type , std__string__str ( " (" ) , std__string__str ( "(" ) );
normalized_type = std__string__replace_all ( normalized_type , std__string__str ( ") " ) , std__string__str ( ")" ) );
const std__string__string mapped = renderer__map_axe_type_to_c( normalized_type );
std__string__StringBuilder__append(&sb, mapped);
}
if (end_type < expr_len && std__string__get_char ( expr , end_type ) == ')') {
std__string__StringBuilder__append_c(&sb, ")");
end_type = end_type + 1;
}
i = end_type;
continue;
}
}
i = j;
continue;
}
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_casts(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 64 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (! in_string && ! in_char_literal && renderer__is_ident_start ( ch )) {
const int32_t ident_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j = j + 1;
}
const std__string__string ident = std__string__substring_se( expr , ident_start , j );
if (std__string__str_len ( ident ) == 4 && std__string__get_char ( ident , 0 ) == 'c' && std__string__get_char ( ident , 1 ) == 'a' && std__string__get_char ( ident , 2 ) == 's' && std__string__get_char ( ident , 3 ) == 't') {
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k = k + 1;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '[') {
const int32_t t_start = k + 1;
int32_t t_end = - 1;
bool in_str_type = false;
int32_t p = t_start;
while (1) {
if (p >= expr_len) {
break;
}
const char ct = std__string__get_char( expr , p );
if (ct == '"' && ! renderer__is_escaped_quote ( expr , p )) {
in_str_type = ! in_str_type;
}
if (! in_str_type && ct == ']') {
t_end = p;
break;
}
p = p + 1;
}
if (t_end > t_start) {
const std__string__string type_raw = std__string__strip( std__string__substring_se ( expr , t_start , t_end ) );
int32_t a = t_end + 1;
while (1) {
if (a >= expr_len) {
break;
}
const char wa = std__string__get_char( expr , a );
if (wa != ' ' && wa != '\t' && wa != '\n') {
break;
}
a = a + 1;
}
if (a < expr_len && std__string__get_char ( expr , a ) == '(') {
int32_t depth = 0;
bool in_str_paren = false;
int32_t q = a;
int32_t end_paren = - 1;
while (1) {
if (q >= expr_len) {
break;
}
const char cp = std__string__get_char( expr , q );
if (cp == '"' && ! renderer__is_escaped_quote ( expr , q )) {
in_str_paren = ! in_str_paren;
}
if (! in_str_paren) {
if (cp == '(') {
depth = depth + 1;
}
else if (cp == (char)( 41 )) {
depth = depth - 1;
if (depth == 0) {
end_paren = q;
break;
}
}
}
q++;
}
if (end_paren >= 0) {
std__string__string normalized_type = std__string__replace_all( type_raw , std__string__str ( "( " ) , std__string__str ( "(" ) );
normalized_type = std__string__replace_all ( normalized_type , std__string__str ( " )" ) , std__string__str ( ")" ) );
normalized_type = std__string__replace_all ( normalized_type , std__string__str ( " (" ) , std__string__str ( "(" ) );
normalized_type = std__string__replace_all ( normalized_type , std__string__str ( ") " ) , std__string__str ( ")" ) );
const std__string__string mapped_type = renderer__map_axe_type_to_c( normalized_type );
std__string__StringBuilder__append_char(&sb, '(');
std__string__StringBuilder__append(&sb, mapped_type);
std__string__StringBuilder__append_char(&sb, (char)(41));
const std__string__string inner_expr_str = std__string__substring_se( expr , a + 1 , end_paren );
const std__string__string rewritten_inner = renderer__rewrite_casts( inner_expr_str );
const std__string__string inner_full = std__string__concat( std__string__str ( "(" ) , std__string__concat ( rewritten_inner , std__string__str ( ")" ) ) );
std__string__StringBuilder__append(&sb, inner_full);
i = end_paren + 1;
continue;
}
}
}
}
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_array_literals(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 64 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (! in_string && ! in_char_literal && ch == '[') {
const int32_t type_start = i + 1;
int32_t type_end = - 1;
int32_t bracket_depth = 1;
int32_t p = type_start;
while (1) {
if (p >= expr_len) {
break;
}
const char cp = std__string__get_char( expr , p );
if (cp == '[') {
bracket_depth++;
}
else if (cp == ']') {
bracket_depth--;
if (bracket_depth == 0) {
type_end = p;
break;
}
}
p++;
}
if (type_end > type_start) {
const std__string__string type_str = std__string__strip( std__string__substring_se ( expr , type_start , type_end ) );
const int32_t next_pos = type_end + 1;
if (next_pos < expr_len && std__string__get_char ( expr , next_pos ) == '[') {
const int32_t values_start = next_pos + 1;
int32_t values_end = - 1;
bracket_depth = 1;
p = values_start;
while (1) {
if (p >= expr_len) {
break;
}
const char cp = std__string__get_char( expr , p );
if (cp == '[') {
bracket_depth++;
}
else if (cp == ']') {
bracket_depth--;
if (bracket_depth == 0) {
values_end = p;
break;
}
}
p++;
}
if (values_end > values_start) {
const std__string__string values_str = std__string__strip( std__string__substring_se ( expr , values_start , values_end ) );
const std__string__string c_type = renderer__map_axe_type_to_c( type_str );
std__string__StringBuilder array_lit = std__string__StringBuilder__init( std__string__str_len ( c_type ) + std__string__str_len ( values_str ) + 16 );
std__string__StringBuilder__append_char(&array_lit, '(');
std__string__StringBuilder__append(&array_lit, c_type);
std__string__StringBuilder__append_c(&array_lit, "[]){");
std__string__StringBuilder__append(&array_lit, values_str);
std__string__StringBuilder__append_c(&array_lit, "}");
const std__string__string result = std__string__StringBuilder__to_string( &array_lit );
std__string__StringBuilder__destroy(&array_lit);
std__string__StringBuilder__append(&sb, result);
i = values_end + 1;
continue;
}
}
}
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

void renderer__add_list_element(std__string__string c_elem) {
if (std__string__str_len ( c_elem ) == 0) {
return ;
}
if (std__maps__StringBoolMap__contains( &g_list_element_types , c_elem )) {
return ;
}
std__arena__Arena arena = std__arena__Arena__create( 2560 );
std__maps__StringBoolMap__set(&g_list_element_types, &arena, c_elem, true);
if (g_list_elements != nil) {
const std__lists__StringList* listref = g_list_elements;
int32_t i = 0;
while (1) {
if (i >= listref->len) {
break;
}
const std__string__string it = std__lists__StringList__get( listref , i );
if (std__string__compare ( it , c_elem ) == 0) {
return ;
}
i++;
}
std__lists__StringList__push(g_list_elements, &arena, c_elem);
}
}

void renderer__scan_for_list_types(structs__ASTNode* node) {
if (node == nil) {
return ;
}
if (std__string__equals_c ( node->node_type, "Declaration" )) {
const std__string__string tname = node->data.declaration.type_name;
if (std__string__str_len ( tname ) > 0) {
const int32_t br = std__string__find_char_from( tname , '[' , (uintptr_t)( 0 ) );
if (br >= 0) {
const std__string__string suffix = std__string__substring_se( tname , br , (int32_t)( std__string__str_len ( tname ) ) );
if (std__string__equals_c ( suffix , "[999]" )) {
std__string__string element = std__string__strip( std__string__substring_se ( tname , 0 , br ) );
if (std__string__has_prefix ( element , std__string__str ( "ref " ) )) {
element = std__string__strip ( std__string__substr ( element , 4 , std__string__str_len ( element ) - 4 ) );
}
const std__string__string mapped = renderer__map_axe_type_to_c( element );
renderer__add_list_element(mapped);
}
}
}
}
if (node->children!= nil) {
const __list_structs__ASTNode_t* chs = node->children;
int32_t idx = 0;
while (1) {
if (idx >= len_v((*chs))) {
break;
}
renderer__scan_for_list_types(&(chs->data[idx]));
idx = idx + 1;
}
}
}

std__string__string renderer__format_model_field_type(std__string__string field_type) {
std__string__string trimmed = std__string__strip( field_type );
std__string__string qualifiers = std__string__str( "" );
while (1) {
if (! std__string__has_prefix ( trimmed , std__string__str ( "const " ) )) {
break;
}
qualifiers = std__string__concat ( qualifiers , std__string__str ( "const " ) );
trimmed = std__string__strip ( std__string__substr ( trimmed , 6 , std__string__str_len ( trimmed ) - 6 ) );
}
bool had_struct_prefix = false;
if (std__string__has_prefix ( trimmed , std__string__str ( "struct " ) )) {
had_struct_prefix = true;
trimmed = std__string__strip ( std__string__substr ( trimmed , 7 , std__string__str_len ( trimmed ) - 7 ) );
}
std__string__string pointer_suffix = std__string__str( "" );
while (1) {
const int32_t len = std__string__str_len( trimmed );
if (len == 0) {
break;
}
const char last_char = std__string__get_char( trimmed , len - 1 );
if (last_char != '*') {
break;
}
pointer_suffix = std__string__concat ( pointer_suffix , std__string__str ( "*" ) );
trimmed = std__string__strip ( std__string__substring_se ( trimmed , 0 , len - 1 ) );
}
const std__string__string model_name = renderer__canonical_model_c_name( trimmed );
if (std__string__str_len ( model_name ) > 0) {
if (std__maps__StringBoolMap__contains( &g_enum_names , model_name )) {
trimmed = model_name;
}
else {
trimmed = std__string__concat ( std__string__str ( "struct " ) , model_name );
}
}
else if (had_struct_prefix) {
trimmed = std__string__concat ( std__string__str ( "struct " ) , trimmed );
}
std__string__string final_result = qualifiers;
final_result = std__string__concat ( final_result , trimmed );
final_result = std__string__concat ( final_result , pointer_suffix );
return final_result;
}

static inline std__string__string renderer__process_parameter_type(std__string__string param_type) {
const std__string__string result = std__string__strip( param_type );
const std__string__string mapped = renderer__map_axe_type_to_c( result );
if (std__string__find_substr ( mapped , std__string__str ( "__list_" ) ) >= 0 && ! std__string__has_suffix ( mapped , std__string__str ( "*" ) )) {
return std__string__concat( mapped , std__string__str ( "*" ) );
}
return mapped;
}

std__string__string renderer__int_to_ascii(int32_t n) {
if (n == 0) {
return std__string__str( "0" );
}
bool neg = false;
int32_t v = n;
if (v < 0) {
neg = true;
v = - v;
}
std__string__StringBuilder sb_rev = std__string__StringBuilder__init( 16 );
while (1) {
if (v == 0) {
break;
}
const int32_t digit = v % 10;
std__string__StringBuilder__append_char(&sb_rev, (char)('0' + digit));
v = v / 10;
}
const std__string__string rev = std__string__StringBuilder__to_string( &sb_rev );
std__string__StringBuilder__destroy(&sb_rev);
std__string__StringBuilder sb_out = std__string__StringBuilder__init( std__string__str_len ( rev ) + 2 );
int32_t i = (int32_t)( std__string__str_len ( rev ) ) - 1;
while (1) {
if (i < 0) {
break;
}
std__string__StringBuilder__append_char(&sb_out, std__string__get_char(rev, i));
i = i - 1;
}
std__string__string out = std__string__StringBuilder__to_string( &sb_out );
std__string__StringBuilder__destroy(&sb_out);
if (neg) {
out = std__string__concat ( std__string__str ( "-" ) , out );
}
return out;
}

std__string__string renderer__get_type_format_specifier(std__string__string var_type) {
const std__string__string t = std__string__strip( var_type );
if (std__string__equals_c ( t , "int32_t" ) || std__string__has_suffix ( t , std__string__str ( "int32_t" ) )) {
return std__string__str( "%d" );
}
if (std__string__equals_c ( t , "uint32_t" ) || std__string__has_suffix ( t , std__string__str ( "uint32_t" ) )) {
return std__string__str( "%u" );
}
if (std__string__equals_c ( t , "int64_t" ) || std__string__has_suffix ( t , std__string__str ( "int64_t" ) )) {
return std__string__str( "%lld" );
}
if (std__string__equals_c ( t , "uint64_t" ) || std__string__has_suffix ( t , std__string__str ( "uint64_t" ) )) {
return std__string__str( "%llu" );
}
if (std__string__equals_c ( t , "float" ) || std__string__has_suffix ( t , std__string__str ( "float" ) )) {
return std__string__str( "%f" );
}
if (std__string__equals_c ( t , "double" ) || std__string__has_suffix ( t , std__string__str ( "double" ) )) {
return std__string__str( "%f" );
}
if (std__string__has_prefix ( t , std__string__str ( "ref char" ) ) || std__string__has_suffix ( t , std__string__str ( "char*" ) )) {
return std__string__str( "%s" );
}
if (std__string__equals_c ( t , "char" )) {
return std__string__str( "%c" );
}
return std__string__str( "%d" );
}

std__string__string renderer__lookup_expression_type(std__string__string expr) {
const std__string__string e = std__string__strip( expr );
if (std__maps__StringStringMap__contains( &g_var_types , e )) {
return std__maps__StringStringMap__get( &g_var_types , e );
}
if (std__string__str_len ( e ) >= 2 && std__string__get_char ( e , 0 ) == '"' && std__string__get_char ( e , std__string__str_len ( e ) - 1 ) == '"') {
return std__string__str( "string" );
}
if (std__string__str_len ( e ) >= 2 && std__string__get_char ( e , 0 ) == '\'' && std__string__get_char ( e , std__string__str_len ( e ) - 1 ) == '\'') {
return std__string__str( "char" );
}
if (std__string__str_len ( e ) > 0) {
const char c0 = std__string__get_char( e , 0 );
if (c0 >= '0' && c0 <= '9') {
if (std__string__find_char_from ( e , '.' , (uintptr_t)( 0 ) ) >= 0) {
return std__string__str( "f64" );
}
return std__string__str( "i32" );
}
}
return std__string__str( "i32" );
}

std__string__string renderer__process_interpolated_string(std__string__string interp_content, bool return_struct) {
__list_std__string_t parts = {0};
__list_std__string_t expressions = {0};
int32_t pos = 0;
std__string__StringBuilder sb_part = std__string__StringBuilder__init( std__string__str_len ( interp_content ) + 16 );
const int32_t content_len = (int32_t)( std__string__str_len ( interp_content ) );
while (1) {
if (pos >= content_len) {
break;
}
const char ch = std__string__get_char( interp_content , pos );
if (ch == '{' && ! renderer__is_escaped_quote ( interp_content , pos )) {
if (pos > 0 && std__string__get_char ( interp_content , pos - 1 ) == '$' && sb_part . len > 0) {
sb_part.len = sb_part.len- 1;
}
__list_std__string_push(&parts, std__string__StringBuilder__to_string(&sb_part));
std__string__StringBuilder__clear(&sb_part);
const int32_t brace_start = pos + 1;
int32_t brace_depth = 1;
int32_t brace_end = brace_start;
while (1) {
if (brace_end >= content_len || brace_depth == 0) {
break;
}
const char cc = std__string__get_char( interp_content , brace_end );
if (cc == '{') {
brace_depth = brace_depth + 1;
}
else if (cc == '}') {
brace_depth = brace_depth - 1;
}
brace_end = brace_end + 1;
}
if (brace_depth != 0) {
std__errors__enforce_raw(false, "Unmatched braces in interpolated string");
}
const std__string__string expr = std__string__strip( std__string__substring_se ( interp_content , brace_start , brace_end - 1 ) );
__list_std__string_push(&expressions, expr);
pos = brace_end;
continue;
}
std__string__StringBuilder__append_char(&sb_part, ch);
pos = pos + 1;
}
__list_std__string_push(&parts, std__string__StringBuilder__to_string(&sb_part));
std__string__StringBuilder__destroy(&sb_part);
if (len_v(parts) == 0) {
return std__string__str( "" );
}
if (len_v(expressions) == 0) {
std__string__string q = std__string__str( "\"" );
q = std__string__concat ( q , interp_content );
q = std__string__concat ( q , std__string__str ( "\"" ) );
return q;
}
std__string__string code = std__string__str( "({ size_t _axe_interp_len = 0" );
int32_t i_part_size = 0;
while (1) {
if (i_part_size >= len_v(parts)) {
break;
}
const std__string__string part_sz = parts.data[ i_part_size ];
if (std__string__str_len ( part_sz ) > 0) {
std__string__string escaped_sz = std__string__replace_all( part_sz , std__string__str ( "\\" ) , std__string__str ( "\\\\" ) );
escaped_sz = std__string__replace_all ( escaped_sz , std__string__str ( "\"" ) , std__string__str ( "\\\"" ) );
escaped_sz = std__string__replace_all ( escaped_sz , std__string__str ( "\n" ) , std__string__str ( "\\n" ) );
escaped_sz = std__string__replace_all ( escaped_sz , std__string__str ( "\t" ) , std__string__str ( "\\t" ) );
code = std__string__concat ( code , std__string__str ( " + sizeof(\"" ) );
code = std__string__concat ( code , escaped_sz );
code = std__string__concat ( code , std__string__str ( "\") - 1" ) );
}
if (i_part_size < len_v(expressions)) {
code = std__string__concat ( code , std__string__str ( " + 32" ) );
}
i_part_size = i_part_size + 1;
}
code = std__string__concat ( code , std__string__str ( "; char* _axe_interp = (char*)malloc(_axe_interp_len + 1); char* _axe_interp_p = _axe_interp; " ) );
int32_t i_part = 0;
while (1) {
if (i_part >= len_v(parts)) {
break;
}
const std__string__string part = parts.data[ i_part ];
if (std__string__str_len ( part ) > 0) {
std__string__string escaped = std__string__replace_all( part , std__string__str ( "\\" ) , std__string__str ( "\\\\" ) );
escaped = std__string__replace_all ( escaped , std__string__str ( "\"" ) , std__string__str ( "\\\"" ) );
escaped = std__string__replace_all ( escaped , std__string__str ( "\n" ) , std__string__str ( "\\n" ) );
escaped = std__string__replace_all ( escaped , std__string__str ( "\t" ) , std__string__str ( "\\t" ) );
code = std__string__concat ( code , std__string__str ( "memcpy(_axe_interp_p, \"" ) );
code = std__string__concat ( code , escaped );
code = std__string__concat ( code , std__string__str ( "\", sizeof(\"" ) );
code = std__string__concat ( code , escaped );
code = std__string__concat ( code , std__string__str ( "\") - 1); _axe_interp_p += sizeof(\"" ) );
code = std__string__concat ( code , escaped );
code = std__string__concat ( code , std__string__str ( "\") - 1; " ) );
}
if (i_part < len_v(expressions)) {
const std__string__string e = expressions.data[ i_part ];
const std__string__string etype = renderer__lookup_expression_type( e );
const std__string__string processed_e = renderer__process_expression( e );
if (std__string__str_len ( etype ) > 0 && ( std__string__equals_c ( etype , "string" ) || std__string__has_suffix ( etype , std__string__str ( "_string" ) ) || std__string__equals_c ( etype , "std__string__string" ) )) {
code = std__string__concat ( code , std__string__str ( "{ struct std__string__string _s = " ) );
code = std__string__concat ( code , processed_e );
code = std__string__concat ( code , std__string__str ( "; memcpy(_axe_interp_p, _s.data, _s.len); _axe_interp_p += _s.len; } " ) );
}
else {
code = std__string__concat ( code , std__string__str ( "{ int _len = snprintf(_axe_interp_p, 32, \"" ) );
code = std__string__concat ( code , renderer__get_type_format_specifier ( etype ) );
code = std__string__concat ( code , std__string__str ( "\", " ) );
code = std__string__concat ( code , processed_e );
code = std__string__concat ( code , std__string__str ( "); _axe_interp_p += _len; } " ) );
}
}
i_part = i_part + 1;
}
code = std__string__concat ( code , std__string__str ( "*_axe_interp_p = '\\0'; " ) );
if (return_struct) {
code = std__string__concat ( code , std__string__str ( "struct std__string__string _sret = {0}; _sret.data = _axe_interp; _sret.len = _axe_interp_p - _axe_interp; _sret.cap = _axe_interp_len + 1; _sret; })" ) );
}
else {
code = std__string__concat ( code , std__string__str ( "_axe_interp; })" ) );
}
return code;
}

bool renderer__is_token_char(char c) {
const int32_t c_code = (int32_t)( c );
if (c_code >= 97 && c_code <= 122) {
return true;
}
if (c_code >= 65 && c_code <= 90) {
return true;
}
if (c_code >= 48 && c_code <= 57) {
return true;
}
if (c == '_') {
return true;
}
return false;
}

bool renderer__is_ident_start(char c) {
const int32_t c_code = (int32_t)( c );
if (c_code >= 97 && c_code <= 122) {
return true;
}
if (c_code >= 65 && c_code <= 90) {
return true;
}
if (c == '_') {
return true;
}
return false;
}

int32_t renderer__c_prefix_end_index(std__string__string s) {
if (std__string__str_len ( s ) < 2) {
return - 1;
}
if (std__string__get_char ( s , 0 ) != 'C') {
return - 1;
}
int32_t i = 1;
while (1) {
if (i >= std__string__str_len ( s )) {
return - 1;
}
const char ch = std__string__get_char( s , i );
if (ch != ' ' && ch != '\t' && ch != '\n') {
break;
}
i++;
}
if (std__string__get_char ( s , i ) != '.') {
return - 1;
}
i++;
while (1) {
if (i >= std__string__str_len ( s )) {
break;
}
const char ch = std__string__get_char( s , i );
if (ch != ' ' && ch != '\t' && ch != '\n') {
break;
}
i++;
}
return i;
}

std__string__string renderer__collapse_duplicate_segments_once(std__string__string s) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( s ) + 16 );
int32_t i = 0;
const int32_t n = (int32_t)( std__string__str_len ( s ) );
while (1) {
if (i >= n) {
break;
}
if (i + 2 < n && std__string__get_char ( s , i ) == '_' && std__string__get_char ( s , i + 1 ) == '_') {
int32_t j = i + 2;
const int32_t seg1_start = j;
while (1) {
if (j >= n) {
break;
}
const char ch = std__string__get_char( s , j );
if (ch == '_') {
break;
}
j = j + 1;
}
const std__string__string seg1 = std__string__substring_se( s , seg1_start , j );
if (std__string__str_len ( seg1 ) > 0) {
if (j + 2 < n && std__string__get_char ( s , j ) == '_' && std__string__get_char ( s , j + 1 ) == '_') {
int32_t k = j + 2;
const int32_t seg2_start = k;
while (1) {
if (k >= n) {
break;
}
const char ch2 = std__string__get_char( s , k );
if (ch2 == '_') {
break;
}
k = k + 1;
}
const std__string__string seg2 = std__string__substring_se( s , seg2_start , k );
if (std__string__compare ( seg1 , seg2 ) == 0) {
if (( k < n && std__string__get_char ( s , k ) == '_' && ( k + 1 >= n || std__string__get_char ( s , k + 1 ) != '_' ) )) {
std__string__StringBuilder__append_c(&sb, "__");
std__string__StringBuilder__append(&sb, seg1);
i = k;
continue;
}
}
}
if (j + 3 < n && std__string__get_char ( s , j ) == '_' && std__string__get_char ( s , j + 1 ) != '_') {
int32_t k2 = j + 1;
const int32_t seg2b_start = k2;
while (1) {
if (k2 >= n) {
break;
}
const char ch3 = std__string__get_char( s , k2 );
if (ch3 == '_') {
break;
}
k2 = k2 + 1;
}
const std__string__string seg2b = std__string__substring_se( s , seg2b_start , k2 );
if (k2 + 1 < n && std__string__get_char ( s , k2 ) == '_' && std__string__get_char ( s , k2 + 1 ) == '_') {
if (std__string__compare ( seg1 , seg2b ) == 0) {
std__string__StringBuilder__append_c(&sb, "__");
std__string__StringBuilder__append(&sb, seg1);
std__string__StringBuilder__append_c(&sb, "__");
i = k2 + 2;
continue;
}
}
}
}
}
std__string__StringBuilder__append_char(&sb, std__string__get_char(s, i));
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__strip_all_c_prefixes(std__string__string s) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( s ) + 16 );
int32_t i = 0;
const int32_t s_len = (int32_t)( std__string__str_len ( s ) );
bool in_string = false;
bool in_char_literal = false;
while (1) {
if (i >= s_len) {
break;
}
const char ch = std__string__get_char( s , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( s , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( s , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (in_string || in_char_literal) {
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == 'C') {
int32_t prev_idx = i - 1;
char prev_ch = '\0';
while (1) {
if (prev_idx < 0) {
break;
}
const char pc = std__string__get_char( s , prev_idx );
if (pc != ' ' && pc != '\t' && pc != '\n') {
prev_ch = pc;
break;
}
prev_idx = prev_idx - 1;
}
if (prev_idx < 0 || ! renderer__is_ident_start ( prev_ch )) {
int32_t k = i + 1;
while (1) {
if (k >= s_len) {
break;
}
const char ws = std__string__get_char( s , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k = k + 1;
}
if (k < s_len && std__string__get_char ( s , k ) == '.') {
k = k + 1;
while (1) {
if (k >= s_len) {
break;
}
const char ws2 = std__string__get_char( s , k );
if (ws2 != ' ' && ws2 != '\t' && ws2 != '\n') {
break;
}
k = k + 1;
}
i = k;
continue;
}
if (k < s_len && std__string__get_char ( s , k ) == '_' && k + 1 < s_len && std__string__get_char ( s , k + 1 ) == '_') {
int32_t k2 = k;
while (1) {
if (k2 >= s_len) {
break;
}
if (std__string__get_char ( s , k2 ) != '_') {
break;
}
k2 = k2 + 1;
}
i = k2;
continue;
}
}
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_enum_member_refs(std__string__string s) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( s ) + 64 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t s_len = (int32_t)( std__string__str_len ( s ) );
gstate__debug_print_raw("\n[DBG-ENUM] rewrite_enum_member_refs input:");
gstate__debug_print_str(s);
while (1) {
if (i >= s_len) {
break;
}
const char ch = std__string__get_char( s , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( s , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( s , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (in_string || in_char_literal) {
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (renderer__is_ident_start ( ch )) {
const int32_t ident_start = i;
int32_t j = i;
while (1) {
if (j >= s_len) {
break;
}
const char cj = std__string__get_char( s , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j = j + 1;
}
const std__string__string ident = std__string__substring_se( s , ident_start , j );
int32_t k = j;
while (1) {
if (k >= s_len) {
break;
}
const char ws = std__string__get_char( s , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k = k + 1;
}
if (k < s_len && std__string__get_char ( s , k ) == '.') {
k = k + 1;
while (1) {
if (k >= s_len) {
break;
}
const char ws2 = std__string__get_char( s , k );
if (ws2 != ' ' && ws2 != '\t' && ws2 != '\n') {
break;
}
k = k + 1;
}
if (k < s_len && renderer__is_ident_start ( std__string__get_char ( s , k ) )) {
const int32_t member_start = k;
int32_t m = k;
while (1) {
if (m >= s_len) {
break;
}
const char cm = std__string__get_char( s , m );
if (! renderer__is_token_char ( cm )) {
break;
}
m = m + 1;
}
const std__string__string member = std__string__substring_se( s , member_start , m );
if (std__string__str_len ( member ) > 0) {
const std__string__string enum_c_name = renderer__canonical_model_c_name( ident );
if (std__string__str_len ( enum_c_name ) > 0 && std__maps__StringBoolMap__contains( &g_enum_names , enum_c_name )) {
std__string__StringBuilder__append(&sb, enum_c_name);
std__string__StringBuilder__append_char(&sb, '_');
std__string__StringBuilder__append(&sb, member);
i = m;
continue;
}
}
}
}
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
gstate__debug_print_raw("\n[DBG-ENUM] rewrite_enum_member_refs output:");
gstate__debug_print_str(result);
return result;
}

std__string__string renderer__rewrite_adr(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 64 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (! in_string && ! in_char_literal && renderer__is_ident_start ( ch )) {
const int32_t ident_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j++;
}
const std__string__string ident = std__string__substring_se( expr , ident_start , j );
if (std__string__equals_c ( ident , "addr" )) {
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k++;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '(') {
const int32_t paren_start = k + 1;
int32_t paren_end = paren_start;
int32_t depth = 1;
bool in_arg_str = false;
bool in_arg_char = false;
while (1) {
if (paren_end >= expr_len || depth == 0) {
break;
}
const char pc = std__string__get_char( expr , paren_end );
if (pc == '"' && ! in_arg_char && ! renderer__is_escaped_quote ( expr , paren_end )) {
in_arg_str = ! in_arg_str;
}
else if (pc == '\'' && ! in_arg_str && ! renderer__is_escaped_quote ( expr , paren_end )) {
in_arg_char = ! in_arg_char;
}
else if (! in_arg_str && ! in_arg_char) {
if (pc == '(') {
depth++;
}
else if (pc == (char)( 41 )) {
depth--;
}
}
if (depth > 0) {
paren_end++;
}
}
if (depth == 0) {
const std__string__string var_name = std__string__strip( std__string__substring_se ( expr , paren_start , paren_end ) );
const bool has_bracket = std__string__find_char_from( var_name , '[' , (uintptr_t)( 0 ) ) >= 0;
const bool has_dot = std__string__find_char_from( var_name , '.' , (uintptr_t)( 0 ) ) >= 0;
if (has_bracket || has_dot) {
std__string__StringBuilder__append_c(&sb, "&(");
std__string__StringBuilder__append(&sb, var_name);
std__string__StringBuilder__append_c(&sb, ")");
}
else {
std__string__StringBuilder__append_c(&sb, "&");
std__string__StringBuilder__append(&sb, var_name);
}
i = paren_end + 1;
continue;
}
}
}
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_dereference(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 64 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (! in_string && ! in_char_literal && renderer__is_ident_start ( ch )) {
const int32_t ident_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j++;
}
const std__string__string ident = std__string__substring_se( expr , ident_start , j );
if (std__string__equals_c ( ident , "deref" )) {
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k++;
}
if (k < expr_len && std__string__get_char ( expr , k ) == '(') {
const int32_t paren_start = k + 1;
int32_t paren_end = paren_start;
int32_t depth = 1;
bool in_arg_str = false;
bool in_arg_char = false;
while (1) {
if (paren_end >= expr_len || depth == 0) {
break;
}
const char pc = std__string__get_char( expr , paren_end );
if (pc == '"' && ! in_arg_char && ! renderer__is_escaped_quote ( expr , paren_end )) {
in_arg_str = ! in_arg_str;
}
else if (pc == '\'' && ! in_arg_str && ! renderer__is_escaped_quote ( expr , paren_end )) {
in_arg_char = ! in_arg_char;
}
else if (! in_arg_str && ! in_arg_char) {
if (pc == '(') {
depth++;
}
else if (pc == (char)( 41 )) {
depth--;
}
}
if (depth > 0) {
paren_end++;
}
}
if (depth == 0) {
const std__string__string var_name = std__string__strip( std__string__substring_se ( expr , paren_start , paren_end ) );
std__string__StringBuilder__append_c(&sb, "(*");
std__string__StringBuilder__append(&sb, var_name);
std__string__StringBuilder__append_c(&sb, ")");
i = paren_end + 1;
continue;
}
}
}
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_len_calls(std__string__string expr) {
std__string__string result = expr;
while (1) {
int32_t start_idx = - 1;
int32_t paren_pos = - 1;
const int32_t search_pos = 0;
const int32_t result_len = (int32_t)( std__string__str_len ( result ) );
while (1) {
if (search_pos >= result_len - 3) {
break;
}
bool found = false;
int32_t i = search_pos;
while (1) {
if (i > result_len - 3) {
break;
}
if (std__string__get_char ( result , i ) == 'l' && std__string__get_char ( result , i + 1 ) == 'e' && std__string__get_char ( result , i + 2 ) == 'n') {
bool in_string_check = false;
int32_t qi = 0;
while (1) {
if (qi >= i) {
break;
}
const char qc = std__string__get_char( result , qi );
if (qc == '"' && ( qi == 0 || std__string__get_char ( result , qi - 1 ) != '\\' )) {
in_string_check = ! in_string_check;
}
qi++;
}
if (in_string_check) {
i++;
continue;
}
bool is_standalone = true;
if (i > 0) {
const char prev = std__string__get_char( result , i - 1 );
if (renderer__is_token_char ( prev )) {
is_standalone = false;
}
}
if (is_standalone && i + 3 < result_len) {
const char after = std__string__get_char( result , i + 3 );
if (renderer__is_token_char ( after )) {
is_standalone = false;
}
}
if (is_standalone) {
int32_t k = i + 3;
while (1) {
if (k >= result_len) {
break;
}
const char ws = std__string__get_char( result , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k++;
}
if (k < result_len && std__string__get_char ( result , k ) == '(') {
found = true;
paren_pos = k;
break;
}
}
}
i++;
}
if (! found) {
break;
}
start_idx = i;
break;
}
if (start_idx < 0) {
break;
}
const int32_t paren_start = paren_pos + 1;
int32_t depth = 1;
int32_t paren_end = paren_start;
while (1) {
if (paren_end >= std__string__str_len ( result ) || depth == 0) {
break;
}
const char ch = std__string__get_char( result , paren_end );
if (ch == '(') {
depth = depth + 1;
}
else if (ch == ')') {
depth = depth - 1;
}
if (depth > 0) {
paren_end = paren_end + 1;
}
}
if (depth != 0) {
break;
}
const std__string__string len_arg = std__string__strip( std__string__substring_se ( result , paren_start , paren_end ) );
bool is_pointer = false;
if (std__string__find_substr ( len_arg , std__string__str ( "->" ) ) >= 0) {
is_pointer = true;
}
else if (std__string__find_char_from ( len_arg , '.' , (uintptr_t)( 0 ) ) >= 0) {
const int32_t len_arg_len = (int32_t)( std__string__str_len ( len_arg ) );
int32_t last_dot = - 1;
int32_t di = 0;
while (1) {
if (di >= len_arg_len) {
break;
}
if (std__string__get_char ( len_arg , di ) == '.') {
last_dot = di;
}
di++;
}
if (last_dot >= 0) {
std__string__string field_name = std__string__strip( std__string__substring_se ( len_arg , last_dot + 1 , len_arg_len ) );
const int32_t bracket_pos = std__string__find_char_from( field_name , '[' , (uintptr_t)( 0 ) );
if (bracket_pos >= 0) {
field_name = std__string__strip ( std__string__substring_se ( field_name , 0 , bracket_pos ) );
}
const int32_t first_dot = std__string__find_char_from( len_arg , '.' , (uintptr_t)( 0 ) );
if (first_dot >= 0) {
const std__string__string base_var = std__string__strip( std__string__substring_se ( len_arg , 0 , first_dot ) );
if (std__maps__StringStringMap__contains( &g_var_types , base_var )) {
const std__string__string base_type = std__maps__StringStringMap__get( &g_var_types , base_var );
const std__string__string model_name = renderer__extract_base_model_name( base_type );
const std__string__string field_type = renderer__lookup_field_type( model_name , field_name );
if (std__string__str_len ( field_type ) > 0) {
if (renderer__is_pointer_type ( field_type )) {
is_pointer = true;
}
}
if (renderer__is_pointer_field ( model_name , field_name )) {
is_pointer = true;
}
}
}
}
}
else {
std__string__string base_var = len_arg;
const int32_t bracket_pos = std__string__find_char_from( base_var , '[' , (uintptr_t)( 0 ) );
if (bracket_pos >= 0) {
base_var = std__string__strip ( std__string__substring_se ( base_var , 0 , bracket_pos ) );
}
if (std__maps__StringStringMap__contains( &g_var_types , base_var )) {
const std__string__string var_type = std__maps__StringStringMap__get( &g_var_types , base_var );
if (renderer__is_pointer_type ( var_type )) {
is_pointer = true;
}
}
}
std__string__string replacement = std__string__str( "" );
if (is_pointer) {
replacement = std__string__concat ( std__string__str ( "len_ptr(" ) , len_arg );
}
else {
replacement = std__string__concat ( std__string__str ( "len_v(" ) , len_arg );
}
replacement = std__string__concat_c ( replacement , ")" );
const std__string__string before = std__string__substring_se( result , 0 , start_idx );
const std__string__string after = std__string__substring_se( result , paren_end + 1 , (int32_t)( std__string__str_len ( result ) ) );
result = std__string__concat ( before , replacement );
result = std__string__concat ( result , after );
}
return result;
}

std__string__string renderer__rewrite_function_calls(std__string__string expr) {
std__string__StringBuilder sb = std__string__StringBuilder__init( std__string__str_len ( expr ) + 64 );
int32_t i = 0;
bool in_string = false;
bool in_char_literal = false;
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '\'' && ! in_string && ! renderer__is_escaped_quote ( expr , i )) {
in_char_literal = ! in_char_literal;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == '"' && ! in_char_literal && ! renderer__is_escaped_quote ( expr , i )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
const bool is_id_start = renderer__is_ident_start( ch );
if (! in_string && ! in_char_literal && is_id_start) {
const int32_t ident_start = i;
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char cj = std__string__get_char( expr , j );
if (! renderer__is_token_char ( cj )) {
break;
}
j = j + 1;
}
const std__string__string ident = std__string__substring_se( expr , ident_start , j );
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k = k + 1;
}
std__string__string replaced_ident = ident;
if (std__string__str_len ( ident ) > 3 && std__string__get_char ( ident , 0 ) == 'C' && std__string__get_char ( ident , 1 ) == '_' && std__string__get_char ( ident , 2 ) == '_') {
replaced_ident = std__string__substring_se ( ident , 3 , (int32_t)( std__string__str_len ( ident ) ) );
}
else if (k < expr_len && std__string__get_char ( expr , k ) == '(') {
const bool has_double_underscore = std__string__find_substr( ident , std__string__str ( "__" ) ) >= 0;
if (! has_double_underscore && std__maps__StringStringMap__contains( &g_function_prefixes , ident )) {
replaced_ident = std__maps__StringStringMap__get( &g_function_prefixes , ident );
}
}
std__string__StringBuilder__append(&sb, replaced_ident);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_global_scope_refs(std__string__string expr) {
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
if (expr_len < 3) {
return expr;
}
std__string__StringBuilder sb = std__string__StringBuilder__init( (uintptr_t)( expr_len + 32 ) );
bool in_string = false;
int32_t i = 0;
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '"' && ( i == 0 || std__string__get_char ( expr , i - 1 ) != '\\' )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (in_string) {
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (ch == ':') {
int32_t j = i + 1;
while (1) {
if (j >= expr_len) {
break;
}
const char ws = std__string__get_char( expr , j );
if (ws != ' ' && ws != '\t') {
break;
}
j = j + 1;
}
if (j < expr_len && std__string__get_char ( expr , j ) == ':') {
j = j + 1;
while (1) {
if (j >= expr_len) {
break;
}
const char ws2 = std__string__get_char( expr , j );
if (ws2 != ' ' && ws2 != '\t') {
break;
}
j = j + 1;
}
if (j < expr_len) {
const char first_ch = std__string__get_char( expr , j );
if (( first_ch >= 'a' && first_ch <= 'z' ) || ( first_ch >= 'A' && first_ch <= 'Z' ) || first_ch == '_') {
int32_t k = j;
while (1) {
if (k >= expr_len) {
break;
}
const char id_ch = std__string__get_char( expr , k );
if (! ( ( id_ch >= 'a' && id_ch <= 'z' ) || ( id_ch >= 'A' && id_ch <= 'Z' ) || ( id_ch >= '0' && id_ch <= '9' ) || id_ch == '_' )) {
break;
}
k = k + 1;
}
const std__string__string ident = std__string__substring_se( expr , j , k );
std__string__StringBuilder__append(&sb, ident);
i = k;
continue;
}
}
}
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__rewrite_global_var_refs(std__string__string expr) {
const int32_t expr_len = (int32_t)( std__string__str_len ( expr ) );
if (expr_len == 0) {
return expr;
}
std__string__StringBuilder sb = std__string__StringBuilder__init( (uintptr_t)( expr_len + 64 ) );
bool in_string = false;
int32_t i = 0;
while (1) {
if (i >= expr_len) {
break;
}
const char ch = std__string__get_char( expr , i );
if (ch == '"' && ( i == 0 || std__string__get_char ( expr , i - 1 ) != '\\' )) {
in_string = ! in_string;
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (in_string) {
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
if (( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) || ch == '_') {
if (i > 0) {
const char prev_ch = std__string__get_char( expr , i - 1 );
if (( prev_ch >= 'a' && prev_ch <= 'z' ) || ( prev_ch >= 'A' && prev_ch <= 'Z' ) || ( prev_ch >= '0' && prev_ch <= '9' ) || prev_ch == '_') {
std__string__StringBuilder__append_char(&sb, ch);
i++;
continue;
}
}
int32_t j = i;
while (1) {
if (j >= expr_len) {
break;
}
const char id_ch = std__string__get_char( expr , j );
if (! ( ( id_ch >= 'a' && id_ch <= 'z' ) || ( id_ch >= 'A' && id_ch <= 'Z' ) || ( id_ch >= '0' && id_ch <= '9' ) || id_ch == '_' )) {
break;
}
j = j + 1;
}
const std__string__string ident = std__string__substring_se( expr , i , j );
if (std__string__has_prefix ( ident , std__string__str ( "gvar__" ) )) {
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
if (std__maps__StringStringMap__contains( &g_var_types , ident )) {
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
if (std__maps__StringStringMap__contains( &g_global_var_prefixes , ident )) {
const std__string__string mapped = std__maps__StringStringMap__get( &g_global_var_prefixes , ident );
std__string__StringBuilder__append(&sb, mapped);
i = j;
continue;
}
if (j < expr_len) {
const char next_ch = std__string__get_char( expr , j );
if (next_ch != '(' && next_ch != '.') {
const bool is_upper_case_const = renderer__is_all_upper_or_underscore( ident );
if (is_upper_case_const && ! renderer__is_builtin_type ( ident ) && ! renderer__is_language_keyword ( ident ) && ! renderer__is_c_constant ( ident )) {
if (! imports__is_symbol_imported ( ident ) && ! std__maps__StringBoolMap__contains( &g_emitted_globals , ident ) && ! std__maps__StringBoolMap__contains( &g_foreign_types , ident )) {
std__io__print(std__os__get_short_filename(g_current_source_file));
std__io__print(":");
std__io__print(std__string__i32_to_string(g_current_line));
std__io__print(": error: undefined symbol: ");
std__io__print(ident);
std__io__println(", perhaps missing 'use' statement?");
exit(1);
}
}
}
}
std__string__StringBuilder__append(&sb, ident);
i = j;
continue;
}
std__string__StringBuilder__append_char(&sb, ch);
i++;
}
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

void renderer__check_variable_declared(std__string__string name) {
if (std__string__str_len ( name ) == 0) {
return ;
}
if (! renderer__is_ident_start ( std__string__get_char ( name , 0 ) )) {
return ;
}
int32_t i = 1;
while (1) {
if (i >= std__string__str_len ( name )) {
break;
}
if (! renderer__is_token_char ( std__string__get_char ( name , i ) )) {
return ;
}
i++;
}
if (renderer__is_language_keyword ( name )) {
return ;
}
if (renderer__is_builtin_type ( name )) {
return ;
}
if (renderer__is_builtin_function ( name )) {
return ;
}
if (renderer__is_c_constant ( name )) {
return ;
}
if (std__string__equals_c ( name , "true" ) || std__string__equals_c ( name , "false" ) || std__string__equals_c ( name , "nil" )) {
return ;
}
if (std__string__equals_c ( name , "mod" ) || std__string__equals_c ( name , "and" ) || std__string__equals_c ( name , "or" ) || std__string__equals_c ( name , "not" ) || std__string__equals_c ( name , "xor" )) {
return ;
}
if (std__maps__StringStringMap__contains( &g_var_types , name )) {
return ;
}
if (std__maps__StringStringMap__contains( &g_global_var_prefixes , name )) {
return ;
}
if (std__maps__StringStringMap__contains( &g_function_param_types , name )) {
return ;
}
if (std__maps__StringStringMap__contains( &g_function_prefixes , name )) {
return ;
}
if (std__maps__StringStringMap__contains( &g_model_names , name )) {
return ;
}
if (std__maps__StringBoolMap__contains( &g_enum_names , name )) {
if (std__string__equals_c ( name , "y" )) {
std__io__println("DEBUG: y found in g_enum_names");
}
return ;
}
if (std__maps__StringBoolMap__contains( &g_opaque_types , name )) {
if (std__string__equals_c ( name , "y" )) {
std__io__println("DEBUG: y found in g_opaque_types");
}
return ;
}
if (imports__is_symbol_imported ( name )) {
if (std__string__equals_c ( name , "y" )) {
std__io__println("DEBUG: y is imported");
}
return ;
}
if (std__string__str_len ( name ) >= 2 && std__string__get_char ( name , 0 ) == 'g' && std__string__get_char ( name , 1 ) == '_') {
return ;
}
if (std__string__has_prefix ( name , std__string__str ( "gvar__" ) )) {
return ;
}
if (std__maps__StringBoolMap__contains( &g_emitted_globals , name )) {
return ;
}
if (renderer__is_all_upper_or_underscore ( name )) {
return ;
}
std__io__print(std__os__get_short_filename(g_current_source_file));
std__io__print(":");
std__io__print(std__string__i32_to_string(g_current_line));
std__io__print(": error: undefined symbol: ");
std__io__print(name);
std__io__println("");
exit(1);
}

std__string__string renderer__process_expression(std__string__string expr) {
std__string__string trimmed = std__string__strip( expr );
renderer__check_variable_declared(trimmed);
bool has_pointer_sugar = false;
bool in_string = false;
int32_t i = 0;
trimmed = renderer__rewrite_generic_calls ( trimmed );
trimmed = renderer__rewrite_global_scope_refs ( trimmed );
if (std__string__has_prefix ( trimmed , std__string__str ( "__INTERPOLATED__" ) ) && std__string__has_suffix ( trimmed , std__string__str ( "__INTERPOLATED__" ) )) {
const int32_t inner_len = std__string__str_len( trimmed ) - 32;
if (inner_len > 0) {
const std__string__string inner = std__string__substring_se( trimmed , 16 , 16 + inner_len );
return renderer__process_interpolated_string( inner , false );
}
}
const int32_t open_idx = std__string__find_char_from( trimmed , '(' , (uintptr_t)( 0 ) );
if (open_idx > 0) {
const std__string__string func_name_raw = std__string__strip( std__string__substring_se ( trimmed , 0 , open_idx ) );
if (std__string__equals_c ( func_name_raw , "str" ) || std__string__has_suffix ( func_name_raw , std__string__str ( "__str" ) )) {
int32_t depth = 0;
bool in_str_arg = false;
int32_t j = open_idx;
while (1) {
if (j >= std__string__str_len ( trimmed )) {
break;
}
const char chj = std__string__get_char( trimmed , j );
if (chj == '"' && ( j == 0 || std__string__get_char ( trimmed , j - 1 ) != '\\' )) {
in_str_arg = ! in_str_arg;
}
else if (! in_str_arg) {
if (chj == '(') {
depth = depth + 1;
}
else if (chj == ')') {
depth = depth - 1;
if (depth == 0) {
break;
}
}
}
j = j + 1;
}
if (depth == 0 && j > open_idx) {
const std__string__string inner_raw = std__string__strip( std__string__substring_se ( trimmed , open_idx + 1 , j ) );
if (std__string__has_prefix ( inner_raw , std__string__str ( "__INTERPOLATED__" ) ) && std__string__has_suffix ( inner_raw , std__string__str ( "__INTERPOLATED__" ) )) {
const int32_t inner_len2 = std__string__str_len( inner_raw ) - 32;
if (inner_len2 > 0) {
const std__string__string inner2 = std__string__substring_se( inner_raw , 16 , 16 + inner_len2 );
return renderer__process_interpolated_string( inner2 , true );
}
}
}
}
}
trimmed = renderer__rewrite_casts ( trimmed );
trimmed = renderer__rewrite_array_literals ( trimmed );
while (1) {
if (i >= std__string__str_len ( trimmed )) {
break;
}
const char ch = std__string__get_char( trimmed , i );
if (ch == '"' && ( i == 0 || std__string__get_char ( trimmed , i - 1 ) != '\\' )) {
in_string = ! in_string;
}
else if (! in_string && ch == '*') {
int32_t k = i + 1;
while (1) {
if (k >= std__string__str_len ( trimmed )) {
break;
}
const char ws = std__string__get_char( trimmed , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k = k + 1;
}
if (k < std__string__str_len ( trimmed ) && std__string__get_char ( trimmed , k ) == '.') {
has_pointer_sugar = true;
break;
}
}
i++;
}
bool has_c_prefix = false;
const int32_t c_prefix_end = renderer__c_prefix_end_index( trimmed );
if (c_prefix_end >= 0) {
has_c_prefix = true;
}
if (! has_pointer_sugar && ! has_c_prefix) {
gstate__debug_print_raw("\n[DBG-EXPR] no-sugar/no-C expr raw:");
gstate__debug_print_str(expr);
gstate__debug_print_raw("\n[DBG-EXPR] no-sugar/no-C trimmed:");
gstate__debug_print_str(trimmed);
const int32_t single_quote_pos = std__string__find_char_from( trimmed , '\'' , (uintptr_t)( 0 ) );
if (single_quote_pos >= 0) {
const std__string__string addr_fixed_chars = renderer__rewrite_adr( trimmed );
const std__string__string deref_fixed_chars = renderer__rewrite_dereference( addr_fixed_chars );
const std__string__string calls_fixed_chars = renderer__rewrite_function_calls( deref_fixed_chars );
const std__string__string len_fixed_chars = renderer__rewrite_len_calls( calls_fixed_chars );
const std__string__string enum_fixed_chars = renderer__rewrite_enum_member_refs( len_fixed_chars );
const std__string__string prefixes_fixed_chars = renderer__rewrite_function_prefixes( enum_fixed_chars );
const std__string__string mod_fixed_chars = renderer__replace_keyword_outside_strings( prefixes_fixed_chars , std__string__str ( "mod" ) , std__string__str ( "%" ) );
const std__string__string and_fixed_chars = renderer__replace_keyword_outside_strings( mod_fixed_chars , std__string__str ( "and" ) , std__string__str ( "&&" ) );
const std__string__string or_fixed_chars = renderer__replace_keyword_outside_strings( and_fixed_chars , std__string__str ( "or" ) , std__string__str ( "||" ) );
return std__string__strip( or_fixed_chars );
}
const std__string__string normalized_only = trimmed;
std__string__StringBuilder sb_norm = std__string__StringBuilder__init( std__string__str_len ( normalized_only ) + 16 );
int32_t jn = 0;
const int32_t norm_len = (int32_t)( std__string__str_len ( normalized_only ) );
bool in_string_norm = false;
while (1) {
if (jn >= norm_len) {
break;
}
const char chn = std__string__get_char( normalized_only , jn );
if (chn == '"' && ( jn == 0 || std__string__get_char ( normalized_only , jn - 1 ) != '\\' )) {
in_string_norm = ! in_string_norm;
std__string__StringBuilder__append_char(&sb_norm, chn);
jn = jn + 1;
continue;
}
if (in_string_norm) {
std__string__StringBuilder__append_char(&sb_norm, chn);
jn = jn + 1;
continue;
}
if (chn == ' ' || chn == '\t' || chn == '\n') {
char prev = '\0';
char next = '\0';
int32_t kprev = jn - 1;
while (1) {
if (kprev < 0) {
break;
}
const char cprev = std__string__get_char( normalized_only , kprev );
if (cprev != ' ' && cprev != '\t' && cprev != '\n') {
prev = cprev;
break;
}
kprev = kprev - 1;
}
int32_t knext = jn + 1;
while (1) {
if (knext >= norm_len) {
break;
}
const char cnext = std__string__get_char( normalized_only , knext );
if (cnext != ' ' && cnext != '\t' && cnext != '\n') {
next = cnext;
break;
}
knext = knext + 1;
}
if (( prev >= '0' && prev <= '9' && next == '.' ) || ( prev == '.' && next >= '0' && next <= '9' )) {
}
else if (renderer__is_token_char ( prev ) && renderer__is_token_char ( next )) {
if (next == '_') {
}
else if (( prev == '+' && next == '=' ) || ( prev == '-' && next == '=' )) {
}
else if (renderer__is_ident_start ( prev ) && ! renderer__is_ident_start ( next )) {
std__string__StringBuilder__append_char(&sb_norm, ' ');
}
else if (! renderer__is_ident_start ( next )) {
}
else {
std__string__StringBuilder__append_char(&sb_norm, ' ');
}
}
else {
std__string__StringBuilder__append_char(&sb_norm, ' ');
}
}
else {
std__string__StringBuilder__append_char(&sb_norm, chn);
}
jn = jn + 1;
}
const std__string__string out_norm = std__string__StringBuilder__to_string( &sb_norm );
std__string__StringBuilder__destroy(&sb_norm);
const std__string__string norm_no_sugar = std__string__strip( out_norm );
gstate__debug_print_raw("\n[DBG-EXPR] no-sugar final:");
gstate__debug_print_str(norm_no_sugar);
const std__string__string addr_fixed = renderer__rewrite_adr( norm_no_sugar );
const std__string__string deref_fixed = renderer__rewrite_dereference( addr_fixed );
const std__string__string ptr_fixed = renderer__rewrite_ref_member_access( deref_fixed );
const std__string__string methods_fixed = renderer__rewrite_method_calls( ptr_fixed );
const std__string__string sizeof_fixed = renderer__rewrite_sizeof_types( methods_fixed );
const std__string__string calls_fixed_no_sugar = renderer__rewrite_function_calls( sizeof_fixed );
const std__string__string len_fixed_no_sugar = renderer__rewrite_len_calls( calls_fixed_no_sugar );
const std__string__string enum_fixed_no_sugar = renderer__rewrite_enum_member_refs( len_fixed_no_sugar );
const std__string__string prefixes_fixed_no_sugar = renderer__rewrite_function_prefixes( enum_fixed_no_sugar );
const std__string__string global_vars_fixed = renderer__rewrite_global_var_refs( prefixes_fixed_no_sugar );
const std__string__string mod_fixed_no_sugar = renderer__replace_keyword_outside_strings( global_vars_fixed , std__string__str ( "mod" ) , std__string__str ( "%" ) );
const std__string__string and_fixed_no_sugar = renderer__replace_keyword_outside_strings( mod_fixed_no_sugar , std__string__str ( "and" ) , std__string__str ( "&&" ) );
const std__string__string or_fixed_no_sugar = renderer__replace_keyword_outside_strings( and_fixed_no_sugar , std__string__str ( "or" ) , std__string__str ( "||" ) );
return std__string__strip( or_fixed_no_sugar );
}
std__string__string result = trimmed;
gstate__debug_print_raw("\n[DBG-EXPR] raw expr before sugar/C:");
gstate__debug_print_str(expr);
gstate__debug_print_raw("\n[DBG-EXPR] trimmed:");
gstate__debug_print_str(trimmed);
if (has_pointer_sugar) {
std__string__StringBuilder sb_sugar = std__string__StringBuilder__init( std__string__str_len ( result ) + 32 );
bool in_str2 = false;
int32_t j = 0;
const int32_t result_len = (int32_t)( std__string__str_len ( result ) );
while (1) {
if (j >= result_len) {
break;
}
const char ch2 = std__string__get_char( result , j );
if (ch2 == '"' && ( j == 0 || std__string__get_char ( result , j - 1 ) != '\\' )) {
in_str2 = ! in_str2;
std__string__StringBuilder__append_char(&sb_sugar, ch2);
}
else if (! in_str2 && ch2 == '*') {
int32_t k = j + 1;
while (1) {
if (k >= result_len) {
break;
}
const char ws = std__string__get_char( result , k );
if (ws != ' ' && ws != '\t' && ws != '\n') {
break;
}
k = k + 1;
}
if (k < result_len && std__string__get_char ( result , k ) == '.') {
std__string__StringBuilder__append_c(&sb_sugar, "->");
j = k;
}
else {
std__string__StringBuilder__append_char(&sb_sugar, ch2);
}
}
else {
std__string__StringBuilder__append_char(&sb_sugar, ch2);
}
j = j + 1;
}
result = std__string__StringBuilder__to_string( &sb_sugar );
std__string__StringBuilder__destroy(&sb_sugar);
}
if (has_c_prefix) {
result = std__string__substring_se ( result , c_prefix_end , (int32_t)( std__string__str_len ( result ) ) );
}
result = renderer__strip_all_c_prefixes ( result );
const std__string__string normalized = result;
gstate__debug_print_raw("\n[DBG-EXPR] after sugar/C before normalize:");
gstate__debug_print_str(normalized);
std__string__StringBuilder sb_final = std__string__StringBuilder__init( std__string__str_len ( normalized ) + 32 );
int32_t jf = 0;
const int32_t normalized_len = (int32_t)( std__string__str_len ( normalized ) );
bool in_string_final = false;
while (1) {
if (jf >= normalized_len) {
break;
}
const char chf = std__string__get_char( normalized , jf );
if (chf == '"' && ( jf == 0 || std__string__get_char ( normalized , jf - 1 ) != '\\' )) {
in_string_final = ! in_string_final;
std__string__StringBuilder__append_char(&sb_final, chf);
jf = jf + 1;
continue;
}
if (in_string_final) {
std__string__StringBuilder__append_char(&sb_final, chf);
jf = jf + 1;
continue;
}
if (chf == ' ' || chf == '\t' || chf == '\n') {
char prev2 = '\0';
char next2 = '\0';
int32_t kp = jf - 1;
while (1) {
if (kp < 0) {
break;
}
const char cp = std__string__get_char( normalized , kp );
if (cp != ' ' && cp != '\t' && cp != '\n') {
prev2 = cp;
break;
}
kp = kp - 1;
}
int32_t kn = jf + 1;
while (1) {
if (kn >= normalized_len) {
break;
}
const char cn = std__string__get_char( normalized , kn );
if (cn != ' ' && cn != '\t' && cn != '\n') {
next2 = cn;
break;
}
kn = kn + 1;
}
if (( prev2 >= '0' && prev2 <= '9' && next2 == '.' ) || ( prev2 == '.' && next2 >= '0' && next2 <= '9' )) {
}
else if (renderer__is_token_char ( prev2 ) && renderer__is_token_char ( next2 )) {
if (next2 == '_') {
}
else if (( prev2 == '+' && next2 == '=' ) || ( prev2 == '-' && next2 == '=' )) {
}
else if (! renderer__is_ident_start ( next2 )) {
}
else {
std__string__StringBuilder__append_c(&sb_final, " ");
}
}
else {
std__string__StringBuilder__append_c(&sb_final, " ");
}
}
else {
std__string__StringBuilder__append_char(&sb_final, chf);
}
jf = jf + 1;
}
const std__string__string out_final = std__string__StringBuilder__to_string( &sb_final );
std__string__StringBuilder__destroy(&sb_final);
const std__string__string first_pass = std__string__strip( out_final );
gstate__debug_print_raw("\nFIRST PASS:");
gstate__debug_print_str(first_pass);
const std__string__string fixed = std__string__replace_all( first_pass , std__string__str ( "->" ) , std__string__str ( "->" ) );
gstate__debug_print_raw("\nFIXED:");
gstate__debug_print_str(fixed);
const std__string__string addr_fixed2 = renderer__rewrite_adr( fixed );
const std__string__string deref_fixed2 = renderer__rewrite_dereference( addr_fixed2 );
const std__string__string ptr_fixed2 = renderer__rewrite_ref_member_access( deref_fixed2 );
const std__string__string methods_fixed2 = renderer__rewrite_method_calls( ptr_fixed2 );
const std__string__string sizeof_fixed2 = renderer__rewrite_sizeof_types( methods_fixed2 );
const std__string__string calls_fixed = renderer__rewrite_function_calls( sizeof_fixed2 );
const std__string__string len_fixed = renderer__rewrite_len_calls( calls_fixed );
const std__string__string enum_fixed = renderer__rewrite_enum_member_refs( len_fixed );
const std__string__string prefixes_fixed = renderer__rewrite_function_prefixes( enum_fixed );
const std__string__string mod_fixed = renderer__replace_keyword_outside_strings( prefixes_fixed , std__string__str ( "mod" ) , std__string__str ( "%" ) );
const std__string__string and_fixed = renderer__replace_keyword_outside_strings( mod_fixed , std__string__str ( "and" ) , std__string__str ( "&&" ) );
const std__string__string or_fixed = renderer__replace_keyword_outside_strings( and_fixed , std__string__str ( "or" ) , std__string__str ( "||" ) );
return std__string__strip( or_fixed );
}

std__string__string renderer__generate_stack_trace_headers() {
std__string__string code = std__string__str( "" );
#ifdef _WIN32
code = std__string__concat_c ( code , "#include <dbghelp.h>\n" );
#endif
#ifndef _WIN32
code = std__string__concat_c ( code , "#include <execinfo.h>\n" );
code = std__string__concat_c ( code , "#include <signal.h>\n" );
code = std__string__concat_c ( code , "#include <unistd.h>\n" );
#endif
code = std__string__concat_c ( code , "\n" );
#ifdef _WIN32
code = std__string__concat_c ( code , "static void axe_win_print_backtrace(void) {\n" );
code = std__string__concat_c ( code , "    HANDLE process = GetCurrentProcess();\n" );
code = std__string__concat_c ( code , "    SymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_UNDNAME | SYMOPT_LOAD_LINES);\n" );
code = std__string__concat_c ( code , "    SymInitialize(process, NULL, TRUE);\n" );
code = std__string__concat_c ( code , "\n" );
code = std__string__concat_c ( code , "    void* stack[64];\n" );
code = std__string__concat_c ( code , "    USHORT frames = CaptureStackBackTrace(0, 64, stack, NULL);\n" );
code = std__string__concat_c ( code , "    fprintf(stderr, \"Backtrace (%u frames):\\n\", (unsigned)frames);\n" );
code = std__string__concat_c ( code , "\n" );
code = std__string__concat_c ( code , "    SYMBOL_INFO* symbol = (SYMBOL_INFO*)malloc(sizeof(SYMBOL_INFO) + 256);\n" );
code = std__string__concat_c ( code , "    if (!symbol) return;\n" );
code = std__string__concat_c ( code , "    memset(symbol, 0, sizeof(SYMBOL_INFO) + 256);\n" );
code = std__string__concat_c ( code , "    symbol->MaxNameLen = 255;\n" );
code = std__string__concat_c ( code , "    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);\n" );
code = std__string__concat_c ( code , "\n" );
code = std__string__concat_c ( code , "    for (USHORT i = 0; i < frames; i++) {\n" );
code = std__string__concat_c ( code , "        DWORD64 address = (DWORD64)(stack[i]);\n" );
code = std__string__concat_c ( code , "        if (SymFromAddr(process, address, 0, symbol)) {\n" );
code = std__string__concat_c ( code , "            fprintf(stderr, \"  #%02u 0x%llx %s\\n\", (unsigned)i, (unsigned long long)address, symbol->Name);\n" );
code = std__string__concat_c ( code , "        } else {\n" );
code = std__string__concat_c ( code , "            fprintf(stderr, \"  #%02u 0x%llx <unknown>\\n\", (unsigned)i, (unsigned long long)address);\n" );
code = std__string__concat_c ( code , "        }\n" );
code = std__string__concat_c ( code , "    }\n" );
code = std__string__concat_c ( code , "    free(symbol);\n" );
code = std__string__concat_c ( code , "}\n" );
code = std__string__concat_c ( code , "\n" );
code = std__string__concat_c ( code , "static LONG WINAPI axe_unhandled_exception_filter(EXCEPTION_POINTERS* info) {\n" );
code = std__string__concat_c ( code , "    (void)info;\n" );
code = std__string__concat_c ( code , "    fprintf(stderr, \"Fatal: Unhandled exception.\\n\");\n" );
code = std__string__concat_c ( code , "    axe_win_print_backtrace();\n" );
code = std__string__concat_c ( code , "    fflush(stderr);\n" );
code = std__string__concat_c ( code , "    ExitProcess(1);\n" );
code = std__string__concat_c ( code , "    return EXCEPTION_EXECUTE_HANDLER;\n" );
code = std__string__concat_c ( code , "}\n" );
#endif
#ifndef _WIN32
code = std__string__concat_c ( code , "static void axe_segv_handler(int sig) {\n" );
code = std__string__concat_c ( code , "    const char* name = (sig == SIGSEGV ? \"SIGSEGV\" : (sig == SIGABRT ? \"SIGABRT\" : \"SIGNAL\"));\n" );
code = std__string__concat_c ( code , "    fprintf(stderr, \"Fatal: %s received.\\n\", name);\n" );
code = std__string__concat_c ( code , "    void* frames[64];\n" );
code = std__string__concat_c ( code , "    int n = backtrace(frames, 64);\n" );
code = std__string__concat_c ( code , "    if (n > 0) {\n" );
code = std__string__concat_c ( code , "        fprintf(stderr, \"Backtrace (%d frames):\\n\", n);\n" );
code = std__string__concat_c ( code , "        backtrace_symbols_fd(frames, n, fileno(stderr));\n" );
code = std__string__concat_c ( code , "    }\n" );
code = std__string__concat_c ( code , "    fflush(stderr);\n" );
code = std__string__concat_c ( code , "    _exit(139);\n" );
code = std__string__concat_c ( code , "}\n" );
#endif
return code;
}

std__string__string renderer__generate_stack_trace_setup() {
std__string__string code = std__string__str( "" );
#ifdef _WIN32
code = std__string__concat_c ( code , "    SetUnhandledExceptionFilter(axe_unhandled_exception_filter);\n" );
#endif
#ifndef _WIN32
code = std__string__concat_c ( code , "    signal(SIGSEGV, axe_segv_handler);\n" );
code = std__string__concat_c ( code , "    signal(SIGABRT, axe_segv_handler);\n" );
#endif
return code;
}

std__string__string renderer__generate_function_prototype(structs__ASTNode* ast) {
if (ast == nil) {
return std__string__str( "" );
}
const std__string__string func_name_raw = ast->data.function.name;
if (std__string__equals_c ( func_name_raw , "main" )) {
return std__string__str( "" );
}
std__string__string func_name = func_name_raw;
int32_t sep = - 1;
int32_t i = 0;
const int32_t n = std__string__str_len( func_name );
while (1) {
if (i + 1 >= n) {
break;
}
const char c1 = std__string__get_char( func_name , i );
const char c2 = std__string__get_char( func_name , i + 1 );
if (c1 == '_' && c2 == '_') {
sep = i;
}
i++;
}
if (sep >= 0 && sep + 2 < n) {
const std__string__string model_part = std__string__substring_se( func_name , 0 , sep );
const std__string__string method_part = std__string__substring_se( func_name , sep + 2 , n );
bool has_inner_sep = false;
int32_t j = 0;
const int32_t mlen = std__string__str_len( model_part );
while (1) {
if (j + 1 >= mlen) {
break;
}
const char mc1 = std__string__get_char( model_part , j );
const char mc2 = std__string__get_char( model_part , j + 1 );
if (mc1 == '_' && mc2 == '_') {
has_inner_sep = true;
break;
}
j = j + 1;
}
if (! has_inner_sep) {
const std__string__string canon_model = renderer__canonical_model_c_name( model_part );
if (std__string__str_len ( canon_model ) > 0) {
std__string__StringBuilder sb_name = std__string__StringBuilder__init( 1256 );
std__string__StringBuilder__append(&sb_name, canon_model);
std__string__StringBuilder__append_c(&sb_name, "__");
std__string__StringBuilder__append(&sb_name, method_part);
func_name = std__string__StringBuilder__to_string( &sb_name );
std__string__StringBuilder__destroy(&sb_name);
}
}
}
if (sep >= 0) {
if (std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
func_name = std__maps__StringStringMap__get( &g_function_prefixes , func_name );
}
}
std__string__string return_type = ast->data.function.return_type;
if (std__string__str_len ( return_type ) == 0) {
return_type = std__string__str ( "void" );
}
const std__string__string mapped_return_type = renderer__map_axe_type_to_c( return_type );
std__string__StringBuilder sb = std__string__StringBuilder__init( 1512 );
bool is_inline = false;
const __list_std__string_t* tags = ast->data.function.tags;
if (tags != nil) {
int32_t ti = 0;
while (1) {
if (ti >= len_v((*tags))) {
break;
}
if (std__string__equals_c ( tags->data[ ti ], "inline" )) {
is_inline = true;
break;
}
ti++;
}
}
if (is_inline) {
std__string__StringBuilder__append_c(&sb, "static ");
}
std__string__StringBuilder__append(&sb, mapped_return_type);
std__string__StringBuilder__append_char(&sb, ' ');
std__string__StringBuilder__append(&sb, func_name);
std__string__StringBuilder__append_char(&sb, '(');
const __list_std__string_t* params = ast->data.function.params;
if (params != nil) {
int32_t param_idx = 0;
while (1) {
if (param_idx >= len_v((*params))) {
break;
}
if (param_idx > 0) {
std__string__StringBuilder__append_c(&sb, ", ");
}
const std__string__string param = params->data[ param_idx ];
const int32_t colon_pos = std__string__find_char_from( param , ':' , (uintptr_t)( 0 ) );
if (colon_pos >= 0) {
const std__string__string param_name = std__string__strip( std__string__substring_se ( param , 0 , colon_pos ) );
const std__string__string param_type = std__string__strip( std__string__substr ( param , colon_pos + 1 , std__string__str_len ( param ) - colon_pos - 1 ) );
const std__string__string processed_type = renderer__process_parameter_type( param_type );
std__string__StringBuilder__append(&sb, processed_type);
std__string__StringBuilder__append_char(&sb, ' ');
std__string__StringBuilder__append(&sb, param_name);
}
else {
std__string__StringBuilder__append(&sb, param);
}
param_idx = param_idx + 1;
}
}
std__string__StringBuilder__append_c(&sb, ");\n");
const std__string__string result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}

std__string__string renderer__generate_global_decl(structs__ASTNode* ast) {
std__string__string result = std__string__str( "" );
if (ast == nil) {
return result;
}
const std__string__string var_name = ast->data.declaration.name;
std__string__string type_name = ast->data.declaration.type_name;
const bool is_mutable = ast->data.declaration.is_mutable;
const std__string__string initializer = ast->data.declaration.initializer;
renderer__validate_type_imported(type_name);
std__string__string mapped_type = renderer__map_axe_type_to_c( type_name );
if (std__string__str_len ( type_name ) == 0) {
std__string__string trimmed_init = std__string__strip( initializer );
if (std__string__has_prefix ( trimmed_init , std__string__str ( "new " ) )) {
trimmed_init = std__string__substring_se ( trimmed_init , 4 , (int32_t)( std__string__str_len ( trimmed_init ) ) );
trimmed_init = std__string__strip ( trimmed_init );
int32_t end_pos = - 1;
int32_t i = 0;
while (1) {
if (i >= std__string__str_len ( trimmed_init )) {
break;
}
const char ch = std__string__get_char( trimmed_init , i );
if (ch == '(' || ch == ' ' || ch == '\t') {
end_pos = i;
break;
}
i++;
}
if (end_pos < 0) {
end_pos = std__string__str_len ( trimmed_init );
}
const std__string__string inferred_name = std__string__strip( std__string__substring_se ( trimmed_init , 0 , end_pos ) );
if (std__string__str_len ( inferred_name ) > 0) {
type_name = inferred_name;
mapped_type = renderer__map_axe_type_to_c ( type_name );
}
}
else {
const int32_t brace_pos = std__string__find_char_from( trimmed_init , '{' , (uintptr_t)( 0 ) );
if (brace_pos > 0) {
const std__string__string inferred_name2 = std__string__strip( std__string__substring_se ( trimmed_init , 0 , brace_pos ) );
if (std__string__str_len ( inferred_name2 ) > 0) {
type_name = inferred_name2;
mapped_type = renderer__map_axe_type_to_c ( type_name );
}
}
}
}
if (std__string__str_len ( var_name ) > 0 && std__string__str_len ( type_name ) > 0) {
std__arena__Arena arena = std__arena__Arena__create( 2560 );
std__maps__StringStringMap__set(&g_var_types, &arena, var_name, type_name);
if (std__string__has_prefix ( type_name , std__string__str ( "list(" ) )) {
int32_t paren_pos = 5;
int32_t depth = 1;
while (1) {
if (paren_pos >= std__string__str_len ( type_name )) {
break;
}
const char ch = std__string__get_char( type_name , paren_pos );
if (ch == '(') {
depth = depth + 1;
}
else if (ch == ')') {
depth = depth - 1;
if (depth == 0) {
break;
}
}
paren_pos = paren_pos + 1;
}
const std__string__string element_type = std__string__strip( std__string__substr ( type_name , 5 , paren_pos - 5 ) );
std__arena__Arena list_arena = std__arena__Arena__create( 2560 );
std__maps__StringStringMap__set(&g_list_of_types, &list_arena, var_name, element_type);
}
else if (std__string__has_suffix ( type_name , std__string__str ( "[999]" ) )) {
const std__string__string element_type = std__string__strip( std__string__substring_se ( type_name , 0 , std__string__str_len ( type_name ) - 5 ) );
std__arena__Arena list_arena = std__arena__Arena__create( 2560 );
std__maps__StringStringMap__set(&g_list_of_types, &list_arena, var_name, element_type);
}
}
const std__string__string enum_model_name = renderer__canonical_model_c_name( type_name );
if (std__string__str_len ( enum_model_name ) > 0 && std__maps__StringBoolMap__contains( &g_enum_names , enum_model_name )) {
mapped_type = enum_model_name;
}
std__string__string array_suffix = std__string__str( "" );
const int32_t br = std__string__find_char_from( type_name , '[' , (uintptr_t)( 0 ) );
if (br >= 0) {
const std__string__string suffix = std__string__substring_se( type_name , br , (int32_t)( std__string__str_len ( type_name ) ) );
if (! std__string__equals_c ( suffix , "[999]" )) {
const std__string__string base_raw = std__string__strip( std__string__substring_se ( type_name , 0 , br ) );
if (std__string__str_len ( base_raw ) > 0) {
mapped_type = renderer__map_axe_type_to_c ( base_raw );
array_suffix = suffix;
}
}
}
const std__string__string emitted_name = var_name;
if (is_mutable) {
result = std__string__concat ( result , mapped_type );
result = std__string__concat_c ( result , " " );
result = std__string__concat ( result , emitted_name );
if (std__string__str_len ( array_suffix ) > 0) {
result = std__string__concat ( result , array_suffix );
}
}
else {
result = std__string__concat_c ( result , "const " );
result = std__string__concat ( result , mapped_type );
result = std__string__concat_c ( result , " " );
result = std__string__concat ( result , emitted_name );
if (std__string__str_len ( array_suffix ) > 0) {
result = std__string__concat ( result , array_suffix );
}
}
if (std__string__str_len ( initializer ) > 0) {
const std__string__string trimmed = std__string__strip( initializer );
const int32_t brace_idx = std__string__find_char_from( trimmed , '{' , (uintptr_t)( 0 ) );
if (brace_idx >= 0) {
const std__string__string type_part = std__string__strip( std__string__substring_se ( trimmed , 0 , brace_idx ) );
const std__string__string brace_part = std__string__substring_se( trimmed , brace_idx , (int32_t)( std__string__str_len ( trimmed ) ) );
if (std__string__str_len ( type_part ) > 0) {
result = std__string__concat_c ( result , " = " );
result = std__string__concat ( result , brace_part );
}
else {
result = std__string__concat_c ( result , " = " );
result = std__string__concat ( result , trimmed );
}
}
else {
const std__string__string processed_init = renderer__process_expression( trimmed );
result = std__string__concat_c ( result , " = " );
result = std__string__concat ( result , processed_init );
}
}
else {
const char first_char = std__string__get_char( mapped_type , 0 );
if (first_char >= 'A' && first_char <= 'Z') {
result = std__string__concat_c ( result , " = {0}" );
}
else if (std__string__has_prefix ( mapped_type , std__string__str ( "__list_" ) )) {
result = std__string__concat_c ( result , " = {0}" );
}
else if (std__string__has_prefix ( mapped_type , std__string__str ( "std__" ) )) {
result = std__string__concat_c ( result , " = {0}" );
}
}
result = std__string__concat_c ( result , ";\n" );
return result;
}

std__string__string renderer__generate_c(structs__ASTNode* ast) {
if (ast == nil) {
return std__string__str( "" );
}
g_current_line = ast->line;
g_current_source_file = ast->source_file;
const std__string__string node_type = ast->node_type;
std__string__string result = std__string__str( "" );
std__arena__Arena arena = std__arena__Arena__create( 1024 );
if (std__string__equals_c ( node_type , "MacroExpansion" )) {
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
const int32_t child_count = len_v((*children));
if (child_count == 0) {
return std__string__str( "" );
}
std__string__StringBuilder sb_macro = std__string__StringBuilder__init( 1024 );
int32_t i = 0;
while (1) {
if (i >= child_count) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i ]) );
std__string__StringBuilder__append(&sb_macro, child_code);
i++;
}
const std__string__string result_macro = std__string__StringBuilder__to_string( &sb_macro );
std__string__StringBuilder__destroy(&sb_macro);
return result_macro;
}
return std__string__str( "" );
}
if (std__string__equals_c ( node_type , "Overload" )) {
const std__string__string name = ast->data.overload_node.name;
std__string__string param_name = ast->data.overload_node.param_name;
std__string__string call_expr = ast->data.overload_node.call_expr;
if (std__string__str_len ( param_name ) == 0) {
param_name = std__string__str ( "x" );
}
if (std__string__str_len ( call_expr ) == 0) {
call_expr = param_name;
}
const __list_std__string_t* type_names_ref = ast->data.overload_node.type_names;
const __list_std__string_t* targets_ref = ast->data.overload_node.target_functions;
if (type_names_ref == nil || targets_ref == nil) {
return std__string__str( "" );
}
const int32_t count = len_v((*type_names_ref));
if (count == 0 || count != len_v((*targets_ref))) {
return std__string__str( "" );
}
std__string__StringBuilder sb_top_level = std__string__StringBuilder__init( 1024 );
std__string__StringBuilder__append_c(&sb_top_level, "#define ");
std__string__StringBuilder__append(&sb_top_level, name);
std__string__StringBuilder__append_c(&sb_top_level, "(");
std__string__StringBuilder__append(&sb_top_level, param_name);
std__string__StringBuilder__append_c(&sb_top_level, ") _Generic((");
std__string__StringBuilder__append(&sb_top_level, call_expr);
std__string__StringBuilder__append_c(&sb_top_level, "), \\\n");
int32_t i_ov = 0;
while (1) {
if (i_ov >= count) {
break;
}
const std__string__string axe_type = type_names_ref->data[ i_ov ];
std__string__string target_name = targets_ref->data[ i_ov ];
const std__string__string mapped_type = renderer__map_axe_type_to_c( axe_type );
if (std__maps__StringStringMap__contains( &g_function_prefixes , target_name )) {
const std__string__string prefixed_target = std__maps__StringStringMap__get( &g_function_prefixes , target_name );
target_name = prefixed_target;
}
std__string__StringBuilder__append_c(&sb_top_level, "    ");
std__string__StringBuilder__append(&sb_top_level, mapped_type);
std__string__StringBuilder__append_c(&sb_top_level, ": ");
std__string__StringBuilder__append(&sb_top_level, target_name);
if (i_ov < count - 1) {
std__string__StringBuilder__append_c(&sb_top_level, ", \\\n");
}
else {
std__string__StringBuilder__append_c(&sb_top_level, " \\\n");
}
i_ov = i_ov + 1;
}
std__string__StringBuilder__append_c(&sb_top_level, "    )(");
std__string__StringBuilder__append(&sb_top_level, call_expr);
std__string__StringBuilder__append_c(&sb_top_level, ")\n");
return std__string__StringBuilder__to_string( &sb_top_level );
}
if (std__string__equals_c ( node_type , "Program" )) {
if (! bootstrap_mode) {
g_emit_line_directives = true;
}
std__arena__Arena ext_arena = std__arena__Arena__create( 4096 );
std__lists__StringList__clear(g_global_external_headers);
std__lists__StringList__clear(g_windows_external_headers);
std__lists__StringList__clear(g_posix_external_headers);
renderer__collect_external_imports(ast, std__string__str(""), &ext_arena);
renderer__collect_foreign_types(ast);
renderer__build_function_signatures(ast);
std__string__StringBuilder sb = std__string__StringBuilder__init( 1024 * 256 );
std__string__StringBuilder__append_c(&sb,              "#define nil ((void*)0)\n#include <stdio.h>\n#include <stdbool.h>\n#include <stdlib.h>\n#include <string.h>\n#include <stdint.h>\n#define len_ptr(x) ((x)->len)\n#define len_v(x) ((&(x))->len)\n#define len(x) len_v(x)\n");
std__string__StringBuilder__append_c(&sb, "\n#ifdef _WIN32\n#define NOMINMAX\n#define NOGDI\n#define WIN32_LEAN_AND_MEAN\n#include <windows.h>\n#endif\n");
std__string__StringBuilder__append_c(&sb, "\n#ifdef __APPLE__\n#include <ctype.h>\n#include <mach-o/dyld.h>\n#endif\n");
int32_t ghi = 0;
while (1) {
if (ghi >= g_global_external_headers->len) {
break;
}
const std__string__string gh = std__lists__StringList__get( g_global_external_headers , ghi );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, gh);
std__string__StringBuilder__append_c(&sb, ">\n");
ghi = ghi + 1;
}
if (g_windows_external_headers->len> 0) {
std__string__StringBuilder__append_c(&sb, "#ifdef _WIN32\n");
int32_t whi = 0;
while (1) {
if (whi >= g_windows_external_headers->len) {
break;
}
const std__string__string wh = std__lists__StringList__get( g_windows_external_headers , whi );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, wh);
std__string__StringBuilder__append_c(&sb, ">\n");
whi = whi + 1;
}
std__string__StringBuilder__append_c(&sb, "#endif\n");
}
if (g_posix_external_headers->len> 0) {
std__string__StringBuilder__append_c(&sb, "#ifndef _WIN32\n");
int32_t phi = 0;
while (1) {
if (phi >= g_posix_external_headers->len) {
break;
}
const std__string__string ph = std__lists__StringList__get( g_posix_external_headers , phi );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, ph);
std__string__StringBuilder__append_c(&sb, ">\n");
phi = phi + 1;
}
std__string__StringBuilder__append_c(&sb, "#endif\n");
}
if (g_linux_external_headers->len> 0) {
std__string__StringBuilder__append_c(&sb, "#ifdef __linux__\n");
int32_t i_l = 0;
while (1) {
if (i_l >= g_linux_external_headers->len) {
break;
}
const std__string__string h = std__lists__StringList__get( g_linux_external_headers , i_l );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, h);
std__string__StringBuilder__append_c(&sb, ">\n");
i_l = i_l + 1;
}
std__string__StringBuilder__append_c(&sb, "#endif\n");
}
if (g_macos_external_headers->len> 0) {
std__string__StringBuilder__append_c(&sb, "#ifdef __APPLE__\n");
int32_t i_m = 0;
while (1) {
if (i_m >= g_macos_external_headers->len) {
break;
}
const std__string__string h = std__lists__StringList__get( g_macos_external_headers , i_m );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, h);
std__string__StringBuilder__append_c(&sb, ">\n");
i_m = i_m + 1;
}
std__string__StringBuilder__append_c(&sb, "#endif\n");
}
if (g_freebsd_external_headers->len> 0) {
std__string__StringBuilder__append_c(&sb, "#ifdef __FreeBSD__\n");
int32_t i_fb = 0;
while (1) {
if (i_fb >= g_freebsd_external_headers->len) {
break;
}
const std__string__string h = std__lists__StringList__get( g_freebsd_external_headers , i_fb );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, h);
std__string__StringBuilder__append_c(&sb, ">\n");
i_fb = i_fb + 1;
}
std__string__StringBuilder__append_c(&sb, "#endif\n");
}
if (g_openbsd_external_headers->len> 0) {
std__string__StringBuilder__append_c(&sb, "#ifdef __OpenBSD__\n");
int32_t i_ob = 0;
while (1) {
if (i_ob >= g_openbsd_external_headers->len) {
break;
}
const std__string__string h = std__lists__StringList__get( g_openbsd_external_headers , i_ob );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, h);
std__string__StringBuilder__append_c(&sb, ">\n");
i_ob = i_ob + 1;
}
std__string__StringBuilder__append_c(&sb, "#endif\n");
}
if (g_netbsd_external_headers->len> 0) {
std__string__StringBuilder__append_c(&sb, "#ifdef __NetBSD__\n");
int32_t i_nb = 0;
while (1) {
if (i_nb >= g_netbsd_external_headers->len) {
break;
}
const std__string__string h = std__lists__StringList__get( g_netbsd_external_headers , i_nb );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, h);
std__string__StringBuilder__append_c(&sb, ">\n");
i_nb = i_nb + 1;
}
std__string__StringBuilder__append_c(&sb, "#endif\n");
}
if (g_dragonflybsd_external_headers->len> 0) {
std__string__StringBuilder__append_c(&sb, "#ifdef __DragonFly__\n");
int32_t i_df = 0;
while (1) {
if (i_df >= g_dragonflybsd_external_headers->len) {
break;
}
const std__string__string h = std__lists__StringList__get( g_dragonflybsd_external_headers , i_df );
std__string__StringBuilder__append_c(&sb, "#include <");
std__string__StringBuilder__append(&sb, h);
std__string__StringBuilder__append_c(&sb, ">\n");
i_df = i_df + 1;
}
std__string__StringBuilder__append_c(&sb, "#endif\n");
}
if (! is_release_build) {
const std__string__string stack_headers = renderer__generate_stack_trace_headers( );
std__string__StringBuilder__append(&sb, stack_headers);
}
std__string__StringBuilder__append_c(&sb, "\nint __axe_argc = 0;\nchar** __axe_argv = NULL;\n\n");
result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
renderer__build_function_prefixes(ast);
renderer__build_function_signatures(ast);
if (ast->children!= nil) {
std__arena__Arena use_arena = std__arena__Arena__create( 4096 );
const __list_structs__ASTNode_t* use_children = ast->children;
const std__string__string dot_str = std__string__str( "." );
const std__string__string underscore_str = std__string__str( "_" );
const std__string__string double_underscore_str = std__string__str( "__" );
const std__string__string dash_str = std__string__str( "-" );
int32_t ui = 0;
while (1) {
if (ui >= len_v((*use_children))) {
break;
}
const structs__ASTNode* uchild = &(use_children->data[ ui ]);
if (std__string__equals_c ( uchild->node_type, "Use" )) {
const std__string__string module_name = uchild->data.use_node.module_name;
std__string__string module_prefix = std__string__replace_all( module_name , dot_str , double_underscore_str );
module_prefix = std__string__replace_all ( module_prefix , dash_str , underscore_str );
const __list_std__string_t* imports = uchild->data.use_node.imports;
if (imports != nil) {
int32_t ii = 0;
while (1) {
if (ii >= imports->len) {
break;
}
const std__string__string import_name = imports->data[ ii ];
if (std__string__str_len ( import_name ) > 0) {
const char first_char = std__string__get_char( import_name , 0 );
if (first_char >= 'a' && first_char <= 'z') {
if (! std__maps__StringStringMap__contains( &g_function_prefixes , import_name )) {
std__string__StringBuilder sb_prefix = std__string__StringBuilder__init( std__string__str_len ( module_prefix ) + std__string__str_len ( import_name ) + 2 );
std__string__StringBuilder__append(&sb_prefix, module_prefix);
std__string__StringBuilder__append(&sb_prefix, double_underscore_str);
std__string__StringBuilder__append(&sb_prefix, import_name);
const std__string__string prefixed_name = std__string__StringBuilder__to_string( &sb_prefix );
std__string__StringBuilder__destroy(&sb_prefix);
std__maps__StringStringMap__set(&g_function_prefixes, &use_arena, import_name, prefixed_name);
}
}
}
ii++;
}
}
}
ui++;
}
}
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children_for_models = ast->children;
const int32_t children_count = len_v((*children_for_models));
std__arena__Arena model_name_arena = std__arena__Arena__create( 1024 * 64 );
int32_t mi = 0;
while (1) {
if (mi >= children_count) {
break;
}
const structs__ASTNode* mchild = &(children_for_models->data[ mi ]);
if (std__string__equals_c ( mchild->node_type, "Model" ) || std__string__equals_c ( mchild->node_type, "Enum" )) {
std__string__string cname = std__string__str( "" );
if (std__string__equals_c ( mchild->node_type, "Model" )) {
cname = mchild->data.model_node.name;
}
else {
cname = mchild->data.enum_node.name;
}
std__string__string base = cname;
int32_t last_sep = - 1;
int32_t bi = 0;
const int32_t nlen = std__string__str_len( cname );
while (1) {
if (bi + 1 >= nlen) {
break;
}
const char c1 = std__string__get_char( cname , bi );
const char c2 = std__string__get_char( cname , bi + 1 );
if (c1 == '_' && c2 == '_') {
last_sep = bi;
}
bi++;
}
if (last_sep >= 0 && last_sep + 2 < nlen) {
base = std__string__substring_se ( cname , last_sep + 2 , nlen );
}
if (std__string__str_len ( base ) > 0) {
std__maps__StringStringMap__set(&g_model_names, &model_name_arena, base, cname);
}
std__maps__StringStringMap__set(&g_model_names, &model_name_arena, cname, cname);
if (std__string__equals_c ( mchild->node_type, "Enum" )) {
std__maps__StringBoolMap__set(&g_enum_names, &model_name_arena, cname, true);
if (std__string__str_len ( base ) > 0) {
std__maps__StringBoolMap__set(&g_enum_names, &model_name_arena, base, true);
}
}
}
mi++;
}
const __list_structs__ASTNode_t* children = ast->children;
const int32_t children_len = len_v((*children));
std__maps__StringBoolMap__clear(&g_list_element_types);
int32_t i_scan = 0;
while (1) {
if (i_scan >= children_len) {
break;
}
renderer__scan_for_list_types(&(children->data[i_scan]));
i_scan++;
}
int32_t i_more = 0;
while (1) {
if (i_more >= children_len) {
break;
}
const structs__ASTNode* cnode = &(children->data[ i_more ]);
if (std__string__equals_c ( cnode->node_type, "Function" )) {
const std__string__string ret_type = cnode->data.function.return_type;
const int32_t br = std__string__find_char_from( ret_type , '[' , (uintptr_t)( 0 ) );
if (br >= 0 && std__string__find_char_from ( ret_type , ']' , (uintptr_t)( br ) ) >= 0) {
std__string__string elementType = std__string__strip( std__string__substring_se ( ret_type , 0 , br ) );
if (std__string__has_prefix ( elementType , std__string__str ( "ref " ) )) {
elementType = std__string__strip ( std__string__substr ( elementType , 4 , std__string__str_len ( elementType ) - 4 ) );
}
const std__string__string mappedC = renderer__map_axe_type_to_c( elementType );
renderer__add_list_element(mappedC);
}
}
else if (std__string__equals_c ( cnode->node_type, "Model" )) {
const __list_std__string_t* field_names = cnode->data.model_node.field_names;
const __list_std__string_t* field_types = cnode->data.model_node.field_types;
if (field_names != nil && field_types != nil) {
int32_t fidx = 0;
while (1) {
if (fidx >= len_v((*field_types)) || fidx >= len_v((*field_names))) {
break;
}
const std__string__string ftype = field_types->data[ fidx ];
const int32_t br2 = std__string__find_char_from( ftype , '[' , (uintptr_t)( 0 ) );
if (br2 >= 0 && std__string__find_char_from ( ftype , ']' , (uintptr_t)( br2 ) ) >= 0) {
std__string__string elemCandidate = std__string__strip( std__string__substring_se ( ftype , 0 , br2 ) );
if (std__string__has_prefix ( elemCandidate , std__string__str ( "ref " ) )) {
elemCandidate = std__string__strip ( std__string__substr ( elemCandidate , 4 , std__string__str_len ( elemCandidate ) - 4 ) );
}
const std__string__string mappedElem = renderer__map_axe_type_to_c( elemCandidate );
renderer__add_list_element(mappedElem);
}
fidx++;
}
}
const __list_std__string_t* union_member_types = cnode->data.model_node.union_member_types;
if (union_member_types != nil) {
int32_t uidx = 0;
while (1) {
if (uidx >= len_v((*union_member_types))) {
break;
}
const std__string__string utype = union_member_types->data[ uidx ];
const int32_t ubr = std__string__find_char_from( utype , '[' , (uintptr_t)( 0 ) );
if (ubr >= 0 && std__string__find_char_from ( utype , ']' , (uintptr_t)( ubr ) ) >= 0) {
std__string__string uElemCandidate = std__string__strip( std__string__substring_se ( utype , 0 , ubr ) );
if (std__string__has_prefix ( uElemCandidate , std__string__str ( "ref " ) )) {
uElemCandidate = std__string__strip ( std__string__substr ( uElemCandidate , 4 , std__string__str_len ( uElemCandidate ) - 4 ) );
}
const std__string__string mappedUElem = renderer__map_axe_type_to_c( uElemCandidate );
renderer__add_list_element(mappedUElem);
}
uidx++;
}
}
}
i_more++;
}
std__string__StringBuilder sb_fwd = std__string__StringBuilder__init( 4096 );
int32_t i_models2 = 0;
while (1) {
if (i_models2 >= children_len) {
break;
}
const structs__ASTNode* m_child = &(children->data[ i_models2 ]);
if (std__string__equals_c ( m_child->node_type, "Model" )) {
std__string__string name = std__string__str( "" );
name = m_child->data.model_node.name;
if (! std__maps__StringBoolMap__contains( &g_generated_typedefs , name )) {
std__string__StringBuilder__append_c(&sb_fwd, "struct ");
std__string__StringBuilder__append(&sb_fwd, name);
std__string__StringBuilder__append_c(&sb_fwd, ";\n");
}
}
i_models2++;
}
int32_t i_models3 = 0;
while (1) {
if (i_models3 >= children_len) {
break;
}
const structs__ASTNode* m_child = &(children->data[ i_models3 ]);
if (std__string__equals_c ( m_child->node_type, "Model" )) {
std__string__string name2 = std__string__str( "" );
name2 = m_child->data.model_node.name;
if (! std__maps__StringBoolMap__contains( &g_generated_typedefs , name2 )) {
std__string__StringBuilder__append_c(&sb_fwd, "typedef struct ");
std__string__StringBuilder__append(&sb_fwd, name2);
std__string__StringBuilder__append_char(&sb_fwd, ' ');
std__string__StringBuilder__append(&sb_fwd, name2);
std__string__StringBuilder__append_c(&sb_fwd, ";\n");
}
}
i_models3++;
}
std__string__StringBuilder sb_prog = std__string__StringBuilder__init( 1024 * 512 );
std__string__StringBuilder__append(&sb_prog, result);
std__string__StringBuilder__append(&sb_prog, std__string__StringBuilder__to_string(&sb_fwd));
std__string__StringBuilder__destroy(&sb_fwd);
if (g_list_elements != nil) {
const std__lists__StringList* lst_ref = g_list_elements;
int32_t li = 0;
while (1) {
if (li >= lst_ref->len) {
break;
}
const std__string__string elemTypeStr = std__lists__StringList__get( lst_ref , li );
const std__string__string san = renderer__sanitize_list_element_name( elemTypeStr );
std__string__StringBuilder__append_c(&sb_prog, "typedef struct __list_");
std__string__StringBuilder__append(&sb_prog, san);
std__string__StringBuilder__append_c(&sb_prog, "_t __list_");
std__string__StringBuilder__append(&sb_prog, san);
std__string__StringBuilder__append_c(&sb_prog, "_t;\n");
li = li + 1;
}
}
int32_t i_opaque_plat = 0;
while (1) {
if (i_opaque_plat >= children_len) {
break;
}
const structs__ASTNode* op_plat = &(children->data[ i_opaque_plat ]);
if (std__string__equals_c ( op_plat->node_type, "Platform" )) {
const std__string__string platform_name = op_plat->data.platform_node.platform_name;
bool has_opaque = false;
if (op_plat->children!= nil) {
const __list_structs__ASTNode_t* plat_children = op_plat->children;
int32_t oc = 0;
while (1) {
if (oc >= len_v((*plat_children))) {
break;
}
const structs__ASTNode* oc_child = &(plat_children->data[ oc ]);
if (std__string__equals_c ( oc_child->node_type, "Opaque" ) || std__string__equals_c ( oc_child->node_type, "Foreign" )) {
has_opaque = true;
break;
}
oc++;
}
}
if (has_opaque) {
const std__string__string plat_dir = renderer__platform_macro_start( platform_name );
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append(&sb_prog, plat_dir);
}
const __list_structs__ASTNode_t* plat_children2 = op_plat->children;
int32_t oc2 = 0;
while (1) {
if (oc2 >= len_v((*plat_children2))) {
break;
}
const structs__ASTNode* oc_child2 = &(plat_children2->data[ oc2 ]);
if (std__string__equals_c ( oc_child2->node_type, "Opaque" )) {
const std__string__string opaque_code = renderer__generate_c( oc_child2 );
std__string__StringBuilder__append(&sb_prog, opaque_code);
}
else if (std__string__equals_c ( oc_child2->node_type, "Foreign" )) {
const std__string__string foreign_code = renderer__generate_c( oc_child2 );
std__string__StringBuilder__append(&sb_prog, foreign_code);
}
oc2++;
}
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append_c(&sb_prog, "#endif\n");
}
}
}
i_opaque_plat++;
}
int32_t i_enums = 0;
while (1) {
if (i_enums >= children_len) {
break;
}
const structs__ASTNode* enum_child = &(children->data[ i_enums ]);
if (std__string__equals_c ( enum_child->node_type, "Enum" )) {
const std__string__string e_code = renderer__generate_c( enum_child );
std__string__StringBuilder__append(&sb_prog, e_code);
}
i_enums = i_enums + 1;
}
std__arena__Arena model_arena = std__arena__Arena__create( 1024 * 64 );
std__lists__StringList* model_names_list = std__lists__StringList__create( &model_arena , 64 );
std__maps__StringIntMap model_indices = (*std__maps__StringIntMap__create( &model_arena , 128 ));
int32_t collect_idx = 0;
while (1) {
if (collect_idx >= children_len) {
break;
}
const structs__ASTNode* collect_child = &(children->data[ collect_idx ]);
if (std__string__equals_c ( collect_child->node_type, "Model" )) {
const std__string__string mname = collect_child->data.model_node.name;
std__string__string cname = renderer__canonical_model_c_name( mname );
if (std__string__str_len ( cname ) == 0) {
cname = mname;
}
if (! std__maps__StringIntMap__contains( &model_indices , cname )) {
std__lists__StringList__push(model_names_list, &model_arena, cname);
std__maps__StringIntMap__set(&model_indices, &model_arena, cname, model_names_list->len- 1);
}
}
collect_idx = collect_idx + 1;
}
const int32_t num_models = model_names_list->len;
std__lists__StringList* deps_lists = std__lists__StringList__create( &model_arena , num_models + 1 );
int32_t dep_init = 0;
while (1) {
if (dep_init >= num_models) {
break;
}
std__lists__StringList__push(deps_lists, &model_arena, std__string__str(""));
dep_init = dep_init + 1;
}
int32_t build_deps_idx = 0;
while (1) {
if (build_deps_idx >= children_len) {
break;
}
const structs__ASTNode* bdep_child = &(children->data[ build_deps_idx ]);
if (std__string__equals_c ( bdep_child->node_type, "Model" )) {
const std__string__string raw_model_name = bdep_child->data.model_node.name;
std__string__string this_model_name = renderer__canonical_model_c_name( raw_model_name );
if (std__string__str_len ( this_model_name ) == 0) {
this_model_name = raw_model_name;
}
const int32_t this_model_idx = std__maps__StringIntMap__get( &model_indices , this_model_name );
const __list_std__string_t* ftypes = bdep_child->data.model_node.field_types;
if (ftypes != nil) {
int32_t ft_idx = 0;
while (1) {
if (ft_idx >= len_v((*ftypes))) {
break;
}
const std__string__string ftype = ftypes->data[ ft_idx ];
const std__string__string base_type = renderer__get_base_type_from_field( ftype );
std__string__string mapped_type = renderer__map_axe_type_to_c( base_type );
if (! std__maps__StringIntMap__contains( &model_indices , mapped_type )) {
if (std__maps__StringIntMap__contains( &model_indices , base_type )) {
mapped_type = base_type;
}
}
if (std__maps__StringIntMap__contains( &model_indices , mapped_type )) {
if (std__string__compare ( mapped_type , this_model_name ) != 0) {
const std__string__string current_deps = std__lists__StringList__get( deps_lists , this_model_idx );
if (std__string__str_len ( current_deps ) == 0) {
deps_lists->data[this_model_idx] = mapped_type;
}
else if (std__string__find_substr ( current_deps , mapped_type ) < 0) {
std__string__StringBuilder sb_deps = std__string__StringBuilder__init( std__string__str_len ( current_deps ) + std__string__str_len ( mapped_type ) + 1 );
std__string__StringBuilder__append(&sb_deps, current_deps);
std__string__StringBuilder__append_c(&sb_deps, ",");
std__string__StringBuilder__append(&sb_deps, mapped_type);
deps_lists->data[this_model_idx] = std__string__StringBuilder__to_string( &sb_deps );
std__string__StringBuilder__destroy(&sb_deps);
}
}
}
ft_idx = ft_idx + 1;
}
}
const __list_std__string_t* union_types = bdep_child->data.model_node.union_member_types;
if (union_types != nil) {
int32_t ut_idx = 0;
while (1) {
if (ut_idx >= len_v((*union_types))) {
break;
}
const std__string__string utype = union_types->data[ ut_idx ];
const std__string__string ubase_type = renderer__get_base_type_from_field( utype );
std__string__string umapped_type = renderer__map_axe_type_to_c( ubase_type );
if (! std__maps__StringIntMap__contains( &model_indices , umapped_type )) {
if (std__maps__StringIntMap__contains( &model_indices , ubase_type )) {
umapped_type = ubase_type;
}
}
if (std__maps__StringIntMap__contains( &model_indices , umapped_type )) {
if (std__string__compare ( umapped_type , this_model_name ) != 0) {
const std__string__string current_deps = std__lists__StringList__get( deps_lists , this_model_idx );
if (std__string__str_len ( current_deps ) == 0) {
deps_lists->data[this_model_idx] = umapped_type;
}
else if (std__string__find_substr ( current_deps , umapped_type ) < 0) {
std__string__StringBuilder sb_udeps = std__string__StringBuilder__init( std__string__str_len ( current_deps ) + std__string__str_len ( umapped_type ) + 1 );
std__string__StringBuilder__append(&sb_udeps, current_deps);
std__string__StringBuilder__append_c(&sb_udeps, ",");
std__string__StringBuilder__append(&sb_udeps, umapped_type);
deps_lists->data[this_model_idx] = std__string__StringBuilder__to_string( &sb_udeps );
std__string__StringBuilder__destroy(&sb_udeps);
}
}
}
ut_idx = ut_idx + 1;
}
}
}
build_deps_idx = build_deps_idx + 1;
}
std__lists__IntList* visit_state = std__lists__IntList__create( &model_arena , num_models + 1 );
int32_t vs_init = 0;
while (1) {
if (vs_init >= num_models) {
break;
}
std__lists__IntList__push(visit_state, &model_arena, 0);
vs_init = vs_init + 1;
}
std__lists__StringList* sorted_order = std__lists__StringList__create( &model_arena , num_models + 1 );
int32_t start_node = 0;
while (1) {
if (start_node >= num_models) {
break;
}
if (std__lists__IntList__get( visit_state , start_node ) == 2) {
start_node = start_node + 1;
continue;
}
std__lists__IntList* stack_nodes = std__lists__IntList__create( &model_arena , 256 );
std__lists__IntList* stack_phases = std__lists__IntList__create( &model_arena , 256 );
std__lists__IntList__push(stack_nodes, &model_arena, start_node);
std__lists__IntList__push(stack_phases, &model_arena, 0);
while (1) {
if (stack_nodes->len== 0) {
break;
}
const int32_t curr_node = std__lists__IntList__get( stack_nodes , stack_nodes->len- 1 );
const int32_t curr_phase = std__lists__IntList__get( stack_phases , stack_phases->len- 1 );
stack_nodes->len = stack_nodes->len- 1;
stack_phases->len = stack_phases->len- 1;
const int32_t curr_state = std__lists__IntList__get( visit_state , curr_node );
if (curr_state == 2) {
continue;
}
if (curr_phase == 0) {
if (curr_state == 1) {
continue;
}
visit_state->data[curr_node] = 1;
std__lists__IntList__push(stack_nodes, &model_arena, curr_node);
std__lists__IntList__push(stack_phases, &model_arena, 1);
const std__string__string deps_str = std__lists__StringList__get( deps_lists , curr_node );
if (std__string__str_len ( deps_str ) > 0) {
int32_t dep_start = 0;
int32_t dep_pos = 0;
while (1) {
if (dep_pos > std__string__str_len ( deps_str )) {
break;
}
bool is_sep = dep_pos == std__string__str_len ( deps_str );
if (! is_sep) {
is_sep = std__string__get_char ( deps_str , dep_pos ) == ',';
}
if (is_sep) {
if (dep_pos > dep_start) {
const std__string__string dep_name = std__string__substr( deps_str , dep_start , dep_pos - dep_start );
if (std__maps__StringIntMap__contains( &model_indices , dep_name )) {
const int32_t dep_idx = std__maps__StringIntMap__get( &model_indices , dep_name );
if (std__lists__IntList__get( visit_state , dep_idx ) != 2) {
std__lists__IntList__push(stack_nodes, &model_arena, dep_idx);
std__lists__IntList__push(stack_phases, &model_arena, 0);
}
}
}
dep_start = dep_pos + 1;
}
dep_pos++;
}
}
}
else {
visit_state->data[curr_node] = 2;
const std__string__string model_name = std__lists__StringList__get( model_names_list , curr_node );
std__lists__StringList__push(sorted_order, &model_arena, model_name);
}
}
start_node = start_node + 1;
}
int32_t sorted_idx = 0;
while (1) {
if (sorted_idx >= sorted_order->len) {
break;
}
const std__string__string sorted_name = std__lists__StringList__get( sorted_order , sorted_idx );
int32_t find_idx = 0;
while (1) {
if (find_idx >= len_v((*children))) {
break;
}
const structs__ASTNode* find_child = &(children->data[ find_idx ]);
if (std__string__equals_c ( find_child->node_type, "Model" )) {
if (std__string__compare ( find_child->data.model_node.name, sorted_name ) == 0) {
const std__string__string m_code = renderer__generate_c( find_child );
std__string__StringBuilder__append(&sb_prog, m_code);
break;
}
}
find_idx++;
}
sorted_idx++;
}
if (g_list_elements != nil) {
const std__lists__StringList* lst_ref2 = g_list_elements;
int32_t ld = 0;
while (1) {
if (ld >= lst_ref2->len) {
break;
}
const std__string__string elemType = std__lists__StringList__get( lst_ref2 , ld );
const std__string__string elemSanDef = renderer__sanitize_list_element_name( elemType );
std__string__StringBuilder__append_c(&sb_prog, "typedef struct __list_");
std__string__StringBuilder__append(&sb_prog, elemSanDef);
std__string__StringBuilder__append_c(&sb_prog, "_t {\n    ");
std__string__StringBuilder__append(&sb_prog, elemType);
std__string__StringBuilder__append_c(&sb_prog, "* data;\n    int len;\n    int capacity;\n} __list_");
std__string__StringBuilder__append(&sb_prog, elemSanDef);
std__string__StringBuilder__append_c(&sb_prog, "_t;\n\n");
std__string__StringBuilder__append_c(&sb_prog, "static inline __list_");
std__string__StringBuilder__append(&sb_prog, elemSanDef);
std__string__StringBuilder__append_c(&sb_prog, "_t __list_");
std__string__StringBuilder__append(&sb_prog, elemSanDef);
std__string__StringBuilder__append_c(&sb_prog, "_init(void) {\n    __list_");
std__string__StringBuilder__append(&sb_prog, elemSanDef);
std__string__StringBuilder__append_c(&sb_prog, "_t list;\n    list.data = NULL;\n    list.len = 0;\n    list.capacity = 0;\n    return list;\n}\n\n");
std__string__StringBuilder__append_c(&sb_prog, "static inline void __list_");
std__string__StringBuilder__append(&sb_prog, elemSanDef);
std__string__StringBuilder__append_c(&sb_prog, "_push(__list_");
std__string__StringBuilder__append(&sb_prog, elemSanDef);
std__string__StringBuilder__append_c(&sb_prog, "_t* list, ");
std__string__StringBuilder__append(&sb_prog, elemType);
std__string__StringBuilder__append_c(&sb_prog, " item) {\n    if (list->len >= list->capacity) {\n        int new_capacity = list->capacity == 0 ? 8 : list->capacity * 2;\n        ");
std__string__StringBuilder__append(&sb_prog, elemType);
std__string__StringBuilder__append_c(&sb_prog, "* new_data = (");
std__string__StringBuilder__append(&sb_prog, elemType);
std__string__StringBuilder__append_c(&sb_prog, "*)realloc(list->data, new_capacity * sizeof(");
std__string__StringBuilder__append(&sb_prog, elemType);
std__string__StringBuilder__append_c(&sb_prog, "));\n        if (new_data == NULL) { fprintf(stderr, \"Out of memory\\n\"); exit(1); }\n        list->data = new_data;\n        list->capacity = new_capacity;\n    }\n    list->data[list->len++] = item;\n}\n\n");
ld++;
}
}
std__arena__Arena global_arena = std__arena__Arena__create( 4096 );
int32_t i_globals_collect = 0;
while (1) {
if (i_globals_collect >= children_len) {
break;
}
const structs__ASTNode* g_child_collect = &(children->data[ i_globals_collect ]);
if (std__string__equals_c ( g_child_collect->node_type, "Declaration" )) {
const std__string__string var_name = g_child_collect->data.declaration.name;
if (! std__maps__StringBoolMap__contains( &g_emitted_globals , var_name )) {
std__maps__StringBoolMap__set(&g_emitted_globals, &global_arena, var_name, true);
}
}
else if (std__string__equals_c ( g_child_collect->node_type, "Platform" )) {
if (g_child_collect->children!= nil) {
const __list_structs__ASTNode_t* plat_children_collect = g_child_collect->children;
int32_t plat_idx = 0;
while (1) {
if (plat_idx >= len_v((*plat_children_collect))) {
break;
}
const structs__ASTNode* plat_decl = &(plat_children_collect->data[ plat_idx ]);
if (std__string__equals_c ( plat_decl->node_type, "Declaration" )) {
const std__string__string plat_var_name = plat_decl->data.declaration.name;
if (! std__maps__StringBoolMap__contains( &g_emitted_globals , plat_var_name )) {
std__maps__StringBoolMap__set(&g_emitted_globals, &global_arena, plat_var_name, true);
}
}
plat_idx++;
}
}
}
i_globals_collect++;
}
std__arena__Arena generated_arena = std__arena__Arena__create( 4096 );
std__maps__StringBoolMap generated_in_this_pass = (*std__maps__StringBoolMap__create( &generated_arena , 128 ));
int32_t i_globals = 0;
while (1) {
if (i_globals >= children_len) {
break;
}
const structs__ASTNode* g_child = &(children->data[ i_globals ]);
if (std__string__equals_c ( g_child->node_type, "Declaration" )) {
const std__string__string var_name = g_child->data.declaration.name;
if (! std__maps__StringBoolMap__contains( &generated_in_this_pass , var_name )) {
std__maps__StringBoolMap__set(&generated_in_this_pass, &generated_arena, var_name, true);
const std__string__string g_code = renderer__generate_global_decl( g_child );
if (std__string__str_len ( g_code ) > 0) {
std__string__StringBuilder__append(&sb_prog, g_code);
}
}
}
i_globals++;
}
int32_t i_proto = 0;
while (1) {
if (i_proto >= children_len) {
break;
}
const structs__ASTNode* proto_child = &(children->data[ i_proto ]);
if (std__string__equals_c ( proto_child->node_type, "Function" )) {
if (proto_child->data.function.is_generic) {
i_proto++;
continue;
}
const std__string__string proto_code = renderer__generate_function_prototype( proto_child );
if (std__string__str_len ( proto_code ) > 0) {
const std__string__string proto_name = proto_child->data.function.name;
if (! std__string__equals_c ( proto_name , "main" )) {
std__string__string canon_name = proto_name;
if (std__maps__StringStringMap__contains( &g_function_prefixes , proto_name )) {
canon_name = std__maps__StringStringMap__get( &g_function_prefixes , proto_name );
}
if (! std__maps__StringBoolMap__contains( &g_emitted_prototypes , canon_name )) {
std__maps__StringBoolMap__set(&g_emitted_prototypes, &global_arena, canon_name, true);
std__string__StringBuilder__append(&sb_prog, proto_code);
}
}
}
}
if (std__string__equals_c ( proto_child->node_type, "Platform" )) {
const std__string__string platform_name = proto_child->data.platform_node.platform_name;
const std__string__string plat_dir = renderer__platform_macro_start( platform_name );
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append(&sb_prog, plat_dir);
}
if (proto_child->children!= nil) {
const __list_structs__ASTNode_t* plat_children = proto_child->children;
int32_t pi = 0;
while (1) {
if (pi >= len_v((*plat_children))) {
break;
}
const structs__ASTNode* plat_child = &(plat_children->data[ pi ]);
if (std__string__equals_c ( plat_child->node_type, "Function" )) {
const std__string__string plat_proto = renderer__generate_function_prototype( plat_child );
if (std__string__str_len ( plat_proto ) > 0) {
std__string__StringBuilder__append(&sb_prog, plat_proto);
}
}
pi++;
}
}
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append_c(&sb_prog, "#endif\n");
}
}
i_proto++;
}
std__string__StringBuilder__append_char(&sb_prog, '\n');
int32_t i = 0;
while (1) {
if (i >= children_len) {
break;
}
const structs__ASTNode* child = &(children->data[ i ]);
if (std__string__equals_c ( child->node_type, "Overload" )) {
const std__string__string ov_code = renderer__generate_c( child );
std__string__StringBuilder__append(&sb_prog, ov_code);
std__string__StringBuilder__append_char(&sb_prog, '\n');
}
i++;
}
i = 0;
while (1) {
if (i >= children_len) {
break;
}
const structs__ASTNode* fn_child = &(children->data[ i ]);
if (std__string__equals_c ( fn_child->node_type, "Function" )) {
const std__string__string fn_name = fn_child->data.function.name;
if (! std__string__equals_c ( fn_name , "main" )) {
const std__string__string fn_code = renderer__generate_c( fn_child );
std__string__StringBuilder__append(&sb_prog, fn_code);
}
}
if (std__string__equals_c ( fn_child->node_type, "Platform" )) {
const std__string__string platform_name = fn_child->data.platform_node.platform_name;
const std__string__string plat_dir = renderer__platform_macro_start( platform_name );
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append(&sb_prog, plat_dir);
}
if (fn_child->children!= nil) {
const __list_structs__ASTNode_t* plat_children = fn_child->children;
int32_t pi = 0;
while (1) {
if (pi >= len_v((*plat_children))) {
break;
}
const structs__ASTNode* plat_child = &(plat_children->data[ pi ]);
if (std__string__equals_c ( plat_child->node_type, "Function" )) {
const std__string__string plat_fn_name = plat_child->data.function.name;
if (! std__string__equals_c ( plat_fn_name , "main" )) {
const std__string__string plat_fn_code = renderer__generate_c( plat_child );
std__string__StringBuilder__append(&sb_prog, plat_fn_code);
}
}
pi++;
}
}
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append_c(&sb_prog, "#endif\n");
}
}
i++;
}
int32_t i_main_idx = 0;
while (1) {
if (i_main_idx >= children_len) {
break;
}
const structs__ASTNode* fnn = &(children->data[ i_main_idx ]);
if (std__string__equals_c ( fnn->node_type, "Function" )) {
const std__string__string namecheck = fnn->data.function.name;
if (std__string__equals_c ( namecheck , "main" )) {
const std__string__string main_code = renderer__generate_c( fnn );
std__string__StringBuilder__append(&sb_prog, main_code);
break;
}
}
i_main_idx++;
}
i = 0;
while (1) {
if (i >= children_len) {
break;
}
const structs__ASTNode* child2 = &(children->data[ i ]);
if (! std__string__equals_c ( child2->node_type, "Overload" ) && ! std__string__equals_c ( child2->node_type, "Function" ) && ! std__string__equals_c ( child2->node_type, "Model" ) && ! std__string__equals_c ( child2->node_type, "Enum" ) && ! std__string__equals_c ( child2->node_type, "Declaration" ) && ! std__string__equals_c ( child2->node_type, "Platform" )) {
const std__string__string child_code = renderer__generate_c( child2 );
std__string__StringBuilder__append(&sb_prog, child_code);
}
i++;
}
i = 0;
while (1) {
if (i >= children_len) {
break;
}
const structs__ASTNode* plat_node = &(children->data[ i ]);
if (std__string__equals_c ( plat_node->node_type, "Platform" )) {
const std__string__string platform_name = plat_node->data.platform_node.platform_name;
bool has_non_func_content = false;
if (plat_node->children!= nil) {
const __list_structs__ASTNode_t* plat_children = plat_node->children;
int32_t pc = 0;
while (1) {
if (pc >= len_v((*plat_children))) {
break;
}
const structs__ASTNode* pc_child = &(plat_children->data[ pc ]);
if (! std__string__equals_c ( pc_child->node_type, "Function" )) {
has_non_func_content = true;
break;
}
pc++;
}
}
if (has_non_func_content) {
const std__string__string plat_dir = renderer__platform_macro_start( platform_name );
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append(&sb_prog, plat_dir);
}
if (plat_node->children!= nil) {
const __list_structs__ASTNode_t* plat_children2 = plat_node->children;
int32_t pc2 = 0;
while (1) {
if (pc2 >= len_v((*plat_children2))) {
break;
}
const structs__ASTNode* pc_child2 = &(plat_children2->data[ pc2 ]);
if (! std__string__equals_c ( pc_child2->node_type, "Function" )) {
const std__string__string pc_code = renderer__generate_c( pc_child2 );
std__string__StringBuilder__append(&sb_prog, pc_code);
}
pc2 = pc2 + 1;
}
}
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append_c(&sb_prog, "#endif\n");
}
}
}
i++;
}
result = std__string__StringBuilder__to_string( &sb_prog );
std__string__StringBuilder__destroy(&sb_prog);
}
result = std__string__replace_all ( result , std__string__str ( "->" ) , std__string__str ( "->" ) );
std__string__string fixed_result = std__string__str( "" );
int32_t start_idx = 0;
int32_t idx_line = 0;
while (1) {
if (idx_line >= std__string__str_len ( result )) {
if (start_idx < idx_line) {
const std__string__string last_line = std__string__substring_se( result , start_idx , idx_line );
std__string__string line_fixed = last_line;
const std__string__string trimmed_last = std__string__strip( last_line );
if (std__string__has_suffix ( trimmed_last , std__string__str ( ");" ) )) {
int32_t eq_pos = - 1;
bool in_string_eq = false;
int32_t ei = 0;
while (1) {
if (ei >= std__string__str_len ( last_line )) {
break;
}
const char ec = std__string__get_char( last_line , ei );
if (ec == '"' && ( ei == 0 || std__string__get_char ( last_line , ei - 1 ) != '\\' )) {
in_string_eq = ! in_string_eq;
}
if (ec == '=' && ! in_string_eq) {
eq_pos = ei;
break;
}
ei = ei + 1;
}
if (eq_pos >= 0) {
int32_t open_p = 0;
int32_t close_p = 0;
bool in_string_p = false;
int32_t pi = eq_pos + 1;
while (1) {
if (pi >= std__string__str_len ( last_line )) {
break;
}
const char c = std__string__get_char( last_line , pi );
if (c == '"' && ( pi == 0 || std__string__get_char ( last_line , pi - 1 ) != '\\' )) {
in_string_p = ! in_string_p;
}
else if (! in_string_p) {
if (c == '(') {
open_p = open_p + 1;
}
else if (c == ')') {
close_p = close_p + 1;
}
else if (c == ';') {
break;
}
}
pi = pi + 1;
}
if (close_p == open_p + 1) {
int32_t semi_idx = - 1;
int32_t sj = std__string__str_len( last_line ) - 1;
while (1) {
if (sj < 0) {
break;
}
if (std__string__get_char ( last_line , sj ) == ';') {
semi_idx = sj;
break;
}
sj = sj - 1;
}
if (semi_idx > 0) {
int32_t close_idx = semi_idx - 1;
while (1) {
if (close_idx < 0) {
break;
}
const char cc = std__string__get_char( last_line , close_idx );
if (cc == ' ' || cc == '\t' || cc == '\n') {
close_idx = close_idx - 1;
continue;
}
break;
}
if (close_idx >= 0 && std__string__get_char ( last_line , close_idx ) == ')') {
std__string__string tmp = std__string__str( "" );
tmp = std__string__concat ( tmp , std__string__substring_se ( last_line , 0 , (int32_t)( close_idx ) ) );
tmp = std__string__concat ( tmp , std__string__substring_se ( last_line , close_idx + 1 , (int32_t)( std__string__str_len ( last_line ) ) ) );
line_fixed = tmp;
}
}
}
}
}
fixed_result = std__string__concat ( fixed_result , line_fixed );
}
break;
}
const char ch = std__string__get_char( result , idx_line );
if (ch == '\n') {
const std__string__string line = std__string__substring_se( result , start_idx , idx_line + 1 );
std__string__string line_fixed2 = line;
const std__string__string trimmed = std__string__strip( line );
if (std__string__has_suffix ( trimmed , std__string__str ( ");" ) ) && ! std__string__has_prefix ( trimmed , std__string__str ( "return " ) )) {
int32_t eq_pos2 = - 1;
bool in_string_eq2 = false;
int32_t ei2 = 0;
while (1) {
if (ei2 >= std__string__str_len ( line )) {
break;
}
const char ec2 = std__string__get_char( line , ei2 );
if (ec2 == '"' && ( ei2 == 0 || std__string__get_char ( line , ei2 - 1 ) != '\\' )) {
in_string_eq2 = ! in_string_eq2;
}
if (ec2 == '=' && ! in_string_eq2) {
eq_pos2 = ei2;
break;
}
ei2 = ei2 + 1;
}
if (eq_pos2 >= 0) {
int32_t open_p2 = 0;
int32_t close_p2 = 0;
bool in_string_p2 = false;
int32_t pi2 = eq_pos2 + 1;
while (1) {
if (pi2 >= std__string__str_len ( line )) {
break;
}
const char c2 = std__string__get_char( line , pi2 );
if (c2 == '"' && ( pi2 == 0 || std__string__get_char ( line , pi2 - 1 ) != '\\' )) {
in_string_p2 = ! in_string_p2;
}
else if (! in_string_p2) {
if (c2 == '(') {
open_p2 = open_p2 + 1;
}
else if (c2 == ')') {
close_p2 = close_p2 + 1;
}
else if (c2 == ';') {
break;
}
}
pi2 = pi2 + 1;
}
if (close_p2 == open_p2 + 1) {
int32_t semi_idx2 = - 1;
int32_t sj2 = std__string__str_len( line ) - 1;
while (1) {
if (sj2 < 0) {
break;
}
if (std__string__get_char ( line , sj2 ) == ';') {
semi_idx2 = sj2;
break;
}
sj2 = sj2 - 1;
}
if (semi_idx2 > 0) {
int32_t close_idx2 = semi_idx2 - 1;
while (1) {
if (close_idx2 < 0) {
break;
}
const char cc2 = std__string__get_char( line , close_idx2 );
if (cc2 == ' ' || cc2 == '\t' || cc2 == '\n') {
close_idx2 = close_idx2 - 1;
continue;
}
break;
}
if (close_idx2 >= 0 && std__string__get_char ( line , close_idx2 ) == ')') {
std__string__string tmp2 = std__string__str( "" );
tmp2 = std__string__concat ( tmp2 , std__string__substring_se ( line , 0 , (int32_t)( close_idx2 ) ) );
tmp2 = std__string__concat ( tmp2 , std__string__substring_se ( line , close_idx2 + 1 , (int32_t)( std__string__str_len ( line ) ) ) );
line_fixed2 = tmp2;
}
}
}
}
}
fixed_result = std__string__concat ( fixed_result , line_fixed2 );
start_idx = idx_line + 1;
}
idx_line = idx_line + 1;
}
if (std__string__str_len ( fixed_result ) > 0) {
result = fixed_result;
}
}
if (std__string__equals_c ( node_type , "Program" )) {
result = renderer__strip_all_c_prefixes ( result );
result = renderer__replace_substr_outside_strings ( result , std__string__str ( "C . " ) , std__string__str ( "" ) );
result = renderer__replace_substr_outside_strings ( result , std__string__str ( "C." ) , std__string__str ( "" ) );
result = renderer__replace_substr_outside_strings ( result , std__string__str ( "C__" ) , std__string__str ( "" ) );
result = renderer__collapse_duplicate_segments ( result );
result = renderer__rewrite_method_calls ( result );
result = renderer__rewrite_function_prefixes ( result );
result = renderer__rewrite_sizeof_types ( result );
result = renderer__normalize_numeric_dots ( result );
}
if (std__string__equals_c ( node_type , "Test" )) {
std__string__StringBuilder sb_test = std__string__StringBuilder__init( 4096 );
std__string__StringBuilder__append_c(&sb_test, "int main(int argc, char** argv) {\n__axe_argc = argc;\n__axe_argv = argv;\n");
if (! is_release_build) {
std__string__StringBuilder__append(&sb_test, renderer__generate_stack_trace_setup());
}
std__string__StringBuilder__append_c(&sb_test, "    int passed = 0;\n    int failed = 0;\n\n");
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i_test = 0;
while (1) {
if (i_test >= len_v((*children))) {
break;
}
const structs__ASTNode* child = &(children->data[ i_test ]);
if (std__string__equals_c ( child->node_type, "Assert" )) {
const std__string__string cond_raw = std__string__strip( child->data.assert_node.condition);
const std__string__string cond_norm = renderer__process_expression( cond_raw );
const std__string__string msg = child->data.assert_node.message;
std__string__StringBuilder__append_c(&sb_test, "    if (");
std__string__StringBuilder__append(&sb_test, cond_norm);
std__string__StringBuilder__append_c(&sb_test, ") {\n        printf(\"PASSED: ");
std__string__StringBuilder__append(&sb_test, msg);
std__string__StringBuilder__append_c(&sb_test, "\\n\");\n        passed++;\n    } else {\n        printf(\"FAILED: ");
std__string__StringBuilder__append(&sb_test, msg);
std__string__StringBuilder__append_c(&sb_test, "\\n\");\n        failed++;\n    }\n\n");
}
else if (std__string__equals_c ( child->node_type, "Declaration" )) {
const std__string__string var_name = child->data.declaration.name;
const std__string__string type_name = child->data.declaration.type_name;
const bool is_mutable = child->data.declaration.is_mutable;
const std__string__string initializer = child->data.declaration.initializer;
if (std__string__str_len ( var_name ) > 0 && std__string__str_len ( type_name ) > 0) {
std__arena__Arena arena_decl = std__arena__Arena__create( 2560 );
std__maps__StringStringMap__set(&g_var_types, &arena_decl, var_name, type_name);
}
std__string__string mapped_type = renderer__map_axe_type_to_c( type_name );
std__string__string array_suffix = std__string__str( "" );
const int32_t br = std__string__find_char_from( type_name , '[' , (uintptr_t)( 0 ) );
if (br >= 0) {
const std__string__string suffix = std__string__substring_se( type_name , br , (int32_t)( std__string__str_len ( type_name ) ) );
if (! std__string__equals_c ( suffix , "[999]" )) {
const std__string__string base_raw = std__string__strip( std__string__substring_se ( type_name , 0 , br ) );
if (std__string__str_len ( base_raw ) > 0) {
mapped_type = renderer__map_axe_type_to_c ( base_raw );
array_suffix = suffix;
}
}
}
std__string__StringBuilder__append_c(&sb_test, "    ");
if (! is_mutable) {
std__string__StringBuilder__append_c(&sb_test, "const ");
}
std__string__StringBuilder__append(&sb_test, mapped_type);
std__string__StringBuilder__append_char(&sb_test, ' ');
std__string__StringBuilder__append(&sb_test, var_name);
if (std__string__str_len ( array_suffix ) > 0) {
std__string__StringBuilder__append(&sb_test, array_suffix);
}
std__string__string trimmed_init = std__string__strip( initializer );
if (std__string__str_len ( trimmed_init ) > 0) {
const std__string__string init_norm = renderer__process_expression( trimmed_init );
std__string__StringBuilder__append_c(&sb_test, " = ");
std__string__StringBuilder__append(&sb_test, init_norm);
}
std__string__StringBuilder__append_c(&sb_test, ";\n");
}
else {
const std__string__string stmt_code = renderer__generate_c( child );
if (std__string__str_len ( stmt_code ) > 0) {
const std__string__string buf = stmt_code;
int32_t idx = 0;
const int32_t buf_len = (int32_t)( std__string__str_len ( buf ) );
while (1) {
if (idx >= buf_len) {
break;
}
const char ch = std__string__get_char( buf , idx );
if (ch == '\n') {
std__string__StringBuilder__append_c(&sb_test, "\n    ");
}
else {
std__string__StringBuilder__append_char(&sb_test, ch);
}
idx++;
}
std__string__StringBuilder__append_char(&sb_test, '\n');
}
}
i_test++;
}
}
std__string__StringBuilder__append_c(&sb_test, "    printf(\"\\n\");\n    if (failed == 0) {\n        printf(\"All tests passed. (%d/%d)\\n\", passed, passed + failed);\n    } else {\n        printf(\"%d test(s) failed, %d passed\\n\", failed, passed);\n    }\n    return failed > 0 ? 1 : 0;\n}\n");
result = std__string__StringBuilder__to_string( &sb_test );
std__string__StringBuilder__destroy(&sb_test);
return result;
}
if (std__string__equals_c ( node_type , "Assert" )) {
const std__string__string cond_raw = std__string__strip( ast->data.assert_node.condition);
const std__string__string cond_norm = renderer__process_expression( cond_raw );
const std__string__string msg = ast->data.assert_node.message;
std__string__StringBuilder sb_assert = std__string__StringBuilder__init( 512 );
std__string__StringBuilder__append_c(&sb_assert, "if (");
std__string__StringBuilder__append(&sb_assert, cond_norm);
std__string__StringBuilder__append_c(&sb_assert, ") {\n    printf(\"PASSED: ");
std__string__StringBuilder__append(&sb_assert, msg);
std__string__StringBuilder__append_c(&sb_assert, "\\n\");\n    passed++;\n} else {\n    printf(\"FAILED: ");
std__string__StringBuilder__append(&sb_assert, msg);
std__string__StringBuilder__append_c(&sb_assert, "\\n\");\n    failed++;\n}\n\n");
return std__string__StringBuilder__to_string( &sb_assert );
}
if (std__string__equals_c ( node_type , "Function" )) {
std__string__string func_name = ast->data.function.name;
std__string__string return_type = ast->data.function.return_type;
const bool is_public = ast->data.function.is_public;
const bool is_generic = ast->data.function.is_generic;
if (is_generic) {
const __list_std__string_t* when_types = ast->data.function.when_branch_types;
const __list_int32_t_t* when_counts = ast->data.function.when_branch_counts;
const __list_int32_t_t* when_starts = ast->data.function.when_branch_starts;
const __list_std__string_t* type_params = ast->data.function.type_params;
if (type_params == nil) {
return std__string__str( "" );
}
__list_std__string_t collected_constraints = {0};
bool has_top_level_when = false;
if (when_types != nil && len_v((*when_types)) > 0) {
has_top_level_when = true;
}
if (! has_top_level_when) {
if (ast->children!= nil) {
__list_int64_t_t scan_stack = {0};
const __list_structs__ASTNode_t* root_children = ast->children;
int32_t ri = 0;
while (1) {
if (ri >= len_v((*root_children))) {
break;
}
__list_int64_t_push(&scan_stack, (int64_t)(&(root_children->data[ri])));
ri++;
}
while (1) {
if (len_v(scan_stack) == 0) {
break;
}
const structs__ASTNode* scan_node = (structs__ASTNode*)( scan_stack.data[ len_v(scan_stack) - 1 ]);
scan_stack.len = scan_stack.len- 1;
if (std__string__equals_c ( scan_node->node_type, "WhenBranch" )) {
const __list_std__string_t* tp_list = scan_node->data.when_branch.type_params;
const __list_std__string_t* ct_list = scan_node->data.when_branch.concrete_types;
if (tp_list != nil && ct_list != nil) {
std__string__string constraint_str = std__string__str( "" );
int32_t cti = 0;
while (1) {
if (cti >= len_v((*tp_list))) {
break;
}
if (cti > 0) {
constraint_str = std__string__concat ( constraint_str , std__string__str ( "," ) );
}
constraint_str = std__string__concat ( constraint_str , tp_list->data[ cti ]);
constraint_str = std__string__concat ( constraint_str , std__string__str ( ":" ) );
constraint_str = std__string__concat ( constraint_str , ct_list->data[ cti ]);
cti++;
}
bool found = false;
int32_t fi = 0;
while (1) {
if (fi >= len_v(collected_constraints)) {
break;
}
if (std__string__equals_c ( collected_constraints.data[ fi ], constraint_str.data)) {
found = true;
break;
}
fi++;
}
if (! found) {
__list_std__string_push(&collected_constraints, constraint_str);
}
}
}
if (scan_node->children!= nil) {
const __list_structs__ASTNode_t* sub_children = scan_node->children;
int32_t sci = 0;
while (1) {
if (sci >= len_v((*sub_children))) {
break;
}
__list_int64_t_push(&scan_stack, (int64_t)(&(sub_children->data[sci])));
sci++;
}
}
}
}
}
if (! has_top_level_when && len_v(collected_constraints) == 0) {
return std__string__str( "" );
}
std__string__StringBuilder sb_all_funcs = std__string__StringBuilder__init( 8192 );
int32_t branch_idx = 0;
int32_t constraint_list_len = 0;
if (has_top_level_when) {
constraint_list_len = len_v((*when_types));
}
else {
constraint_list_len = len_v(collected_constraints);
}
while (1) {
if (branch_idx >= constraint_list_len) {
break;
}
std__string__string constraint_str = std__string__str( "" );
if (has_top_level_when) {
constraint_str = when_types->data[ branch_idx ];
}
else {
constraint_str = collected_constraints.data[ branch_idx ];
}
const int32_t child_count = 0;
std__string__StringBuilder sb_spec_name = std__string__StringBuilder__init( 256 );
std__string__string base_name_for_spec = func_name;
if (std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
base_name_for_spec = std__maps__StringStringMap__get( &g_function_prefixes , func_name );
}
std__string__StringBuilder__append(&sb_spec_name, base_name_for_spec);
int32_t constraint_idx = 0;
int32_t constraint_start = 0;
const int32_t constraint_len = std__string__str_len( constraint_str );
while (1) {
if (constraint_idx > constraint_len) {
break;
}
bool is_sep = false;
if (constraint_idx == constraint_len) {
is_sep = true;
}
else if (std__string__get_char ( constraint_str , constraint_idx ) == ',') {
is_sep = true;
}
if (is_sep) {
const std__string__string one_constraint = std__string__substring_se( constraint_str , constraint_start , constraint_idx );
const int32_t colon_pos = std__string__find_char_from( one_constraint , ':' , (uintptr_t)( 0 ) );
if (colon_pos > 0) {
const std__string__string param_name = std__string__substring_se( one_constraint , 0 , colon_pos );
const std__string__string concrete_tp = std__string__substring_se( one_constraint , colon_pos + 1 , (int32_t)( std__string__str_len ( one_constraint ) ) );
std__string__StringBuilder__append_c(&sb_spec_name, "__");
std__string__StringBuilder__append(&sb_spec_name, param_name);
std__string__StringBuilder__append_c(&sb_spec_name, "_");
std__string__StringBuilder__append(&sb_spec_name, renderer__sanitize_c_identifier(concrete_tp));
}
constraint_start = constraint_idx + 1;
}
constraint_idx++;
}
const std__string__string spec_func_name = std__string__StringBuilder__to_string( &sb_spec_name );
std__string__StringBuilder__destroy(&sb_spec_name);
if (std__maps__StringBoolMap__contains( &g_generated_functions , spec_func_name )) {
branch_idx++;
continue;
}
std__arena__Arena gen_arena = std__arena__Arena__create( 1024 );
std__maps__StringBoolMap__set(&g_generated_functions, &gen_arena, spec_func_name, true);
std__maps__StringStringMap type_mapping = (*std__maps__StringStringMap__create( &gen_arena , 16 ));
int32_t tm_idx = 0;
int32_t tm_start = 0;
const int32_t tm_len = std__string__str_len( constraint_str );
while (1) {
if (tm_idx > tm_len) {
break;
}
bool is_tm_sep = false;
if (tm_idx == tm_len) {
is_tm_sep = true;
}
else if (std__string__get_char ( constraint_str , tm_idx ) == ',') {
is_tm_sep = true;
}
if (is_tm_sep) {
const std__string__string tm_constraint = std__string__substring_se( constraint_str , tm_start , tm_idx );
const int32_t tm_colon = std__string__find_char_from( tm_constraint , ':' , (uintptr_t)( 0 ) );
if (tm_colon > 0) {
const std__string__string tm_param = std__string__substring_se( tm_constraint , 0 , tm_colon );
const std__string__string tm_concrete = std__string__substring_se( tm_constraint , tm_colon + 1 , (int32_t)( std__string__str_len ( tm_constraint ) ) );
std__maps__StringStringMap__set(&type_mapping, &gen_arena, tm_param, tm_concrete);
}
tm_start = tm_idx + 1;
}
tm_idx++;
}
std__string__string spec_return_type = return_type;
if (std__string__str_len ( spec_return_type ) == 0) {
spec_return_type = std__string__str ( "void" );
}
if (std__maps__StringStringMap__contains( &type_mapping , return_type )) {
spec_return_type = std__maps__StringStringMap__get( &type_mapping , return_type );
}
const std__string__string mapped_ret = renderer__map_axe_type_to_c( spec_return_type );
std__string__StringBuilder sb_func = std__string__StringBuilder__init( 4096 );
std__string__StringBuilder__append(&sb_func, renderer__emit_line_directive(ast->line));
const __list_std__string_t* func_tags = ast->data.function.tags;
if (func_tags != nil) {
int32_t tag_idx = 0;
while (1) {
if (tag_idx >= len_v((*func_tags))) {
break;
}
const std__string__string tag = func_tags->data[ tag_idx ];
if (std__string__equals_c ( tag , "inline" )) {
std__string__StringBuilder__append_c(&sb_func, "static inline ");
}
else if (std__string__equals_c ( tag , "noinline" )) {
std__string__StringBuilder__append_c(&sb_func, "__attribute__((noinline)) ");
}
else if (std__string__equals_c ( tag , "cold" )) {
std__string__StringBuilder__append_c(&sb_func, "__attribute__((cold)) ");
}
else if (std__string__equals_c ( tag , "hot" )) {
std__string__StringBuilder__append_c(&sb_func, "__attribute__((hot)) ");
}
tag_idx++;
}
}
std__string__StringBuilder__append(&sb_func, mapped_ret);
std__string__StringBuilder__append_char(&sb_func, ' ');
std__string__StringBuilder__append(&sb_func, spec_func_name);
std__string__StringBuilder__append_char(&sb_func, '(');
const __list_std__string_t* params = ast->data.function.params;
if (params != nil) {
int32_t param_idx = 0;
while (1) {
if (param_idx >= len_v((*params))) {
break;
}
if (param_idx > 0) {
std__string__StringBuilder__append_c(&sb_func, ", ");
}
const std__string__string param = params->data[ param_idx ];
const int32_t colon_pos = std__string__find_char_from( param , ':' , (uintptr_t)( 0 ) );
if (colon_pos >= 0) {
const std__string__string param_name = std__string__strip( std__string__substring_se ( param , 0 , colon_pos ) );
std__string__string param_type = std__string__strip( std__string__substr ( param , colon_pos + 1 , std__string__str_len ( param ) - colon_pos - 1 ) );
if (std__maps__StringStringMap__contains( &type_mapping , param_type )) {
param_type = std__maps__StringStringMap__get( &type_mapping , param_type );
}
const std__string__string processed_type = renderer__process_parameter_type( param_type );
std__string__StringBuilder__append(&sb_func, processed_type);
std__string__StringBuilder__append_char(&sb_func, ' ');
std__string__StringBuilder__append(&sb_func, param_name);
std__maps__StringStringMap__set(&g_var_types, &gen_arena, param_name, param_type);
}
else {
std__string__StringBuilder__append(&sb_func, param);
}
param_idx++;
}
}
std__string__StringBuilder__append_c(&sb_func, ") {\n");
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t ci = 0;
if (has_top_level_when) {
int32_t next_check_branch = 0;
while (1) {
if (ci >= len_v((*children))) {
break;
}
bool is_branch_start = false;
if (when_starts != nil && next_check_branch < len_v((*when_starts))) {
if (ci == when_starts->data[ next_check_branch ]) {
is_branch_start = true;
}
}
if (is_branch_start) {
const std__string__string branch_constraint = when_types->data[ next_check_branch ];
const int32_t b_count = when_counts->data[ next_check_branch ];
const bool is_match = std__string__equals_c( branch_constraint , constraint_str.data);
if (is_match) {
int32_t bi = 0;
while (1) {
if (bi >= b_count) {
break;
}
const int32_t child_idx = ci + bi;
if (child_idx < len_v((*children))) {
const std__string__string child_code = renderer__generate_c( &(children->data[ child_idx ]) );
std__string__StringBuilder__append(&sb_func, child_code);
}
bi++;
}
}
ci = ci + b_count;
next_check_branch++;
continue;
}
const std__string__string common_code = renderer__generate_c( &(children->data[ ci ]) );
std__string__StringBuilder__append(&sb_func, common_code);
ci++;
}
}
else {
g_current_type_mapping = &type_mapping;
while (1) {
if (ci >= len_v((*children))) {
break;
}
const structs__ASTNode* child = &(children->data[ ci ]);
const std__string__string child_code = renderer__generate_c( child );
std__string__StringBuilder__append(&sb_func, child_code);
ci++;
}
g_current_type_mapping = nil;
}
}
std__string__StringBuilder__append_c(&sb_func, "}\n\n");
const std__string__string func_code = std__string__StringBuilder__to_string( &sb_func );
std__string__StringBuilder__destroy(&sb_func);
std__string__StringBuilder__append(&sb_all_funcs, func_code);
branch_idx = branch_idx + 1;
}
return std__string__StringBuilder__to_string( &sb_all_funcs );
}
if (! std__string__equals_c ( func_name , "main" )) {
int32_t sep2 = - 1;
int32_t i2 = 0;
const int32_t n2 = std__string__str_len( func_name );
while (1) {
if (i2 + 1 >= n2) {
break;
}
const char c1b = std__string__get_char( func_name , i2 );
const char c2b = std__string__get_char( func_name , i2 + 1 );
if (c1b == '_' && c2b == '_') {
sep2 = i2;
}
i2++;
}
if (sep2 >= 0 && sep2 + 2 < n2) {
const std__string__string model_part2 = std__string__substring_se( func_name , 0 , sep2 );
const std__string__string method_part2 = std__string__substring_se( func_name , sep2 + 2 , n2 );
bool has_inner_sep2 = false;
int32_t j2 = 0;
const int32_t mlen2 = std__string__str_len( model_part2 );
while (1) {
if (j2 + 1 >= mlen2) {
break;
}
const char mc1b = std__string__get_char( model_part2 , j2 );
const char mc2b = std__string__get_char( model_part2 , j2 + 1 );
if (mc1b == '_' && mc2b == '_') {
has_inner_sep2 = true;
break;
}
j2++;
}
if (! has_inner_sep2) {
const std__string__string canon_model2 = renderer__canonical_model_c_name( model_part2 );
if (std__string__str_len ( canon_model2 ) > 0) {
std__string__StringBuilder sb_fname = std__string__StringBuilder__init( std__string__str_len ( canon_model2 ) + std__string__str_len ( method_part2 ) + 2 );
std__string__StringBuilder__append(&sb_fname, canon_model2);
std__string__StringBuilder__append_c(&sb_fname, "__");
std__string__StringBuilder__append(&sb_fname, method_part2);
func_name = std__string__StringBuilder__to_string( &sb_fname );
std__string__StringBuilder__destroy(&sb_fname);
}
}
}
if (std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
func_name = std__maps__StringStringMap__get( &g_function_prefixes , func_name );
}
}
if (std__maps__StringBoolMap__contains( &g_generated_functions , func_name )) {
return std__string__str( "" );
}
std__arena__Arena func_arena = std__arena__Arena__create( 1024 );
std__maps__StringBoolMap__set(&g_generated_functions, &func_arena, func_name, true);
std__maps__StringStringMap__clear(&g_var_types);
renderer__validate_type_imported(return_type);
const __list_std__string_t* fn_params = ast->data.function.params;
if (fn_params != nil) {
int32_t pi = 0;
while (1) {
if (pi >= len_v((*fn_params))) {
break;
}
const std__string__string p = fn_params->data[ pi ];
const int32_t cp = std__string__find_char_from( p , ':' , (uintptr_t)( 0 ) );
if (cp >= 0) {
const std__string__string pname = std__string__strip( std__string__substring_se ( p , 0 , cp ) );
const std__string__string ptype = std__string__strip( std__string__substr ( p , cp + 1 , (int32_t)( std__string__str_len ( p ) - cp - 1 ) ) );
if (std__string__str_len ( pname ) > 0 && std__string__str_len ( ptype ) > 0) {
renderer__validate_type_imported(ptype);
std__maps__StringStringMap__set(&g_var_types, &func_arena, pname, ptype);
}
}
pi = pi + 1;
}
}
if (std__string__equals_c ( func_name , "main" )) {
std__string__StringBuilder sb_main = std__string__StringBuilder__init( 4096 );
std__string__StringBuilder__append_c(&sb_main, "int main(int argc, char** argv) {\n__axe_argc = argc;\n__axe_argv = argv;\n");
#ifdef _WIN32
std__string__StringBuilder__append_c(&sb_main, "SetConsoleOutputCP(65001);\n");
#endif
if (! is_release_build) {
std__string__StringBuilder__append(&sb_main, renderer__generate_stack_trace_setup());
}
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i ]) );
std__string__StringBuilder__append(&sb_main, child_code);
i++;
}
}
std__string__StringBuilder__append_c(&sb_main, "return 0;\n}\n\n");
return std__string__StringBuilder__to_string( &sb_main );
}
if (std__string__str_len ( return_type ) == 0) {
return_type = std__string__str ( "void" );
}
const std__string__string mapped_return_type = renderer__map_axe_type_to_c( return_type );
std__string__StringBuilder sb_func = std__string__StringBuilder__init( 4096 );
std__string__StringBuilder__append(&sb_func, renderer__emit_line_directive(ast->line));
const __list_std__string_t* func_tags = ast->data.function.tags;
if (func_tags != nil) {
int32_t tag_idx = 0;
while (1) {
if (tag_idx >= len_v((*func_tags))) {
break;
}
const std__string__string tag = func_tags->data[ tag_idx ];
if (std__string__equals_c ( tag , "inline" )) {
std__string__StringBuilder__append_c(&sb_func, "static inline ");
}
else if (std__string__equals_c ( tag , "noinline" )) {
std__string__StringBuilder__append_c(&sb_func, "__attribute__((noinline)) ");
}
else if (std__string__equals_c ( tag , "cold" )) {
std__string__StringBuilder__append_c(&sb_func, "__attribute__((cold)) ");
}
else if (std__string__equals_c ( tag , "hot" )) {
std__string__StringBuilder__append_c(&sb_func, "__attribute__((hot)) ");
}
tag_idx = tag_idx + 1;
}
}
std__string__StringBuilder__append(&sb_func, mapped_return_type);
std__string__StringBuilder__append_char(&sb_func, ' ');
std__string__StringBuilder__append(&sb_func, func_name);
std__string__StringBuilder__append_char(&sb_func, '(');
const __list_std__string_t* params = ast->data.function.params;
if (params != nil) {
int32_t param_idx = 0;
while (1) {
if (param_idx >= len_v((*params))) {
break;
}
if (param_idx > 0) {
std__string__StringBuilder__append_c(&sb_func, ", ");
}
const std__string__string param = params->data[ param_idx ];
const int32_t colon_pos = std__string__find_char_from( param , ':' , (uintptr_t)( 0 ) );
if (colon_pos >= 0) {
const std__string__string param_name = std__string__strip( std__string__substring_se ( param , 0 , colon_pos ) );
const std__string__string param_type = std__string__strip( std__string__substr ( param , colon_pos + 1 , (int32_t)( std__string__str_len ( param ) - colon_pos - 1 ) ) );
const std__string__string processed_type = renderer__process_parameter_type( param_type );
std__string__StringBuilder__append(&sb_func, processed_type);
std__string__StringBuilder__append_char(&sb_func, ' ');
std__string__StringBuilder__append(&sb_func, param_name);
}
else {
std__string__StringBuilder__append(&sb_func, param);
}
param_idx++;
}
}
std__string__StringBuilder__append_c(&sb_func, ") {\n");
result = std__string__StringBuilder__to_string( &sb_func );
std__string__StringBuilder__destroy(&sb_func);
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i ]) );
result = std__string__concat ( result , child_code );
i++;
}
}
result = std__string__concat_c ( result , "}\n\n" );
return result;
}
if (std__string__equals_c ( node_type , "Return" )) {
std__string__StringBuilder sb_ret = std__string__StringBuilder__init( 512 );
std__string__StringBuilder__append_c(&sb_ret, "return ");
std__string__string expr = ast->data.return_node.expression;
gstate__debug_print_raw("\n[DEBUG] RENDERER raw return expr:");
gstate__debug_print_str(expr);
std__string__string trimmed_ret = std__string__strip( expr );
const int32_t paren_pos_ret = std__string__find_char_from( trimmed_ret , '(' , (uintptr_t)( 0 ) );
if (paren_pos_ret > 0) {
const std__string__string call_name_ret = std__string__strip( std__string__substring_se ( trimmed_ret , 0 , paren_pos_ret ) );
if (std__maps__StringStringMap__contains( &g_function_prefixes , call_name_ret )) {
const std__string__string full_name_ret = std__maps__StringStringMap__get( &g_function_prefixes , call_name_ret );
const std__string__string rest_ret = std__string__substring_se( trimmed_ret , paren_pos_ret , (int32_t)( std__string__str_len ( trimmed_ret ) ) );
std__string__StringBuilder sb_tmp = std__string__StringBuilder__init( std__string__str_len ( full_name_ret ) + std__string__str_len ( rest_ret ) );
std__string__StringBuilder__append(&sb_tmp, full_name_ret);
std__string__StringBuilder__append(&sb_tmp, rest_ret);
trimmed_ret = std__string__StringBuilder__to_string( &sb_tmp );
std__string__StringBuilder__destroy(&sb_tmp);
expr = trimmed_ret;
}
}
std__string__string processed = std__string__str( "" );
const int32_t brace_pos_ret = std__string__find_char_from( trimmed_ret , '{' , (uintptr_t)( 0 ) );
if (brace_pos_ret > 0 && std__string__get_char ( trimmed_ret , (int32_t)( std__string__str_len ( trimmed_ret ) - 1 ) ) == '}') {
const std__string__string prefix_ret = std__string__strip( std__string__substring_se ( trimmed_ret , 0 , brace_pos_ret ) );
const std__string__string inner_ret = std__string__substring_se( trimmed_ret , brace_pos_ret + 1 , (int32_t)( std__string__str_len ( trimmed_ret ) - 1 ) );
if (std__string__str_len ( prefix_ret ) > 0) {
const std__string__string canon_ret = renderer__canonical_model_c_name( prefix_ret );
std__string__string c_type_ret = canon_ret;
if (std__string__str_len ( c_type_ret ) == 0) {
c_type_ret = renderer__map_axe_type_to_c ( prefix_ret );
}
if (std__string__str_len ( c_type_ret ) > 0) {
std__string__StringBuilder sb_init_ret = std__string__StringBuilder__init( 512 );
std__string__StringBuilder__append_c(&sb_init_ret, "(");
std__string__StringBuilder__append(&sb_init_ret, c_type_ret);
std__string__StringBuilder__append_c(&sb_init_ret, "){");
std__string__StringBuilder sb_current_ret = std__string__StringBuilder__init( std__string__str_len ( inner_ret ) + 16 );
int32_t depth_ret = 0;
bool first_field_ret = true;
int32_t i_ret = 0;
const int32_t inner_ret_len = (int32_t)( std__string__str_len ( inner_ret ) );
while (1) {
if (i_ret >= inner_ret_len) {
break;
}
const char ch_ret = std__string__get_char( inner_ret , i_ret );
if (ch_ret == '(') {
depth_ret = depth_ret + 1;
std__string__StringBuilder__append_char(&sb_current_ret, ch_ret);
}
else if (ch_ret == ')') {
if (depth_ret > 0) {
depth_ret = depth_ret - 1;
}
std__string__StringBuilder__append_char(&sb_current_ret, ch_ret);
}
else if (ch_ret == ',' && depth_ret == 0) {
std__string__string part_ret = std__string__strip( std__string__StringBuilder__to_string( &sb_current_ret ) );
if (std__string__str_len ( part_ret ) > 0) {
const int32_t colon_pos_ret2 = std__string__find_char_from( part_ret , ':' , (uintptr_t)( 0 ) );
if (colon_pos_ret2 >= 0) {
const std__string__string field_name_ret = std__string__strip( std__string__substring_se ( part_ret , 0 , colon_pos_ret2 ) );
const std__string__string value_expr_ret = std__string__strip( std__string__substr ( part_ret , colon_pos_ret2 + 1 , (int32_t)( std__string__str_len ( part_ret ) - colon_pos_ret2 - 1 ) ) );
if (std__string__str_len ( field_name_ret ) > 0 && std__string__str_len ( value_expr_ret ) > 0) {
if (! first_field_ret) {
std__string__StringBuilder__append_c(&sb_init_ret, ", ");
}
std__string__StringBuilder__append_c(&sb_init_ret, ".");
std__string__StringBuilder__append(&sb_init_ret, field_name_ret);
std__string__StringBuilder__append_c(&sb_init_ret, " = ");
const std__string__string processed_val_ret = renderer__process_expression( value_expr_ret );
std__string__StringBuilder__append(&sb_init_ret, processed_val_ret);
first_field_ret = false;
}
}
}
std__string__StringBuilder__clear(&sb_current_ret);
}
else {
std__string__StringBuilder__append_char(&sb_current_ret, ch_ret);
}
i_ret = i_ret + 1;
}
std__string__string part_last_ret = std__string__strip( std__string__StringBuilder__to_string( &sb_current_ret ) );
std__string__StringBuilder__destroy(&sb_current_ret);
if (std__string__str_len ( part_last_ret ) > 0) {
const int32_t colon_pos_last_ret = std__string__find_char_from( part_last_ret , ':' , (uintptr_t)( 0 ) );
if (colon_pos_last_ret >= 0) {
const std__string__string field_name_last_ret = std__string__strip( std__string__substring_se ( part_last_ret , 0 , colon_pos_last_ret ) );
const std__string__string value_expr_last_ret = std__string__strip( std__string__substr ( part_last_ret , colon_pos_last_ret + 1 , (int32_t)( std__string__str_len ( part_last_ret ) - colon_pos_last_ret - 1 ) ) );
if (std__string__str_len ( field_name_last_ret ) > 0 && std__string__str_len ( value_expr_last_ret ) > 0) {
if (! first_field_ret) {
std__string__StringBuilder__append_c(&sb_init_ret, ", ");
}
std__string__StringBuilder__append_c(&sb_init_ret, ".");
std__string__StringBuilder__append(&sb_init_ret, field_name_last_ret);
std__string__StringBuilder__append_c(&sb_init_ret, " = ");
const std__string__string processed_last_ret = renderer__process_expression( value_expr_last_ret );
std__string__StringBuilder__append(&sb_init_ret, processed_last_ret);
first_field_ret = false;
}
}
}
std__string__StringBuilder__append_c(&sb_init_ret, "}");
processed = std__string__StringBuilder__to_string( &sb_init_ret );
std__string__StringBuilder__destroy(&sb_init_ret);
}
}
}
if (std__string__str_len ( processed ) == 0) {
gstate__debug_print_raw("\n[DBG-CALL] process_expression from Return:");
gstate__debug_print_str(expr);
processed = renderer__process_expression ( expr );
}
std__string__StringBuilder__append(&sb_ret, processed);
std__string__StringBuilder__append_c(&sb_ret, ";\n");
result = std__string__StringBuilder__to_string( &sb_ret );
std__string__StringBuilder__destroy(&sb_ret);
return result;
}
if (std__string__equals_c ( node_type , "Break" )) {
return std__string__str( "break;\n" );
}
if (std__string__equals_c ( node_type , "Continue" )) {
return std__string__str( "continue;\n" );
}
if (std__string__equals_c ( node_type , "Declaration" )) {
const std__string__string var_name = ast->data.declaration.name;
std__string__string type_name = ast->data.declaration.type_name;
const bool is_mutable = ast->data.declaration.is_mutable;
const std__string__string initializer = ast->data.declaration.initializer;
renderer__validate_type_imported(type_name);
std__string__string mapped_type = renderer__map_axe_type_to_c( type_name );
if (std__string__str_len ( type_name ) == 0) {
std__string__string trimmed_init = std__string__strip( initializer );
if (std__string__has_prefix ( trimmed_init , std__string__str ( "new " ) )) {
trimmed_init = std__string__substring_se ( trimmed_init , 4 , (int32_t)( std__string__str_len ( trimmed_init ) ) );
trimmed_init = std__string__strip ( trimmed_init );
int32_t end_pos = - 1;
int32_t i = 0;
while (1) {
if (i >= std__string__str_len ( trimmed_init )) {
break;
}
const char ch = std__string__get_char( trimmed_init , i );
if (ch == '(' || ch == ' ' || ch == '\t') {
end_pos = i;
break;
}
i++;
}
if (end_pos < 0) {
end_pos = std__string__str_len ( trimmed_init );
}
const std__string__string inferred_name = std__string__strip( std__string__substring_se ( trimmed_init , 0 , end_pos ) );
if (std__string__str_len ( inferred_name ) > 0) {
type_name = inferred_name;
mapped_type = renderer__map_axe_type_to_c ( type_name );
}
}
else {
const int32_t brace_pos = std__string__find_char_from( trimmed_init , '{' , (uintptr_t)( 0 ) );
if (brace_pos > 0) {
const std__string__string inferred_name2 = std__string__strip( std__string__substring_se ( trimmed_init , 0 , brace_pos ) );
if (std__string__str_len ( inferred_name2 ) > 0) {
type_name = inferred_name2;
mapped_type = renderer__map_axe_type_to_c ( type_name );
}
}
}
}
if (std__string__str_len ( type_name ) == 0 && std__string__str_len ( initializer ) > 0) {
const std__string__string inferred = renderer__infer_expression_type( std__string__strip ( initializer ) );
if (std__string__str_len ( inferred ) > 0) {
type_name = inferred;
mapped_type = renderer__map_axe_type_to_c ( type_name );
}
}
if (std__string__str_len ( var_name ) > 0 && std__string__str_len ( type_name ) > 0) {
std__arena__Arena decl_arena = std__arena__Arena__create( 2560 );
std__maps__StringStringMap__set(&g_var_types, &decl_arena, var_name, type_name);
if (std__string__has_prefix ( type_name , std__string__str ( "list(" ) )) {
int32_t paren_pos = 5;
int32_t depth = 1;
while (1) {
if (paren_pos >= std__string__str_len ( type_name )) {
break;
}
const char ch = std__string__get_char( type_name , paren_pos );
if (ch == '(') {
depth = depth + 1;
}
else if (ch == ')') {
depth = depth - 1;
if (depth == 0) {
break;
}
}
paren_pos = paren_pos + 1;
}
const std__string__string element_type = std__string__strip( std__string__substr ( type_name , 5 , paren_pos - 5 ) );
std__arena__Arena list_arena = std__arena__Arena__create( 2560 );
std__maps__StringStringMap__set(&g_list_of_types, &list_arena, var_name, element_type);
}
else if (std__string__has_suffix ( type_name , std__string__str ( "[999]" ) )) {
const std__string__string element_type = std__string__strip( std__string__substring_se ( type_name , 0 , std__string__str_len ( type_name ) - 5 ) );
std__arena__Arena list_arena = std__arena__Arena__create( 2560 );
std__maps__StringStringMap__set(&g_list_of_types, &list_arena, var_name, element_type);
}
}
const std__string__string enum_model_name = renderer__canonical_model_c_name( type_name );
if (std__string__str_len ( enum_model_name ) > 0 && std__maps__StringBoolMap__contains( &g_enum_names , enum_model_name )) {
mapped_type = enum_model_name;
}
std__string__string array_suffix = std__string__str( "" );
const int32_t br = std__string__find_char_from( type_name , '[' , (uintptr_t)( 0 ) );
if (br >= 0) {
const std__string__string suffix = std__string__substring_se( type_name , br , (int32_t)( std__string__str_len ( type_name ) ) );
if (! std__string__equals_c ( suffix , "[999]" )) {
const std__string__string base_raw = std__string__strip( std__string__substring_se ( type_name , 0 , br ) );
if (std__string__str_len ( base_raw ) > 0) {
mapped_type = renderer__map_axe_type_to_c ( base_raw );
array_suffix = suffix;
}
}
}
std__string__StringBuilder sb_decl = std__string__StringBuilder__init( 256 );
const std__string__string line_dir = renderer__emit_line_directive( ast->line);
std__string__StringBuilder__append(&sb_decl, line_dir);
if (! is_mutable) {
std__string__StringBuilder__append_c(&sb_decl, "const ");
}
std__string__StringBuilder__append(&sb_decl, mapped_type);
std__string__StringBuilder__append_char(&sb_decl, ' ');
std__string__StringBuilder__append(&sb_decl, var_name);
if (std__string__str_len ( array_suffix ) > 0) {
std__string__StringBuilder__append(&sb_decl, array_suffix);
}
if (std__string__str_len ( initializer ) > 0) {
std__string__string trimmed = std__string__strip( initializer );
if (std__string__has_prefix ( trimmed , std__string__str ( "[" ) ) && std__string__has_suffix ( trimmed , std__string__str ( "]" ) )) {
const std__string__string elements_str = std__string__substring_se( trimmed , 1 , std__string__str_len ( trimmed ) - 1 );
const std__string__string elements_trimmed = std__string__strip( elements_str );
int32_t element_count = 0;
if (std__string__str_len ( elements_trimmed ) > 0) {
element_count = 1;
int32_t depth = 0;
int32_t idx_elem = 0;
while (1) {
if (idx_elem >= std__string__str_len ( elements_trimmed )) {
break;
}
const char ch_elem = std__string__get_char( elements_trimmed , idx_elem );
if (ch_elem == '(' || ch_elem == '[' || ch_elem == '{') {
depth++;
}
else if (ch_elem == ')' || ch_elem == ']' || ch_elem == '}') {
depth--;
}
else if (ch_elem == ',' && depth == 0) {
element_count++;
}
idx_elem++;
}
}
std__string__string elem_type_c = std__string__str( "int32_t" );
if (std__string__has_prefix ( type_name , std__string__str ( "list(" ) )) {
int32_t paren_end = 5;
int32_t depth_type = 1;
while (1) {
if (paren_end >= std__string__str_len ( type_name )) {
break;
}
const char ch_t = std__string__get_char( type_name , paren_end );
if (ch_t == '(') {
depth_type++;
}
else if (ch_t == ')') {
depth_type--;
if (depth_type == 0) {
break;
}
}
paren_end = paren_end + 1;
}
const std__string__string elem_type_axe = std__string__strip( std__string__substr ( type_name , 5 , paren_end - 5 ) );
elem_type_c = renderer__map_axe_type_to_c ( elem_type_axe );
}
const std__string__string processed_elements = renderer__process_expression( elements_trimmed );
std__string__StringBuilder__append_c(&sb_decl, " = {.data = (");
std__string__StringBuilder__append(&sb_decl, elem_type_c);
std__string__StringBuilder__append_c(&sb_decl, "[]){");
std__string__StringBuilder__append(&sb_decl, processed_elements);
std__string__StringBuilder__append_c(&sb_decl, "}, .len = ");
std__string__StringBuilder__append(&sb_decl, std__string__i32_to_string(element_count));
std__string__StringBuilder__append_c(&sb_decl, ", .capacity = ");
std__string__StringBuilder__append(&sb_decl, std__string__i32_to_string(element_count));
std__string__StringBuilder__append_c(&sb_decl, "}");
}
else if (std__string__has_prefix ( trimmed , std__string__str ( "new " ) )) {
trimmed = std__string__substring_se ( trimmed , 4 , (int32_t)( std__string__str_len ( trimmed ) ) );
trimmed = std__string__strip ( trimmed );
const int32_t first_paren = std__string__find_char_from( trimmed , '(' , (uintptr_t)( 0 ) );
if (first_paren < 0) {
std__string__StringBuilder__append_c(&sb_decl, " = {0}");
}
else {
int32_t last_paren = - 1;
int32_t idx = std__string__str_len( trimmed ) - 1;
while (1) {
if (idx < 0) {
break;
}
const char ch_end = std__string__get_char( trimmed , idx );
if (ch_end == ')') {
last_paren = idx;
break;
}
idx = idx - 1;
}
if (last_paren <= first_paren + 1) {
std__string__StringBuilder__append_c(&sb_decl, " = {0}");
}
else {
const std__string__string args_str = std__string__substring_se( trimmed , first_paren + 1 , last_paren );
std__string__StringBuilder__append_c(&sb_decl, " = {");
std__string__StringBuilder sb_current = std__string__StringBuilder__init( std__string__str_len ( args_str ) + 16 );
int32_t depth = 0;
bool first_field = true;
int32_t i2 = 0;
const int32_t args_str_len = (int32_t)( std__string__str_len ( args_str ) );
while (1) {
if (i2 >= args_str_len) {
break;
}
const char ch = std__string__get_char( args_str , i2 );
if (ch == '(') {
depth = depth + 1;
std__string__StringBuilder__append_char(&sb_current, ch);
}
else if (ch == ')') {
if (depth > 0) {
depth = depth - 1;
}
std__string__StringBuilder__append_char(&sb_current, ch);
}
else if (ch == ',' && depth == 0) {
std__string__string part = std__string__strip( std__string__StringBuilder__to_string( &sb_current ) );
if (std__string__str_len ( part ) > 0) {
const int32_t colon_pos = std__string__find_char_from( part , ':' , (uintptr_t)( 0 ) );
if (colon_pos >= 0) {
const std__string__string field_name = std__string__strip( std__string__substring_se ( part , 0 , colon_pos ) );
const std__string__string value_expr = std__string__strip( std__string__substr ( part , colon_pos + 1 , (int32_t)( std__string__str_len ( part ) - colon_pos - 1 ) ) );
if (std__string__str_len ( field_name ) > 0 && std__string__str_len ( value_expr ) > 0) {
if (! first_field) {
std__string__StringBuilder__append_c(&sb_decl, ", ");
}
std__string__StringBuilder__append_c(&sb_decl, ".");
std__string__StringBuilder__append(&sb_decl, field_name);
std__string__StringBuilder__append_c(&sb_decl, " = ");
std__string__StringBuilder__append(&sb_decl, value_expr);
first_field = false;
}
}
}
std__string__StringBuilder__clear(&sb_current);
}
else {
std__string__StringBuilder__append_char(&sb_current, ch);
}
i2++;
}
std__string__string part_last = std__string__strip( std__string__StringBuilder__to_string( &sb_current ) );
std__string__StringBuilder__destroy(&sb_current);
if (std__string__str_len ( part_last ) > 0) {
const int32_t colon_pos_last = std__string__find_char_from( part_last , ':' , (uintptr_t)( 0 ) );
if (colon_pos_last >= 0) {
const std__string__string field_name_last = std__string__strip( std__string__substring_se ( part_last , 0 , colon_pos_last ) );
const std__string__string value_expr_last = std__string__strip( std__string__substr ( part_last , colon_pos_last + 1 , (int32_t)( std__string__str_len ( part_last ) - colon_pos_last - 1 ) ) );
if (std__string__str_len ( field_name_last ) > 0 && std__string__str_len ( value_expr_last ) > 0) {
if (! first_field) {
std__string__StringBuilder__append_c(&sb_decl, ", ");
}
std__string__StringBuilder__append_c(&sb_decl, ".");
std__string__StringBuilder__append(&sb_decl, field_name_last);
std__string__StringBuilder__append_c(&sb_decl, " = ");
std__string__StringBuilder__append(&sb_decl, value_expr_last);
first_field = false;
}
}
}
if (first_field) {
std__string__StringBuilder__append_c(&sb_decl, "}");
}
else {
std__string__StringBuilder__append_c(&sb_decl, "}");
}
}
}
}
else {
const int32_t brace_pos = std__string__find_char_from( trimmed , '{' , (uintptr_t)( 0 ) );
if (brace_pos > 0 && std__string__get_char ( trimmed , std__string__str_len ( trimmed ) - 1 ) == '}') {
const std__string__string prefix = std__string__strip( std__string__substring_se ( trimmed , 0 , brace_pos ) );
const std__string__string inner = std__string__substring_se( trimmed , brace_pos + 1 , (int32_t)( std__string__str_len ( trimmed ) - 1 ) );
if (( std__string__str_len ( type_name ) == 0 || std__string__equals_c ( prefix , type_name.data) )) {
std__string__StringBuilder__append_c(&sb_decl, " = {");
std__string__StringBuilder sb_current2 = std__string__StringBuilder__init( std__string__str_len ( inner ) + 16 );
int32_t depth2 = 0;
bool first_field2 = true;
int32_t i3 = 0;
const int32_t inner_len = (int32_t)( std__string__str_len ( inner ) );
while (1) {
if (i3 >= inner_len) {
break;
}
const char ch2 = std__string__get_char( inner , i3 );
if (ch2 == '(') {
depth2 = depth2 + 1;
std__string__StringBuilder__append_char(&sb_current2, ch2);
}
else if (ch2 == ')') {
if (depth2 > 0) {
depth2 = depth2 - 1;
}
std__string__StringBuilder__append_char(&sb_current2, ch2);
}
else if (ch2 == ',' && depth2 == 0) {
std__string__string part2 = std__string__strip( std__string__StringBuilder__to_string( &sb_current2 ) );
if (std__string__str_len ( part2 ) > 0) {
const int32_t colon_pos2 = std__string__find_char_from( part2 , ':' , (uintptr_t)( 0 ) );
if (colon_pos2 >= 0) {
const std__string__string field_name2 = std__string__strip( std__string__substring_se ( part2 , 0 , colon_pos2 ) );
const std__string__string value_expr2 = std__string__strip( std__string__substr ( part2 , colon_pos2 + 1 , (int32_t)( std__string__str_len ( part2 ) - colon_pos2 - 1 ) ) );
if (std__string__str_len ( field_name2 ) > 0 && std__string__str_len ( value_expr2 ) > 0) {
if (! first_field2) {
std__string__StringBuilder__append_c(&sb_decl, ", ");
}
std__string__StringBuilder__append_c(&sb_decl, ".");
std__string__StringBuilder__append(&sb_decl, field_name2);
std__string__StringBuilder__append_c(&sb_decl, " = ");
std__string__StringBuilder__append(&sb_decl, value_expr2);
first_field2 = false;
}
}
}
std__string__StringBuilder__clear(&sb_current2);
}
else {
std__string__StringBuilder__append_char(&sb_current2, ch2);
}
i3 = i3 + 1;
}
std__string__string part_last2 = std__string__strip( std__string__StringBuilder__to_string( &sb_current2 ) );
std__string__StringBuilder__destroy(&sb_current2);
if (std__string__str_len ( part_last2 ) > 0) {
const int32_t colon_pos_last2 = std__string__find_char_from( part_last2 , ':' , (uintptr_t)( 0 ) );
if (colon_pos_last2 >= 0) {
const std__string__string field_name_last2 = std__string__strip( std__string__substring_se ( part_last2 , 0 , colon_pos_last2 ) );
const std__string__string value_expr_last2 = std__string__strip( std__string__substr ( part_last2 , colon_pos_last2 + 1 , (int32_t)( std__string__str_len ( part_last2 ) - colon_pos_last2 - 1 ) ) );
if (std__string__str_len ( field_name_last2 ) > 0 && std__string__str_len ( value_expr_last2 ) > 0) {
if (! first_field2) {
std__string__StringBuilder__append_c(&sb_decl, ", ");
}
std__string__StringBuilder__append_c(&sb_decl, ".");
std__string__StringBuilder__append(&sb_decl, field_name_last2);
std__string__StringBuilder__append_c(&sb_decl, " = ");
std__string__StringBuilder__append(&sb_decl, value_expr_last2);
first_field2 = false;
}
}
}
if (first_field2) {
std__string__StringBuilder__append_c(&sb_decl, "}");
}
else {
std__string__StringBuilder__append_c(&sb_decl, "}");
}
}
else {
const std__string__string processed_init2 = renderer__process_expression( trimmed );
std__string__StringBuilder__append_c(&sb_decl, " = ");
std__string__StringBuilder__append(&sb_decl, processed_init2);
}
}
else {
const int32_t paren_pos = std__string__find_char_from( trimmed , '(' , (uintptr_t)( 0 ) );
if (paren_pos > 0) {
const std__string__string call_name_raw = std__string__strip( std__string__substring_se ( trimmed , 0 , paren_pos ) );
if (std__maps__StringStringMap__contains( &g_function_prefixes , call_name_raw )) {
const std__string__string full_name = std__maps__StringStringMap__get( &g_function_prefixes , call_name_raw );
const std__string__string rest = std__string__substring_se( trimmed , paren_pos , (int32_t)( std__string__str_len ( trimmed ) ) );
trimmed = std__string__concat ( full_name , rest );
}
}
const std__string__string processed_init = renderer__process_expression( trimmed );
std__string__StringBuilder__append_c(&sb_decl, " = ");
std__string__StringBuilder__append(&sb_decl, processed_init);
}
}
}
else {
std__string__StringBuilder__append_c(&sb_decl, " = {0}");
}
std__string__StringBuilder__append_c(&sb_decl, ";\n");
result = std__string__StringBuilder__to_string( &sb_decl );
std__string__StringBuilder__destroy(&sb_decl);
return result;
}
if (std__string__equals_c ( node_type , "Assignment" )) {
const std__string__string variable = ast->data.assignment.variable;
const std__string__string expression = ast->data.assignment.expression;
gstate__debug_print_raw("\n[DBG-ASSIGN] Assignment node");
gstate__debug_print_raw("\n[DBG-ASSIGN]   raw variable:");
gstate__debug_print_str(variable);
gstate__debug_print_raw("\n[DBG-ASSIGN]   raw expression:");
gstate__debug_print_str(expression);
gstate__debug_print_raw("\n[DBG-CALL] process_expression from Assignment.variable:");
gstate__debug_print_str(variable);
const std__string__string processed_var = renderer__process_expression( variable );
gstate__debug_print_raw("\n[DBG-CALL] process_expression from Assignment.expression:");
gstate__debug_print_str(expression);
const std__string__string processed_expr = renderer__process_expression( expression );
gstate__debug_print_raw("\n[DBG-ASSIGN]   processed variable:");
gstate__debug_print_str(processed_var);
gstate__debug_print_raw("\n[DBG-ASSIGN]   processed expression:");
gstate__debug_print_str(processed_expr);
const std__string__string pv = processed_var;
gstate__debug_print_raw("\n[DBG-ASSIGN]   pv before fix:");
gstate__debug_print_str(pv);
std__string__StringBuilder sb_fixed_var = std__string__StringBuilder__init( std__string__str_len ( pv ) + 16 );
int32_t idx_av = 0;
const int32_t pv_len = (int32_t)( std__string__str_len ( pv ) );
while (1) {
if (idx_av >= pv_len) {
break;
}
const char chx = std__string__get_char( pv , idx_av );
if (chx == '(' && idx_av > 0) {
const char prev_ch = std__string__get_char( pv , idx_av - 1 );
if (( prev_ch >= 'a' && prev_ch <= 'z' ) || ( prev_ch >= 'A' && prev_ch <= 'Z' ) || ( prev_ch >= '0' && prev_ch <= '9' ) || prev_ch == '_') {
int32_t k2 = idx_av + 1;
while (1) {
if (k2 >= pv_len) {
break;
}
const char ws2 = std__string__get_char( pv , k2 );
if (ws2 != ' ' && ws2 != '\t' && ws2 != '\n') {
break;
}
k2 = k2 + 1;
}
if (k2 + 1 < pv_len && std__string__get_char ( pv , k2 ) == '-' && std__string__get_char ( pv , k2 + 1 ) == '>') {
idx_av = k2;
continue;
}
}
}
std__string__StringBuilder__append_char(&sb_fixed_var, chx);
idx_av = idx_av + 1;
}
std__string__string fixed_var = std__string__StringBuilder__to_string( &sb_fixed_var );
std__string__StringBuilder__destroy(&sb_fixed_var);
std__string__string out_lhs = fixed_var;
std__string__string out_rhs = processed_expr;
int32_t ri = 0;
while (1) {
if (ri >= std__string__str_len ( processed_expr )) {
break;
}
const char ws0 = std__string__get_char( processed_expr , ri );
if (ws0 != ' ' && ws0 != '\t' && ws0 != '\n') {
break;
}
ri = ri + 1;
}
if (ri < std__string__str_len ( processed_expr ) && renderer__is_ident_start ( std__string__get_char ( processed_expr , ri ) )) {
const int32_t istart = ri;
int32_t j = ri + 1;
while (1) {
if (j >= std__string__str_len ( processed_expr )) {
break;
}
const char cj = std__string__get_char( processed_expr , j );
if (! ( ( cj >= 'a' && cj <= 'z' ) || ( cj >= 'A' && cj <= 'Z' ) || ( cj >= '0' && cj <= '9' ) || cj == '_' )) {
break;
}
j = j + 1;
}
const std__string__string enum_ident = std__string__substring_se( processed_expr , istart , j );
int32_t k = j;
while (1) {
if (k >= std__string__str_len ( processed_expr )) {
break;
}
const char ws1 = std__string__get_char( processed_expr , k );
if (ws1 != ' ' && ws1 != '\t' && ws1 != '\n') {
break;
}
k = k + 1;
}
if (k < std__string__str_len ( processed_expr ) && std__string__get_char ( processed_expr , k ) == '.') {
k = k + 1;
while (1) {
if (k >= std__string__str_len ( processed_expr )) {
break;
}
const char ws2 = std__string__get_char( processed_expr , k );
if (ws2 != ' ' && ws2 != '\t' && ws2 != '\n') {
break;
}
k = k + 1;
}
if (k < std__string__str_len ( processed_expr ) && renderer__is_ident_start ( std__string__get_char ( processed_expr , k ) )) {
const int32_t mstart = k;
int32_t m = k + 1;
while (1) {
if (m >= std__string__str_len ( processed_expr )) {
break;
}
const char cm = std__string__get_char( processed_expr , m );
if (! ( ( cm >= 'a' && cm <= 'z' ) || ( cm >= 'A' && cm <= 'Z' ) || ( cm >= '0' && cm <= '9' ) || cm == '_' )) {
break;
}
m = m + 1;
}
const std__string__string member = std__string__substring_se( processed_expr , mstart , m );
const std__string__string enum_c_name2 = renderer__canonical_model_c_name( enum_ident );
if (std__string__str_len ( enum_c_name2 ) > 0) {
std__string__string rebuilt = std__string__str( "" );
if (ri > 0) {
rebuilt = std__string__substring_se ( processed_expr , 0 , ri );
}
rebuilt = std__string__concat ( rebuilt , enum_c_name2 );
rebuilt = std__string__concat ( rebuilt , std__string__str ( "_" ) );
rebuilt = std__string__concat ( rebuilt , member );
if (m < std__string__str_len ( processed_expr )) {
const std__string__string suffix = std__string__substring_se( processed_expr , m , (int32_t)( std__string__str_len ( processed_expr ) ) );
rebuilt = std__string__concat ( rebuilt , suffix );
}
out_rhs = rebuilt;
}
}
}
}
if (std__string__has_prefix ( processed_expr , std__string__str ( "->" ) )) {
const int32_t eq_pos = std__string__find_char_from( processed_expr , '=' , (uintptr_t)( 0 ) );
if (eq_pos > 0) {
const std__string__string lhs_suffix = std__string__substring_se( processed_expr , 0 , eq_pos );
const std__string__string rhs_suffix = std__string__substring_se( processed_expr , eq_pos + 1 , (int32_t)( std__string__str_len ( processed_expr ) ) );
out_lhs = std__string__concat ( fixed_var , lhs_suffix );
out_rhs = std__string__strip ( rhs_suffix );
gstate__debug_print_raw("\n[DBG-ASSIGN]   reconstructed LHS (arrow sugar):");
gstate__debug_print_str(out_lhs);
gstate__debug_print_raw("\n[DBG-ASSIGN]   reconstructed RHS (arrow sugar):");
gstate__debug_print_str(out_rhs);
}
}
std__string__StringBuilder sb_assign = std__string__StringBuilder__init( 512 );
std__string__StringBuilder__append(&sb_assign, out_lhs);
const std__string__string op = ast->data.assignment.operator;
if (std__string__str_len ( op ) > 0) {
std__string__StringBuilder__append_char(&sb_assign, ' ');
std__string__StringBuilder__append(&sb_assign, op);
std__string__StringBuilder__append_char(&sb_assign, ' ');
}
else {
std__string__StringBuilder__append_c(&sb_assign, " = ");
}
std__string__StringBuilder__append(&sb_assign, out_rhs);
std__string__StringBuilder__append_c(&sb_assign, ";\n");
result = std__string__StringBuilder__to_string( &sb_assign );
std__string__StringBuilder__destroy(&sb_assign);
return result;
}
if (std__string__equals_c ( node_type , "MemberAccess" )) {
const std__string__string object_name = ast->data.member_access.object_name;
const std__string__string member_name = ast->data.member_access.member_name;
const std__string__string value = ast->data.member_access.value;
gstate__debug_print_raw("\n[DBG-MEM] MemberAccess node");
gstate__debug_print_raw("\n[DBG-MEM]   object_name:");
gstate__debug_print_str(object_name);
gstate__debug_print_raw("\n[DBG-MEM]   member_name:");
gstate__debug_print_str(member_name);
gstate__debug_print_raw("\n[DBG-MEM]   raw value:");
gstate__debug_print_str(value);
std__string__string access_op = std__string__str( "." );
bool is_pointer = false;
const std__string__string trimmed_obj = std__string__strip( object_name );
const int32_t arrow_pos = std__string__find_char_from( trimmed_obj , '-' , (uintptr_t)( 0 ) );
if (arrow_pos >= 0 && std__string__find_char_from ( trimmed_obj , '>' , (uintptr_t)( arrow_pos ) ) >= 0) {
is_pointer = true;
}
else if (std__maps__StringStringMap__contains( &g_var_types , trimmed_obj )) {
const std__string__string raw_type = std__maps__StringStringMap__get( &g_var_types , trimmed_obj );
std__string__string t = std__string__strip( raw_type );
if (std__string__has_prefix ( t , std__string__str ( "mut " ) )) {
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
if (! std__string__equals_c ( t , "string" )) {
if (std__string__has_prefix ( t , std__string__str ( "ref " ) ) || std__string__has_suffix ( t , std__string__str ( "*" ) )) {
is_pointer = true;
}
}
}
if (is_pointer) {
access_op = std__string__str ( "->" );
}
std__string__StringBuilder sb_mem = std__string__StringBuilder__init( 256 );
std__string__StringBuilder__append(&sb_mem, trimmed_obj);
std__string__StringBuilder__append(&sb_mem, access_op);
std__string__StringBuilder__append(&sb_mem, member_name);
const std__string__string member_chain = std__string__StringBuilder__to_string( &sb_mem );
std__string__StringBuilder__destroy(&sb_mem);
const std__string__string processed_chain = renderer__rewrite_ref_member_access( member_chain );
const std__string__string trimmed_value = std__string__strip( value );
if (std__string__str_len ( trimmed_value ) > 0) {
const std__string__string processed_value = renderer__process_expression( trimmed_value );
gstate__debug_print_raw("\n[DEBUG]   processed value:");
gstate__debug_print_str(processed_value);
std__string__StringBuilder sb_result_mem = std__string__StringBuilder__init( 256 );
std__string__StringBuilder__append(&sb_result_mem, processed_chain);
std__string__StringBuilder__append_c(&sb_result_mem, " = ");
std__string__StringBuilder__append(&sb_result_mem, processed_value);
std__string__StringBuilder__append_c(&sb_result_mem, ";\n");
std__string__string result_mem = std__string__StringBuilder__to_string( &sb_result_mem );
std__string__StringBuilder__destroy(&sb_result_mem);
return result_mem;
}
return std__string__concat( processed_chain , std__string__str ( ";\n" ) );
}
if (std__string__equals_c ( node_type , "ArrayAssign" )) {
const std__string__string array_name = ast->data.array_assign.array_name;
const std__string__string index_expr = ast->data.array_assign.index;
const std__string__string index2_expr = ast->data.array_assign.index2;
const std__string__string value_expr = ast->data.array_assign.value;
gstate__debug_print_raw("\n[DBG-ARRAYASSIGN] ArrayAssign node");
gstate__debug_print_raw("\n[DBG-ARRAYASSIGN]   array_name:");
gstate__debug_print_str(array_name);
gstate__debug_print_raw("\n[DBG-ARRAYASSIGN]   index:");
gstate__debug_print_str(index_expr);
gstate__debug_print_raw("\n[DBG-ARRAYASSIGN]   value:");
gstate__debug_print_str(value_expr);
const std__string__string processed_array = renderer__process_expression( array_name );
const std__string__string processed_index = renderer__process_expression( index_expr );
const std__string__string processed_value = renderer__process_expression( value_expr );
std__string__StringBuilder sb_arr = std__string__StringBuilder__init( 1256 );
std__string__StringBuilder__append(&sb_arr, processed_array);
std__string__StringBuilder__append_char(&sb_arr, '[');
std__string__StringBuilder__append(&sb_arr, processed_index);
std__string__StringBuilder__append_char(&sb_arr, ']');
if (std__string__str_len ( index2_expr ) > 0) {
const std__string__string processed_index2 = renderer__process_expression( index2_expr );
std__string__StringBuilder__append_char(&sb_arr, '[');
std__string__StringBuilder__append(&sb_arr, processed_index2);
std__string__StringBuilder__append_char(&sb_arr, ']');
}
std__string__StringBuilder__append_c(&sb_arr, " = ");
std__string__StringBuilder__append(&sb_arr, processed_value);
std__string__StringBuilder__append_c(&sb_arr, ";\n");
return std__string__StringBuilder__to_string( &sb_arr );
}
if (std__string__equals_c ( node_type , "FunctionCall" )) {
const std__string__string func_name_ast = ast->data.func_call.function_name;
std__string__string func_name = func_name_ast;
const int32_t t_pos_chk = std__string__find_substr( func_name , std__string__str ( "__T_" ) );
if (t_pos_chk > 0) {
const std__string__string base_chk = std__string__substring_se( func_name , 0 , t_pos_chk );
const std__string__string type_chk = std__string__substring_se( func_name , t_pos_chk + 4 , (int32_t)( std__string__str_len ( func_name ) ) );
const std__string__string type_arg_chk = std__string__strip( type_chk );
std__string__string target_base = base_chk;
if (std__maps__StringStringMap__contains( &g_function_prefixes , base_chk )) {
target_base = std__maps__StringStringMap__get( &g_function_prefixes , base_chk );
}
bool is_generic_base = std__maps__StringBoolMap__contains( &g_generic_functions , base_chk );
if (! is_generic_base) {
is_generic_base = std__maps__StringBoolMap__contains( &g_generic_functions , target_base );
}
if (is_generic_base) {
const std__string__string san_type_chk = renderer__sanitize_c_identifier( type_arg_chk );
std__string__StringBuilder sb_fix = std__string__StringBuilder__init( std__string__str_len ( target_base ) + std__string__str_len ( san_type_chk ) + 16 );
std__string__StringBuilder__append(&sb_fix, target_base);
std__string__StringBuilder__append_c(&sb_fix, "__T_");
std__string__StringBuilder__append(&sb_fix, san_type_chk);
func_name = std__string__StringBuilder__to_string( &sb_fix );
std__string__StringBuilder__destroy(&sb_fix);
}
}
const bool has_module_sep = std__string__str_contains_c( func_name , "__" );
const bool is_method_call = std__string__find_char_from( func_name , '.' , (uintptr_t)( 0 ) ) >= 0;
const bool is_c_call = ( std__string__str_len ( func_name ) >= 2 && std__string__get_char ( func_name , 0 ) == 'C' && std__string__get_char ( func_name , 1 ) == '.' );
if (! has_module_sep && ! is_method_call && ! is_c_call && ! renderer__is_builtin_function ( func_name )) {
if (! std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
bool is_specialized_generic = false;
const int32_t t_pos = std__string__find_substr( func_name , std__string__str ( "__T_" ) );
if (t_pos > 0) {
const std__string__string base_generic_name = std__string__substring_se( func_name , 0 , t_pos );
if (std__maps__StringBoolMap__contains( &g_generic_functions , base_generic_name )) {
is_specialized_generic = true;
}
}
if (! std__maps__StringStringMap__contains( &g_function_param_types , func_name ) && ! is_specialized_generic) {
const std__string__string base_func = func_name;
bool is_c_like = false;
if (std__string__find_substr ( base_func , std__string__str ( "C." ) ) >= 0) {
is_c_like = true;
}
else if (std__string__find_substr ( base_func , std__string__str ( "C ." ) ) >= 0) {
is_c_like = true;
}
else if (std__string__find_substr ( base_func , std__string__str ( "C__" ) ) >= 0) {
is_c_like = true;
}
if (! is_c_like) {
if (! imports__is_symbol_imported ( base_func )) {
if (! std__maps__StringBoolMap__contains( &g_generic_functions , func_name )) {
std__io__print(std__os__get_short_filename(g_current_source_file));
std__io__print(":");
std__io__print(std__string__i32_to_string(g_current_line));
std__io__print(": error: undefined symbol: ");
std__io__print(base_func);
std__io__println(", perhaps missing 'use' statement?");
exit(1);
}
}
}
}
}
}
const __list_std__string_t* call_args = ast->data.func_call.args;
if (call_args != nil && len_v((*call_args)) > 0) {
std__string__StringBuilder combined_args = std__string__StringBuilder__init( 256 );
int32_t arg_idx = 0;
while (1) {
if (arg_idx >= len_v((*call_args))) {
break;
}
const std__string__string arg = call_args->data[ arg_idx ];
if (arg_idx > 0) {
std__string__StringBuilder__append_c(&combined_args, ",");
}
std__string__StringBuilder__append(&combined_args, arg);
arg_idx++;
}
const std__string__string args_str = std__string__StringBuilder__to_string( &combined_args );
std__string__StringBuilder__destroy(&combined_args);
if (! is_c_call) {
renderer__validate_function_call(func_name, args_str, 0);
}
}
else if (! is_c_call) {
renderer__validate_function_call(func_name, std__string__str(""), 0);
}
if (std__string__equals_c ( func_name , "append" )) {
const __list_std__string_t* args = ast->data.func_call.args;
std__string__string var_name = std__string__str( "" );
std__string__string value = std__string__str( "" );
bool args_extracted = false;
if (args != nil && len_v((*args)) >= 1) {
const std__string__string args_str = std__string__strip( args->data[ 0 ]);
int32_t comma_pos = - 1;
int32_t paren_depth = 0;
int32_t bracket_depth = 0;
int32_t brace_depth = 0;
int32_t i = 0;
while (1) {
if (i >= std__string__str_len ( args_str )) {
break;
}
const char ch = std__string__get_char( args_str , i );
if (ch == '(') {
paren_depth = paren_depth + 1;
}
else if (ch == ')') {
paren_depth = paren_depth - 1;
}
else if (ch == '[') {
bracket_depth = bracket_depth + 1;
}
else if (ch == ']') {
bracket_depth = bracket_depth - 1;
}
else if (ch == '{') {
brace_depth = brace_depth + 1;
}
else if (ch == '}') {
brace_depth = brace_depth - 1;
}
else if (ch == ',' && paren_depth == 0 && bracket_depth == 0 && brace_depth == 0) {
comma_pos = i;
break;
}
i++;
}
if (comma_pos > 0) {
var_name = std__string__strip ( std__string__substring_se ( args_str , 0 , comma_pos ) );
value = std__string__strip ( std__string__substring_se ( args_str , comma_pos + 1 , (int32_t)( std__string__str_len ( args_str ) ) ) );
args_extracted = true;
}
}
if (args_extracted && std__string__str_len ( var_name ) > 0 && std__string__str_len ( value ) > 0) {
const bool contains_in_list_of_types = std__maps__StringStringMap__contains( &g_list_of_types , var_name );
if (contains_in_list_of_types) {
const std__string__string element_type = std__maps__StringStringMap__get( &g_list_of_types , var_name );
gstate__debug_print_raw("\n[APPEND] Found in g_list_of_types: ");
gstate__debug_print_str(element_type);
const std__string__string c_element_type = renderer__map_axe_type_to_c( element_type );
const std__string__string sanitized_element = renderer__sanitize_list_element_name( c_element_type );
const std__string__string processed_value = renderer__process_expression( value );
std__string__StringBuilder sb_append = std__string__StringBuilder__init( 1256 );
std__string__StringBuilder__append_c(&sb_append, "__list_");
std__string__StringBuilder__append(&sb_append, sanitized_element);
std__string__StringBuilder__append_c(&sb_append, "_push(&");
std__string__StringBuilder__append(&sb_append, var_name);
std__string__StringBuilder__append_c(&sb_append, ", ");
std__string__StringBuilder__append(&sb_append, processed_value);
std__string__StringBuilder__append_c(&sb_append, ");\n");
gstate__debug_print_raw("\n[DEBUG] Generated append code for '");
gstate__debug_print_str(var_name);
gstate__debug_print_raw("'");
return std__string__StringBuilder__to_string( &sb_append );
}
else if (std__maps__StringStringMap__contains( &g_var_types , var_name )) {
const std__string__string var_type = std__maps__StringStringMap__get( &g_var_types , var_name );
if (std__string__has_prefix ( var_type , std__string__str ( "list(" ) ) || std__string__has_suffix ( var_type , std__string__str ( "[999]" ) )) {
std__string__string element_type = var_type;
if (std__string__has_prefix ( element_type , std__string__str ( "list(" ) )) {
int32_t paren_pos = 5;
int32_t depth = 1;
while (1) {
if (paren_pos >= std__string__str_len ( element_type )) {
break;
}
const char ch = std__string__get_char( element_type , paren_pos );
if (ch == '(') {
depth++;
}
else if (ch == ')') {
depth--;
if (depth == 0) {
break;
}
}
paren_pos++;
}
element_type = std__string__strip ( std__string__substr ( var_type , 5 , paren_pos - 5 ) );
}
else if (std__string__has_suffix ( element_type , std__string__str ( "[999]" ) )) {
element_type = std__string__strip ( std__string__substring_se ( var_type , 0 , std__string__str_len ( var_type ) - 5 ) );
}
const std__string__string c_element_type = renderer__map_axe_type_to_c( element_type );
const std__string__string sanitized_element = renderer__sanitize_list_element_name( c_element_type );
const std__string__string processed_value = renderer__process_expression( value );
std__string__StringBuilder sb_append2 = std__string__StringBuilder__init( 256 );
std__string__StringBuilder__append_c(&sb_append2, "__list_");
std__string__StringBuilder__append(&sb_append2, sanitized_element);
std__string__StringBuilder__append_c(&sb_append2, "_push(&");
std__string__StringBuilder__append(&sb_append2, var_name);
std__string__StringBuilder__append_c(&sb_append2, ", ");
std__string__StringBuilder__append(&sb_append2, processed_value);
std__string__StringBuilder__append_c(&sb_append2, ");\n");
gstate__debug_print_raw("\n[DEBUG] Generated append code for '");
gstate__debug_print_str(var_name);
gstate__debug_print_raw("'");
return std__string__StringBuilder__to_string( &sb_append2 );
}
}
}
}
std__string__string emitted_name = func_name;
if (std__maps__StringStringMap__contains( &g_function_prefixes , func_name )) {
emitted_name = std__maps__StringStringMap__get( &g_function_prefixes , func_name );
}
std__string__StringBuilder sb_call = std__string__StringBuilder__init( 512 );
std__string__StringBuilder__append(&sb_call, emitted_name);
std__string__StringBuilder__append_char(&sb_call, '(');
const __list_std__string_t* args = ast->data.func_call.args;
if (args != nil) {
int32_t arg_idx = 0;
while (1) {
if (arg_idx >= len_v((*args))) {
break;
}
if (arg_idx > 0) {
std__string__StringBuilder__append_c(&sb_call, ", ");
}
const std__string__string raw_arg = args->data[ arg_idx ];
const std__string__string processed_arg = renderer__process_expression( raw_arg );
const std__string__string rewritten_arg = renderer__rewrite_generic_calls( processed_arg );
std__string__StringBuilder__append(&sb_call, rewritten_arg);
arg_idx++;
}
}
std__string__StringBuilder__append_c(&sb_call, ");\n");
std__string__string final_call = std__string__StringBuilder__to_string( &sb_call );
std__string__StringBuilder__destroy(&sb_call);
if (std__maps__StringBoolMap__contains( &g_generic_functions , emitted_name )) {
final_call = renderer__rewrite_generic_calls ( final_call );
}
return final_call;
}
if (std__string__equals_c ( node_type , "Print" )) {
const __list_std__string_t* messages_ref = ast->data.print.messages;
const __list_bool_t* flags_ref = ast->data.print.is_expressions;
if (messages_ref == nil || flags_ref == nil) {
return result;
}
const __list_std__string_t messages = (*messages_ref);
const __list_bool_t flags = (*flags_ref);
if (len_v(messages) == 0) {
return result;
}
if (len_v(messages) == 1 && len_v(flags) == 1 && ! flags.data[ 0 ]) {
std__string__StringBuilder sb_print = std__string__StringBuilder__init( 256 );
std__string__StringBuilder__append_c(&sb_print, "printf(\"");
std__string__StringBuilder__append(&sb_print, messages.data[0]);
std__string__StringBuilder__append_c(&sb_print, "\");\n");
return std__string__StringBuilder__to_string( &sb_print );
}
std__string__StringBuilder sb_print = std__string__StringBuilder__init( 1024 );
if (len_v(messages) == 1 && len_v(flags) == 1 && ! flags.data[ 0 ]) {
std__string__StringBuilder__append_c(&sb_print, "printf(\"");
std__string__StringBuilder__append(&sb_print, messages.data[0]);
std__string__StringBuilder__append_c(&sb_print, "\");\n");
}
else {
std__string__StringBuilder__append_c(&sb_print, "printf(\"");
}
result = renderer__strip_all_c_prefixes ( result );
result = renderer__rewrite_generic_calls ( result );
if (std__string__str_len ( result ) == 0) {
std__string__StringBuilder__clear(&sb_print);
std__string__StringBuilder__append_c(&sb_print, "printf(\"");
int32_t i = 0;
while (1) {
if (i >= len_v(messages)) {
break;
}
if (flags.data[ i ]) {
std__string__StringBuilder__append_c(&sb_print, "%s");
}
else {
std__string__StringBuilder__append(&sb_print, messages.data[i]);
}
i++;
}
std__string__StringBuilder__append_c(&sb_print, "\"");
i = 0;
while (1) {
if (i >= len_v(messages)) {
break;
}
if (flags.data[ i ]) {
std__string__StringBuilder__append_c(&sb_print, ", ");
const std__string__string processed = renderer__process_expression( messages.data[ i ]);
std__string__StringBuilder__append(&sb_print, processed);
}
i++;
}
std__string__StringBuilder__append_c(&sb_print, ");\n");
result = std__string__StringBuilder__to_string( &sb_print );
}
std__string__StringBuilder__destroy(&sb_print);
return result;
}
if (std__string__equals_c ( node_type , "Loop" )) {
std__string__StringBuilder sb_loop = std__string__StringBuilder__init( 1024 );
std__string__StringBuilder__append_c(&sb_loop, "while (1) {\n");
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i ]) );
std__string__StringBuilder__append(&sb_loop, child_code);
i++;
}
}
std__string__StringBuilder__append_c(&sb_loop, "}\n");
return std__string__StringBuilder__to_string( &sb_loop );
}
if (std__string__equals_c ( node_type , "WhenBranch" )) {
if (g_current_type_mapping != nil) {
const __list_std__string_t* tp_list = ast->data.when_branch.type_params;
const __list_std__string_t* ct_list = ast->data.when_branch.concrete_types;
if (tp_list != nil && ct_list != nil) {
bool all_match = true;
int32_t ci = 0;
while (1) {
if (ci >= len_v((*tp_list))) {
break;
}
const std__string__string tp = tp_list->data[ ci ];
const std__string__string ct_expected = ct_list->data[ ci ];
if (std__maps__StringStringMap__contains( g_current_type_mapping , tp )) {
const std__string__string ct_actual = std__maps__StringStringMap__get( g_current_type_mapping , tp );
if (! std__string__equals_c ( ct_actual , ct_expected.data)) {
all_match = false;
break;
}
}
else {
all_match = false;
break;
}
ci++;
}
if (! all_match) {
return std__string__str( "" );
}
}
}
std__string__StringBuilder sb_when = std__string__StringBuilder__init( 1024 );
if (ast->children!= nil) {
const __list_structs__ASTNode_t* wchildren = ast->children;
int32_t wi = 0;
while (1) {
if (wi >= len_v((*wchildren))) {
break;
}
const std__string__string wchild_code = renderer__generate_c( &(wchildren->data[ wi ]) );
std__string__StringBuilder__append(&sb_when, wchild_code);
wi++;
}
}
return std__string__StringBuilder__to_string( &sb_when );
}
if (std__string__equals_c ( node_type , "Platform" )) {
const std__string__string platform_name = ast->data.platform_node.platform_name;
std__string__StringBuilder sb_plat = std__string__StringBuilder__init( 1024 );
const std__string__string plat_dir = renderer__platform_macro_start( platform_name );
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append(&sb_plat, plat_dir);
}
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i ]) );
std__string__StringBuilder__append(&sb_plat, child_code);
i++;
}
}
if (std__string__str_len ( plat_dir ) > 0) {
std__string__StringBuilder__append_c(&sb_plat, "#endif\n");
}
return std__string__StringBuilder__to_string( &sb_plat );
}
if (std__string__equals_c ( node_type , "For" )) {
const std__string__string init_raw = ast->data.for_loop.initialization;
const std__string__string cond_raw = ast->data.for_loop.condition;
const std__string__string incr_raw = ast->data.for_loop.increment;
std__string__string init = std__string__strip( init_raw );
const std__string__string cond = std__string__strip( cond_raw );
const std__string__string incr = std__string__strip( incr_raw );
std__string__string loop_var_name = std__string__str( "" );
bool loop_var_added = false;
if (std__string__has_prefix ( init , std__string__str ( "mut " ) )) {
init = std__string__strip ( std__string__substr ( init , 4 , std__string__str_len ( init ) - 4 ) );
int32_t k_var = 0;
const int32_t init_len = (int32_t)( std__string__str_len ( init ) );
while (1) {
if (k_var >= init_len) {
break;
}
if (! renderer__is_token_char ( std__string__get_char ( init , k_var ) )) {
break;
}
k_var = k_var + 1;
}
if (k_var > 0) {
loop_var_name = std__string__substring_se ( init , 0 , k_var );
if (! std__maps__StringStringMap__contains( &g_var_types , loop_var_name )) {
std__arena__Arena temp_arena = std__arena__Arena__create( 256 );
std__maps__StringStringMap__set(&g_var_types, &temp_arena, loop_var_name, std__string__str("i32"));
loop_var_added = true;
}
}
}
std__string__StringBuilder sb_header = std__string__StringBuilder__init( 256 );
std__string__StringBuilder__append_c(&sb_header, "int32_t ");
std__string__StringBuilder__append(&sb_header, init);
std__string__StringBuilder__append_c(&sb_header, "; ");
std__string__StringBuilder__append(&sb_header, cond);
std__string__StringBuilder__append_c(&sb_header, "; ");
std__string__StringBuilder__append(&sb_header, incr);
std__string__string header = std__string__StringBuilder__to_string( &sb_header );
std__string__StringBuilder__destroy(&sb_header);
header = std__string__replace_all ( header , std__string__str ( "+ =" ) , std__string__str ( "+=" ) );
header = std__string__replace_all ( header , std__string__str ( "- =" ) , std__string__str ( "-=" ) );
header = std__string__replace_all ( header , std__string__str ( "+  =" ) , std__string__str ( "+=" ) );
header = std__string__replace_all ( header , std__string__str ( "-  =" ) , std__string__str ( "-=" ) );
const std__string__string header_norm = renderer__process_expression( header );
std__string__StringBuilder sb_for = std__string__StringBuilder__init( 1024 );
std__string__StringBuilder__append_c(&sb_for, "for (");
std__string__StringBuilder__append(&sb_for, header_norm);
std__string__StringBuilder__append_c(&sb_for, ") {\n");
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i_for = 0;
while (1) {
if (i_for >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i_for ]) );
std__string__StringBuilder__append(&sb_for, child_code);
i_for = i_for + 1;
}
}
std__string__StringBuilder__append_c(&sb_for, "}\n");
if (loop_var_added) {
std__maps__StringStringMap__pop(&g_var_types, loop_var_name);
}
return std__string__StringBuilder__to_string( &sb_for );
}
if (std__string__equals_c ( node_type , "ParallelFor" )) {
const std__string__string init_raw = ast->data.parallel_for.initialization;
const std__string__string cond_raw = ast->data.parallel_for.condition;
const std__string__string incr_raw = ast->data.parallel_for.increment;
std__string__string init = std__string__strip( init_raw );
const std__string__string cond = std__string__strip( cond_raw );
std__string__string incr = std__string__strip( incr_raw );
if (std__string__has_suffix ( incr , std__string__str ( ";" ) )) {
incr = std__string__strip ( std__string__substring_se ( incr , 0 , (int32_t)( std__string__str_len ( incr ) - 1 ) ) );
}
if (std__string__has_prefix ( init , std__string__str ( "mut " ) )) {
init = std__string__strip ( std__string__substr ( init , 4 , std__string__str_len ( init ) - 4 ) );
}
std__string__string loop_var_name = std__string__str( "" );
bool loop_var_added = false;
const int32_t eq_pos = std__string__find_char_from( init , '=' , (uintptr_t)( 0 ) );
if (eq_pos > 0) {
int32_t v_end = eq_pos - 1;
while (1) {
if (v_end < 0) {
break;
}
const char ch = std__string__get_char( init , v_end );
if (ch != ' ' && ch != '\t') {
break;
}
v_end = v_end - 1;
}
if (v_end >= 0) {
int32_t v_start = v_end;
while (1) {
if (v_start < 0) {
break;
}
const char ch = std__string__get_char( init , v_start );
if (! ( ( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) || ( ch >= '0' && ch <= '9' ) || ch == '_' )) {
v_start = v_start + 1;
break;
}
if (v_start == 0) {
break;
}
v_start = v_start - 1;
}
if (v_end >= v_start) {
loop_var_name = std__string__substring_se ( init , v_start , v_end + 1 );
}
}
}
if (std__string__str_len ( loop_var_name ) > 0) {
if (! std__maps__StringStringMap__contains( &g_var_types , loop_var_name )) {
std__arena__Arena temp_arena = std__arena__Arena__create( 256 );
std__maps__StringStringMap__set(&g_var_types, &temp_arena, loop_var_name, std__string__str("i32"));
loop_var_added = true;
}
}
std__string__StringBuilder sb_pheader = std__string__StringBuilder__init( 256 );
std__string__StringBuilder__append(&sb_pheader, init);
if (std__string__str_len ( cond ) > 0 || std__string__str_len ( incr ) > 0) {
std__string__StringBuilder__append_c(&sb_pheader, "; ");
std__string__StringBuilder__append(&sb_pheader, cond);
std__string__StringBuilder__append_c(&sb_pheader, "; ");
std__string__StringBuilder__append(&sb_pheader, incr);
}
std__string__string header = std__string__StringBuilder__to_string( &sb_pheader );
std__string__StringBuilder__destroy(&sb_pheader);
header = std__string__replace_all ( header , std__string__str ( "+ =" ) , std__string__str ( "+=" ) );
header = std__string__replace_all ( header , std__string__str ( "- =" ) , std__string__str ( "-=" ) );
header = std__string__replace_all ( header , std__string__str ( "+  =" ) , std__string__str ( "+=" ) );
header = std__string__replace_all ( header , std__string__str ( "-  =" ) , std__string__str ( "-=" ) );
const std__string__string header_norm = renderer__process_expression( header );
std__string__StringBuilder sb_pfor = std__string__StringBuilder__init( 1024 );
std__string__StringBuilder__append_c(&sb_pfor, "#pragma omp parallel for");
const __list_std__string_t* reduction_clauses = ast->data.parallel_for.reduction_clauses;
if (reduction_clauses != nil && len_v((*reduction_clauses)) > 0) {
std__string__StringBuilder__append_c(&sb_pfor, " reduction(");
int32_t ri = 0;
while (1) {
if (ri >= len_v((*reduction_clauses))) {
break;
}
if (ri > 0) {
std__string__StringBuilder__append_c(&sb_pfor, ", ");
}
std__string__StringBuilder__append(&sb_pfor, reduction_clauses->data[ri]);
ri = ri + 1;
}
std__string__StringBuilder__append_c(&sb_pfor, ")");
}
std__string__StringBuilder__append_c(&sb_pfor, "\n");
std__string__StringBuilder__append_c(&sb_pfor, "for (");
std__string__StringBuilder__append(&sb_pfor, header_norm);
std__string__StringBuilder__append_c(&sb_pfor, ") {\n");
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i_pfor = 0;
while (1) {
if (i_pfor >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i_pfor ]) );
std__string__StringBuilder__append(&sb_pfor, child_code);
i_pfor = i_pfor + 1;
}
}
std__string__StringBuilder__append_c(&sb_pfor, "}\n");
if (loop_var_added) {
std__maps__StringStringMap__pop(&g_var_types, loop_var_name);
}
return std__string__StringBuilder__to_string( &sb_pfor );
}
if (std__string__equals_c ( node_type , "Parallel" )) {
std__string__StringBuilder sb_par = std__string__StringBuilder__init( 512 );
std__string__StringBuilder__append_c(&sb_par, "#pragma omp parallel\n{\n");
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i_par = 0;
while (1) {
if (i_par >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i_par ]) );
std__string__StringBuilder__append(&sb_par, child_code);
i_par++;
}
}
std__string__StringBuilder__append_c(&sb_par, "}\n");
return std__string__StringBuilder__to_string( &sb_par );
}
if (std__string__equals_c ( node_type , "Single" )) {
std__string__StringBuilder sb_single = std__string__StringBuilder__init( 512 );
std__string__StringBuilder__append_c(&sb_single, "#pragma omp single\n{\n");
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i_single = 0;
while (1) {
if (i_single >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i_single ]) );
std__string__StringBuilder__append(&sb_single, child_code);
i_single = i_single + 1;
}
}
std__string__StringBuilder__append_c(&sb_single, "}\n");
return std__string__StringBuilder__to_string( &sb_single );
}
if (std__string__equals_c ( node_type , "ParallelLocal" )) {
std__string__StringBuilder sb_ploc = std__string__StringBuilder__init( 512 );
const __list_std__string_t* private_vars = ast->data.parallel_local.private_vars;
const __list_std__string_t* private_types = ast->data.parallel_local.private_types;
int32_t vi = 0;
while (1) {
if (vi >= len_v((*private_vars))) {
break;
}
const std__string__string var_name = private_vars->data[ vi ];
const std__string__string type_name = private_types->data[ vi ];
const std__string__string c_type = renderer__map_axe_type_to_c( type_name );
std__string__StringBuilder__append(&sb_ploc, c_type);
std__string__StringBuilder__append_c(&sb_ploc, " ");
std__string__StringBuilder__append(&sb_ploc, var_name);
std__string__StringBuilder__append_c(&sb_ploc, ";\n");
vi = vi + 1;
}
std__string__StringBuilder__append_c(&sb_ploc, "#pragma omp parallel private(");
int32_t pi = 0;
while (1) {
if (pi >= len_v((*private_vars))) {
break;
}
if (pi > 0) {
std__string__StringBuilder__append_c(&sb_ploc, ", ");
}
std__string__StringBuilder__append(&sb_ploc, private_vars->data[pi]);
pi = pi + 1;
}
std__string__StringBuilder__append_c(&sb_ploc, ")\n{\n");
int32_t vj = 0;
while (1) {
if (vj >= len_v((*private_vars))) {
break;
}
const std__string__string pname = private_vars->data[ vj ];
const std__string__string ptype = private_types->data[ vj ];
std__arena__Arena decl_arena = std__arena__Arena__create( 512 );
if (std__string__str_len ( std__string__strip ( ptype ) ) > 0) {
std__maps__StringStringMap__set(&g_var_types, &decl_arena, pname, ptype);
}
else {
std__maps__StringStringMap__set(&g_var_types, &decl_arena, pname, std__string__str("auto"));
}
vj++;
}
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i_ploc = 0;
while (1) {
if (i_ploc >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i_ploc ]) );
std__string__StringBuilder__append(&sb_ploc, child_code);
i_ploc = i_ploc + 1;
}
}
std__string__StringBuilder__append_c(&sb_ploc, "}\n");
return std__string__StringBuilder__to_string( &sb_ploc );
}
if (std__string__equals_c ( node_type , "ForIn" )) {
const std__string__string var_name = ast->data.for_in.var_name;
const std__string__string array_name_raw = ast->data.for_in.array_name;
std__string__string array_name = renderer__process_expression( array_name_raw );
array_name = renderer__rewrite_method_calls ( array_name );
array_name = renderer__rewrite_function_prefixes ( array_name );
std__string__string index_var = std__string__str( "_i_" );
index_var = std__string__concat ( index_var , var_name );
std__string__string accessor = std__string__str( "." );
const std__string__string trimmed_coll = std__string__strip( array_name_raw );
if (std__maps__StringStringMap__contains( &g_var_types , trimmed_coll )) {
const std__string__string coll_type = std__maps__StringStringMap__get( &g_var_types , trimmed_coll );
std__string__string t = std__string__strip( coll_type );
if (std__string__has_prefix ( t , std__string__str ( "mut " ) )) {
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
if (std__string__has_prefix ( t , std__string__str ( "ref " ) ) || std__string__has_suffix ( t , std__string__str ( "*" ) )) {
accessor = std__string__str ( "->" );
}
}
else {
accessor = std__string__str ( "->" );
}
std__string__StringBuilder sb_forin = std__string__StringBuilder__init( 1024 );
std__string__StringBuilder__append_c(&sb_forin, "for (int32_t ");
std__string__StringBuilder__append(&sb_forin, index_var);
std__string__StringBuilder__append_c(&sb_forin, " = 0; ");
std__string__StringBuilder__append(&sb_forin, index_var);
std__string__StringBuilder__append_c(&sb_forin, " < ");
std__string__StringBuilder__append(&sb_forin, array_name);
std__string__StringBuilder__append(&sb_forin, accessor);
std__string__StringBuilder__append_c(&sb_forin, "len; ");
std__string__StringBuilder__append(&sb_forin, index_var);
std__string__StringBuilder__append_c(&sb_forin, "++) {\n");
std__string__StringBuilder__append_c(&sb_forin, "typeof(");
std__string__StringBuilder__append(&sb_forin, array_name);
std__string__StringBuilder__append(&sb_forin, accessor);
std__string__StringBuilder__append_c(&sb_forin, "data[0]) ");
std__string__StringBuilder__append(&sb_forin, var_name);
std__string__StringBuilder__append_c(&sb_forin, " = ");
std__string__StringBuilder__append(&sb_forin, array_name);
std__string__StringBuilder__append(&sb_forin, accessor);
std__string__StringBuilder__append_c(&sb_forin, "data[");
std__string__StringBuilder__append(&sb_forin, index_var);
std__string__StringBuilder__append_c(&sb_forin, "];\n");
std__maps__StringStringMap__set(&g_var_types, &arena, var_name, std__string__str("auto"));
if (ast->children!= nil) {
const __list_structs__ASTNode_t* children = ast->children;
int32_t i_for_in = 0;
while (1) {
if (i_for_in >= len_v((*children))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(children->data[ i_for_in ]) );
std__string__StringBuilder__append(&sb_forin, child_code);
i_for_in = i_for_in + 1;
}
}
std__string__StringBuilder__append_c(&sb_forin, "}\n");
return std__string__StringBuilder__to_string( &sb_forin );
}
if (std__string__equals_c ( node_type , "If" )) {
structs__ASTNode* current_if = ast;
bool is_first = true;
std__string__StringBuilder sb_if = std__string__StringBuilder__init( 2048 );
while (1) {
if (current_if == nil) {
break;
}
const std__string__string condition = current_if->data.if_node.condition;
std__string__string trimmed_cond = std__string__strip( condition );
trimmed_cond = renderer__process_expression ( trimmed_cond );
if (is_first) {
std__string__StringBuilder__append_c(&sb_if, "if (");
}
else {
std__string__StringBuilder__append_c(&sb_if, "else if (");
}
std__string__StringBuilder__append(&sb_if, trimmed_cond);
std__string__StringBuilder__append_c(&sb_if, ") {\n");
is_first = false;
int32_t else_marker_idx = - 1;
if (current_if->children!= nil) {
const __list_structs__ASTNode_t* children = current_if->children;
int32_t i = 0;
while (1) {
if (i >= len_v((*children))) {
break;
}
const structs__ASTNode* child_ref = &(children->data[ i ]);
if (std__string__equals_c ( child_ref->node_type, "ElseMarker" )) {
else_marker_idx = i;
break;
}
const std__string__string child_code = renderer__generate_c( child_ref );
std__string__StringBuilder__append(&sb_if, child_code);
i++;
}
}
std__string__StringBuilder__append_c(&sb_if, "}\n");
if (current_if->children!= nil && else_marker_idx >= 0) {
const __list_structs__ASTNode_t* children = current_if->children;
const int32_t child_count = len_v((*children));
if (else_marker_idx + 1 < child_count) {
const structs__ASTNode* first_else_child = &(children->data[ else_marker_idx + 1 ]);
if (std__string__equals_c ( first_else_child->node_type, "If" ) && else_marker_idx + 2 == child_count) {
current_if = first_else_child;
continue;
}
else {
std__string__StringBuilder__append_c(&sb_if, "else {\n");
int32_t j = else_marker_idx + 1;
while (1) {
if (j >= child_count) {
break;
}
const structs__ASTNode* else_child = &(children->data[ j ]);
const std__string__string else_code = renderer__generate_c( else_child );
std__string__StringBuilder__append(&sb_if, else_code);
j = j + 1;
}
std__string__StringBuilder__append_c(&sb_if, "}\n");
break;
}
}
else {
break;
}
}
else {
break;
}
}
return std__string__StringBuilder__to_string( &sb_if );
}
if (std__string__equals_c ( node_type , "Unsafe" )) {
const __list_structs__ASTNode_t* body = ast->data.unsafe_node.body;
std__string__StringBuilder sb_unsafe = std__string__StringBuilder__init( 1024 );
if (body != nil) {
int32_t i_unsafe = 0;
while (1) {
if (i_unsafe >= len_v((*body))) {
break;
}
const std__string__string child_code = renderer__generate_c( &(body->data[ i_unsafe ]) );
gstate__debug_print_raw("\n[DBG-UNSAFE] Processing unsafe block child (index ");
gstate__debug_print_str(renderer__int_to_ascii(i_unsafe));
gstate__debug_print_raw(")\n");
gstate__debug_print_str(child_code);
std__string__StringBuilder__append(&sb_unsafe, child_code);
i_unsafe++;
}
}
std__string__string unsafe_result = std__string__StringBuilder__to_string( &sb_unsafe );
std__string__StringBuilder__destroy(&sb_unsafe);
gstate__debug_print_raw("\n[DBG-UNSAFE] Before method call transformation:");
gstate__debug_print_str(unsafe_result);
unsafe_result = renderer__rewrite_method_calls ( unsafe_result );
gstate__debug_print_raw("\n[DBG-UNSAFE] After method call transformation:");
gstate__debug_print_str(unsafe_result);
unsafe_result = renderer__rewrite_function_prefixes ( unsafe_result );
gstate__debug_print_raw("\n[DBG-UNSAFE] After function prefix transformation:");
gstate__debug_print_str(unsafe_result);
return unsafe_result;
}
if (std__string__equals_c ( node_type , "RawC" )) {
const std__string__string raw_code = ast->data.raw_c.code;
gstate__debug_print_raw("\n[DBG-RAWC] RawC node emitting:");
gstate__debug_print_str(raw_code);
std__string__StringBuilder sb_rawc = std__string__StringBuilder__init( 256 );
std__string__StringBuilder__append(&sb_rawc, raw_code);
std__string__StringBuilder__append_char(&sb_rawc, '\n');
return std__string__StringBuilder__to_string( &sb_rawc );
}
if (std__string__equals_c ( node_type , "Model" )) {
const std__string__string model_name = ast->data.model_node.name;
const bool is_public = ast->data.model_node.is_public;
const __list_std__string_t* field_names = ast->data.model_node.field_names;
const __list_std__string_t* field_types = ast->data.model_node.field_types;
const __list_std__string_t* union_parents = ast->data.model_node.union_member_parents;
const __list_std__string_t* union_names = ast->data.model_node.union_member_names;
const __list_std__string_t* union_types = ast->data.model_node.union_member_types;
if (std__maps__StringBoolMap__contains( &g_generated_typedefs , model_name )) {
return std__string__str( "" );
}
std__arena__Arena typedef_arena = std__arena__Arena__create( 1024 );
std__maps__StringBoolMap__set(&g_generated_typedefs, &typedef_arena, model_name, true);
std__string__StringBuilder sb = std__string__StringBuilder__init( 4096 );
std__string__StringBuilder__append_c(&sb, "typedef struct ");
std__string__StringBuilder__append(&sb, model_name);
std__string__StringBuilder__append_c(&sb, " {\n");
if (field_names != nil && field_types != nil) {
int32_t field_idx = 0;
while (1) {
if (field_idx >= len_v((*field_names))) {
break;
}
const std__string__string field_name = field_names->data[ field_idx ];
const std__string__string field_type = field_types->data[ field_idx ];
if (! std__string__equals_c ( field_type , "union" ) && ! std__string__equals_c ( field_type , "model" )) {
renderer__validate_type_imported(field_type);
}
std__string__string field_key = model_name;
field_key = std__string__concat ( field_key , std__string__str ( "." ) );
field_key = std__string__concat ( field_key , field_name );
std__maps__StringStringMap__set(&g_field_types, &arena, field_key, field_type);
if (std__string__has_prefix ( field_type , std__string__str ( "ref " ) )) {
std__maps__StringBoolMap__set(&g_pointer_fields, &arena, field_key, true);
}
else if (std__string__has_suffix ( field_type , std__string__str ( "*" ) )) {
std__maps__StringBoolMap__set(&g_pointer_fields, &arena, field_key, true);
}
else if (std__string__has_suffix ( field_type , std__string__str ( "[999]" ) )) {
std__maps__StringBoolMap__set(&g_pointer_fields, &arena, field_key, true);
}
else if (std__string__compare ( field_type , model_name ) == 0) {
std__maps__StringBoolMap__set(&g_pointer_fields, &arena, field_key, true);
}
if (std__string__str_len ( field_type ) == 5 && std__string__equals_c ( field_type , "union" ) && union_parents != nil && union_names != nil && union_types != nil) {
std__string__StringBuilder__append_c(&sb, "    union {\n");
const __list_std__string_t up = (*union_parents);
const __list_std__string_t un = (*union_names);
const __list_std__string_t ut = (*union_types);
int32_t uidx = 0;
while (1) {
if (uidx >= len_v(up) || uidx >= len_v(un) || uidx >= len_v(ut)) {
break;
}
const std__string__string parent_name = up.data[ uidx ];
if (std__string__compare ( parent_name , field_name ) == 0) {
const std__string__string member_name = un.data[ uidx ];
const std__string__string member_type_raw = ut.data[ uidx ];
if (std__string__str_len ( member_type_raw ) == 5 && std__string__equals_c ( member_type_raw , "model" )) {
std__string__StringBuilder__append_c(&sb, "        struct {\n");
int32_t nidx = 0;
while (1) {
if (nidx >= len_v(up) || nidx >= len_v(un) || nidx >= len_v(ut)) {
break;
}
const std__string__string nested_parent = up.data[ nidx ];
if (std__string__compare ( nested_parent , member_name ) == 0) {
const std__string__string nested_name = un.data[ nidx ];
const std__string__string nested_type_raw = ut.data[ nidx ];
std__string__string mapped_nested_type = renderer__map_axe_type_to_c( nested_type_raw );
std__string__string nested_array_part = std__string__str( "" );
if (std__string__has_suffix ( nested_type_raw , std__string__str ( "[999]" ) )) {
if (! std__string__has_suffix ( mapped_nested_type , std__string__str ( "*" ) )) {
mapped_nested_type = std__string__concat ( mapped_nested_type , std__string__str ( "*" ) );
}
}
const int32_t n_bracket_pos = std__string__find_char_from( mapped_nested_type , '[' , (uintptr_t)( 0 ) );
if (n_bracket_pos >= 0) {
nested_array_part = std__string__substring_se ( mapped_nested_type , n_bracket_pos , (int32_t)( std__string__str_len ( mapped_nested_type ) ) );
mapped_nested_type = std__string__substring_se ( mapped_nested_type , 0 , n_bracket_pos );
}
if (std__string__has_prefix ( mapped_nested_type , std__string__str ( "ref " ) )) {
mapped_nested_type = std__string__concat ( std__string__strip ( std__string__substring_se ( mapped_nested_type , 4 , (int32_t)( std__string__str_len ( mapped_nested_type ) ) ) ) , std__string__str ( "*" ) );
}
const std__string__string c_nested_model_name = renderer__canonical_model_c_name( mapped_nested_type );
if (std__string__str_len ( c_nested_model_name ) > 0) {
if (std__maps__StringBoolMap__contains( &g_enum_names , c_nested_model_name )) {
mapped_nested_type = c_nested_model_name;
}
else {
mapped_nested_type = std__string__concat ( std__string__str ( "struct " ) , c_nested_model_name );
}
}
std__string__StringBuilder__append_c(&sb, "            ");
std__string__StringBuilder__append(&sb, mapped_nested_type);
std__string__StringBuilder__append_char(&sb, ' ');
std__string__StringBuilder__append(&sb, nested_name);
std__string__StringBuilder__append(&sb, nested_array_part);
std__string__StringBuilder__append_c(&sb, ";\n");
}
nidx = nidx + 1;
}
std__string__StringBuilder__append_c(&sb, "        } ");
std__string__StringBuilder__append(&sb, member_name);
std__string__StringBuilder__append_c(&sb, ";\n");
}
else {
std__string__string mapped_member_type = renderer__map_axe_type_to_c( member_type_raw );
std__string__string member_array_part = std__string__str( "" );
if (std__string__has_suffix ( member_type_raw , std__string__str ( "[999]" ) )) {
if (! std__string__has_suffix ( mapped_member_type , std__string__str ( "*" ) )) {
mapped_member_type = std__string__concat ( mapped_member_type , std__string__str ( "*" ) );
}
}
const int32_t m_bracket_pos = std__string__find_char_from( mapped_member_type , '[' , (uintptr_t)( 0 ) );
if (m_bracket_pos >= 0) {
member_array_part = std__string__substring_se ( mapped_member_type , m_bracket_pos , (int32_t)( std__string__str_len ( mapped_member_type ) ) );
mapped_member_type = std__string__substring_se ( mapped_member_type , 0 , m_bracket_pos );
}
if (std__string__has_prefix ( mapped_member_type , std__string__str ( "ref " ) )) {
mapped_member_type = std__string__concat ( std__string__strip ( std__string__substring_se ( mapped_member_type , 4 , (int32_t)( std__string__str_len ( mapped_member_type ) ) ) ) , std__string__str ( "*" ) );
}
const std__string__string c_member_model_name = renderer__canonical_model_c_name( mapped_member_type );
if (std__string__str_len ( c_member_model_name ) > 0) {
if (std__maps__StringBoolMap__contains( &g_enum_names , c_member_model_name )) {
mapped_member_type = c_member_model_name;
}
else {
mapped_member_type = std__string__concat ( std__string__str ( "struct " ) , c_member_model_name );
}
}
std__string__StringBuilder__append_c(&sb, "        ");
std__string__StringBuilder__append(&sb, mapped_member_type);
std__string__StringBuilder__append_char(&sb, ' ');
std__string__StringBuilder__append(&sb, member_name);
std__string__StringBuilder__append(&sb, member_array_part);
std__string__StringBuilder__append_c(&sb, ";\n");
}
}
uidx = uidx + 1;
}
std__string__StringBuilder__append_c(&sb, "    } ");
std__string__StringBuilder__append(&sb, field_name);
std__string__StringBuilder__append_c(&sb, ";\n");
}
else {
std__string__string mapped_type = renderer__map_axe_type_to_c( field_type );
std__string__string array_part = std__string__str( "" );
if (std__string__has_suffix ( field_type , std__string__str ( "[999]" ) )) {
if (! std__string__has_suffix ( mapped_type , std__string__str ( "*" ) )) {
mapped_type = std__string__concat ( mapped_type , std__string__str ( "*" ) );
}
}
const int32_t bracket_pos = std__string__find_char_from( mapped_type , '[' , (uintptr_t)( 0 ) );
if (bracket_pos >= 0) {
array_part = std__string__substring_se ( mapped_type , bracket_pos , (int32_t)( std__string__str_len ( mapped_type ) ) );
mapped_type = std__string__substring_se ( mapped_type , 0 , bracket_pos );
}
if (std__string__has_prefix ( mapped_type , std__string__str ( "ref " ) )) {
mapped_type = std__string__concat ( std__string__strip ( std__string__substring_se ( mapped_type , 4 , (int32_t)( std__string__str_len ( mapped_type ) ) ) ) , std__string__str ( "*" ) );
}
const std__string__string c_model_name = renderer__canonical_model_c_name( mapped_type );
if (std__string__str_len ( c_model_name ) > 0) {
if (std__maps__StringBoolMap__contains( &g_enum_names , c_model_name )) {
mapped_type = c_model_name;
}
else {
mapped_type = std__string__concat ( std__string__str ( "struct " ) , c_model_name );
}
}
std__string__StringBuilder__append_c(&sb, "    ");
std__string__StringBuilder__append(&sb, mapped_type);
std__string__StringBuilder__append_char(&sb, ' ');
std__string__StringBuilder__append(&sb, field_name);
std__string__StringBuilder__append(&sb, array_part);
std__string__StringBuilder__append_c(&sb, ";\n");
}
field_idx++;
}
}
std__string__StringBuilder__append_c(&sb, "} ");
std__string__StringBuilder__append(&sb, model_name);
std__string__StringBuilder__append_c(&sb, ";\n\n");
result = std__string__StringBuilder__to_string( &sb );
std__string__StringBuilder__destroy(&sb);
return result;
}
if (std__string__equals_c ( node_type , "Enum" )) {
const std__string__string enum_name = ast->data.enum_node.name;
const __list_std__string_t* enum_values = ast->data.enum_node.values;
if (std__maps__StringBoolMap__contains( &g_generated_typedefs , enum_name )) {
return std__string__str( "" );
}
std__arena__Arena enum_arena = std__arena__Arena__create( 1024 );
std__maps__StringBoolMap__set(&g_generated_typedefs, &enum_arena, enum_name, true);
std__maps__StringBoolMap__set(&g_enum_names, &enum_arena, enum_name, true);
std__string__string base_enum_name = enum_name;
int32_t last_sep_enum = - 1;
int32_t ei = 0;
const int32_t elen = std__string__str_len( enum_name );
while (1) {
if (ei + 1 >= elen) {
break;
}
const char ec1 = std__string__get_char( enum_name , ei );
const char ec2 = std__string__get_char( enum_name , ei + 1 );
if (ec1 == '_' && ec2 == '_') {
last_sep_enum = ei;
}
ei = ei + 1;
}
if (last_sep_enum >= 0 && last_sep_enum + 2 < elen) {
base_enum_name = std__string__substring_se ( enum_name , last_sep_enum + 2 , elen );
}
if (std__string__str_len ( base_enum_name ) > 0) {
std__maps__StringStringMap__set(&g_model_names, &enum_arena, base_enum_name, enum_name);
std__maps__StringBoolMap__set(&g_enum_names, &enum_arena, base_enum_name, true);
}
std__string__StringBuilder sb_enum = std__string__StringBuilder__init( 1024 );
std__string__StringBuilder__append_c(&sb_enum, "typedef enum {\n");
if (enum_values != nil) {
int32_t value_idx = 0;
const int32_t num_values = len_v((*enum_values));
while (1) {
if (value_idx >= num_values) {
break;
}
const std__string__string enum_value = enum_values->data[ value_idx ];
std__string__StringBuilder__append_c(&sb_enum, "    ");
std__string__StringBuilder__append(&sb_enum, enum_name);
std__string__StringBuilder__append_char(&sb_enum, '_');
std__string__StringBuilder__append(&sb_enum, enum_value);
if (value_idx < num_values - 1) {
std__string__StringBuilder__append_char(&sb_enum, ',');
}
std__string__StringBuilder__append_char(&sb_enum, '\n');
value_idx++;
}
}
std__string__StringBuilder__append_c(&sb_enum, "} ");
std__string__StringBuilder__append(&sb_enum, enum_name);
std__string__StringBuilder__append_c(&sb_enum, ";\n\n");
result = std__string__StringBuilder__to_string( &sb_enum );
std__string__StringBuilder__destroy(&sb_enum);
return result;
}
if (std__string__equals_c ( node_type , "Extern" )) {
const std__string__string func_name = ast->data.extern_node.function_name;
std__arena__Arena extern_arena = std__arena__Arena__create( 2560 );
std__maps__StringBoolMap__set(&g_generated_functions, &extern_arena, func_name, true);
return std__string__str( "" );
}
if (std__string__equals_c ( node_type , "Opaque" )) {
const __list_std__string_t* onames = ast->data.opaque_node.type_names;
if (onames != nil) {
std__arena__Arena arena_opaque = std__arena__Arena__create( 2560 );
std__string__StringBuilder sb_opaque = std__string__StringBuilder__init( 512 );
int32_t oi = 0;
while (1) {
if (oi >= len_v((*onames))) {
break;
}
const std__string__string type_name = onames->data[ oi ];
std__maps__StringBoolMap__set(&g_opaque_types, &arena_opaque, type_name, true);
std__string__StringBuilder__append_c(&sb_opaque, "typedef struct ");
std__string__StringBuilder__append(&sb_opaque, type_name);
std__string__StringBuilder__append_char(&sb_opaque, ' ');
std__string__StringBuilder__append(&sb_opaque, type_name);
std__string__StringBuilder__append_c(&sb_opaque, ";\n");
oi++;
}
return std__string__StringBuilder__to_string( &sb_opaque );
}
return result;
}
if (std__string__equals_c ( node_type , "Foreign" )) {
const __list_std__string_t* fnames = ast->data.foreign_node.type_names;
if (fnames != nil) {
std__arena__Arena arena_foreign = std__arena__Arena__create( 2560 );
int32_t fi = 0;
while (1) {
if (fi >= len_v((*fnames))) {
break;
}
const std__string__string type_name = fnames->data[ fi ];
std__maps__StringBoolMap__set(&g_foreign_types, &arena_foreign, type_name, true);
fi++;
}
}
return std__string__str( "" );
}
if (std__string__equals_c ( node_type , "IncDec" )) {
const std__string__string variable = ast->data.inc_dec.variable;
const bool is_increment = ast->data.inc_dec.is_increment;
std__string__StringBuilder sb_incdec = std__string__StringBuilder__init( 64 );
std__string__StringBuilder__append(&sb_incdec, variable);
if (is_increment) {
std__string__StringBuilder__append_c(&sb_incdec, "++");
}
else {
std__string__StringBuilder__append_c(&sb_incdec, "--");
}
std__string__StringBuilder__append_c(&sb_incdec, ";\n");
return std__string__StringBuilder__to_string( &sb_incdec );
}
if (std__string__equals_c ( node_type , "MemberIncDec" )) {
const std__string__string object_name = ast->data.member_inc_dec.object_name;
const std__string__string member_name = ast->data.member_inc_dec.member_name;
const bool is_increment = ast->data.member_inc_dec.is_increment;
std__string__string access_op = std__string__str( "." );
const std__string__string trimmed_obj = std__string__strip( object_name );
if (std__maps__StringStringMap__contains( &g_var_types , trimmed_obj )) {
const std__string__string raw_type = std__maps__StringStringMap__get( &g_var_types , trimmed_obj );
std__string__string t = std__string__strip( raw_type );
if (std__string__has_prefix ( t , std__string__str ( "mut " ) )) {
t = std__string__strip ( std__string__substr ( t , 4 , std__string__str_len ( t ) - 4 ) );
}
if (std__string__has_prefix ( t , std__string__str ( "ref " ) ) || std__string__has_suffix ( t , std__string__str ( "*" ) )) {
access_op = std__string__str ( "->" );
}
}
std__string__StringBuilder sb_minc = std__string__StringBuilder__init( 128 );
std__string__StringBuilder__append(&sb_minc, trimmed_obj);
std__string__StringBuilder__append(&sb_minc, access_op);
std__string__StringBuilder__append(&sb_minc, member_name);
if (is_increment) {
std__string__StringBuilder__append_c(&sb_minc, "++");
}
else {
std__string__StringBuilder__append_c(&sb_minc, "--");
}
std__string__StringBuilder__append_c(&sb_minc, ";\n");
return std__string__StringBuilder__to_string( &sb_minc );
}
if (std__string__equals_c ( node_type , "PtrMemberIncDec" )) {
const std__string__string ptr_object = ast->data.member_inc_dec.object_name;
const std__string__string ptr_member = ast->data.member_inc_dec.member_name;
const bool ptr_is_inc = ast->data.member_inc_dec.is_increment;
std__string__StringBuilder sb_pinc = std__string__StringBuilder__init( 128 );
std__string__StringBuilder__append(&sb_pinc, std__string__strip(ptr_object));
std__string__StringBuilder__append_c(&sb_pinc, "->");
std__string__StringBuilder__append(&sb_pinc, ptr_member);
if (ptr_is_inc) {
std__string__StringBuilder__append_c(&sb_pinc, "++");
}
else {
std__string__StringBuilder__append_c(&sb_pinc, "--");
}
std__string__StringBuilder__append_c(&sb_pinc, ";\n");
return std__string__StringBuilder__to_string( &sb_pinc );
}
if (std__string__equals_c ( node_type , "PtrMemberAccess" )) {
const std__string__string ptr_obj = ast->data.member_access.object_name;
const std__string__string ptr_memb = ast->data.member_access.member_name;
const std__string__string ptr_val = ast->data.member_access.value;
std__string__StringBuilder sb_ptr = std__string__StringBuilder__init( 512 );
std__string__StringBuilder__append(&sb_ptr, std__string__strip(ptr_obj));
std__string__StringBuilder__append_c(&sb_ptr, "->");
std__string__StringBuilder__append(&sb_ptr, ptr_memb);
if (std__string__str_len ( std__string__strip ( ptr_val ) ) > 0) {
std__string__StringBuilder__append_c(&sb_ptr, " = ");
const std__string__string processed_ptr_val = renderer__process_expression( ptr_val );
std__string__StringBuilder__append(&sb_ptr, processed_ptr_val);
}
std__string__StringBuilder__append_c(&sb_ptr, ";\n");
return std__string__StringBuilder__to_string( &sb_ptr );
}
return result;
}

#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef __APPLE__
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef __APPLE__
#endif
int main(int argc, char** argv) {
__axe_argc = argc;
__axe_argv = argv;
    signal(SIGSEGV, axe_segv_handler);
    signal(SIGABRT, axe_segv_handler);
const std__arena__Arena arena = std__arena__Arena__create( 1024 );
const std__lists__StringList* args = std__os__get_cmdline_args( &arena );
if (args->len< 2) {
std__io__println("Usage: axe <input.axe> [options]");
std__io__println("");
std__io__println("Options:");
std__io__println("  -o <name>         Specify output binary name");
std__io__println("  -c                Compile only; produce object file (.obj or .o)");
std__io__println("  -e                Keep the emitted file");
std__io__println("  -r                Run the built executable after compilation");
std__io__println("  -tokens           Print lexer tokens and exit");
std__io__println("  -ast              Print the parsed AST and exit");
std__io__println("  -dll              Build shared instead of standalone executable");
std__io__println("  --release         Build in release mode");
std__io__println("  --bootstrap       Emit without line directives");
std__io__println("  -l, --loud        Loud debug output");
std__io__println("  -q, --quiet       Suppress all output");
std__io__println("  -I<path>          Pass a C include directory");
std__io__println("  -L<path>          Add C library search path");
std__io__println("  -l<name>          Link against C library (e.g. -lm, -lSDL2)");
std__io__println("  --syntax-check    Check syntax only (no code generation)");
std__io__println("  --target <triple> Cross-compile for target (e.g. x86_64-w64-mingw32)");
std__io__println("  --sysroot <path>  Specify sysroot for cross-compilation");
std__io__println("  --version, -v     Show axe version and exit");
std__io__println("");
std__io__println("Note: Cross-compiling requires the target platform's SDK and sysroot.\n");
std__os__quit(0);
}
std__string__string source_file = std__lists__StringList__get( args , 1 );
std__string__string output_filename = std__string__str( "" );
const std__lists__StringList* inc_paths = std__lists__StringList__create( &arena , 16 );
const std__lists__StringList* lib_paths = std__lists__StringList__create( &arena , 16 );
const std__lists__StringList* link_libs = std__lists__StringList__create( &arena , 16 );
gstate__set_include_paths(inc_paths);
gstate__set_library_paths(lib_paths);
gstate__set_link_libraries(link_libs);
int32_t i = 2;
while (1) {
if (i >= args->len) {
break;
}
const std__string__string arg = std__lists__StringList__get( args , i );
if (std__string__equals_c ( arg , "-o" ) && i + 1 < args->len) {
output_filename = std__lists__StringList__get( args , i + 1 );
i += 2;
continue;
}
if (std__string__equals_c ( arg , "-c" )) {
gstate__set_compile_only(true);
i++;
continue;
}
if (std__string__equals_c ( arg , "--target" ) && i + 1 < args->len) {
const std__string__string target = std__lists__StringList__get( args , i + 1 );
gstate__set_target_triple(target);
i += 2;
continue;
}
if (std__string__equals_c ( arg , "--bootstrap" )) {
gstate__set_bootstrap_mode(true);
i++;
continue;
}
if (std__string__equals_c ( arg , "--sysroot" ) && i + 1 < args->len) {
const std__string__string sysroot = std__lists__StringList__get( args , i + 1 );
gstate__set_sysroot_path(sysroot);
i += 2;
continue;
}
if (std__string__has_prefix ( arg , std__string__str ( "-I" ) ) && std__string__str_len ( arg ) > 2) {
const std__string__string inc_path = std__string__substring_se( arg , 2 , (int32_t)( std__string__str_len ( arg ) ) );
std__lists__StringList__push(inc_paths, &arena, inc_path);
}
if (std__string__has_prefix ( arg , std__string__str ( "-L" ) ) && std__string__str_len ( arg ) > 2) {
const std__string__string lib_path = std__string__substring_se( arg , 2 , (int32_t)( std__string__str_len ( arg ) ) );
std__lists__StringList__push(lib_paths, &arena, lib_path);
}
if (std__string__has_prefix ( arg , std__string__str ( "-l" ) ) && std__string__str_len ( arg ) > 2) {
const std__string__string lib_name = std__string__substring_se( arg , 2 , (int32_t)( std__string__str_len ( arg ) ) );
std__lists__StringList__push(link_libs, &arena, lib_name);
}
i++;
}
if (std__algorithms__strlst_contains_c ( (*args) , "-v" ) || std__algorithms__strlst_contains_c ( (*args) , "--version" )) {
std__io__println("Axe v0.0.9");
std__io__println("Specification and compiler by Navid Momtahen ((C) GPL-3.0, 2025)\n");
std__os__quit(0);
}
if (std__algorithms__strlst_contains_c ( (*args) , "-l" ) || std__algorithms__strlst_contains_c ( (*args) , "--loud" )) {
gstate__set_loud_logger(true);
}
if (std__algorithms__strlst_contains_c ( (*args) , "-q" ) || std__algorithms__strlst_contains_c ( (*args) , "--quiet" )) {
gstate__set_quiet_mode(true);
}
if (std__algorithms__strlst_contains_c ( (*args) , "--release" )) {
gstate__set_release_build(true);
}
if (std__algorithms__strlst_contains_c ( (*args) , "-e" )) {
gstate__set_keep_emitted_file(true);
}
if (std__algorithms__strlst_contains_c ( (*args) , "-r" )) {
gstate__set_run_after_compile(true);
}
if (std__algorithms__strlst_contains_c ( (*args) , "-tokens" )) {
gstate__set_print_tokens(true);
}
if (std__algorithms__strlst_contains_c ( (*args) , "-ast" )) {
gstate__set_print_ast(true);
}
if (std__algorithms__strlst_contains_c ( (*args) , "-dll" )) {
gstate__set_build_shared_lib(true);
}
if (std__algorithms__strlst_contains_c ( (*args) , "--syntax-check" )) {
gstate__set_syntax_check_only(true);
gstate__set_quiet_mode(true);
}
if (! std__string__has_suffix ( source_file , std__string__str ( ".axe" ) ) && ! std__string__has_suffix ( source_file , std__string__str ( ".axec" ) )) {
source_file = std__string__concat ( source_file , std__string__str ( ".axe" ) );
}
const bool is_axec = std__string__has_suffix( source_file , std__string__str ( ".axec" ) );
if (! std__os__is_file ( source_file )) {
std__io__println(({ size_t _axe_interp_len = 0 + sizeof("Error: File '") - 1 + 32 + sizeof("' not found") - 1; char* _axe_interp = (char*)malloc(_axe_interp_len + 1); char* _axe_interp_p = _axe_interp; memcpy(_axe_interp_p, "Error: File '", sizeof("Error: File '") - 1); _axe_interp_p += sizeof("Error: File '") - 1; { struct std__string__string _s = source_file; memcpy(_axe_interp_p, _s.data, _s.len); _axe_interp_p += _s.len; } memcpy(_axe_interp_p, "' not found", sizeof("' not found") - 1); _axe_interp_p += sizeof("' not found") - 1; *_axe_interp_p = '\0'; _axe_interp; }));
std__os__quit(1);
}
const bool ok = builds__compile_file( source_file , is_axec , output_filename );
std__arena__Arena__destroy(&arena);
if (! ok) {
std__os__quit(1);
}
std__os__quit(0);
return 0;
}

#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifdef __APPLE__
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifdef __APPLE__
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifdef __APPLE__
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifdef __APPLE__
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifdef _WIN32
#endif
#ifndef _WIN32
#endif
#ifndef _WIN32
typedef struct dirent dirent;
#endif
#ifdef _WIN32
typedef struct _finddata_t _finddata_t;
#endif
#ifdef __APPLE__
#endif
