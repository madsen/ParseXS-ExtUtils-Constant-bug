#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_16 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBMTP_DEBUG_ALL LIBMTP_DEBUG_PTP LIBMTP_DEBUG_USB */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'L':
    if (memEQ(name, "LIBMTP_DEBUG_ALL", 16)) {
    /*                             ^        */
#ifdef LIBMTP_DEBUG_ALL
      *iv_return = LIBMTP_DEBUG_ALL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBMTP_DEBUG_USB", 16)) {
    /*                             ^        */
#ifdef LIBMTP_DEBUG_USB
      *iv_return = LIBMTP_DEBUG_USB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBMTP_DEBUG_PTP", 16)) {
    /*                             ^        */
#ifdef LIBMTP_DEBUG_PTP
      *iv_return = LIBMTP_DEBUG_PTP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_17 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBMTP_DEBUG_DATA LIBMTP_DEBUG_NONE LIBMTP_DEBUG_PLST */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'N':
    if (memEQ(name, "LIBMTP_DEBUG_NONE", 17)) {
    /*                              ^        */
#ifdef LIBMTP_DEBUG_NONE
      *iv_return = LIBMTP_DEBUG_NONE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "LIBMTP_DEBUG_PLST", 17)) {
    /*                              ^        */
#ifdef LIBMTP_DEBUG_PLST
      *iv_return = LIBMTP_DEBUG_PLST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "LIBMTP_DEBUG_DATA", 17)) {
    /*                              ^        */
#ifdef LIBMTP_DEBUG_DATA
      *iv_return = LIBMTP_DEBUG_DATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_19 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBMTP_FILETYPE_AAC LIBMTP_FILETYPE_ASF LIBMTP_FILETYPE_AVI
     LIBMTP_FILETYPE_BMP LIBMTP_FILETYPE_DOC LIBMTP_FILETYPE_GIF
     LIBMTP_FILETYPE_JP2 LIBMTP_FILETYPE_JPX LIBMTP_FILETYPE_M4A
     LIBMTP_FILETYPE_MHT LIBMTP_FILETYPE_MP2 LIBMTP_FILETYPE_MP3
     LIBMTP_FILETYPE_MP4 LIBMTP_FILETYPE_OGG LIBMTP_FILETYPE_PNG
     LIBMTP_FILETYPE_PPT LIBMTP_FILETYPE_WAV LIBMTP_FILETYPE_WMA
     LIBMTP_FILETYPE_WMV LIBMTP_FILETYPE_XLS LIBMTP_FILETYPE_XML */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case '2':
    if (memEQ(name, "LIBMTP_FILETYPE_JP", 18)) {
    /*                                 2      */
      *iv_return = LIBMTP_FILETYPE_JP2;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "LIBMTP_FILETYPE_MP", 18)) {
    /*                                 2      */
      *iv_return = LIBMTP_FILETYPE_MP2;
      return PERL_constant_ISIV;
    }
    break;
  case '3':
    if (memEQ(name, "LIBMTP_FILETYPE_MP", 18)) {
    /*                                 3      */
      *iv_return = LIBMTP_FILETYPE_MP3;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "LIBMTP_FILETYPE_MP", 18)) {
    /*                                 4      */
      *iv_return = LIBMTP_FILETYPE_MP4;
      return PERL_constant_ISIV;
    }
    break;
  case 'A':
    if (memEQ(name, "LIBMTP_FILETYPE_M4", 18)) {
    /*                                 A      */
      *iv_return = LIBMTP_FILETYPE_M4A;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "LIBMTP_FILETYPE_WM", 18)) {
    /*                                 A      */
      *iv_return = LIBMTP_FILETYPE_WMA;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "LIBMTP_FILETYPE_AA", 18)) {
    /*                                 C      */
      *iv_return = LIBMTP_FILETYPE_AAC;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "LIBMTP_FILETYPE_DO", 18)) {
    /*                                 C      */
      *iv_return = LIBMTP_FILETYPE_DOC;
      return PERL_constant_ISIV;
    }
    break;
  case 'F':
    if (memEQ(name, "LIBMTP_FILETYPE_AS", 18)) {
    /*                                 F      */
      *iv_return = LIBMTP_FILETYPE_ASF;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "LIBMTP_FILETYPE_GI", 18)) {
    /*                                 F      */
      *iv_return = LIBMTP_FILETYPE_GIF;
      return PERL_constant_ISIV;
    }
    break;
  case 'G':
    if (memEQ(name, "LIBMTP_FILETYPE_OG", 18)) {
    /*                                 G      */
      *iv_return = LIBMTP_FILETYPE_OGG;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "LIBMTP_FILETYPE_PN", 18)) {
    /*                                 G      */
      *iv_return = LIBMTP_FILETYPE_PNG;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "LIBMTP_FILETYPE_AV", 18)) {
    /*                                 I      */
      *iv_return = LIBMTP_FILETYPE_AVI;
      return PERL_constant_ISIV;
    }
    break;
  case 'L':
    if (memEQ(name, "LIBMTP_FILETYPE_XM", 18)) {
    /*                                 L      */
      *iv_return = LIBMTP_FILETYPE_XML;
      return PERL_constant_ISIV;
    }
    break;
  case 'P':
    if (memEQ(name, "LIBMTP_FILETYPE_BM", 18)) {
    /*                                 P      */
      *iv_return = LIBMTP_FILETYPE_BMP;
      return PERL_constant_ISIV;
    }
    break;
  case 'S':
    if (memEQ(name, "LIBMTP_FILETYPE_XL", 18)) {
    /*                                 S      */
      *iv_return = LIBMTP_FILETYPE_XLS;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "LIBMTP_FILETYPE_MH", 18)) {
    /*                                 T      */
      *iv_return = LIBMTP_FILETYPE_MHT;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "LIBMTP_FILETYPE_PP", 18)) {
    /*                                 T      */
      *iv_return = LIBMTP_FILETYPE_PPT;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "LIBMTP_FILETYPE_WA", 18)) {
    /*                                 V      */
      *iv_return = LIBMTP_FILETYPE_WAV;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "LIBMTP_FILETYPE_WM", 18)) {
    /*                                 V      */
      *iv_return = LIBMTP_FILETYPE_WMV;
      return PERL_constant_ISIV;
    }
    break;
  case 'X':
    if (memEQ(name, "LIBMTP_FILETYPE_JP", 18)) {
    /*                                 X      */
      *iv_return = LIBMTP_FILETYPE_JPX;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_20 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBMTP_FILETYPE_FLAC LIBMTP_FILETYPE_HTML LIBMTP_FILETYPE_JFIF
     LIBMTP_FILETYPE_JPEG LIBMTP_FILETYPE_MPEG LIBMTP_FILETYPE_PICT
     LIBMTP_FILETYPE_TEXT LIBMTP_FILETYPE_TIFF */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case 'A':
    if (memEQ(name, "LIBMTP_FILETYPE_FLAC", 20)) {
    /*                                 ^        */
      *iv_return = LIBMTP_FILETYPE_FLAC;
      return PERL_constant_ISIV;
    }
    break;
  case 'C':
    if (memEQ(name, "LIBMTP_FILETYPE_PICT", 20)) {
    /*                                 ^        */
      *iv_return = LIBMTP_FILETYPE_PICT;
      return PERL_constant_ISIV;
    }
    break;
  case 'E':
    if (memEQ(name, "LIBMTP_FILETYPE_JPEG", 20)) {
    /*                                 ^        */
      *iv_return = LIBMTP_FILETYPE_JPEG;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "LIBMTP_FILETYPE_MPEG", 20)) {
    /*                                 ^        */
      *iv_return = LIBMTP_FILETYPE_MPEG;
      return PERL_constant_ISIV;
    }
    break;
  case 'F':
    if (memEQ(name, "LIBMTP_FILETYPE_TIFF", 20)) {
    /*                                 ^        */
      *iv_return = LIBMTP_FILETYPE_TIFF;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "LIBMTP_FILETYPE_JFIF", 20)) {
    /*                                 ^        */
      *iv_return = LIBMTP_FILETYPE_JFIF;
      return PERL_constant_ISIV;
    }
    break;
  case 'M':
    if (memEQ(name, "LIBMTP_FILETYPE_HTML", 20)) {
    /*                                 ^        */
      *iv_return = LIBMTP_FILETYPE_HTML;
      return PERL_constant_ISIV;
    }
    break;
  case 'X':
    if (memEQ(name, "LIBMTP_FILETYPE_TEXT", 20)) {
    /*                                 ^        */
      *iv_return = LIBMTP_FILETYPE_TEXT;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_22 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBMTP_FILETYPE_FOLDER LIBMTP_FILETYPE_VCARD2 LIBMTP_FILETYPE_VCARD3 */
  /* Offset 21 gives the best switch position.  */
  switch (name[21]) {
  case '2':
    if (memEQ(name, "LIBMTP_FILETYPE_VCARD", 21)) {
    /*                                    2      */
      *iv_return = LIBMTP_FILETYPE_VCARD2;
      return PERL_constant_ISIV;
    }
    break;
  case '3':
    if (memEQ(name, "LIBMTP_FILETYPE_VCARD", 21)) {
    /*                                    3      */
      *iv_return = LIBMTP_FILETYPE_VCARD3;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "LIBMTP_FILETYPE_FOLDE", 21)) {
    /*                                    R      */
      *iv_return = LIBMTP_FILETYPE_FOLDER;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_23 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     LIBMTP_FILETYPE_AUDIBLE LIBMTP_FILETYPE_UNKNOWN LIBMTP_FILETYPE_WINEXEC */
  /* Offset 19 gives the best switch position.  */
  switch (name[19]) {
  case 'E':
    if (memEQ(name, "LIBMTP_FILETYPE_WINEXEC", 23)) {
    /*                                  ^          */
      *iv_return = LIBMTP_FILETYPE_WINEXEC;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "LIBMTP_FILETYPE_AUDIBLE", 23)) {
    /*                                  ^          */
      *iv_return = LIBMTP_FILETYPE_AUDIBLE;
      return PERL_constant_ISIV;
    }
    break;
  case 'N':
    if (memEQ(name, "LIBMTP_FILETYPE_UNKNOWN", 23)) {
    /*                                  ^          */
      *iv_return = LIBMTP_FILETYPE_UNKNOWN;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl5.14.2 -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(LIBMTP_DEBUG_ALL LIBMTP_DEBUG_DATA LIBMTP_DEBUG_NONE
	       LIBMTP_DEBUG_PLST LIBMTP_DEBUG_PTP LIBMTP_DEBUG_USB),
            {name=>"LIBMTP_FILETYPE_AAC", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_ALBUM", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_ASF", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_AUDIBLE", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_AVI", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_BMP", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_DOC", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_FIRMWARE", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_FLAC", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_FOLDER", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_GIF", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_HTML", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_JFIF", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_JP2", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_JPEG", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_JPX", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_M4A", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_MEDIACARD", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_MHT", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_MP2", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_MP3", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_MP4", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_MPEG", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_OGG", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_PICT", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_PLAYLIST", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_PNG", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_PPT", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_QT", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_TEXT", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_TIFF", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_UNDEF_AUDIO", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_UNDEF_VIDEO", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_UNKNOWN", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_VCALENDAR1", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_VCALENDAR2", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_VCARD2", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_VCARD3", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_WAV", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_WINDOWSIMAGEFORMAT", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_WINEXEC", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_WMA", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_WMV", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_XLS", type=>"IV", macro=>"1"},
            {name=>"LIBMTP_FILETYPE_XML", type=>"IV", macro=>"1"});

print constant_types(), "\n"; # macro defs
foreach (C_constant ("Foo", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("Foo", $types);
__END__
   */

  switch (len) {
  case 16:
    return constant_16 (aTHX_ name, iv_return);
    break;
  case 17:
    return constant_17 (aTHX_ name, iv_return);
    break;
  case 18:
    if (memEQ(name, "LIBMTP_FILETYPE_QT", 18)) {
      *iv_return = LIBMTP_FILETYPE_QT;
      return PERL_constant_ISIV;
    }
    break;
  case 19:
    return constant_19 (aTHX_ name, iv_return);
    break;
  case 20:
    return constant_20 (aTHX_ name, iv_return);
    break;
  case 21:
    if (memEQ(name, "LIBMTP_FILETYPE_ALBUM", 21)) {
      *iv_return = LIBMTP_FILETYPE_ALBUM;
      return PERL_constant_ISIV;
    }
    break;
  case 22:
    return constant_22 (aTHX_ name, iv_return);
    break;
  case 23:
    return constant_23 (aTHX_ name, iv_return);
    break;
  case 24:
    /* Names all of length 24.  */
    /* LIBMTP_FILETYPE_FIRMWARE LIBMTP_FILETYPE_PLAYLIST */
    /* Offset 22 gives the best switch position.  */
    switch (name[22]) {
    case 'R':
      if (memEQ(name, "LIBMTP_FILETYPE_FIRMWARE", 24)) {
      /*                                     ^        */
        *iv_return = LIBMTP_FILETYPE_FIRMWARE;
        return PERL_constant_ISIV;
      }
      break;
    case 'S':
      if (memEQ(name, "LIBMTP_FILETYPE_PLAYLIST", 24)) {
      /*                                     ^        */
        *iv_return = LIBMTP_FILETYPE_PLAYLIST;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 25:
    if (memEQ(name, "LIBMTP_FILETYPE_MEDIACARD", 25)) {
      *iv_return = LIBMTP_FILETYPE_MEDIACARD;
      return PERL_constant_ISIV;
    }
    break;
  case 26:
    /* Names all of length 26.  */
    /* LIBMTP_FILETYPE_VCALENDAR1 LIBMTP_FILETYPE_VCALENDAR2 */
    /* Offset 25 gives the best switch position.  */
    switch (name[25]) {
    case '1':
      if (memEQ(name, "LIBMTP_FILETYPE_VCALENDAR", 25)) {
      /*                                        1      */
        *iv_return = LIBMTP_FILETYPE_VCALENDAR1;
        return PERL_constant_ISIV;
      }
      break;
    case '2':
      if (memEQ(name, "LIBMTP_FILETYPE_VCALENDAR", 25)) {
      /*                                        2      */
        *iv_return = LIBMTP_FILETYPE_VCALENDAR2;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 27:
    /* Names all of length 27.  */
    /* LIBMTP_FILETYPE_UNDEF_AUDIO LIBMTP_FILETYPE_UNDEF_VIDEO */
    /* Offset 25 gives the best switch position.  */
    switch (name[25]) {
    case 'E':
      if (memEQ(name, "LIBMTP_FILETYPE_UNDEF_VIDEO", 27)) {
      /*                                        ^        */
        *iv_return = LIBMTP_FILETYPE_UNDEF_VIDEO;
        return PERL_constant_ISIV;
      }
      break;
    case 'I':
      if (memEQ(name, "LIBMTP_FILETYPE_UNDEF_AUDIO", 27)) {
      /*                                        ^        */
        *iv_return = LIBMTP_FILETYPE_UNDEF_AUDIO;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 34:
    if (memEQ(name, "LIBMTP_FILETYPE_WINDOWSIMAGEFORMAT", 34)) {
      *iv_return = LIBMTP_FILETYPE_WINDOWSIMAGEFORMAT;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

