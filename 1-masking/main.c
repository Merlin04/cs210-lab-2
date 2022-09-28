#include <stdio.h>
#include <stdlib.h>
#include "../libcompact.h"

I32 genmask(I f,I l){U32 r=UINT32_MAX;r>>=31-l+f;r<<=f;R r;}

typedef struct {I f;I l;} args1;
I32 w1(args1 a){R genmask(a.f,a.l);}
Tfl(1,w1,args1,Pb,2,{
	{4,20},
	{0,31}
})

I main(){Tr(t1)}
