typedef void  (*GCallback)              (void);
#define G_CALLBACK(f)      ((GCallback) (f))

typedef void (*Arity2) (void* arg1, void* arg2);

static inline GCallback castArity2(Arity2 cb) {
    return G_CALLBACK(cb);
}
