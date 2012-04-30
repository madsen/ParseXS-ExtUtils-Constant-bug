#---------------------------------------------------------------------
package Foo;

use 5.008;
use strict;
use warnings;

our $VERSION = '0.01';

use XSLoader ();
XSLoader::load('Foo', $VERSION);

#=====================================================================
# Package Return Value:

1;

__END__
