#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include "foo.h"

#include "const-c.inc"

MODULE = Foo  PACKAGE = Foo  PREFIX = LIBMTP_

PROTOTYPES: DISABLE

INCLUDE: const-xs.inc
