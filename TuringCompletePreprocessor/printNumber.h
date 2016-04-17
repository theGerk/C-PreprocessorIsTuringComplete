std::cout <<
#if defined three
#if defined two
#if defined one
#if defined zero
15
#else
14
#endif
#else
#if defined zero
13
#else
12
#endif
#endif
#else
#if defined one
#if defined zero
11
#else
10
#endif
#else
#if defined zero
9
#else
8
#endif
#endif
#endif
#else
#if defined two
#if defined one
#if defined zero
7
#else
6
#endif
#else
#if defined zero
5
#else
4
#endif
#endif
#else
#if defined one
#if defined zero
3
#else
2
#endif
#else
#if defined zero
1
#else
0
#endif
#endif
#endif
#endif
<< std::endl;