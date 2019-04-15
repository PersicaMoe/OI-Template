#include <bits/stdc++.h>
using namespace std;

namespace xq
{

struct FastReader
{
    int Int() { int ch, nag = 0, ret = 0; while (!isdigit(ch = getchar())) nag = ch == '-'; ret = ch - '0'; while (isdigit(ch = getchar())) ret = ret * 10 + ch - '0'; return nag ? -ret : ret; }
    long long Long() { long long ch, nag = 0, ret = 0; while (!isdigit(ch = getchar())) nag = ch == '-'; ret = ch - '0'; while (isdigit(ch = getchar())) ret = ret * 10 + ch - '0'; return nag ? -ret : ret; }
    long long LongMod(long long P) { long long ch, nag = 0, ret = 0; while (!isdigit(ch = getchar())) nag = ch == '-'; ret = (ch - '0') % P; while (isdigit(ch = getchar())) ret = (ret * 10 + ch - '0') % P; return nag ? -ret : ret; }
    double Double() { long long a = 0, b = 0, c = 1, ch, nag = 0; while (!isdigit(ch = getchar())) nag = ch == '-'; a = ch - '0'; while (isdigit(ch = getchar())) a = a * 10 + ch - '0'; while (isdigit(ch = getchar())) b = b * 10 + ch - '0', c *= 10; return nag ? -a - 1. * b / c : a + 1. * b / c; }
    int operator()() { return Int(); }
};

struct FastWriter
{
    FastWriter &Int(long long x) { static char buf[25]; int top = 0; if (x < 0) { putchar('-'); x = -x; } do { buf[++top] = x % 10 + '0'; } while (x /= 10); while (top) putchar(buf[top--]); return *this; }
    FastWriter &Long(long long x) { return Int(x); }
    FastWriter &Endl() { putchar('\n'); return *this; }
    FastWriter &operator()() { return Endl(); }
    FastWriter &operator()(int x) { return Int(x); }
    FastWriter &operator()(long long x) { return Int(x); }
};

} // namespace xq
