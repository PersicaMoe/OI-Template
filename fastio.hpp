#include <iostream>

namespace io
{
const int SIZE = (1 << 21) + 1;
char ibuf[SIZE], *iS, *iT, obuf[SIZE], *oS = obuf, *oT = oS + SIZE - 1, c, qu[55];
int qr;
#define gc() (iS == iT ? (iT = (iS = ibuf) + fread(ibuf, 1, SIZE, stdin), (iS == iT ? EOF : *iS++)) : *iS++)
inline void flush() { fwrite(obuf, 1, oS - obuf, stdout); oS = obuf; }
inline void putc(char x) { *oS++ = x; if (oS == oT) flush(); }
template <class I> inline void read(I &x) { for (c = gc(); c < '0' || c > '9'; c = gc()) ; for (x = 0; c <= '9' && c >= '0'; c = gc()) x = x * 10 + (c & 15); }
template <class I> inline void print(I &x) { if (!x) putc('0'); while (x) qu[++qr] = x % 10 + '0', x /= 10; while (qr) putc(qu[qr--]); }
} // namespace io
using io::read;
using io::print;
using io::putc;
