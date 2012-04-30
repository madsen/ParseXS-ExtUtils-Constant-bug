#! /usr/bin/perl

use Test::More 0.88;            # done_testing

use strict;
use warnings;

use Foo ();

my %test = (
  LIBMTP_DEBUG_NONE => 0x00,
  LIBMTP_DEBUG_PTP  => 0x01,
  LIBMTP_DEBUG_PLST => 0x02,
  LIBMTP_DEBUG_USB  => 0x04,
  LIBMTP_DEBUG_DATA => 0x08,
  LIBMTP_DEBUG_ALL  => 0xFF,
  LIBMTP_FILETYPE_FOLDER             =>  0,
  LIBMTP_FILETYPE_WAV                =>  1,
  LIBMTP_FILETYPE_MP3                =>  2,
  LIBMTP_FILETYPE_WMA                =>  3,
  LIBMTP_FILETYPE_OGG                =>  4,
  LIBMTP_FILETYPE_AUDIBLE            =>  5,
  LIBMTP_FILETYPE_MP4                =>  6,
  LIBMTP_FILETYPE_UNDEF_AUDIO        =>  7,
  LIBMTP_FILETYPE_WMV                =>  8,
  LIBMTP_FILETYPE_AVI                =>  9,
  LIBMTP_FILETYPE_MPEG               => 10,
  LIBMTP_FILETYPE_ASF                => 11,
  LIBMTP_FILETYPE_QT                 => 12,
  LIBMTP_FILETYPE_UNDEF_VIDEO        => 13,
  LIBMTP_FILETYPE_JPEG               => 14,
  LIBMTP_FILETYPE_JFIF               => 15,
  LIBMTP_FILETYPE_TIFF               => 16,
  LIBMTP_FILETYPE_BMP                => 17,
  LIBMTP_FILETYPE_GIF                => 18,
  LIBMTP_FILETYPE_PICT               => 19,
  LIBMTP_FILETYPE_PNG                => 20,
  LIBMTP_FILETYPE_VCALENDAR1         => 21,
  LIBMTP_FILETYPE_VCALENDAR2         => 22,
  LIBMTP_FILETYPE_VCARD2             => 23,
  LIBMTP_FILETYPE_VCARD3             => 24,
  LIBMTP_FILETYPE_WINDOWSIMAGEFORMAT => 25,
  LIBMTP_FILETYPE_WINEXEC            => 26,
  LIBMTP_FILETYPE_TEXT               => 27,
  LIBMTP_FILETYPE_HTML               => 28,
  LIBMTP_FILETYPE_FIRMWARE           => 29,
  LIBMTP_FILETYPE_AAC                => 30,
  LIBMTP_FILETYPE_MEDIACARD          => 31,
  LIBMTP_FILETYPE_FLAC               => 32,
  LIBMTP_FILETYPE_MP2                => 33,
  LIBMTP_FILETYPE_M4A                => 34,
  LIBMTP_FILETYPE_DOC                => 35,
  LIBMTP_FILETYPE_XML                => 36,
  LIBMTP_FILETYPE_XLS                => 37,
  LIBMTP_FILETYPE_PPT                => 38,
  LIBMTP_FILETYPE_MHT                => 39,
  LIBMTP_FILETYPE_JP2                => 40,
  LIBMTP_FILETYPE_JPX                => 41,
  LIBMTP_FILETYPE_ALBUM              => 42,
  LIBMTP_FILETYPE_PLAYLIST           => 43,
  LIBMTP_FILETYPE_UNKNOWN            => 44,
);

plan tests => scalar keys %test;

for my $name (sort keys %test) {
  is(Foo::constant($name), $test{$name}, $name);
} # end for each $name

done_testing;
