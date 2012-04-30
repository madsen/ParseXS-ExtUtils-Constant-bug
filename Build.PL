#! /usr/bin/perl
#---------------------------------------------------------------------

use strict;
use warnings;
use 5.010;

use Module::Build;

if (eval {require ExtUtils::Constant; 1}) {
  say 'Regenerating constants...';

  my @names = (
    map { /LIBMTP_(?:DEBUG|STORAGE)_/ ? $_ : { name => $_, macro => '1' } }
        ((map { "LIBMTP_DEBUG_$_" } qw(NONE PTP PLST USB DATA ALL)),
         (map { "LIBMTP_FILETYPE_$_" }
    qw(FOLDER WAV MP3 WMA OGG AUDIBLE MP4 UNDEF_AUDIO WMV AVI MPEG
       ASF QT UNDEF_VIDEO JPEG JFIF TIFF BMP GIF PICT PNG VCALENDAR1
       VCALENDAR2 VCARD2 VCARD3 WINDOWSIMAGEFORMAT WINEXEC TEXT HTML
       FIRMWARE AAC MEDIACARD FLAC MP2 M4A DOC XML XLS PPT MHT JP2 JPX
       ALBUM PLAYLIST UNKNOWN)))
  );

  ExtUtils::Constant::WriteConstants(
     NAME         => 'Foo',
     NAMES        => \@names,
     DEFAULT_TYPE => 'IV',
     C_FILE       => 'lib/const-c.inc',
     XS_FILE      => 'lib/const-xs.inc',
  );
} # end if ExtUtils::Constant available

my $build = Module::Build->new(
  dist_name            => 'Foo',
  dist_version_from    => 'lib/Foo.pm',
  dist_abstract        => 'Bug test',
  dist_author          => 'Christopher J. Madsen <perl@cjmweb.net>',
  module_name          => 'Foo', # for packlist
);

$build->create_build_script;
