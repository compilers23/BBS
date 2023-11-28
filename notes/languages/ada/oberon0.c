/* voc 2.1.0 [2022/03/15] for gcc LP64 on gentoo xtpam */

#define SHORTINT INT8
#define INTEGER  INT16
#define LONGINT  INT32
#define SET      UINT32

#include "SYSTEM.h"

typedef
	struct oberon0_car {
		INT16 a, l;
	} oberon0_car;


static oberon0_car oberon0_c0;
static INT16 oberon0_a0, oberon0_l0;

export ADDRESS *oberon0_car__typ;



__TDESC(oberon0_car, 1, 0) = {__TDFLDS("car", 4), {-8}};

export int main(int argc, char **argv)
{
	__INIT(argc, argv);
	__REGMAIN("oberon0", 0);
	__INITYP(oberon0_car, oberon0_car, 0);
/* BEGIN */
	oberon0_a0 = 3;
	oberon0_l0 = 2;
	oberon0_c0.a = oberon0_l0;
	oberon0_c0.l = oberon0_a0;
	__FINI;
}
