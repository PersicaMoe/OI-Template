#include <iostream>

/*
namespace io
{
const int SIZE = (1 << 21) + 1;
char ibuf[SIZE], *iS, *iT, obuf[SIZE], *oS = obuf, *oT = oS + SIZE - 1, c, qu[55];
int qr;
#define gc() (iS == iT ? (iT = (iS = ibuf) + fread(ibuf, 1, SIZE, stdin), (iS == iT ? EOF : *iS++)) : *iS++)
inline void flush() { fwrite(obuf, 1, oS - obuf, stdout); oS = obuf; }
inline void putc(char x) { *oS++ = x; if (oS == oT) flush(); }
char getch() { for (c = gc(); !isalpha(c); c = gc()) ; return c; }
template <class I> inline void getint(I &x) { for (c = gc(); !isdigit(c); c = gc()) ; for (x = 0; isdigit(c); c = gc()) x = x * 10 + (c & 15); }
template <class I> inline void putint(I &x) { if (!x) putc('0'); while (x) qu[++qr] = (x % 10) | 48, x /= 10; while (qr) putc(qu[qr--]); }
} // namespace io
*/

namespace io
{
const int SIZE = (1 << 21) + 1;
char ibuf[SIZE], *iS, *iT, obuf[SIZE], *oS = obuf, *oT = oS + SIZE - 1, c, qu[55];
int qr;
#define gc() (iS == iT ? (iT = (iS = ibuf) + fread(ibuf, 1, SIZE, stdin), (iS == iT ? EOF : *iS++)) : *iS++)
inline void flush()
{
    fwrite(obuf, 1, oS - obuf, stdout);
    oS = obuf;
}
inline void putc(char x)
{
    *oS++ = x;
    if (oS == oT)
        flush();
}
char getch()
{
    for (c = gc(); !isalpha(c); c = gc())
        ;
    return c;
}
template <class I>
inline void getint(I &x)
{
    for (c = gc(); !isdigit(c); c = gc())
        ;
    for (x = 0; isdigit(c); c = gc())
        x = x * 10 + (c & 15);
}
template <class I>
inline void putint(I &x)
{
    if (!x)
        putc('0');
    while (x)
        qu[++qr] = (x % 10) | 48, x /= 10;
    while (qr)
        putc(qu[qr--]);
}
} // namespace io
using io::getint;
using io::putint;
